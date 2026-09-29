#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern s32 lbl_805D5E58;
s32 TLanguage__sub_801E4B40(void);
extern s32 lbl_805D5E58;
s32 TLanguage__sub_801E4AF0(void);
}

extern "C" {

struct Base_801E4B68_801E4874 { char pad[0x50]; };
struct VObj_801E4B68_801E4874 : Base_801E4B68_801E4874 {
    virtual void m0();
};

void fn_801E4B68(void *arg0);
u16 read_file_header__9TLanguageFiPv(s32 arg0, u8 *arg1);
void read_into_buffer__9TLanguageFii(s32 arg0, s32 arg1);
M2C_UNK bswap_16__FPUs(void *);
M2C_UNK bswap_32__FPUl(void *);
M2C_UNK fn_801E4BCC(void *);
s32 get_camera_no__11TCameraCtrlFv();
s32 is_split_screen();
M2C_UNK move_data__6TLobbyFv(s32, s32, s32);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern s32 lbl_805D5E58;

u16 read_file_header__9TLanguageFiPv(s32 arg0, u8 *arg1) {
    lbl_805D5E58 = arg0;
    read_into_buffer__9TLanguageFii((s32)((s32)(arg1)), (s32)((s32)(4)));
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

s32 TLanguage__sub_801E4AF0(void) {
    s32 v = *(u8 *)lbl_805D5E58++;
    v |= *(u8 *)lbl_805D5E58++ << 8;
    v |= *(u8 *)lbl_805D5E58++ << 16;
    v |= *(u8 *)lbl_805D5E58++ << 24;
    return v;
}

s32 TLanguage__sub_801E4B40(void) {
    s32 lo = *(u8 *)lbl_805D5E58++;
    lo |= *(u8 *)lbl_805D5E58++ << 8;
    return lo;
}

void fn_801E4B68(void *arg0) {
    if ((is_split_screen() == 0) || (get_camera_no__11TCameraCtrlFv() == 0)) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x3C));
        ((VObj_801E4B68_801E4874 *)arg0)->m0();
        fn_801E4BCC(arg0);
    }
}

}
