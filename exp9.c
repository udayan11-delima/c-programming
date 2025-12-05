// Name :- Udayan Ghadigaonkar
// Class : Computer Engineering
// Division :- D
// UIN :- 251P117
#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct student s[5];
    int i, topper = 0;

    for(i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter total marks: ");
        scanf("%f", &s[i].marks);
        printf("\n");
    }

    for(i = 1; i < 5; i++) {
        if(s[i].marks > s[topper].marks) {
            topper = i;
        }
    }

    printf("----- Topper Details -----\n");
    printf("Name: %s\n", s[topper].name);
    printf("Roll Number: %d\n", s[topper].roll);
    printf("Total Marks: %.2f\n", s[topper].marks);

    return 0;
}
