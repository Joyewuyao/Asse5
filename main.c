#include <stdio.h>

extern int add(int a, int b); // 声明汇编语言中实现的函数

int main() {
    int result = add(10, 5);
    printf("Result: %d\n", result);
    return 0;
}
