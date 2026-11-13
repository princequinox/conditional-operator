//ternary operator of multiple
#include<stdio.h>
int main()
{
    int age;
printf("enter your age :");
scanf("%d",&age);
age>=18 ? printf("you are adult") :  age>=12 ? printf("teen") : printf("kid");
return 0;
}
