#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800D7E10 { char pad[0x18]; };
struct VObj_800D7E10 : Base_800D7E10 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};

extern "C" {

void *TDeadSpot__sub_800D7D74(void *arg0, s16 arg1);
void *TDeadSpot__sub_800D7DCC(void *arg0);
void TDeadSpot__sub_800D7E10(void *arg0);
void TDeadSpot__sub_800D7F08(void *, int);
void TDeadSpot__sub_800D7F60(void *);
void __dl__7TObjectFPv(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(u32);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804949D8[];

void *TDeadSpot__sub_800D7D74(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804949D8;
        TDeadSpot__sub_800D7F08(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804949D8[];

void *TDeadSpot__sub_800D7DCC(void *arg0) {
    TDeadSpot__sub_800D7F60(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804949D8;
    M2C_FIELD(arg0, u32 *, 0x30) = 8;
    return arg0;
}

void TDeadSpot__sub_800D7E10(void *arg0) {
    u32 tmp34 = M2C_FIELD(arg0, u32 *, 0x34);
    if ((tmp34 == 0U) || (all_parents_unqueued_for_destruction__7TObjectFv(tmp34) == 0)) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) >= (s32) M2C_FIELD(arg0, s32 *, 0x30)) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        ((VObj_800D7E10 *)arg0)->m4();
    }
}

}
