CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
DECLARE M INT;
SET M = N-1;
RETURN (
SELECT IFNULL ((SELECT DISTINCT Salary FROM Employee order by Salary desc limit M,1), null)
as getNthHighestSalary

);
END
