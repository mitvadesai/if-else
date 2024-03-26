#include<stdio.h>
main()
{
	int number;
	printf("enter your number : ");
	scanf("%d",&number);
	if(number<0){
		printf("This number is Negative");
	}
	else if(number==0){
		printf("This number is Neutral");
	}
	else if(number>0){
		printf("This number is Positive");
	}
		
}