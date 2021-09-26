#include <stdio.h>
using namespace std; 
void swap(int &x, int &y){
  
  int temp;
  temp = x;
  x = y;
  y = temp;

}
int main() {

    int num1 = 10, num2 = 15;  
    swap(num1, num2);
    printf("Primer numero: %d\n", num1);
    printf("Segundo numero: %d\n", num2);


    return 0; 
}