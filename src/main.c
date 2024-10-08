
#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
#include "time.h"
#include "course.h"

/**
 * @file main.c
 * \brief Main function that runs the program.
 * 
 * This function creates a course, enrolls students, prints the course
 * information, finds the top student, and prints a list of passing
 * students.
 *
 * @return 0 for successful execution.
 * @author Gurman Johal
 * @date March 30, 2023
 */

/**
 * \brief Main function that runs the program.
 * 
 * This function creates a course, enrolls students, prints the course
 * information, finds the top student, and prints a list of passing
 * students.
 *
 * @return 0 for successful execution.
 */




int main()
{
  srand((unsigned) time(NULL));

  Course *MATH101 = calloc(1, sizeof(Course));
  strcpy(MATH101->name, "Basics of Mathematics");
  strcpy(MATH101->code, "MATH 101");

  for (int i = 0; i < 20; i++) 
    enroll_student(MATH101, generate_random_student(8));
  
  print_course(MATH101);

  Student *student;
  student = top_student(MATH101);
  printf("\n\nTop student: \n\n");
  print_student(student);

  int total_passing;
  Student *passing_students = passing(MATH101, &total_passing);
  printf("\nTotal passing: %d\n", total_passing);
  printf("\nPassing students:\n\n");
  for (int i = 0; i < total_passing; i++) print_student(&passing_students[i]);
  
  return 0;
}
