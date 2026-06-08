/*
Assignment : 01
Topic : Revisiting C Language
03 ||       Write a C program to swap values of two int variables.

*/
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    printf("Before Swapping =>");
    printf("a = %d, b = %d", a, b);
    c = a;
    a = b;
    b = c;
    printf("\nAfter Swapping =>");
    printf("a = %d, b = %d", a, b);
    return 0;
}