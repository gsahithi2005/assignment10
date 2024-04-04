#include <stdio.h>
union EmpDetails {
    float hourlyWage;
    double fixedSalary;
};
struct Employee {
    int employeeID;
    char name[100];
    union EmpDetails details;
};
int main() {
    struct Employee emp;
    printf("Enter employee ID: ");
    scanf("%d", &emp.employeeID);
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter hourly wage: ");
    scanf("%f", &emp.details.hourlyWage);
    printf("\nEmployee ID: %d\n", emp.employeeID);
    printf("Name: %s\n", emp.name);
    printf("Hourly Wage: %.2f\n", emp.details.hourlyWage);
    return 0;
}
