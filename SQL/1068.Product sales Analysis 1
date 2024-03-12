Sales:
+-------------+-------+
| Column Name | Type  |
+-------------+-------+
| sale_id     | int   |
| product_id  | int   |
| year        | int   |
| quantity    | int   |
| price       | int   |
+-------------+-------+
(sale_id, year) is the primary key
product_id is a foreign key (reference column) to Product table.

Product:
+--------------+---------+
| Column Name  | Type    |
+--------------+---------+
| product_id   | int     |
| product_name | varchar |
+--------------+---------+
product_id is the primary key

Write a solution to report the product_name, year, and price for each sale_id in the Sales table.

select p.product_name,s.year,s.price
from sales s join product p
on p.product_id=s.product_id;
