#define APB_UART0_BASE  0x4000C000ul // QEMU lm3s6965evb의 UART0 주소
#define __REG32(x)      (*((volatile unsigned int *)(x)))
#define UART_DR(base)   __REG32(base + 0x000)
#define UART_FR(base)   __REG32(base + 0x018)
#define UART_FR_TXFF    (1 << 5)
#define UART_CR(base)   __REG32(base + 0x030)
#define UART_IBRD(base) __REG32(base + 0x024)
#define UART_FBRD(base) __REG32(base + 0x028)
#define UART_LCRH(base) __REG32(base + 0x02C)
#define UART_CC(base)   __REG32(base + 0xFC8)

class UART {
public:
    static void init() {
        UART_CR(APB_UART0_BASE) = 0x0;
        UART_IBRD(APB_UART0_BASE) = 27;   // 50MHz / (16 * 115200) ≈ 27
        UART_FBRD(APB_UART0_BASE) = 8;
        UART_LCRH(APB_UART0_BASE) = (3 << 5); // 8-bit, no parity, 1 stop bit
        UART_CC(APB_UART0_BASE) = 0x0;
        UART_CR(APB_UART0_BASE) = (1 << 0) | (1 << 8) | (1 << 9); // UARTEN, TXE, RXE
    }

    static void putc(char ch) {
        while (UART_FR(APB_UART0_BASE) & UART_FR_TXFF); // Wait if TX FIFO is full
        UART_DR(APB_UART0_BASE) = ch;
    }

    static void puts(const char* str) {
        while (*str) putc(*str++);
    }
};

extern "C" int main() {
    UART::init();
    UART::puts("Hello from UART 1!\n");
    UART::puts("Hello from UART 2!\n");
    UART::puts("Hello from UART 3!\n");
    while (1);
}
