#include <stdio.h>
#include <string.h>
//Definition
struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};
int main() {
    // Initialization
    struct employee em = {
        "John Doe", //name
        12345, //id
        "Human resources", //deparment
        55000.50, //salary
        "john.doe@company.com" //email
    };
    //print values of the fields
    printf("Name: %s\n", em.name);
    printf("ID: %d\n", em.id);
    printf("Department: %s\n", em.department);
    printf("Salary: %.2f\n", em.salary);
    printf("Email: %s\n", em.email);

    return 0;
}
