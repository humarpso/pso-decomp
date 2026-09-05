#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4(u32);
};
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
u32 TPhotonMylla__sub_80154CB4(int);
s32 is_valid_and_active__10TObjPlayerFUi(int);
s32 is_active__12TTecReverserFPv();
void run_task__12TTecReverserFv(u8 *arg0);
}

extern "C" {

void *__dt__12TTecReverserFPvs(void *arg0, s16 arg1);
void *__dt__12TTecReverserFv(void *arg0, s16 arg1);
void create__12TTecReverserFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__12TTecReverserFv(void);
void update__12TTecReverserFPv(u8 *arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, M2C_UNK);
void *TTecReverser__ct(void *, void *, void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
void destroy_technique_base__9TTecLukerFPvs(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804CCC28[];

void *__dt__12TTecReverserFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCC28;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void update__12TTecReverserFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) == 0xA) {
        TObjEneDellBiter__sub_80087350(arg0 + 0x2C, 0x38);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) > 0xC8) {
        queue_destruction__7TObjectFv(arg0);
    }
}

void render__12TTecReverserFv(void) {  }

void run_task__12TTecReverserFv(u8 *arg0) {
    u32 temp_r31;
    M2C_FIELD(arg0, u32 *, 0x1C) = TPhotonMylla__sub_80154CB4((int) (M2C_FIELD(arg0, u16 *, 0xB4)));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xEC) == 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_r31 = TPhotonMylla__sub_80154CB4((int) (M2C_FIELD(arg0, u16 *, 0xF0)));
    if ((is_active__12TTecReverserFPv() == 0) && (is_valid_and_active__10TObjPlayerFUi((int) (temp_r31)) != 0)) {
        ((VObj_18 *)(arg0))->m4(temp_r31);
    }
    queue_destruction__7TObjectFv((void *) (arg0));
}

void create__12TTecReverserFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x148);
    if (o != NULL) {
        TTecReverser__ct(o, arg0, arg1, arg2, arg3);
    }
}

extern M2C_UNK __vt__12TTecReverser[];

void *__dt__12TTecReverserFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TTecReverser;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
