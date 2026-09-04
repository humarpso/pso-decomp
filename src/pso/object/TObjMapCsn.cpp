#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__10TObjMapCsnFv(void);

void render__10TObjMapCsnFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8007A720
#include "types.h"

extern "C" {

void* get_data_ptr__10TObjMapCsnFPv(void* p);

void* get_data_ptr__10TObjMapCsnFPv(void* p) { return (char*)p + 0x1c; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007A728
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_map_count__10TObjMapCsnFv(void);

extern s32 lbl_805D5650;

s32 get_map_count__10TObjMapCsnFv(void) {
    return lbl_805D5650;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007A730
#include "types.h"

extern "C" {

void* init__10TObjMapCsnFPv(void* a0);
int init_and_return__10TObjMapCsnFi(void);

    extern const float lbl_805D9204;
void* init__10TObjMapCsnFPv(void* a0) { init_and_return__10TObjMapCsnFi(); *(int*)((char*)a0 + 0x8) = -1; *(float*)((char*)a0 + 0xc) = lbl_805D9204; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007A770
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 init_and_return__10TObjMapCsnFi(s32 arg0);
M2C_UNK fn_8007A7A0();

s32 init_and_return__10TObjMapCsnFi(s32 arg0) {
    fn_8007A7A0();
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80194674
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__10TObjMapCsnFPv(void *arg0);

extern M2C_UNK lbl_804B84C0[];

void update_state__10TObjMapCsnFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x84);
    if (temp_r0 == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x88) == 0) {
            M2C_FIELD(arg0, s32 *, 0x88) = 1;
        }
    } else {
        if ((u32) temp_r0 > 5U) {
            M2C_FIELD(arg0, s32 *, 0x84) = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x88) = (s32) lbl_804B84C0[M2C_FIELD(arg0, s32 *, 0x84)];
    }
    M2C_FIELD(arg0, s32 *, 0x88) = (s32) (M2C_FIELD(arg0, s32 *, 0x88) | 0x40000000);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80194934
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__10TObjMapCsnFi(s32 arg0);
s32 TObjMapCsn__ct(s32, s32, s32);
s32 get_map_count__10TObjMapCsnFv();
s32 __nw__7TObjectFUl(M2C_UNK);

s32 create__10TObjMapCsnFi(s32 arg0) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x254);
    if (var_r31 != 0) {
        var_r31 = TObjMapCsn__ct(var_r31, get_map_count__10TObjMapCsnFv(), arg0);
    }
    return var_r31;
}

}
#endif
#endif
