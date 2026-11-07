# Write your MySQL query statement below
SELECT name FROM Customer
WHERE referee_id != 2 OR referee_id is null #we cannot use like this referee_id = null