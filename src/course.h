#include "student.h"
#include <stdbool.h>


/**
 * @file course.h
 * \brief Header file containing the Course struct and its associated functions.
 *
 * The Course struct represents a course, and contains information about the course's
 * name, code, and enrolled students. 
 * @author Gurman Johal
 * @date March 30, 2023
 */

/**
 * \brief The Course struct represents a course with a name, code, and a list of students.
 */

typedef struct _course 
{
  char name[100]; /**< The name of the course. */
  char code[10]; /**< The code of the course. */
  Student *students; /**< The list of students enrolled in the course. */
  int total_students; /**< The total number of students enrolled in the course. */
} Course;

/**
 * \brief Enrolls a student in a course.
 * 
 * @param course Pointer to the course to enroll the student in.
 * @param student Pointer to the student to enroll.
 */

void enroll_student(Course *course, Student *student); 

/**
 * \brief Prints the name, code, and list of students in a course.
 * 
 * @param course Pointer to the course to print.
 */

void print_course(Course *course); 

/**
 * \brief Determines the student with the highest average grade in a course.
 * 
 * @param course Pointer to the course to find the top student in.
 * @return Pointer to the top student in the course.
 */

Student *top_student(Course* course);

/**
 * \brief Determines the list of passing students in a course.
 * 
 * @param course Pointer to the course to determine passing students in.
 * @param total_passing Pointer to an integer to hold the number of passing students.
 * @return Pointer to an array of passing students.
 */

Student *passing(Course* course, int *total_passing); 

