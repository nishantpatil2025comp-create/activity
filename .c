int main() {
    char name[50];
    int roll, i, subjects;
    float marks[10], total = 0, average;
    
    printf("Enter student name: ");
    scanf("%s", name);
    
    printf("Enter roll number: ");
    scanf("%d", &roll);
    
    printf("Enter number of subjects: ");
    scanf("%d", &subjects);
    
    for(i = 0; i < subjects; i++) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    
    average = total / subjects;
    
    char grade;
    if(average >= 90)
        grade = 'A';
    else if(average >= 80)
        grade = 'B';
    else if(average >= 70)
        grade = 'C';
    else if(average >= 60)
        grade = 'D';
    else
        grade = 'F';
        
    printf("\n----- STUDENT RESULT -----\n");
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", roll);
    printf("Total Marks: %.2f\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);
    
    return 0;
}


