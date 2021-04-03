# C
 看看C
 
1. 两大系列的数据类型： 整数类型、浮点类型.
2. 程序需要使用数据，即承载信息的数字和字符。
3. 有些数据类型在程序使用之前已经预先设定好了
   1. 在整个程序的运行过程中没有变化，这些称为常量（constant）
    2. 其他数据在程序运行运行期间可能会改变或被赋值,这些称为变量（variable）

数据关键字
1. int                整数基本类型
2. short              用于提供基本整数类型是变式，例如unsigned short int 和 long long int
3. long               用于提供基本整数类型是变式，例如unsigned short int 和 long long int
4. unsigned           用于提供基本整数类型是变式，例如unsigned short int 和 long long int
5. char               用于指定字母和其他字符（如：#、$、%、*）,也可以表示较小的整数
6. float              表示带小数点的整数
7. double             表示带小数点的整数
8. _Bool              表示布尔值  true false
9. _Complex           负数
10. _Imaginary        虚数

运算符
1. sizeof()

函数
1. scanf()

```c
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
/*
 * dec = 100 ;octal = 144; hex = 64
 * dec = 100 ;octal = 0144; hex = 0x64
 */
```

---
# 字符串和二格式化输入/输出

1. 函数   strlen();
2. 关键字 const;
3. 字符串
4. 如何创建存储字符串
5. 如何使用strlen()函数获取字符串的长度
6. 用C预处理器指令#define和ANSIC的const修饰符创建符号常量















