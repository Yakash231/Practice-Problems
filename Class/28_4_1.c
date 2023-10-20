#include <stdio.h>
struct student {
    char Name[50];
    int roll;
    float cgpa;
} s[7];

int main() {
    int i;
    printf("Enter information of students:\n");

   
    for (i = 0; i < 7; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d \n", s[i].roll);
        printf("Enter NAME: ");
        scanf("%s", s[i].Name);
        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i <7; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("Name: %s",s[i].Name);
        printf("CGPA: %.1f", s[i].cgpa);
        printf("\n");
    }
    printf("\nStudents Having CGPA above 9");
    for(int i=0;i<7;++i)
    {
        if(s[i].cgpa>9)
        {
         printf("\n  -%s",s[i].Name);
        }
    }
    return 0;
}
