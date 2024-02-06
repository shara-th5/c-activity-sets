#include<stdio.h>
int input();
int sum_n_nos(int n);
void output(int n, int sum);
int input()
{
    int n;
    printf("Enter the no of values");
    scanf("%d",&n);
    return n;
}
int sum_n_nos(int n)
{
    int sum=0;
    for (int i=0;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}
void output(int n, int sum)
{
    printf("the sum of numbers from 1 to %d is %d", n, sum);
}
int main()
{
    int n, sum;
    n=input();
    sum=sum_n_nos(n);
    output(n, sum);
    return 0;
}