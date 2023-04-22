#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() {
    struct Employee emp;
    
    printf("Enter Employee Details:\n");
    printf("Employee Number: ");
    scanf("%d", &emp.empno);
    printf("Employee Name: ");
    scanf("%s", emp.empname);
    printf("Employee Address: ");
    scanf("%s", emp.address);
    printf("Employee Age: ");
    scanf("%d", &emp.age);

    printf("\nEmployee Details:\n");
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Employee Address: %s\n", emp.address);
    printf("Employee Age: %d\n", emp.age);

    return 0;
}
