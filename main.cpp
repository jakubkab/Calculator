#include <stdio.h>
int main()
{
        printf("Simple calc\n");
        while (true){
        printf("Enter first number: ");
        int number1 = 0;
        scanf("%d", &number1);
        printf("Enter second number: ");
        int number2 = 0;
        scanf("%d", &number2);
        if (number1 == 0 or number2 == 0)
        {
            return 0;
        }
        printf("%d + %d = %d\n", number1, number2, number1 + number2);
        printf("%d - %d = %d\n", number1, number2, number1 - number2);
        printf("%d * %d = %d\n", number1, number2, number1 * number2);
        printf("%d / %d = %d\n", number1, number2, number1 / number2);
        printf("%d %% %d = %d\n", number1, number2, number1 % number2);
    }
}