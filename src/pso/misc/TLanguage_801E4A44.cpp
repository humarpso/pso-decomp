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
M2C_UNK TLobby__sub_803DE778(s32, s32, s32);
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
    TLobby__sub_803DE778(arg0, lbl_805D5E58, arg1);
    lbl_805D5E58 += arg1;
}

}
