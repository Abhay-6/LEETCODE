# Write your MySQL query statement below
select Department,Employee,Salary
from(
SELECT d.name as Department,
    e.name as Employee,
    e.salary as Salary,
    MAX(e.salary) OVER(
        partition by e.departmentId
    ) as max_salary
    from Employee e
    join Department d
    on e.departmentId=d.id
) as t
where Salary=max_salary;
