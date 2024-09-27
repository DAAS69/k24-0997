#include <stdio.h>

int main() {
float gpa;
printf("Enter the Grade Point Average (GPA): ");
scanf("%f", &gpa);
(gpa >= 0.0 && gpa <= 0.99) ? printf("Failed semester—registration suspended") :
                          (gpa >= 1.0 && gpa <= 1.99) ? printf("On probation for next semester") :
                          (gpa >= 2.0 && gpa <= 2.99) ? printf("(no message)") :
                          (gpa >= 3.0 && gpa <= 3.49) ? printf("Dean's list for semester") :
                          (gpa >= 3.5 && gpa <= 4.0) ? printf("Highest honors for semester") :
                          printf("Invalid GPA");
}
