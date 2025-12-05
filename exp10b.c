// Name :- Udayan Ghadigaonkar
// Class : Computer Engineering
// Division :- D
// UIN :- 251P117
#include <stdio.h>

int main(){
    int array[] = {10, 20, 30, 40, 50};
    int n = sizeof(array) / sizeof(array[0]);
    int *p = array;
    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", *(p + i));
    }
    return 0;
}
