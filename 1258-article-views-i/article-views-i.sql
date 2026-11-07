# Write your MySQL query statement below
SELECT distinct author_id as id FROM Views #use distinct for removiing dublicates
WHERE author_id = viewer_id
ORDER BY author_id #sorted by id in ascending order.