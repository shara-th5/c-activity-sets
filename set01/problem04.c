//4. Write a C program to add two numbers using **pass by reference**
#include<stdio.h>
void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
void input(int *a, int *b)
{
    printf("enter the first numbers");
    scanf("%d",a);
    printf("enter the second numbers");
    scanf("%d",b);
}
void add(int a, int b, int *sum)
{
    *sum=0;
    *sum=a+b;
}
void output(int a, int b, int sum)
{
    printf("the sum of %d and %d is %d",a,b,sum);
}
int main()
{
    int a,b,sum;
    input(&a,&b);
    add(a,b,&sum);
    output(a,b,sum);
    return 0;
}