//
// Created by itstk on 19-Jul-21.
//
#include<stdio.h>

int main() {
    int a, b, c, temp;
    printf("Enter three numbers:");
    printf("\na:");
    scanf("%d", & a);
    printf("b:");
    scanf("%d", & b);
    printf("c:");
    scanf("%d", & c);
    temp = a > b ? (a > b ? a : c) : (b > c ? b : c);

    printf("%d is the largest number.", temp);
}

