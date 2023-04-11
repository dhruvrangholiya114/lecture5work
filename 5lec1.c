#include<stdio.h>

main()

{
	int a,b;
	
	printf("Enter the value of a =");
	scanf("%d",&a);
	
	printf("Enter the value of b =");
	scanf("%d",&b);
	
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf(" The Swap value is a=%d and b=%d ",a,b);
	
}
