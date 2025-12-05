// Name :- Udayan Ghadigaonkar
// Class : Computer Engineering
// Division :- D
// UIN :- 251P117

#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee e;
    FILE *fp;
    int choice;

    do {
        printf("\n--- Employee Database Menu ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                fp = fopen("employee.txt", "a");
                printf("Enter Employee ID: ");
                scanf("%d", &e.id);
                printf("Enter Name: ");
                scanf("%s", e.name);
                printf("Enter Salary: ");
                scanf("%f", &e.salary);

                fprintf(fp, "%d %s %f\n", e.id, e.name, e.salary);
                fclose(fp);
                printf("Employee Added Successfully!\n");
                break;

            case 2:
                fp = fopen("employee.txt", "r");
                if (fp == NULL) {
                    printf("No employee records found.\n");
                    break;
                }

                printf("\n--- Employee Records ---\n");
                while ((fscanf(fp, "%d %s %f", &e.id, e.name, &e.salary)) != EOF) {
                    printf("ID: %d  Name: %s  Salary: %f\n", e.id, e.name, e.salary);
                }
                fclose(fp);
                break;

            case 3:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    } while(choice != 3);

    return 0;
}
