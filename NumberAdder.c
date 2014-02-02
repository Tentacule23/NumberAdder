//NumberSorter
//I failed at naming file

#include <stdio.h>
#include <stdlib.h>

int number1;
int number2;
int number3;

int zeFirstNumber(int number1, int number2, int number3);
int zeSecondNumber(int number1, int number2, int number3);
int zeThirdNumber(int number1, int number2, int number3);

int main(int argc, char *argv[])
{
	printf("This will sort 3 number\n");
	printf("Enter 1st number\n");
	scanf("%d", &number1);
	printf("Enter 2nd number\n");
	scanf("%d", &number2);
	printf("Enter 3rd number\n");
	scanf("%d", &number3);

	
	int numOrder1 = zeFirstNumber(number1, number2, number3);
	int numOrder2 = zeSecondNumber(number1, number2, number3);
	int numOrder3 = zeThirdNumber(number1, number2, number3);

	printf("%d\n%d\n%d\n", numOrder1, numOrder2, numOrder3);
			
	return EXIT_SUCCESS;

}

zeFirstNumber(int number1, int number2, int number3)
{

int numOrder1;

if(number1 < number2)
{
	if (number1 < number3)
	{
		numOrder1 = number1;
	}
	else
	{
		numOrder1 = number3;
	}
}
else if (number2 < number1)
{
	if (number2 < number3)
	{
		numOrder1 = number2;
	}
	else
	{
		numOrder1 = number3;
	}
}
else if (number3 < number1)
{
	if (number3 < number2)
	{
		numOrder1 = number3;
	}
	else
	{
		numOrder1 = number2;
	}
}

return numOrder1;

}

zeSecondNumber(int number1, int number2, int number3)
{

	int numOrder2;

	if (number1 < number2)
	{
		if (number2 < number3)
		{
			numOrder2 = number2;
		}
		else if (number1 < number3)
		{
			numOrder2 = number3;
		}
		else
		{
			numOrder2 = number1;
		}
	}
	
	else if (number2 < number1)
	{
		if (number1 < number3)
		{
			numOrder2 = number1;
		}
		else if (number2 < number3)
		{
			numOrder2 = number3;
		}
		else
		{
			numOrder2 = number2;
		}
	}
	else if (number3 < number1)
	{
		if (number1 < number2)
		{
			numOrder2 = number1;
		}
		else if (number2 < number3)
		{
			numOrder2 = number2;
		}
		else
		{
			numOrder2 = number3;
		}
	}

	return numOrder2;

}

zeThirdNumber(int number1, int number2, int number3)
{

	int numOrder3;

	if (number1 > number2)
	{
		if (number1 > number3)
		{
			numOrder3 = number1;
		}
		else
		{
			numOrder3 = number3;
		}
	}
	else if (number2 > number1)
	{
		if (number2 > number3)
		{
			numOrder3 = number2;
		}
		else
		{
			numOrder3 = number3;
		}
	}
	else if (number3 > number1)
	{
		if (number3 > number2)
		{
			numOrder3 = number3;
		}
		else
		{
			numOrder3 = number2;
		}
	}

	return numOrder3;

}