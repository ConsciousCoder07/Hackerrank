-- https://www.hackerrank.com/challenges/asian-population/problem

SELECT SUM(CITY.POPULATION)
FROM CITY
INNER JOIN COUNTRY
ON CITY.COUNTRYCODE=COUNTRY.CODE
WHERE COUNTRY.CONTINENT='Asia';


-- INNER JOIN Syntax

-- SELECT
--     select_list
-- FROM t1
-- INNER JOIN t2 ON join_condition1
-- INNER JOIN t3 ON join_condition2
-- ...;

-- E.g.

-- SELECT Orders.OrderID, Customers.CustomerName
-- FROM Orders
-- INNER JOIN Customers ON Orders.CustomerID = Customers.CustomerID;