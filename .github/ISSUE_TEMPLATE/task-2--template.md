---
name: 'Task 2: Computer Average of All Values in File'
about: Task 2 for Students
title: 'Task 2: Computer Average of All Values in File'
labels: enhancement
assignees: ''

---

Implement your code in the `averageNValuesInFile()` function.  In this
case you need to use an EOF-controlled loop to read in and process all
values in the file, which you will again then sum up, compute the average and
return the average of the values processed as the result.

You need to do the following:

1. Open up the file for reading using an `ifstream` as you did for the first task.
2. You will need a `numValues`, `sum` and `nextValue` local variable again.  But this
   time you need to count the `numValues` you read in, so this variable should still be
   an `int`, but you should initialize it to 0 before performing your loop.
3. Use a `while` loop that keeps processing the file until you detect you have reached
   the `eof()`.
4. Inside of the loop you need to perform the same tasks as before, read in the next
   value, then add it to the running sum.  But you also have to update the `numValues`
   by incrementing it each time you successfully read in a value.
5. As with the previous task, once the loop is done you should close your file since you
   no longer need to process it.
6. And you should be able to calculate and return the average value in the same way you
   did before, using the `sum` and the `numValues` you processed.

**Suggested Solution**


**Additional Requirements**

- You are required to use a `while` loop and perform EOF-controlled
  processing of all of the values found in the input file.
- You are required to open the file passed in as a `string` parameter.
- And you are required to close the file after you are done using it.
