---
name: 'Task 3: File Output and I/O Stream Formatting'
about: Task 3 for Students
title: 'Task 3: File Output and I/O Stream Formatting'
labels: enhancement
assignees: ''

---

Implement code for this task in the `processPayrollRaises()` function.
In this task you will be opening one file for input and another file
to output the results of processing the payroll.  You will also have
to use some of the most usefule I/O stream manipulators to format
the output exactly as required.


You need to do the following:

1. Open up the input file using an `ifstream` as before.
2. Also open up the output file, given as the second parameter to this function, using
   an `ofstream`.
3. You will need the following local variables to read in and process data from the input file
   - `firstName`, which should be a `string` type
   - `lastName` which is also a `string`
   - `currentSalary` which should be of type `double`
   - and `raiseRatio` which is also a `double`
   - In addition you need a `numEmployees` variable of type `int` that is initialized to 0, in which
     you will keep track of the number of employee records you process (like you did for `numValues`
     in the previous task).
4. You also need some variables for processing the employee payroll records
   - As described above, create another `string` named `fullName` where we will put in the full
     name of the employee, last name first followed by first name.
   - Also create a `double` called `newSalary` to hold the calculation of the new salary amount.
5. Now we are ready for the loop.  Use a `while` loop.  Have the loop keep running as long as 
   the `inData` stream is NOT at the end of file yet.
   - You should first read in the 4 pieces of data from the input file from the current line,
     the `firstName`, `lastName`, `currentSalary` and `raiseRatio`.
   - Update the `numEmployees` you have read in by 1.
   - Calculate the `newSalary` using the read in `currentSalary` and `raiseRatio`.
   - Create the `fullName` in the "lastName, firstName" format from the names you have read in.
   - Output the new record to the output file stream that you have opened.
     - The full name should be left justified, in a field of width 25, filling any unused
	   space with the `#` character.
	 - This is followed by a `$` character for the new salary
	 - Then the new salary is in a field of width 9, right justified and filled with '.' 
	   for unused space.  It should only show 2 decimal digits of precision since we are 
	   displaying a salary in dollars and cents.  It should display using `fixed` format
	   not in scientific notation.
	 - You need to also output a newline (`endl`) in the stream at end of each employee
	   record output, for the start of the next employee.
6. After the loop ends, make sure you close both the input and the output file stream.  This 
   is more important than before here.  Closing the output file stream ensures that all data
   will get flushed and written out to the file.
7. This function should return the number of employees as an `int` result that were
   processed.  So you need to change the `return` statement to return the number of
   employee records you read and processed.

**Suggested Solution**


**Additional Requirements**

- You are again required to use a `while` loop and process all Employee records,
  one per line in this input, until you reach the end-of-file.
- You are required to use `ifstream` and open the first parameter file name to be
  used as input.
- You are required to use `ofstream` and open the second parameter file name for
  formatted output of the results.
- You are required to close both of the files that are opened once you are done
  processing them.
- The output format must be exactly as specified in the assignment description.
  - The full name should be left justified, in a field of width 25, filling any unused
    space with the `#` character.
  - This is followed by a `$` character for the new salary
  - Then the new salary is in a field of width 9, right justified and filled with '.' 
	for unused space.  It should only show 2 decimal digits of precision since we are 
	displaying a salary in dollars and cents.  It should display using `fixed` format
	not in scientific notation.
  - You need to also output a newline (`endl`) in the stream at end of each employee
	record output, for the start of the next employee.
