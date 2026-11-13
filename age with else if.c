#include<stdio.h>
int main()
{
int age;
printf("enter your age :");
scanf("%d",&age);
if (age>=18){

 printf("your age is %d,  so you are an adult and you can cast vote now",age);
}
else if(age>12){

    printf("your age is %d, so you are teen and you can not cast vote now",age);
}
else if(age>7){

    printf("your age is %d, so you are kid and you can not cast vote now",age);
}
else {

    printf("your age is %d, so you are child and you can not cast vote now",age);
}

return 0;
}
