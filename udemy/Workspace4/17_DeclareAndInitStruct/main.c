#include <stdio.h>

struct employee
    {
        char name[50];
        int hireDate;
        float salary;
    };

int main() {
    
    struct employee member1 = {"John Smith", 2025, 123.1};

    
    printf("Name: %s\nHiredate: %d\nSalary: %.2f\n\n\n", 
            member1.name, member1.hireDate, member1.salary);
            
    printf("Enter the employee's data: \n");
    printf("Name: ");
    scanf("%s", member1.name);
    
    printf("HireDate: ");
    scanf("%d", &member1.hireDate);
    
    printf("Salary: ");
    scanf("%f", &member1.salary);
    
    printf("\nName: %s\nHiredate: %d\nSalary: %.2f\n", 
            member1.name, member1.hireDate, member1.salary);
    
    return 0;
}