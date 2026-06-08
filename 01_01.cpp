/*
Assignment : 01
Topic : Revisiting C Language
01 ||       Write a C program to check whether a given number is even or odd.

*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a % 2)
        printf("Odd Number");
    else
        printf("Even Number");
    return 0;
}