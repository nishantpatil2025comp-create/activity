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
