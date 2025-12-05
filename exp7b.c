// Name :- Udayan Ghadigaonkar
// Class : Computer Engineering
// Division :- D
// UIN :- 251P117
#include <stdio.h>

void addMatrix(int m1[2][5], int m2[2][5], int result[2][5]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

int main() {
    int m1[2][5], m2[2][5], result[2][5];

    printf("Enter the values for matrix1:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter the values for matrix2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    addMatrix(m1, m2, result);

    printf("Result:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
