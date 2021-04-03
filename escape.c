/*
 * escape.c
 * --  使用转义序列
 */
#include "stdio.h"

void escape() {

    float salary;

    printf("\a Enter your desired monthly salary: "); // 1

    printf(" $_____ \b\b\b\b\b\b\b"); // 2

    scanf("%f", &salary);

    printf("\n\t$%.2f a month is $%.2f a year,", salary, salary * 12.0);  // 3

    printf("\r Gee!\n"); //4
}