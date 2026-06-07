#include "types.h"

typedef struct BitReader {
    u32 field_00;
    u32 field_04;
    u8  bits_left;
    u8  current_byte;
    u8  pad[2];
    u8* source;
} BitReader;

void func_8000F8EC(BitReader* reader) {
    reader->source = 0;
    reader->field_00 = 0;
    reader->field_04 = 0;
    reader->bits_left = 1;
}
