/*
 * platinum.c
 *  --  your weight  in platinum
 */
#include <stdio.h>


void platinum() {

    float weight;  // 你的体重

    float value;  //  相等重量的白金价值

    printf("Are you worth your weight in platinum?\n");

    printf("Let's check it out. \n");

    printf("Please enter your weight in pounds: ");

    // 获取用户的输入
    scanf("%f", &weight);

    value = 1700.0 * weight * 14.5833;

    printf("Your weight in platinum is worth $%.2f .\n",value);

    printf("You are easily worth that ! If platinum prices drop .\n");

    printf("eat more to maintain you value .\n");

}