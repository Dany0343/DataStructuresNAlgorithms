#include <stdio.h>
#include <stdlib.h> //With this library it's possible to use functions as Malloc

int main() {
	
	//int a = 10;
	//int *p;  //Declaration of a pointer
	//p = &a;  //Adress of 'a' is stored in p
 	
	//printf("%d", *p);  //Dereferencing
	
	
	//Pointer to an Array
	
	//int A[5] = {2, 4, 6, 8, 10};  //This is created in stack
	int i;
	//Creating an array in heap
	int *p;
	p = (int *)malloc(5*sizeof(int));
	p[0] = 10; p[1] = 15; p[2] = 20; p[3] = 30; p[4] = 40;
	//p = A;
	
	//Accesing all the elements of an array using a pointer
	
	for(i = 0; i < 5; i++){
		printf("%d\n", p[i]);
	}
	
	return 0;
}
