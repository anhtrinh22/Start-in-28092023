#include<stdio.h>

float perimeter(float a, float b);
float acreage(float a, float b);

void main() {
    float num1, num2;
    printf("\nPerimeter And Acreage!!!");
    printf("First Number: ");
    scanf("%f", &num1);
    printf("Second Number: ");
    scanf("%f", &num2);

    float result1 = perimeter(num1, num2);
    printf("%f", result1);
    float result2 = acreage(num1, num2);
    printf("%f" result2);
}

float perimeter(float a, float b){
    printf("Perimeter: ");
    return (a+b)*2;
}

float acreage(float a, float b){
    printf("Acreage: ");
    return a*b;
}