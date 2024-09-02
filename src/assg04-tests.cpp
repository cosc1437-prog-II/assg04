/** @file assg04-tests.cpp
 *
 * @brief Unit tests for Assignment 04: C++ Streaming File Input / Output
 *
 * @author Derek Harter
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @note   assg : Assignment 04: C++ Streaming File Input / Output
 * @date   September 01, 2024
 *
 * Assignment unit tests.  This file contains tests of the work you do
 * for the individual tasks for the assignment.  You should perform the
 * tasks in order, from Task 1 through the last task.  To start a task,
 * change the `#undef` statement to `#define`.  This will enable the test
 * cases for that task.
 */
#include "assg04-library.hpp"
#include "catch.hpp"
#include <cstdlib>
#include <iostream>
using namespace std;

// change these to #define when ready to begin working on each task,
// once defined they will enable the tests declared below for each task
#undef task1
#undef task2
#undef task3

/** averageNValuesInFile() test cases
 * Write your code in the averageNValuesInFile() function to pass
 * the following tasks as described in the assignment description.
 */
#ifdef task1
TEST_CASE("Task 1 <averageNValuesInFile()> tests", "[task1]")
{
  // there are 4 files for this test that are in the appropriate format for
  // this tasks function
  CHECK_THAT(averageNValuesInFile("data/task01-test01.txt"), Catch::WithinAbs(4.5, 0.000000000001));
  CHECK_THAT(averageNValuesInFile("data/task01-test02.txt"), Catch::WithinAbs(44.6975, 0.000000000001));
  CHECK_THAT(averageNValuesInFile("data/task01-test03.txt"), Catch::WithinAbs(46.05174, 0.000000000001));
  CHECK_THAT(averageNValuesInFile("data/task01-test04.txt"), Catch::WithinAbs(50.3661564, 0.000000000001));
}
#endif

/** averageAllValuesInFile() test cases
 * Write your code in the averageAllValuesInFile() function to pass
 * the following tasks as described in the assignment description.
 */
#ifdef task2
TEST_CASE("Task 2 <averageAllValuesInFile()> tests", "[task2]")
{
  // there are 4 files for this test that are in the appropriate format for
  // this tasks function
  CHECK_THAT(averageAllValuesInFile("data/task02-test01.txt"), Catch::WithinAbs(4.5, 0.000000000001));
  //CHECK_THAT(averageAllValuesInFile("data/task02-test02.txt"), Catch::WithinAbs(44.6975, 0.000000000001));
  //CHECK_THAT(averageAllValuesInFile("data/task02-test03.txt"), Catch::WithinAbs(46.05174, 0.000000000001));
  //CHECK_THAT(averageAllValuesInFile("data/task02-test04.txt"), Catch::WithinAbs(50.3661564, 0.000000000001));
}
#endif

/** processPayrollRaises() test cases
 * Write your code in the processPayrollRaises() function to pass
 * the following tasks as described in the assignment description.
 */
#ifdef task3
TEST_CASE("Task 3 <processPayrollRaises()> tests", "[task3]")
{
  // the first test file has 5 employees to process.  We do a diff between your output
  // in output/task03-out01.txt and the expected resulting output in data/task03-out01.res
  CHECK(processPayrollRaises("data/task03-test01.txt", "output/task03-out01.txt") == 5);
  CHECK(system("diff data/task03-out01.res output/task03-out01.txt") == 0);
}
#endif
