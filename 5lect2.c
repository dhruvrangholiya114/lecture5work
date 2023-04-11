#include<stdio.h>

main()

{
	int a,b,c;
	
	printf("Enter the value of a =");
	scanf("%d",&a);
	
	printf("Enter the value of b =");
	scanf("%d",&b);
	
	
	c=a;
	a=b;
	b=c;
	
	printf(" The Swap value is a=%d and b=%d ",a,b);
	
}

