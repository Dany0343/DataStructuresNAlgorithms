#include <stdio.h>
#include <stdlib.h>
void fun(int *A, int n) {

    int i;
    printf("%d", *A);
    
    

}
int main() {

    int A[5] = {1, 2 ,3 ,4 ,5};
    for(int i = 0; i < 5; i++) {

        fun(&A[i], 5);
    }

    return 0; 
}