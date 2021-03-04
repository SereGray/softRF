//11 програмная реализация радиосвязи ( стырено с VirtualWire)
#include<stdint.h>
#ifndef SOFT_RF
#define SOFT_RF

// перевод из полубайта (4 бит) в символ 6 бит с равным отношением 1 и 0
uint8_t from4to6_symbols[16] = {
    0xd,  0xe,  0x13, 0x15, 0x16, 0x19, 0x1a, 0x1c,
    0x23, 0x25, 0x26, 0x29, 0x2a, 0x2c, 0x32, 0x34
};

uint8_t training_symbol = 0x2a ;  // нужно послать ~ 6 таких последовательностей (для тренировки АРУ приемника?)
uint8_t start_symbol = 0x38 ;



#endif
