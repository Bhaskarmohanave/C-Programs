#include <stdio.h>
#include <string.h>
#include <math.h>

char* user_input();
// int arthemetic(int num1, int num2);
int addition(int num1, int num2);
int subtraction(int num1, int num2);

int main(){
    int first_num;
    int second_num;

    printf("Choose Option:\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exponentiation\n");

    // scanf("Enter First Number: \n");
    // scanf("Enter Second Number: \n");
    char user_input[20];
    printf("Enter Operation: ");
    scanf("%s", &user_input);

    printf("Enter first number: ");
    scanf("%i", &first_num);

    printf("Enter second number: ");
    scanf("%i", &second_num);

    if (strcmp(user_input, "add") == 0){
        printf("%d", addition(first_num, second_num));
    }else if (strcmp(user_input, "sub") == 0){
        printf("%d", subtraction(first_num, second_num));
    }
    
    else{
        printf("Not succeed");
    }
}

int addition(int num1, int num2){
    return num1 + num2;
}

int subtraction(int num1, int num2){
    return num1 - num2;
}
int multiplication(int num1, int num2){
    return num1 * num2;
}
int division(int num1, int num2){
    return num1 / num2;
}
int exponentiation(int num1, int num2){
    return pow(num1, num2);
}