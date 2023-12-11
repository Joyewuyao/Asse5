; 使用NASM语法
global _add  ; 对外公开add符号
section .text
_add:
    mov eax, [esp+4] ; 第一个参数
    add eax, [esp+8] ; 加上第二个参数
    ret
