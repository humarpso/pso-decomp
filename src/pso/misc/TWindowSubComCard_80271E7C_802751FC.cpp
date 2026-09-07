#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80275228_lbl_80517EE0 {
    M2C_UNK value;
    u8 remaining[0xB8];
};

extern "C" {
extern RecoveredGlobal_80275228_lbl_80517EE0 lbl_80517EE0;
M2C_UNK *TWindowSubComCard__sub_80275228(void);
}

extern "C" {

void* TWindowSubComCard__sub_8027523C(void* p);
void destroy_keyboard__17TWindowSubComCardFPv(void* p);
void* get_card_data_ptr__17TWindowSubComCardFPv(void* p);
s16 get_field_72__17TWindowSubComCardFPv(void* p);
void* get_name__17TWindowSubComCardFPv(void* p);
void* get_sub_obj__17TWindowSubComCardFPv(void* p);
void set_com_param__17TWindowSubComCardFii(s32 arg0, s32 arg1);
void set_display_page__17TWindowSubComCardFi(s32 arg0);
void set_flag_10__17TWindowSubComCardFPv(void* p);
void set_page__17TWindowSubComCardFPvs(void* p, s16 v);
s16 TWindowSubComCard__sub_80265BF8();
int fn_80247ED8(void*);
M2C_UNK set_card_window_flags__19TWindowKeyBoardHardFPvii(s32, s32, s32);

void set_com_param__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii(arg0, arg1 << 0x12, 0xFFFBFFFF);
}

typedef char RecoveredGlobal_80275228_lbl_80517EE0_size[sizeof(RecoveredGlobal_80275228_lbl_80517EE0) == 0xBC ? 1 : -1];
M2C_UNK *TWindowSubComCard__sub_80275228(void) {
    return &lbl_80517EE0.value;
}

void* get_card_data_ptr__17TWindowSubComCardFPv(void* p) { return (char*)p + 0x3b; }
void* TWindowSubComCard__sub_8027523C(void* p) { return (char*)p + 0x2a; }
void* get_name__17TWindowSubComCardFPv(void* p) { return (char*)p + 0x19; }
void* get_sub_obj__17TWindowSubComCardFPv(void* p) { return (char*)p + 0x8; }
void destroy_keyboard__17TWindowSubComCardFPv(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) fn_80247ED8(m); }
s16 get_field_72__17TWindowSubComCardFPv(void* p) { return *(s16*)((char*)p + 0x72); }
void set_page__17TWindowSubComCardFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x7a) = v; }
void set_flag_10__17TWindowSubComCardFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x10; }

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void set_display_page__17TWindowSubComCardFi(s32 arg0) {
    set_page__17TWindowSubComCardFPvs((void*)((void *) (arg0)), (s16)((int) (TWindowSubComCard__sub_80265BF8())));
}

}

}
