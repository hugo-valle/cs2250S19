#include <stdio.h>

int main()
{
	// Task: Define two integers
	int i1 = 0;
	int i2 = 0;
	
	// Display their values 
	printf("Please enter an integer value\n");
	// To capture user input use the scanf() function
	// Use same placeholders as printf: %d for integers
	// BUT remember to use the Address operator before the 
	// variable name, &i1
	scanf("%d", &i1);
	printf("The value of i1 is = %d\n", i1);
	
	printf("Please enter another integer value\n");
	scanf("%d", &i2);
	printf("The value of i2 is = %d\n", i2);
	
	// Display the sum of them
	printf("The sum of %d + %d is = %d\n", i1, i2, i1 + i2);
	
	return 0;
}
