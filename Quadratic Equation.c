#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c;
    float root1, root2;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    double d = b * b - 4 * a * c;

    // condition for real and different roots
    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2.0 * a);
        root2 = (-b - sqrt(d)) / (2.0  * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    //condition for real and equal roots
    else if (d == 0)
    {
        root1 = root2 = -b / (2.0 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }

    // if roots  not equal
    else
    {
        printf("roots are imaginary");
    }

    return 0;
}
