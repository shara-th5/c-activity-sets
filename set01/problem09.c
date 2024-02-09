#include <stdio.h>

float input()
{
    float n;
    printf("Enter number: ");
    scanf("%f", &n);
    return n;
}

float square_root(float n)
{
    float x = n;
    float y = 1;
    float a = 0.000001;
    while (x - y > a)
    {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

void output(float n, float sqrroot)
{
    printf("Square root of %.1f is %.1f\n", n, sqrroot);
}

int main()
{
    float n = input();
    float sqrroot = square_root(n);
    output(n, sqrroot);
    return 0;
}
