/** @file assg04-library.cpp
 *
 * @brief Implementation file for Assignment 04: C++ Streaming File Input / Output
 *
 * @author Derek Harter
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @note   assg : Assignment 04: C++ Streaming File Input / Output
 * @date   September 01, 2024
 *
 * Assignment implementation file.  All of the actual implementation of
 * functions for tasks goes into an implementation file with a .cpp extension.
 * The prototypes of any functions that are used by others should be put into
 * the .hpp header file.
 */
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

/** @brief Average N Values in File
 *
 * This function takes the name of a file as its only input parameter.
 * It will open up the file and average the values found in the file.
 * The file has the format:
 *
 *    numValues
 *    value1
 *    value2
 *    ...
 *    valueN
 * Where the first line is something that can be read into an integer
 * type, that indicates the number of values that follow.  And the next
 * N tokens (separated by newlines or whitespace) are numeric (real valued)
 * numbers.
 *
 * This function first reads in N, the number of values to average.  Then
 * it reads N double values from the file, summing them up.  It then computes
 * and returns the average of the N values found in the file.
 *
 * @param inDataFilename The name of the input file to open and read values from.
 *
 * @returns double Returns the average of the values in the input file,
 *   by summing them up and dividing by the number of values N.
 */
double averageNValuesInFile(string inDataFilename)
{
  // your code for task 1 goes here

  // you need to return the average you calculated instead of always
  // returning 0.0 here
  return 0.0;
}

/** @brief Average All Values in File
 *
 * This function takes the name of a file as its only input parameter.
 * It will open up the file and average all of the values found in the file.
 * The file has the format:
 *
 *    value1
 *    value2
 *    ...
 *    valueN
 *
 * Where there are some unknown number of values in the file separated by
 * newlines and/or whitespace.
 *
 * This function reads in all double values it can find until it reaches the
 * file.  Then it calculates and returns the average of the values it
 * processed from the file.
 *
 * @param inDataFilename The name of the input file to open and read values from.
 *
 * @returns double Returns the average of the values in the input file,
 *   by summing them up and dividing by the number of values processed.
 */
double averageAllValuesInFile(string inDataFilename)
{
  // your code for task 2 goes here

  // you need to return the average you calculated instead of always
  // returning 0.0 here
  return 0.0;
}

/** @brief Process Payrole raises from file
 *
 * We are given a file of payrole information of the format:
 *
 * Firstname Lastname CurrentSalary RaiseRatio
 *
 * This function reads in each line of the payrole, applies a raise in the
 * current salary based on the RaiseRatio, then writes the information
 * out to a new data file in the format:
 *
 * Lastname, Firstname  NewSalary
 *
 * We use stream formatting to ensure that the "Lastname, Firstname"
 * is in a field of 25 characters, left justified, and we fill any unused
 * characters in the field with the `#` character. We also format the new
 * salary on the same line in a field of 9 characters, left justified, and
 * filling unused characters in the field with `.`.  For students
 * implementing this task, the output you generate is saved in the `output`
 * subdirectory, and it must exactly match the corresponding `x.res` file in the
 * `data` subdirectory in order to pass the tests for this task.
 *
 * @param inDataFilename The name of the input file to open and read values from.
 * @param outDataFilename The name of the output file to open and write the
 *   formated output results from processing the payroll data.
 *
 * @returns int The number of employees processed in the payrole is kept tack of
 *   and the number of employee records we successfully process is returned as
 *   the result from this function.
 */
int processPayrollRaises(string inDataFilename, string outDataFilename)
{
  // your code for task 3 goes here

  // you need to return the number of employee records you processed instead of
  // returning 0 here
  return 0;
}
