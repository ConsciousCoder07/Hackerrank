-- https://www.hackerrank.com/challenges/weather-observation-station-18/problem

-- Manhattan distance = |X1 – X2| + |Y1 – Y2|

SELECT ROUND( ABS(MIN(LAT_N)-MAX(LAT_N)) + ABS(MIN(LONG_W)-MAX(LONG_W)) , 4 )
FROM STATION;