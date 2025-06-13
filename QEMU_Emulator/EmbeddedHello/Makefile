CROSS = arm-none-eabi
CFLAGS = -mcpu=cortex-m3 -mthumb -Wall -g -O0 -ffreestanding -nostdlib -nostartfiles
LDSCRIPT = linker.ld

all: hello.elf

hello.elf: vectors.o main.o
	$(CROSS)-gcc $(CFLAGS) -T $(LDSCRIPT) -o $@ $^

vectors.o: vectors.s
	$(CROSS)-gcc $(CFLAGS) -c $< -o $@

main.o: main.cpp
	$(CROSS)-gcc $(CFLAGS) -x c++ -c $< -o $@

clean:
	rm -f *.o *.elf
