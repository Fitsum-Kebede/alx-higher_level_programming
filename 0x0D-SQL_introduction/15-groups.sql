-- lists the number of records with the same records
SELECT score, COUNT(SCORE) AS number FROM second_table GROUP BY score ORDER BY score DESC;
