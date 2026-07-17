#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802136A4 { u8 pad[0x18]; };
struct VObj_802136A4 : Base_802136A4 {
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9(s32, s32);
    virtual s32 m10();
};

extern "C" {

void open_judgment_item_window__22THunterGuildSeqOfflineFPv(void *arg0);
s32 TQuestListVM__sub_80073DC4(void *, s32);
s32 TShopJudgmentItemWindow__sub_80266388(s32, u16, s32, s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 TWindowSubComCard__sub_80265C10(s32, s32);
s32 TWindowSubComCard__sub_8026CBB8(s32);
s32 fn_8024422C(s32, f32, f32);
f32 get_scale__15TShopWindowBaseFv(void *);
u16 obj_getField1c(s32);

void open_judgment_item_window__22THunterGuildSeqOfflineFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;

    if ((((VObj_802136A4 *)arg0)->m10() != 0)
        && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        temp_r31 = (u16)obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, s32 *, 0x3C) = TShopJudgmentItemWindow__sub_80266388(TWindowSubComCard__sub_8026CBB8(0x2B), temp_r31, 0, 0);
        TWindowSubComCard__sub_80265C10(M2C_FIELD(arg0, s32 *, 0x3C), 1);
        temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
        fn_8024422C(M2C_FIELD(arg0, s32 *, 0x3C), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
        ((VObj_802136A4 *)arg0)->m9(8, 1);
        TQuestListVM__sub_80073DC4(arg0, 7);
    }
}

}
