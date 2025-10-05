
select c.name as Customers
from customers c
LEFT JOIN orders o
on o.customerId=c.id
where o.id is null;
