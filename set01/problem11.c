#include <stdio.h>
struct _complex
{
    float real;
    float imaginary;
};
typedef struct _complex Complex;
Complex input_complex()
{
    Complex c;
    printf("Enter the real part: ");
    scanf("%f", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}
Complex add_complex(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}
void output(Complex a, Complex b, Complex sum)
{
    printf("The sum of %.1f+%.1fi and %.1f+%.1fi is %.1f+%.1fi\n", a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}
int main()
{
    Complex complex1, complex2, sum;
    printf("Enter the first complex number:\n");
    complex1 = input_complex();
    printf("Enter the second complex number:\n");
    complex2 = input_complex();
    sum = add_complex(complex1, complex2);
    output(complex1, complex2, sum);
    return 0;
}