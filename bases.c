/*
 * bases.c
 *          --- 以十进制、八进制、十六进制打印十进制100
 *
 * 显示八进制和十六进制
 * 以十进制显示数字：%d
 * 以八进制显示数字：%o
 * 以十六进制显示数字：%x
 * 另外显示的各禁止的前缀0、0x和0X  必须分别使用%#o、%#x、%#X
 */
#include "stdio.h"

void bases() {

    int x = 100;

    printf("dec = %d ;octal = %o; hex = %x\n",x,x,x);

    printf("dec = %d ;octal = %#o; hex = %#x\n",x,x,x);
}