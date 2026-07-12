#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define PADV virtual void CAT(f,__LINE__)();
struct Base_A_80213788 { char pad[0x18]; };
struct V_A_80213788 : Base_A_80213788 {
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m7(s32, s32);
    virtual s32 m8();
};
struct Base_A_8021383c { char pad[0x18]; };
struct V_A_8021383c : public Base_A_8021383c {
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void m7(int, int);
    virtual s32 m8();
};
struct Base_802138F0 { char pad[0x18]; };
struct VObj_802138F0 : Base_802138F0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(s32, s32);
    virtual s32 m8();
};

extern "C" {

void handle_close__22THunterGuildSeqOfflineFPv(void *arg0);
void update_close_shop__22THunterGuildSeqOfflineFPv(void *arg0);
void update_shop_close__22THunterGuildSeqOfflineFPv(void *arg0);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
M2C_UNK TQuestListVM__sub_80073DC4(void *, M2C_UNK);

void update_shop_close__22THunterGuildSeqOfflineFPv(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x38);
    if (temp_r3 != NULL) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 1) {
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A_80213788 *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A_80213788 *) arg0)->m7(0xC, 1);
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
            TQuestListVM__sub_80073DC4(arg0, 0xC);
        }
    }
}

void update_close_shop__22THunterGuildSeqOfflineFPv(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x38);
    if (p != 0) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(p) == 0) {
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A_8021383c *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A_8021383c *) arg0)->m7(0xC, 1);
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
            TQuestListVM__sub_80073DC4(arg0, 0xC);
        }
    }
}

void handle_close__22THunterGuildSeqOfflineFPv(void *arg0) {
    if ((((VObj_802138F0 *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        ((VObj_802138F0 *)arg0)->m7(0xC, 1);
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        TQuestListVM__sub_80073DC4(arg0, 0xC);
    }
}

}
