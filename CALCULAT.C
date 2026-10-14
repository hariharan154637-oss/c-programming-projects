#include<stdio.h>
int main()
{
    int a,b, choice;
    printf("1.Add 2.Substract 3.Multiply 4.Divide\n");
    printf("Enter choice:");
    scanf("%d",&choice);

    switch(choice)
    {
	case 1:printf("Result=%d",a+b);break;
	case 2:printf("Result=%d",a-b);break;
	case 3:printf("Result=%d",a*b);break;
	case 4:
	     if(b!=0) printf("Result=%2f",(float)a/b);
	     else printf("Division by zero is not allowed");
	     break;
	default:printf("Invalid choice");
     }
     return0;