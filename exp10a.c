// Name :- Udayan Ghadigaonkar
// Class : Computer Engineering
// Division :- D
// UIN :- 251P117
#include <stdio.h>

int SumOfNumbers(int *a, int *b){
    int sum = *a + *b;
    return sum;
}

int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("The sum of two numbers: %d\n", SumOfNumbers(&num1, &num2));

    return 0;
}
