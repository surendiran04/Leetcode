Write a solution to select the product id, year, quantity, and price for the first year of every product sold.
Input: 
Sales table:
+---------+------------+------+----------+-------+
| sale_id | product_id | year | quantity | price |
+---------+------------+------+----------+-------+ 
| 1       | 100        | 2008 | 10       | 5000  |
| 2       | 100        | 2009 | 12       | 5000  |
| 7       | 200        | 2011 | 15       | 9000  |
+---------+------------+------+----------+-------+
Product table:
+------------+--------------+
| product_id | product_name |
+------------+--------------+
| 100        | Nokia        |
| 200        | Apple        |
| 300        | Samsung      |
+------------+--------------+
Output: 
+------------+------------+----------+-------+
| product_id | first_year | quantity | price |
+------------+------------+----------+-------+ 
| 100        | 2008       | 10       | 5000  |
| 200        | 2011       | 15       | 9000  |
+------------+------------+----------+-------+
  
select product_id,year as first_year,quantity,price
from Sales 
where (product_id,year) in (
    select product_id,MIN(year)
    from sales
    group by product_id
);

//optimised approach - for assume for the above input s1.year=2009 and s2.year=2008 and s2.year is not NULL so it will break
SELECT s1.product_id, s1.year AS first_year, s1.quantity, s1.price
FROM Sales s1
LEFT JOIN Sales s2 ON s1.product_id = s2.product_id AND s1.year > s2.year
WHERE s2.year IS NULL;
