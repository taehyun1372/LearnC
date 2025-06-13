    .section .isr_vector, "a", %progbits
    .word  0x20010000      // 초기 스택 포인터 (RAM 끝)
    .word  reset           // Reset Handler

    .text
    .global reset
reset:
    bl main
    b .
