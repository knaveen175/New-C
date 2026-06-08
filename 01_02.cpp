/*
Assignment : 01
Topic : Revisiting C Language
02 ||       Write a C program to calaculate factorial of a number.

*/
#include<stdio.h>
int main()
{
    int a, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d",&a);
    for ( i = 1 ; i <= a ; i++)
        fact = fact*i;
    printf("Factorial of %d = %d", a, fact);
    return 0;
}