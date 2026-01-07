//Q8. Write a program to calculate Net Salary of an employee based on the following: 
//? Input basic salary 
//? DA = 40% of basic, HRA = 20% of basic, PF = 12% of basic 
//? If salary = ?50000, apply 10% income tax deduction 
//Display gross and net salary. 
#include<stdio.h>
int main()
{
	float salary,DA,HRA,PF,Gross,Net_salary;
	printf("Enter your salary: ");
	scanf("%f",&salary);
	
	DA=salary*0.4;
	printf("DA is (40 persantage) %0.2f\n",DA);
	
	HRA=salary*0.2;
	printf("HRA is(20 persantage) %0.2f\n",HRA);
	
	PF=salary*0.12;
	printf("PF is (12 persantage) %0.2f\n",PF);
	
	Gross=salary+DA+HRA;
	printf("Your gross salary is %0.2f\n",Gross);
	
	Net_salary=Gross-PF;
	printf("Your Net salary is %0.2f\n",Net_salary);
	
	if(Net_salary>50000)
	{
	float Tax=Net_salary*0.1;
	Net_salary=Net_salary-Tax;
	printf("Your Tax %0.2f\n",Tax);
	printf("After Tax Your Salary %0.2f",Net_salary);
	}
	return 0;
}