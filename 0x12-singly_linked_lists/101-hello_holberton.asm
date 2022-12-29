section .data
    msg db 'Hello, Holberton', 10
    len equ $ - msg

section .text
    global _start

_start:
    mov rdi, msg
    mov rsi, len
    xor rax, rax
    call printf
    xor rax, rax
    mov rdi, 0
    call exit

