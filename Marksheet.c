//Q1. Write a program to accept marks of five subjects, calculate total and percentage, and 
//display the grade according to the following conditions: 
//? 90–100 ? Grade A+ 
//? 80–89 ? Grade A 
//? 70–79 ? Grade B 
//? 60–69 ? Grade C 
//? 50–59 ? Grade D 
//? Below 50 ? Fail
#include <stdio.h>

int main() {
    int sub1, sub2, sub3, sub4, sub5, Total;
    float percentage;

    printf("Enter the value of five subjects: ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5); // 5 %d written for take 5 input

    Total = sub1 + sub2 + sub3 + sub4 + sub5;
    printf("Sum of five subjects = %d\n", Total); 

    percentage = Total / 5.0; 
    printf("Percentage of five subjects = %.2f%%\n", percentage); 
    
    if(percentage>=90 && 100<=percentage)
    {
    	printf("Grade A+");
	}
	else if(percentage>=80 && 89<=percentage)
	{
		printf("Grade A");
	}
	else if(percentage>=70 && 79<=percentage)
	{
		printf("Grade B");
	}
		else if(percentage>=60 && 69<=percentage)
	{
		printf("Grade c");
	}
		else if(percentage>=50 && 59<=percentage)
	{
		printf("Grade D");
	}
	else if(percentage<50)
	{
		printf("Sorry you are Fail");
	}
    return 0;
}