CREATE DATABASE IF NOT EXISTS assessment;
USE assessment;

CREATE TABLE product(
	PRO_ID INT PRIMARY KEY,
    PRO_NAME VARCHAR(30),
    PRO_PRICE DECIMAL(10,2),
    PRO_COM INT
);

INSERT INTO product(PRO_ID, PRO_NAME, PRO_PRICE, PRO_COM) VALUES
(101, "Mother Board", 3200.00, 15),
(102, "Key Board", 450.00, 16),
(103, "Zip Drive", 250.00, 14),
(104, "Speaker", 550.00, 16),
(105, "Monitor", 5000.00, 11),
(106, "DVD Drive", 900.00, 12),
(107, "CD Drive", 800.00, 12),
(108, "Printer", 2600.00, 13),
(109, "Rifil cartridge", 350.00, 13),
(110, "Mouse", 250.00, 12);

-- Write sql query to find the items whose prices are higher than or equal 250rs.
-- Order the result by product price in descending, then product name in
-- ascending. Return pro_name and pro_price
SELECT PRO_NAME, PRO_PRICE FROM product WHERE PRO_PRICE >= 250.00 
ORDER BY PRO_PRICE DESC, PRO_NAME ASC;

-- Write a sql query to find the cheapest item. Return pro_name and pro_price
SELECT pro_name, pro_price
FROM product
WHERE pro_price = (SELECT MIN(pro_price) FROM product);

-- Write the sql query to calculate the average price of the items for each
-- company. Return average price and company code
SELECT AVG(PRO_PRICE) AS AVG_PRICE, PRO_COM FROM product GROUP BY PRO_COM 
ORDER BY PRO_COM;

-- Write the sql query to find the average total for all the product mention in the
-- table
SELECT AVG(PRO_PRICE) AS AVG_TOTAL FROM product; 