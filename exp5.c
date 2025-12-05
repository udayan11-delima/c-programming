// Name :- Udayan Ghadigaonkar
// Class : Computer Engineering
// Division :- D
// UIN :- 251P117

#include <stdio.h>
int factorial(int n) {
 if (n == 0 || n == 1) // base case
 return 1;
 else
 return n * factorial(n - 1); // recursive case
}
int main() {
 int num = 5;
 printf("Factorial of %d is %d\n", num, factorial(num));
 return 0;
}
