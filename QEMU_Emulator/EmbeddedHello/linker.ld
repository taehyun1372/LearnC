ENTRY(reset)

SECTIONS {
  . = 0x00000000;

  .isr_vector : {
    KEEP(*(.isr_vector))
  } >FLASH

  .text : {
    *(.text*)
    *(.rodata*)
  } >FLASH

  .data : {
    *(.data*)
  } >RAM

  .bss : {
    *(.bss*)
    *(COMMON)
  } >RAM
}
