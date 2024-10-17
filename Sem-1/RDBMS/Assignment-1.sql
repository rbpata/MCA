select abs(-15.35);
select pow(3.25,2.25);
select round(3.1417,3);
select truncate(3.1417,3);
select sqrt(17),sqrt(-13);
select exp(5);
select ceil(15.72), floor(15.72);
select 13%5;
select adddate("2004-01-31",interval 275 month);
select sin(10), log10(100);

use db1;

CREATE TABLE books (
    no INT PRIMARY KEY,
    title VARCHAR(50),
    author VARCHAR(50),
    publication VARCHAR(50),
    price DECIMAL(10, 2),
    edition VARCHAR(50)
);

-- Insert book records into the `books` table
INSERT INTO books (no, title, author, publication, price, edition)
VALUES
(1, 'The Secrets of the Himalayas', 'Arvind Mehta', 'Penguin India', 450.00, '1st Edition'),
(2, 'Rajasthan: A Cultural Journey', 'Anita Desai', 'HarperCollins India', 750.00, '2nd Edition'),
(3, 'Ganges: The Lifeline of India', 'Amitabh Sinha', 'Rupa Publications', 1200.00, '3rd Edition'),
(4, 'Indian Spices & Their Stories', 'Priya Kapoor', 'Jaico Publishing House', 350.00, '1st Edition'),
(5, 'The Warrior Queens of India', 'Shobha De', 'Westland Books', 550.00, '2nd Edition'),
(6, 'Ancient Indian Architecture', 'Rajesh Kumar', 'Oxford University Press', 900.00, '1st Edition'),
(7, 'The Story of Kashmir', 'Zakir Hussain', 'Aleph Book Company', 620.00, '3rd Edition'),
(8, 'Mythology of India', 'Devdutt Pattanaik', 'Penguin India', 400.00, '1st Edition'),
(9, 'Flavors of South India', 'Tarla Dalal', 'Random House India', 300.00, '2nd Edition'),
(10, 'The Great Indian Freedom Struggle', 'Ramachandra Guha', 'HarperCollins India', 800.00, '4th Edition');


select author from books
where left(author,1) = upper(left(author,1));

select lower(title) as NameInLower , upper(title) as NameInUpper 
from books;

SELECT CONCAT(CHR(66), CHR(65), CHR(68)) AS result;

select lpad(price,length(price)+4,"*")
from books;

SELECT CONCAT(price, '*/*/') AS NEWPRICE  FROM books;

SELECT REPLACE(publication, 'PHI', 'Pearson') FROM books;

SELECT TRIM(TRAILING "prog" FROM title) 
FROM books; 

SELECT title FROM books WHERE title LIKE '%++%';

alter table books modify author varchar(50) ;

ALTER TABLE books ADD COLUMN author2 VARCHAR(255);

CREATE TABLE stud_marks (
    no INT PRIMARY KEY,
    fname VARCHAR(50),
    lname VARCHAR(50),
    m1 INT,
    m2 INT,
    m3 INT,
    dob DATE
);

-- Insert values into stud_marks table
INSERT INTO stud_marks (no, fname, lname, m1, m2, m3, dob)
VALUES
(1, 'Amit', 'Sharma', 85, 90, 88, '2002-05-15'),
(2, 'Sneha', 'Patel', 78, 82, 80, '2003-08-10'),
(3, 'Rahul', 'Mehta', 92, 85, 89, '2001-12-25'),
(4, 'Priya', 'Reddy', 76, 84, 79, '2002-02-05'),
(5, 'Rakesh', 'Iyer', 88, 91, 92, '2003-11-20'),
(6, 'Sanjay', 'Kumar', 82, 76, 80, '2001-07-17'),
(7, 'Meena', 'Desai', 70, 75, 72, '2002-04-02'),
(8, 'Vikram', 'Singh', 95, 90, 93, '2001-09-18'),
(9, 'Anjali', 'Nair', 65, 70, 68, '2003-03-28'),
(10, 'Rohan', 'Joshi', 77, 81, 85, '2002-01-30');

SELECT no, lname, fname FROM stud_marks;

