-- Create the table
CREATE TABLE student (
    student_id INT PRIMARY KEY,
    name VARCHAR(255),
    email VARCHAR(255) UNIQUE
);

-- Insert data into the table
INSERT INTO student (student_id, name, email) VALUES (121, 'Akshita Rastogi', 'rastogi32akshita@gmail.com');
INSERT INTO student (student_id, name, email) VALUES (122, 'Akshu Rastogi', 'rastogi31akshita@gmail.com');
INSERT INTO student (student_id, name, email) VALUES (123, 'Akki Rastogi', 'rastogi33akshita@gmail.com');
INSERT INTO student (student_id, name, email) VALUES (124, 'Akku Rastogi', 'rastogi35akshita@gmail.com');

