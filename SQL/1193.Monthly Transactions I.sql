Write an SQL query to find for each month and country, the number of transactions and their total amount, the number of approved transactions 
and their total amount.
Input: 
Transactions table:
+------+---------+----------+--------+------------+
| id   | country | state    | amount | trans_date |
+------+---------+----------+--------+------------+
| 121  | US      | approved | 1000   | 2018-12-18 |
| 122  | US      | declined | 2000   | 2018-12-19 |
| 123  | US      | approved | 2000   | 2019-01-01 |
| 124  | DE      | approved | 2000   | 2019-01-07 |
+------+---------+----------+--------+------------+  
Output: 
+----------+---------+-------------+----------------+--------------------+-----------------------+
| month    | country | trans_count | approved_count | trans_total_amount | approved_total_amount |
+----------+---------+-------------+----------------+--------------------+-----------------------+
| 2018-12  | US      | 2           | 1              | 3000               | 1000                  |
| 2019-01  | US      | 1           | 1              | 2000               | 2000                  |
| 2019-01  | DE      | 1           | 1              | 2000               | 2000                  |
+----------+---------+-------------+----------------+--------------------+-----------------------+

select 
DATE_FORMAT(trans_date, '%Y-%m') as month ,
country,
count(*) as trans_count,
sum(state='approved') as approved_count,   -- can also written like this SUM(IF(state = 'approved', 1, 0)) AS approved_count
sum(amount) as trans_total_amount,
sum(IF(state='approved',amount,0)) as approved_total_amount
from transactions
group by month,country;
