#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TNpcPlayer__sub_8007206C(int, int);
void *get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);
s32 TCharaMaking__sub_8028DE78(int);
void fn_8028DBC4(s32 _w0);
}

extern "C" {

int TAdSinglePlyChrSelectGC__sub_8028DC14(void);
int TAdSinglePlyChrSelectGC__sub_8028DC1C(void* p);
void *get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);

void fn_8028DBC4(s32 _w0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)(((s32)get_char_index__23TAdSinglePlyChrSelectGCFUi((s32)((int) (0xFFFF)))) + 0x370);
    TNpcPlayer__sub_8007206C((int) (temp_r31), (int) (TCharaMaking__sub_8028DE78((int) (0))));
    M2C_FIELD(temp_r31, s8 *, 0x30) = -1;
}

int TAdSinglePlyChrSelectGC__sub_8028DC14(void) { return 1; }

int TAdSinglePlyChrSelectGC__sub_8028DC1C(void* p) { fn_8028DBC4((s32)((void*)(p))); return 1; }

}
