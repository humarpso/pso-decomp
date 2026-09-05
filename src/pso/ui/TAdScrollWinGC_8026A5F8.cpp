#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TWindowSubLog__sub_8026A664(u8 *arg0, f32 farg0);
int send_and_handle__6TLobbyFPvii(void *, int, int);
M2C_UNK TWindowMessageLog__sub_8026A494(void *);
void fn_8026A62C(u8 *arg0, s32 arg1);
}

extern "C" {

void TAdScrollWinGC__sub_8026A5F8(void* a0);
void advance_scroll__14TAdScrollWinGCFPvf(void* p, f32 v);
void fn_8026A61C(void* p, f32 v);

    extern const float lbl_805DD240;
void TAdScrollWinGC__sub_8026A5F8(void* a0) { *(float*)((char*)a0 + 0x84) = lbl_805DD240; *(float*)((char*)a0 + 0x6c) = lbl_805DD240; *(float*)((char*)a0 + 0x94) = lbl_805DD240; }

void advance_scroll__14TAdScrollWinGCFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x94) += v; }

void fn_8026A61C(void* p, f32 v) { *(f32*)((char*)p + 0x94) += v; }

void fn_8026A62C(u8 *arg0, s32 arg1) {
    send_and_handle__6TLobbyFPvii(arg0, arg1, 0x502);
    TWindowMessageLog__sub_8026A494((void *) (arg0));
}

void TWindowSubLog__sub_8026A664(u8 *arg0, f32 farg0) {
    if (farg0 != M2C_FIELD(arg0, f32 *, 0x3C)) {
        M2C_FIELD(arg0, f32 *, 0x3C) = farg0;
        M2C_FIELD(arg0, s32 *, 0x50) = 3;
    }
}

}
