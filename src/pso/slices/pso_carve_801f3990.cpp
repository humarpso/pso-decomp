#include "types.h"

extern "C" {

void fn_801F3A10(void* p);
s32 TLobby__sub_801E4570(s32);
s32 bswap_16__FPUs(s32);
s32 fn_8001960C();
s32 fn_8007EBB4(s32);
s32 fn_8007EBFC();
s32 fn_800F9D80();
s32 fn_800F9DF4(s32, s32);
s32 fn_801F3C24(s32);

int fn_801F3990(void) { return 0; }
int fn_801F39C4(void) { return 0; }
void fn_801F3A10(void* p) { *(u8*)((char*)p + 0x0) = 117; *(u8*)((char*)p + 0x1) = 3; }
void fn_801F3A24(s32 arg0) {
    s32 temp_r3;

    if (fn_800F9D80() >= 0) {
        temp_r3 = fn_8007EBFC();
        if (temp_r3 != 0) {
            fn_800F9DF4(arg0, temp_r3);
            fn_801F3C24(temp_r3);
            fn_8007EBB4(temp_r3);
        }
    }
}
int fn_801F3A80(void) { return 0; }
int fn_801F3AD8(void) { return 0; }

}
