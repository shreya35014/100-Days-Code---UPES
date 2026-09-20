//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c, D, root1, root2, real, imag;
    printf("enter a, b, c:");
    scanf("%f %f %f", &a, &b, &c);
    D = b * b - 4 * a * c;
    if (D>0)
    {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("roots are real and distinct./n");
        printf("root1 = %.2f\n", root1);
        printf("root2 = %.2f\n", root2);
    }
    else if (D == 0)
    {
        root1 = -b / (2 * a);
        printf("roots are real and equal.\n");
        printf("root 1 = root 2 = %.2f\n", root1);
    }
    else
    {
        real = -b / (2 * a);
        imag = sqrt(-D) / (2 * a);
        printf("roots are imaginary/complex.\n");
        printf("root1 = %.2f + %.2fi\n", real, imag);
        printf("root2 = %.2f - %.2fi\n", real, imag);
    }
    return 0;
}
