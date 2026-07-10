#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_click__12TQuestListVMFPv(void *arg0);
void invoke_callback_and_queue_destruction__12TQuestListVMFPv(void *arg0);
M2C_UNK fn_80073DC4(void *, s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

struct Base_802186E4 { char pad[0x18]; };
struct VObj_802186E4 : Base_802186E4 {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();
    virtual void m4();virtual void m5();virtual void m6();
    virtual void m7(int a, int b);
    virtual int m8();
};

void handle_click__12TQuestListVMFPv(void *arg0) {
    VObj_802186E4 *obj = (VObj_802186E4 *) arg0;
    if (obj->m8() != 0) {
        obj->m7(0x19, 1);
        fn_80073DC4(arg0, M2C_FIELD(arg0, s32 *, 0x23B4));
    }
}

void invoke_callback_and_queue_destruction__12TQuestListVMFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x23C0);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(arg0);
}

}
