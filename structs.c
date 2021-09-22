#include <stdio.h>
#include <stdlib.h>

struct rectangle { //Definition of a Structure
	int lenght;  //Padding memory means it'll take extra memory
	int breadth;
	char x;
}r2; //Also you can declare here and it'll/they'll be global, Amazing!

 //struct rectangle r1;  //Global variable
int main() {
	//Declaration a variable of type structure
	struct rectangle r1 = {10 ,5}; 
		
	r1.lenght = 25;
	
	r1.breadth = 30;
	printf("%lu\n", sizeof(r1));
	printf("%d\n", r1.lenght);
	printf("%d\n", r1.breadth);
	return 0;
}
