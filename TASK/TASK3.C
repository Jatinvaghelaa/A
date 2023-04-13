#include<stdio.h>
int main()
{   
    int no1, no2;
    char op;

    printf("\nEnter an sign for calculating(+,-,/):");
    scanf("%c", &op);

    printf("\nEnter two values:");
    scanf("%d %d", &no1,&no2);
    
    switch (op)
    {
        case '+':
            printf("%d + %d = %d", no1, no2, no1 + no2);
            break;
            
        case '/':
            printf("%f / %f = %f", no1, no2, (float)no1 / (float)no2);
            break;
        
        case '-':
            printf("%d - %d = %d", no1, no2, no1 - no2);
            break;
        

        default:
            printf("\nError! Incorrect sign for calculating");
            break;
    }
}    
