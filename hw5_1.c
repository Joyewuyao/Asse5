#include <stdio.h>

int main() {
    int x = 10;
    int y;

    asm (
         "movl %1, %%eax;"
         "addl %%eax, %%eax;"
         "movl %%eax, %0;"
         : "=r" (y)   /* 输出操作数:将结果存储到y */
         : "r" (x)    /* 输入操作数:从x读取值 */
         : "%eax"     /* 被修改的寄存器列表:说明eax寄存器将被此内联汇编修改 */
        );

    printf("Result: %d\n", y);
    return 0;
}
