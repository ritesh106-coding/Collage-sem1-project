//Write a program to solve a quadratic equation 
//ax2+bx+c=0 
//#include <stdio.h>
//#include <math.h>  // For sqrt()
//
//int main() {
//    float a, b, c;
//    float discriminant, root1, root2;
//
//    // Input coefficients
//    printf("Enter coefficients a, b and c: ");
//    scanf("%f %f %f", &a, &b, &c);
//
//    // Calculate discriminant
//    discriminant = b * b - 4 * a * c;
//
//    // Check nature of roots
//    if (discriminant > 0) {
//        root1 = (-b + sqrt(discriminant)) / (2 * a);
//        root2 = (-b - sqrt(discriminant)) / (2 * a);
//        printf("Roots are real and distinct:\n");
//        printf("Root 1 = %.2f\n", root1);
//        printf("Root 2 = %.2f\n", root2);
//    } else if (discriminant == 0) {
//        root1 = -b / (2 * a);
//        printf("Roots are real and equal:\n");
//        printf("Root = %.2f\n", root1);
//    } else {
//        float realPart = -b / (2 * a);
//        float imagPart = sqrt(-discriminant) / (2 * a);
//        printf("Roots are complex and imaginary:\n");
//        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
//        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
//    }
//
//    return 0;
//}
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
float root1,root2,discriminate;
printf("Enter the a,b,c");
scanf("%f %f %f",&a,&b,&c);
discriminate=b*b-4*a*c;
if(discriminate>0){
	root1=(-b + sqrt(discriminate))/(2*a);
	root2=(-b - sqrt(discriminate))/(2*a);
	printf("Root1 %f",root1);
	printf("Root2 %f",root2);
}else if(discriminate==0){
	root1=-b/(2*a);
	printf("%f",root1);
}
else{
	float real=-b/(2*a);
	float image=sqrt(-discriminate) / (2*a);
	printf("root1 %d and %d",real,image);
	printf("root2 %d and %d",real,image);
}
return 0;
}