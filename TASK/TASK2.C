/*
Write a program to check the whether the number is odd or even 
*/
#include<stdio.h>
int main()
{
    int no;

    printf("Enter the no:");
    scanf("%d", &no);

    if(no % 2 == 0)
       printf("The number is even");
    else
       printf("The number is odd");   
}
