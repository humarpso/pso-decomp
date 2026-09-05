#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual s32 m30();
    virtual s32 m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual M2C_UNK m60();
    virtual M2C_UNK m61();
};
extern "C" {
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
void update_state__14TObjVoloptCageFPv(void *arg0);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjVoloptCage__sub_800C76F0(void *);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, int);
void run_task__14TObjVoloptCageFv(u8 *arg0);
}

extern "C" {

void TLobby__sub_80049568(void);
void obj_clear_flag30_20000(void *arg0);
void obj_set_flag_20000(void *arg0);
void update_state__14TObjVoloptCageFPv(void *arg0);
M2C_UNK TObjVoloptCage__sub_80048CDC();
M2C_UNK TObjVoloptCage__sub_80048E80();
M2C_UNK TObjVoloptCage__sub_80049000();
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
M2C_UNK update_capture__14TObjVoloptCageFPv();

void update_state__14TObjVoloptCageFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 7:
        TObjVoloptCage__sub_80049000();
        return;
    case 1:
        update_capture__14TObjVoloptCageFPv();
        return;
    case 4:
        TObjVoloptCage__sub_80048E80();
        return;
    case 5:
        TObjVoloptCage__sub_80048CDC();
        return;
    }
}

    extern int lbl_805D4C3C;

void run_task__14TObjVoloptCageFv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjVoloptCage__sub_800C76F0((void *) (arg0));
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 7) {
        if (((VObj_18 *)(arg0))->m31() != 0) {
            ((VObj_18 *)(arg0))->m61();
        } else if (((VObj_18 *)(arg0))->m30() != 0) {
            ((VObj_18 *)(arg0))->m60();
        }
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            update_state__14TObjVoloptCageFPv((void *) (arg0));
        }
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    update_state__14TObjVoloptCageFPv((void *) (arg0));
    update_prev_position__10TObjPlayerFPv((void *) (arg0));
    copy_position__20TBoss3VoloptHiraisinFi((void *) (arg0));
    TObjPlayer__sub_801B4A18((void *) (arg0), (int) (-1));
}

void TLobby__sub_80049568(void) { lbl_805D4C3C = 1; }

void obj_set_flag_20000(void *arg0) {
    obj_setFlags30(arg0, 0x20000);
}

void obj_clear_flag30_20000(void *arg0) {
    obj_clearFlags30(arg0, 0x20000);
}

}
