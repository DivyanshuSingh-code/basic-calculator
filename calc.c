#include <stdio.h>

int main(){

    float num1,num2;
    char operater;
    printf("Basic Calculator\n");
    printf("\n\nEnter the two number\n");
    scanf(" %f %f", &num1, &num2);
    printf("Enter the operation (+,-,/,*)");
    scanf(" %c", &operater);

    switch (operater) {
        case '+':
        printf("%f", num1 + num2);
        break;
        case '-':
        printf("%f", num1 - num2);
        break;
        case '*':
        printf("%f", num1 * num2);
        break;
        case '/':
        printf("%f", num1 / num2);
        break;
    }
      
return 0;
}