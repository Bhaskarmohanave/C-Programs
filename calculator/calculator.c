#include <stdio.h>
#include <string.h>
#include <math.h>

int user_operation(char user_input[], int num1, int num2);
int addition(int num1, int num2);
int subtraction(int num1, int num2);
int multiplication(int num1, int num2);
int division(int num1, int num2);
int exponentiation(int num1, int num2);
int modulus(int num1, int num2);


char user_input[20];
int num1;
int num2;


int main(){
    printf("Hello");

    while (1)
    {    
        printf("1.Addition (add, +)\n");
        printf("2.Subtraction (sub, -)\n");
        printf("3.Multiplication (mul, *)\n");
        printf("4.Division (div, /)\n");
        printf("5.Exponentiation (exp, **)\n");
        printf("6.Modulus (mod, %)\n");
        printf("7.Exit\n");
        printf("Choose operation: ");
        scanf("%s", user_input);
       
        if (strcmp(user_input, "exit") == 0){
            break;
        }else{
            user_operation(user_input, num1, num2);
        }
        
    }
}

int user_operation(char user_input[], int num1, int num2){
    if (strcmp(user_input, "add") == 0)
    {
        printf("Sum: %d\n", addition(num1, num2));
    }
    else if (strcmp(user_input, "sub") == 0)
    {
        printf("Differece: %d\n", subtraction(num1, num2));
    }
    else if (strcmp(user_input, "mul") == 0)
    {
        printf("Product: %d\n", multiplication(num1, num2));
    }
    else if (strcmp(user_input, "div") == 0)
    {
        printf("Quotient: %d\n", division(num1, num2));
    }
    else if (strcmp(user_input, "exp") == 0)
    {
        printf("Power:  %d\n", exponentiation(num1, num2));
    }
    else if (strcmp(user_input, "mod") == 0)
    {
        printf("Remainder: %d\n", modulus(num1, num2));
    }
    else
    {
        printf("Choose correct operation.\n\n");
    }
    
}

int addition(int num1, int num2){
    printf("Enter Augend: ");
    scanf("%d", &num1);

    printf("Enter Addend: ");
    scanf("%d", &num2);

    return num1 + num2;
}

int subtraction(int num1, int num2){
    printf("Enter Minend: ");
    scanf("%d", &num1);

    printf("Enter Subtrahend: ");
    scanf("%d", &num2);

    return num1 - num2;
}

int multiplication(int num1, int num2){
    printf("Enter Multiplicand: ");
    scanf("%d", &num1);

    printf("Enter Multiplier: ");
    scanf("%d", &num2);

    return num1 * num2;
}

int division(int num1, int num2){
    printf("Enter Dividend: ");
    scanf("%d", &num1);

    printf("Enter Divisor: ");
    scanf("%d", &num2);

    return num1 / num2;
}

int exponentiation(int num1, int num2){
    printf("Enter Base: ");
    scanf("%d", &num1);

    printf("Enter Power: ");
    scanf("%d", &num2);

    return pow(num1, num2);
}

int modulus(int num1, int num2){
    printf("Enter Dividend: ");
    scanf("%d", &num1);

    printf("Enter Divisor: ");
    scanf("%d", &num2);

    return num1 % num2;
}

