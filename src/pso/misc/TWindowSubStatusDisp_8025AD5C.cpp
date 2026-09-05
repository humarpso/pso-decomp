#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TWindowSubSymbolChatPartsSet__sub_8025B050(u8 *arg0);
void TWindowSubSymbolChatPartsSet__sub_8025B064(u8 *arg0);
extern const f32 lbl_805DCFE0;
void TWindowHelpItem__sub_8025B08C(u8 *arg0, f32 farg0, f32 farg1);
}

extern "C" {

void *TWindowSubStatusDisp__sub_8025AF0C(void *arg0, s16 arg1);
void TWindowSubStatusDisp__sub_8025B2D8(void);
void *TWindowSubStatusDisp__sub_8025B2DC(void *arg0, s16 arg1);
void TWindowSubSymbolChatPartsSet__sub_8025B0C4(void* p, f32 a, f32 b);
void fn_8025B078(void* p, f32 a, f32 b, f32 c, f32 d);
M2C_UNK __dl__FPv(void *);
M2C_UNK deleting_destructor__20TWindowSubStatusDispFPvs(void *, M2C_UNK);
M2C_UNK destroy__20TWindowSubStatusDispFPvs(void *, s16);
M2C_UNK free__11TOBoss4RockFUi(u32);

extern M2C_UNK lbl_804CFA28[];

void *TWindowSubStatusDisp__sub_8025AF0C(void *arg0, s16 arg1) {
    u16 temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CFA28;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            temp_r3 = M2C_FIELD(arg0, u16 *, 0);
            if (temp_r3 & 0x20) {
                M2C_FIELD(arg0, u16 *, 0) = (u16) (temp_r3 & 0xFFFFFFDF);
                free__11TOBoss4RockFUi(M2C_FIELD(arg0, u32 *, 0x20));
            }
        }
        deleting_destructor__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void TWindowSubSymbolChatPartsSet__sub_8025B050(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
    M2C_FIELD(arg0, f32 *, 0x28) = temp_f1;
}

void TWindowSubSymbolChatPartsSet__sub_8025B064(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x1C);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x24) = temp_f1;
}

void fn_8025B078(void* p, f32 a, f32 b, f32 c, f32 d) { *(f32*)((char*)p + 0x1c) = a; *(f32*)((char*)p + 0x20) = b; *(f32*)((char*)p + 0x24) = c; *(f32*)((char*)p + 0x28) = d; }

void TWindowHelpItem__sub_8025B08C(u8 *arg0, f32 farg0, f32 farg1) {
    f32 x, y;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (farg0 * lbl_805DCFE0);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (farg1 * lbl_805DCFE0);
    x = farg0 + M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (x * lbl_805DCFE0);
    y = farg1 + M2C_FIELD(arg0, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (y * lbl_805DCFE0);
}

void TWindowSubSymbolChatPartsSet__sub_8025B0C4(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x10) = a; *(f32*)((char*)p + 0x14) = b; }

void TWindowSubStatusDisp__sub_8025B2D8(void) {  }

extern M2C_UNK lbl_804CFA40[];

void *TWindowSubStatusDisp__sub_8025B2DC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CFA40;
        destroy__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
