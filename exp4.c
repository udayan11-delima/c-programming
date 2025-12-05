// Name :- Udayan Ghadigaonkar
// Class : Computer Engineering
// Division :- D
// UIN :- 251P117

#include <stdio.h>

int main() {
    int i, j, start, end, Prime;

    printf("Enter the first number: ");
    scanf("%d", &start);

    printf("Enter the second number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    for (i = start; i <= end; i++) {
        if (i < 2)
            continue;

        Prime = 1; 
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                Prime = 0; 
                break;
            }
        }

        if (Prime)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
