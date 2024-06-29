+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| id            | int     |
| recordDate    | date    |
| temperature   | int     |
+---------------+---------+
id is the column with unique values for this table.
There are no different rows with the same recordDate.
This table contains information about the temperature on a certain day.
 
Write a solution to find all dates' Id with higher temperatures compared to its previous dates (yesterday).
Return the result table in any order.

select w1.id 
from weather w1,weather w2 //instead we can also use join query - JOIN weather w2 on Datediff()
where Datediff(w1.recordDate,w2.recordDate)=1 
and w1.temperature>w2.temperature;
