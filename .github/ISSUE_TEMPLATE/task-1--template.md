---
name: 'Task 1: Compute Average of N Values in a File'
about: Task 1 for Students
title: 'Task 1: Compute Average of N Values in a File'
labels: enhancement, good first issue
assignees: ''

---

**Description**

Implement your code in the `averageNValuesInFile()` function to read in
`numValues` from a file, sum them up, compute the average and
return the average of the values processed as the result.

You need to do the following:

1. Open up the file for reading using an `ifstream` object as just shown.
2. The first value of this file is the number of values in the file to be processed.
   Create a variable of type `int` named `numValues`, and read in this first integer
   value from the file.
3. We need some local variables of type `double` to keep track of the sum and to read
   the next value into.  Create two `double` variables named `sum` and `nextValue`.
   Make sure you initialize `sum` to be `0.0` before we started adding in values to this
   sum.
4. Create a `for` loop.  The loop needs to execute exactly `numValues` times, so that
   it will read in that number of values from the file and process them.
5. In the body of the loop you need to
   - First read in the `nextValue` from the file.
   - Then add that value just read into the running `sum`
6. After the loop is done we no longer need the file.  It is always best practice
   to close any file you open as soon as you are done with it.  So close the
   `inData` file stream now.
7. The function will be hard coded to return `0.0` when you start this task.  Instead
   calculate the average of the values from the file (e.g. the `sum` divided by the
   `numValues` will be the average of the values), and return the average result
   you calculate using a `return` statement.

**Suggested Solution**

**Additional Requirements**

- You are required to use a `for` loop and perform counter-controlled
  processing of the `numValues` of input in the file.
- You are required to open the file passed in as a `string` parameter.
- And you are required to close the file after you are done using it.
