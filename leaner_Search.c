#include<stdio.h>
int main()
{
	int n,arr[10],i,k=0;
	printf("Enter the Elements: ");
	for(i=0; i<=9; i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the search key: ");
	scanf("%d",&n);
	for(i=0; i<=9; i++){
		if(arr[i]==n){
		k=1;
		break;	
		}
	}
	if(k==1){
		printf("Found %d",i);
	}else
	{
		printf("Not found");
	}
	 
}