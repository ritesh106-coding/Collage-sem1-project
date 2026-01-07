//4. Write a program to check whether the entered sides form a valid triangle. 
//If valid, further check and display whether the triangle is Equilateral, Isosceles, or Scalene.
#include<stdio.h>
int main()
{
	int side1,side2,side3;
	printf("Enter the value of Three side: ");
	scanf("%d %d %d",&side1,&side2,&side3);
	if ((side1 + side2 > side3) &&  //it show your enter value is trangle or not
        (side1 + side3 > side2) &&
        (side2 + side3 > side1))
        {
        	if(side1==side2 && side2==side3)// this code work three side equal 
        	{
        	printf("This triangle is Equilateral.\n");
			}
			else if(side1==side2 || side2==side3 || side3==side1)
			{
				printf("This triangle is Isosceles.\n");
			}
			else
			{
				printf("This triangle is Scalene.\n");
			}
		}else
		{
			 printf("The entered sides do not form a valid triangle.\n");
		}
		return 0;
}