//. Write a program to input the number of electricity units consumed and calculate the bill 
//according to the given rules: 
//? Up to 100 units ? ?1.5/unit 
//? 101–200 units ? ?2.5/unit 
//? 201–300 units ? ?4/unit 
//? Above 300 units ? ?5/unit 
//? Add 10% surcharge if total bill exceeds ?1000. 
#include<stdio.h>
int main()
{
	int unit;
	float bill=0;//- Accurate calculations: Starting with zero ensures that any additions (like item prices) are added correctly.
	printf("Enter the units: ");
	scanf("%d",&unit);
 if (unit <= 100) {
        bill = unit * 1.5;
    } 
    else if(unit<=200)
    {
    	bill=100*1.5+(unit-100)*2.5;
	}
	else if(unit<=300)
	{
		bill=100*1.5+100*2.5+(unit-200)*4.0;
	}
	else
	{
		bill=100*1.5+100*2.5+100*4.0+(unit-300)*5.0;
	}
	
  if (bill > 1000) {
      bill = bill + (bill * 0.10);
	  //  bill += bill * 0.10;
    }
    printf("Total electricity bill: %.2f\n", bill);

    return 0;
}
