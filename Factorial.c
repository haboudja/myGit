#include<stdio.h>
int factorial(int number);
void main(){
	int number;
	printf(" Please Enter the number :\n");
	scanf("%d",&number);

	printf(" The factorial of %d is %d \n",number,factorial(number));
}// main
int factorial(int number){
	if (number ==0 || number == 1)
		return 1;
	else
		return number * factorial(number -1);
			}
}// factorial
