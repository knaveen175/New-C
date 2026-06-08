/*
Assignment : 01
Topic : Revisiting C Language
05 ||       Write a C function to check whether a given number is a Prime number or not.(TSRS)

*/
#include<stdio.h>
int check(int x)
{
    int i;
    for ( i = 2 ; i < x ; i++)
        if (x % i == 0)
            return 1;
    return 2;

}
int main()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = check(a);
    if (b == 1)
        printf("Not a Prime Number");
    else
        printf("Prime Number");
    return 0;
}