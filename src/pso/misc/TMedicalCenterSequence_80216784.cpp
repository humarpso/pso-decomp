#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80216784 { char pad[0x18]; };
struct VObj_80216784 : Base_80216784 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual int m8();
};

extern "C" {

void handle_confirm__22TMedicalCenterSequenceFPv(void *arg0);
s32 TObjPlayer__sub_801AF734(s32);
s32 is_alive_and_ready__10TObjPlayerFi(s32);
u32 TObjPlayer__sub_801B4684(s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
M2C_UNK TQuestListVM__sub_80073DC4(void *, M2C_UNK);

void handle_confirm__22TMedicalCenterSequenceFPv(void *arg0) {
    struct VObj_80216784 *o = (struct VObj_80216784 *)arg0;
    if ((o->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        if ((TObjPlayer__sub_801B4684(M2C_FIELD(arg0, s32 *, 0x24)) != 0U) || ((is_alive_and_ready__10TObjPlayerFi(M2C_FIELD(arg0, s32 *, 0x24)) != 0) && (TObjPlayer__sub_801AF734(M2C_FIELD(arg0, s32 *, 0x24)) == 0))) {
            TQuestListVM__sub_80073DC4(arg0, 7);
            return;
        }
        TQuestListVM__sub_80073DC4(arg0, 6);
    }
}

}
