#include<stdio.h>

// This is a comment. Your compiler will ignore it
// 
// To compile my code run this command:  gcc <file.c> -o <file>
// To run your code: ./<file>
//
int main()
{

	// int <label> 
	int age = 21;
	int weight = 0; 
	// printf() to print output to the screen
	printf("How old are you?\n");

	// use placeholder to display variable information
	// for example: %d for integers
	// 		%p for address of variable. 
	// 		Use the '&' operator to get it
	printf("I am %d years old\n", age);
	printf("The address of int age is = %p\n", &age);
	age = 23;
	printf("I am %d years old\n", age);
	printf("I am %d years old\n", 123);

	printf("You are %d years and %d pounds\n", age, weight); 



	return 0;
}
