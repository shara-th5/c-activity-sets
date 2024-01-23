//2. Write a C program to add two numbers.
#include<stdio.h>
int input()
{
    int x;
    printf("Enter the first number");
    scanf("%d",&x);
    return x;
}
int add(int a,int b)
{
    int sum;
    sum=0;
    sum=a+b;
    return sum;
}
void output(int a,int b, int sum)
{
    printf("the sum of %d and %d is %d",a,b,sum);
}
int main()
{
    int a,b,sum;
    a=input();
    b=input();
    sum=add(a,b);
    output(a,b,sum);
    return 0;
}
