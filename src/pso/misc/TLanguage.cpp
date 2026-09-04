#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_string__9TLanguageFPvPvi(void *arg0, void *arg1, s32 arg2);

M2C_UNK fn_801A5778();
M2C_UNK fn_8038A058();
M2C_UNK fn_803DB05C(s32, u16, s16, s32);

void draw_string__9TLanguageFPvPvi(void *arg0, void *arg1, s32 arg2) {
    fn_801A5778();
    fn_803DB05C(arg2, M2C_FIELD(arg1, u16 *, 4), M2C_FIELD(arg1, s16 *, 0xA), M2C_FIELD(arg1, s32 *, 0));
    fn_8038A058();
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801A5694
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void decode_font_data__9TLanguageFPvPvii(void *arg0, void *arg1, s32 arg2, s32 arg3);
M2C_UNK draw_string__9TLanguageFPvPvi();
M2C_UNK fn_8038A058();
M2C_UNK fn_803DB05C(s32, u16, s16, u16 *);

M2C_UNK DCStoreRange(u16 *, M2C_UNK);

void decode_font_data__9TLanguageFPvPvii(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 n;
    s32 i;
    u16 *p;
    u16 temp_r3;

    draw_string__9TLanguageFPvPvi();
    n = M2C_FIELD(arg1, s16 *, 0xA);
    p = M2C_FIELD(arg1, u16 **, 0);
    for (i = n; i > 0; i--) {
        temp_r3 = *p;
        if (temp_r3 & 0x8000) {
            *p = temp_r3 ^ 0x7FFF;
        } else {
            *p = temp_r3 ^ 0xFFF;
            *p |= 0x7000;
        }
        p += 1;
    }
    DCStoreRange(M2C_FIELD(arg1, u16 **, 0), 0x40000);
    fn_803DB05C(arg3, M2C_FIELD(arg1, u16 *, 4), M2C_FIELD(arg1, s16 *, 0xA), M2C_FIELD(arg1, u16 **, 0));
    fn_8038A058();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E4A44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 read_file_header__9TLanguageFiPv(s32 arg0, u8 *arg1);
void read_into_buffer__9TLanguageFii(s32 arg0, s32 arg1);
s32 TLanguage__sub_801E4AF0();
u16 TLanguage__sub_801E4B40();
M2C_UNK move_data__6TLobbyFv(s32, s32, s32);
M2C_UNK bswap_16__FPUs(void *);
M2C_UNK bswap_32__FPUl(void *);

extern s32 lbl_805D5E58;

u16 read_file_header__9TLanguageFiPv(s32 arg0, u8 *arg1) {
    lbl_805D5E58 = arg0;
    read_into_buffer__9TLanguageFii((s32)(arg1), (s32)(4));
    M2C_FIELD(arg1, s32 *, 4) = TLanguage__sub_801E4AF0();
    M2C_FIELD(arg1, u16 *, 8) = TLanguage__sub_801E4B40();
    M2C_FIELD(arg1, u16 *, 0xA) = TLanguage__sub_801E4B40();
    bswap_32__FPUl(arg1 + 4);
    bswap_16__FPUs(arg1 + 8);
    bswap_16__FPUs(arg1 + 0xA);
    return M2C_FIELD(arg1, u16 *, 0xA);
}

extern s32 lbl_805D5E58;

void read_into_buffer__9TLanguageFii(s32 arg0, s32 arg1) {
    move_data__6TLobbyFv(arg0, lbl_805D5E58, arg1);
    lbl_805D5E58 += arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803DAF68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_index__9TLanguageFPvi(u8 *arg0, s32 arg1);

void set_index__9TLanguageFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

}
#endif
#endif
