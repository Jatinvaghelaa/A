#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() {
    struct Employee emp[5];
    int i;
    
    printf("Enter Details of Five Employees:\n");
    for (i = 0; i < 5; i++) {
        printf("Employee %d:\n", i+1);
        printf("Employee Number: ");
        scanf("%d", &emp[i].empno);
        printf("Employee Name: ");
        scanf("%s", emp[i].empname);
        printf("Employee Address: ");
        scanf("%s", emp[i].address);
        printf("Employee Age: ");
        scanf("%d", &emp[i].age);
    }

    printf("\nEmployee Details:\n");
    for (i = 0; i < 5; i++) {
        printf("Employee %d:\n", i+1);
        printf("Employee Number: %d\n", emp[i].empno);
        printf("Employee Name: %s\n", emp[i].empname);
        printf("Employee Address: %s\n", emp[i].address);
        printf("Employee Age: %d\n", emp[i].age);
    }

    return 0;
}
