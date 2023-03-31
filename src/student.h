/**
 * @file student.h
 * \brief The Student struct represents a student, containing their first and last name, 
 * ID, grades, and the number of grades.
 * @author Gurman Johal
 * @date March 30, 2023
 */

/**
 * \brief The Student struct represents a student, containing their first and last name, ID, grades, and the number of grades.
 */

typedef struct _student 
{ 
  char first_name[50]; /**< The student's first name */
  char last_name[50]; /**< The student's last name */
  char id[11]; /**< The student's ID */
  double *grades; /**< An array of the student's grades */
  int num_grades; /**< The number of grades in the grades array */
} Student;

/**
 * \brief Adds a grade to a student's list of grades.
 * 
 * @param student Pointer to the student to add the grade to.
 * @param grade The grade to add to the student's list of grades.
 */

void add_grade(Student *student, double grade); 

/**
 * \brief Calculates the average grade of a student.
 * 
 * @param student Pointer to the student to calculate the average grade of.
 * @return The average grade of the student.
 */

double average(Student *student);

/**
 * \brief Prints the first name, last name, ID, and list of grades of a student.
 * 
 * @param student Pointer to the student to print.
 */

void print_student(Student *student); 

/**
 * \brief Generates a random student with the specified number of grades.
 * 
 * @param grades The number of grades to generate for the student.
 * @return Pointer to the generated student.
 */

Student* generate_random_student(int grades);
