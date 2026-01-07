#include<stdio.h>
int main()
{
	char calculater;
	double num1, num2, Result;
	printf("Enter the value of (+,-,/,*): ");
	scanf("%c",&calculater);
	
	printf("Enter the value of Two Number: ");
	scanf("%lf %lf",&num1,&num2);
	
	switch(calculater)
	{
		case '+':
			Result=num1+num2;
		printf("Result %.2lf",Result);
		break;
		
		case '-':
		Result=num1-num2;
		printf("Result %.2lf",Result);
		break;
		
		case'*':
		Result=num1*num2;
		printf("Result %.2lf",Result);	
		break;
		
		case'/':
		if(num2!=0)
		{
			Result=num1/num2;
			printf("Result %.2if",Result);
			}else
			{
				printf("Error: Division by zero is not allowed.\n");
			}
			 break;
		     default:
            printf("Invalid operator.\n");
	}
		return 0;
}
