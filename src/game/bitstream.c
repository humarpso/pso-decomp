#include "types.h"

typedef struct BitReader {
    u32 field_00;
    u32 field_04;
    u8  bits_left;
    u8  current_byte;
    u8  pad[2];
    u8* source;
} BitReader;

s32 func_8000F868(BitReader* reader) {
    s32 cur;
    s32 bit;
    u8 bits_left;

    bits_left = reader->bits_left;
    bits_left--;
    reader->bits_left = bits_left;
    if (bits_left == 0) {
        u8* ptr = reader->source;
        reader->source = ptr + 1;
        reader->current_byte = *ptr;
        reader->bits_left = 8;
    }
    cur = reader->current_byte;
    bit = cur & 1;
    reader->current_byte = cur >> 1;
    return bit;
}

void func_8000F8EC(BitReader* reader) {
    reader->source = 0;
    reader->field_00 = 0;
    reader->field_04 = 0;
    reader->bits_left = 1;
}
