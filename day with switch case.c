#include<stdio.h>
int main()
{
int age;
printf("enter your number( for day 1 for saterday 2 for sun day so on) :");
scanf("%d",&age);
switch(age){

case 1 : printf("saterday");
break;
case 2 : printf("sunday");
break;
case 3 : printf("monday");
break;
case 4 : printf("tuesday");
break;
case 5 : printf("wednesday");
break;
case 6 : printf("thusday");
break;
case 7 : printf("friday");

break;
default :printf("enter 1 to 7");
}
return 0;
}
