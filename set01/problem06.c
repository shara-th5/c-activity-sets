//6. Write a C program to compare three numbers using **pass by reference**
#include<stdio.h>
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int input(int *a, int *b, int *c)
{
    int x;
    printf("Enter the first number");
    scanf("%d",&x);
    return x;
}
void compare(int a, int b, int c, int *largest)
{
    if (a>=b && a>=c)
    {
        *largest = a;
    }
    else if (b>=a && b>=c)
    {
        *largest = b;
    }
    else if (c>=a && c>b)
    {
        *largest = c;
    }
}
void output(int a, int b, int c, int largest)
{
    if(a==b&&b==c)
    {
    printf("they are equal");
    }
    else
    {
    printf("the largest btw %d and %d and %d is %d",a,b,c,largest);
    }
}
int main()
{
    int a,b,c,largest;
    a=input(&a,&b,&c);
    b=input(&a,&b,&c);
    c=input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}