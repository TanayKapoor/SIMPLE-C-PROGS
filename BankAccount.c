//
// Created by itstk on 19-Jul-21.
//

#include <stdio.h>

int main(){
    int age, deposit;
    printf("Enter age and amount deposited: ");
    scanf("%d %d", &age, & deposit);
    if (age >= 21 && deposit >= 100)
        printf("Account type A");
    else if (age < 21 && deposit >= 100)
        printf("Account type B");
    else if (age > 21 && deposit <= 100)
        printf("Account type C");
    else
        printf("Do not open account");

    return 0;
}