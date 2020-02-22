#include <stdio.h>
#include <conio.h>

int main()
{
    int n, num1, num2, result;
    char option;
do{
    printf("\nwhat operation do you want to do?\n");
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    scanf("%d", &n);
    printf("please enter a number\n");
    scanf("%d", &num1);
    printf("please enter a second number\n");
    scanf("%d", &num2);
    switch(n)
    {
        case 1: result = num1 + num2;
            printf("addition of two numbers is: %d", result);
            break;
        case 2: result = num1 - num2;
            printf("subtraction of two numbers is: %d", result);
            break;
        case 3: result = num1 * num2;
            printf("multiplication of two numbers is %d", result);
            break;
        case 4: result = num1 / num2;
            printf("division of two numbers is %d", result);
            break;
        default: printf("wrong input");
    }
    printf("\n do you want to continue y/n?\n");
    option = getch();
}   while(option == 'y');
    getch();
    return 0;

}
