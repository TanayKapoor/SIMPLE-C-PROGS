//
// Created by Tanay on 09-Aug-21.
//

#include <stdio.h>
#include <math.h>

int main(){
    double num1, num2, num3, desc, r1, r2, real, imag;
    printf("Enter the numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    desc = num2 * num2 - 4 * num1 * num3;

    if (desc > 0) {
        r1 = (-num2 + sqrt(desc)) / (2 * num1);
        r2 = (-num2 - sqrt(desc)) / (2 * num1);

        printf("First root is %.2lf and second root is %.2lf", r1, r2);
    } else if (desc == 0) {
        r1 = r2 = -num2 / (2 * num1);
        printf("Both roots are equal %.2lf", r1);
    } else {
        real = -num2 / (2 * num1);
        imag = sqrt(-desc) / (2 * num1);
        printf("First root = %.2lf+%.2lfi and second root = %.2f-%.2fi", real, imag);
    }

    return 0;
}
