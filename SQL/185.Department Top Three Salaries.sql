# Write your MySQL query statement below
select d.name as Department,
    e.name as Employee,
    e.salary as salary
    from(
        select *,
            DENSE_RANK() over(
                partition by departmentId
                order by salary desc
            ) as rnk
        from Employee
    ) e
    join department d
    on e.departmentId=d.id
    where e.rnk<=3;
