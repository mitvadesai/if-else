#include<stdio.h>
main()
{
	int a,b;
	printf("enter value a : ");
	scanf("%d",&a);
	printf("enter value b : ");
	scanf("%d",&b);
	if (a<b) {
		printf("The minimum value is: %d");
	}
	else {
			printf("value is not minimum");
	}
}