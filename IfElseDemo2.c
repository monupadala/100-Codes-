#include<stdio.h>
void main() {
    int balance;
    printf("enter the balance : ");
    scanf("%d", &balance);
    if (balance > 1000) {
        printf("sufficient balance");
    }
    else 
    printf("balance is low");
}
