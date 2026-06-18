CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.
SELECT MAX(salary) as getNthHighestSalary
from(
    select *,
    DENSE_RANK() OVER(ORDER BY salary desc) as rnk
    from Employee
) as temp
where rnk=N
  );
END
