#ifndef CLZ_GENERIC_H
#define	CLZ_GENERIC_H
#include <stdint.h>

#define clz(x) _Generic((x), \
     uint8_t : clz8,\
     uint16_t : clz16, \
     default : clz32 \
 )(x)

unsigned clz32(uint32_t x);
unsigned clz16(uint16_t x);
unsigned clz8(uint8_t x);

#endif
