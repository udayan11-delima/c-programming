// Name :- Udayan Ghadigaonkar
// Class : Computer Engineering
// Division :- D
// UIN :- 251P117
#include <stdio.h>

int main() {
    int i, n , a[10], largest;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    largest = a[0];

    for(i = 1; i < n; i++) {
        if(a[i] > largest) {
            largest = a[i];
        }
    }

    printf("Largest number = %d\n", largest);

    return 0;
}
