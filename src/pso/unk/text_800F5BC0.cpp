#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct StripRef_800F5BC0 { s16 *strip; s16 *uv; };

struct Provider_800F5BC0 { s32 unk0; s32 count; StripRef_800F5BC0 *refs; };

extern "C" {
void scroll_strip_uvs(Provider_800F5BC0 *arg0, s16 arg1, s16 arg2);
}

extern "C" {

M2C_UNK __dl__FPv(void *);
M2C_UNK free__11TOBoss4RockFUi(s32);

void scroll_strip_uvs(Provider_800F5BC0 *arg0, s16 arg1, s16 arg2) {
    s32 i;
    s16 *strip;
    s16 *uv;
    u32 n;
    u32 j;
    s32 len;
    s32 k;
    arg1 %= 256;
    arg2 %= 256;
    for (i = 0; i < arg0->count; i++) {
        strip = arg0->refs[i].strip;
        uv = arg0->refs[i].uv;
        n = *strip++ & 0x3FFF;
        for (j = 0; j < n; j++) {
            len = *strip++;
            if (len < 0) {
                len = -len;
            }
            for (k = 0; k < len; k++) {
                strip[1] = uv[0] + arg1;
                strip[2] = uv[1] + arg2;
                uv += 2;
                strip += 3;
            }
        }
    }
}

void *destroy_buffer_pair(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0xC));
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 8));
        M2C_FIELD(arg0, s32 *, 8) = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
