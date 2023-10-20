#include <stdio.h>

struct Employee 
{
    int empId;
    char name[50];
    char designation[50];
    float basicSalary;
    float hraPercentage;
    float daPercentage;
};

float calculateGrossSalary(struct Employee emp) 
{
    float hra = emp.basicSalary * (emp.hraPercentage / 100);
    float da = emp.basicSalary * (emp.daPercentage / 100);
    return emp.basicSalary + hra + da;
}

int main() 
{
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        
        employees[i].empId = i + 1;

        printf("Enter name: ");
        scanf("%s", employees[i].name);

        printf("Enter designation: ");
        scanf("%s", employees[i].designation);

        printf("Enter basic salary: ");
        scanf("%f", &employees[i].basicSalary);

        printf("Enter HRA percentage: ");
        scanf("%f", &employees[i].hraPercentage);

        printf("Enter DA percentage: ");
        scanf("%f", &employees[i].daPercentage);
    }

    printf("\nEmployee Information:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].empId);
        printf("Name: %s\n", employees[i].name);
        printf("Designation: %s\n", employees[i].designation);
        printf("Basic Salary: %.2f\n", employees[i].basicSalary);
        printf("HRA Percentage: %.2f%%\n", employees[i].hraPercentage);
        printf("DA Percentage: %.2f%%\n", employees[i].daPercentage);

        float grossSalary = calculateGrossSalary(employees[i]);
        printf("Gross Salary: %.2f\n", grossSalary);
    }

    return 0;
}