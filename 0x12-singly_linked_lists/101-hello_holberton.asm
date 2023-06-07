section .data
    message db 'Hello, Holberton', 0
    format db '%s', 10, 0

section .text
    global main
    extern printf

main:
    ; Allocate space for the arguments on the stack
    sub rsp, 8

    ; Move the format string address into the stack
    mov rdi, format

    ; Move the message address into the stack
    mov rsi, message

    ; Call printf
    xor eax, eax
    call printf

    ; Restore the stack pointer
    add rsp, 8

    ; Exit the program
    xor eax, eax
    ret
