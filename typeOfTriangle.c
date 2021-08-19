//
// Created by itstk on 26-Jul-21.
//
#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side3 + side1 > side2)) {
        if ((side1 > 0) && (side2 > 0) && (side3 > 0)) {
            if (side1 == side2 && side2 == side3) {
                printf("Equilateral triangle.");
            } else if (side1 == side2 || side1 == side3 || side2 == side3) {
                printf("Isosceles triangle.");
            } else {
                printf("Scalene triangle.");
            }
        } else {
            printf("Value is negative");
        }
    } else {
        printf("Triangle is not possible");
    }

    return 0;
}
