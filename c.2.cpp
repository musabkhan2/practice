#include<stdio.h>
int main()
{
	//addittion
	int num1,num2,ans;
	printf("\number of value of num1");
	scanf("%d",&num1);
	printf("\number of value of num2");
	scanf("%d",&num2);
	ans=num1+num2;
	printf("/nthe addittion of %d and %d is %d",num1,num2,ans);


  //subtraction
	
	printf("\nenter the value of num1=");
	scanf("%d",&num1);
	printf("\nenter the value of num2 =");
	scanf("%d",&num2);
	ans= num1 - num2;
	printf("\nthe subtraction ocf %d and %d is%d",num1,num2,ans);
	

    //mulltiplicarion
	printf("\number of value of num1");
	scanf("%d",&num1);
	printf("\number of value of num2");
	scanf("%d",&num2);
	ans=num1%num2;
	printf("/nthe mulltiplicarion of %d and %d is %d",num1,num2,ans);
	
	
	//divisio
	printf("\number of value of num1");
	scanf("%d",&num1);
	printf("\number of value of num2");
	scanf("%d",&num2);
	ans=num1/num2;
	printf("/nthe divisio of %d and %d is %d",num1,num2,ans);
	
	
	//remainde
	printf("\number of value of num1");
	scanf("%d",&num1);
	printf("\number of value of num2");
	scanf("%d",&num2);
	ans=num1*num2;
	printf("/nthe remainde of %d and %d is %d",num1,num2,ans);
	return 0;
}
