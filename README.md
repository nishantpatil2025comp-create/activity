ACTIVITY 3
Research 
In particular, this Student Grading System Project in PHP focuses mainly on managing student-related records. To be more precise, the system helps to keep track of students and track results with respect to their chosen level. Also, the system displays all the available faculty and departments. In addition, the system allows setting up courses too(codeastro.com). Evidently, this project contains an admin panel with a student panel. In an overview of this web application, the student has to log into the system using the credentials provided by the administrator. The students can view their enrolled list of courses with their respective faculty, department, and semester. Additionally, the students can view their personal semester results. In fact, the result section displays the overall grade with points, total units, and scores obtained. With it, the system also allows printing/downloading the result. Besides, the students can view and update their profiles

Reference: https://codeastro.com/student-grading-system-in-php-mysql-with-source-code/ 

Ideat:
The idea is to create a C program that:
Accepts marks of subjects from students


Calculates total and average marks


Determines grade based on performance


Displays results to users


Objectives
Automate calculation of student results


Minimize human grading errors


Provide quick results


Store and evaluate multiple students

ANSLYSE:
Functional Requirements
Input student details (Name, Roll No, Marks)


Compute:


Total marks


Average percentage


Grade logic


Display output with grade


Grade Criteria (example)
Percentage
Grade
≥ 90
A
80–89
B
70–79
C
60–69
D
< 60
F

Non-Functional Requirements
User-friendly


Efficient and accurate calculation


Works for multiple subjects


Resources
Software: C compiler (GCC, Turbo C, CodeBlocks)


Hardware: Standard PC


BUILD :
#include <stdio.h>

int main() {
    char name[50];
    int roll;
    float m1, m2, m3, m4, m5, m6,m7, total, average, cgpa;

    printf("=====================================\n");
    printf("         STUDENT CGPA SYSTEM         \n");
    printf("=====================================\n\n");

    printf("Enter Student Name : ");
    scanf("%s", name);

     printf("Enter Roll Number  : ");
    scanf("%d", &roll);

    printf("\nEnter Marks of 6 Subjects:\n");
     printf("MATHS 1: ");
    scanf("%f", &m1);
    printf("FPL : ");
    scanf("%f", &m2);
    printf("BET: ");
    scanf("%f", &m3);
    printf("PHYSICS: ");
    scanf("%f", &m4);
    printf("EG: ");
    scanf("%f", &m5);
    printf("ICC: ");
    scanf("%f", &m6);
    printf("PA:");
    scanf("%f",&m7);

    total = m1 + m2 + m3 + m4 + m5 + m6;
    average = total / 6;
    cgpa = average / 10;   // CGPA calculation

    printf("\n=====================================\n");
    printf("               RESULT                \n");
    printf("=====================================\n");
     printf("Name          : %s\n", name);
       printf("Roll Number   : %d\n", roll);
       printf("Total Marks   : %.2f / 600\n", total);
     printf("Average Marks : %.2f\n", average);
       printf("CGPA          : %.2f\n", cgpa);
    printf("=====================================\n");

    return 0;
}



OUTPUT:
Case 1
=====================================
         STUDENT CGPA SYSTEM         
=====================================

Enter Student Name : nishant
Enter Roll Number  : 40

Enter Marks of 6 Subjects:
MATHS 1: 98
FPL : 78
BET: 79
PHYSICS: 56
EG: 76
ICC: 45
PA:8

=====================================
               RESULT                
=====================================
Name          : nishant
Roll Number   : 40
Total Marks   : 432.00 / 600
Average Marks : 72.00
CGPA          : 7.20
=====================================


Case 2
=====================================
         STUDENT CGPA SYSTEM         
=====================================

Enter Student Name : utkarsh
Enter Roll Number  : 98

Enter Marks of 6 Subjects:
MATHS 1: 99
FPL : 98
BET: 89
PHYSICS: 92
EG: 97
ICC: 89
PA:95

=====================================
               RESULT                
=====================================
Name          : utkarsh
Roll Number   : 98
Total Marks   : 564.00 / 600
Average Marks : 94.00
CGPA          : 9.40
=====================================


Conclusion
