#include "types.h"

extern u8* glob_8003ECB0;
extern s32 glob_8003ECAC;

s32 func_80036328(u32 search_val) {
    u8* ptr = glob_8003ECB0;
    u32* field;
    s32 i;
    s32 count = glob_8003ECAC;

    for (i = 0; i < count; i++) {
        field = *(u32**)(ptr + 0xC);
        if (field != NULL && *field == search_val) {
            return i;
        }
        ptr += 0x18;
    }
    return -1;
}

s32 func_80036454(u32 search_val1, u32 search_val2) {
    u8* ptr = glob_8003ECB0;
    u32* field;
    s32 i;
    s32 count = glob_8003ECAC;

    for (i = 0; i < count; i++) {
        if (*(u32*)(ptr + 0x8) == search_val2) {
            field = *(u32**)(ptr + 0xC);
            if (field != NULL && *field == search_val1) {
                return i;
            }
        }
        ptr += 0x18;
    }
    return -1;
}
