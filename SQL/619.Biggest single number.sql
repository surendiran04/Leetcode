Table: MyNumbers
+-------------+------+
| Column Name | Type |
+-------------+------+
| num         | int  |
+-------------+------+
 A single number is a number that appeared only once in the MyNumbers table.
Find the largest single number. If there is no single number, report null. 

Input: 
MyNumbers table:
+-----+
| num |
+-----+
| 8   |
| 8   |
| 3   |
| 3   |
| 1   |
| 4   |
| 5   |
| 6   |
+-----+
Output: 
+-----+
| num |
+-----+
| 6   |
+-----+
  
select max(num) as num from (select num from Mynumbers
group by num having count(num)=1 ) a;
