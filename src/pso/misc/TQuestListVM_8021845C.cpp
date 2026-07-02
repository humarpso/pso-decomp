#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8021845C { char pad[0x18]; };
struct VObj_8021845C : Base_8021845C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8();
};
struct Base_802184C8 { char pad[0x18]; };
struct VObj_802184C8 : Base_802184C8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};
struct Base_80218500 { char pad[0x18]; };
struct VObj_80218500 : Base_80218500 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_80218538 { char pad[0x18]; };
struct VObj_80218538 : Base_80218538 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};

extern "C" {

void TQuestListVM__vt4(void *arg0);
void TQuestListVM__vt5(void *arg0);
void TQuestListVM__vt7(void *arg0);
s32 TQuestListVM__vt8(void *arg0);
s32 TShopWindowBase__sub_80223A48(void *);

s32 TQuestListVM__vt8(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x23A0);
    if (temp_r3 != NULL) {
        if (((VObj_8021845C *)temp_r3)->m8() == 0) {
            return 0;
        }
        return TShopWindowBase__sub_80223A48(arg0) ? 1 : 0;
    }
    return 1;
}

void TQuestListVM__vt7(void *arg0) {
    struct VObj_802184C8 *o = (struct VObj_802184C8 *)M2C_FIELD(arg0, void **, 0x23A0);
    if (o != NULL) {
        o->m7();
    }
}

void TQuestListVM__vt5(void *arg0) {
    struct VObj_80218500 *o = (struct VObj_80218500 *)M2C_FIELD(arg0, void **, 0x23A0);
    if (o != NULL) {
        o->m5();
    }
}

void TQuestListVM__vt4(void *arg0) {
    struct VObj_80218538 *o = (struct VObj_80218538 *)M2C_FIELD(arg0, void **, 0x23A0);
    if (o != NULL) {
        o->m4();
    }
}

}
