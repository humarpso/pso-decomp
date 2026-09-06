#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_4560ce { char pad[0x18]; };

struct VObj_18_4560ce : VBase_18_4560ce {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4(u32);
};

extern "C" {
u8 * TPhotonMylla__sub_80154CB4(u16);
u8 * TBoss3Volopt__sub_80232EC0(void *, s32, s32, s32);
s32 is_parents_unqueued__9TTecLukerFUi(u32);
s32 is_valid_and_active__10TObjPlayerFUi(u32);
M2C_UNK queue_destruction__7TObjectFv(void *);
void *__nw__7TObjectFUl(int);
extern s32 tl_07;
void run_task__10TTecGrantsFv(u8 *arg0);
}

extern "C" {

void *__dt__10TTecGrantsFv(void *arg0, s16 arg1);
void create__10TTecGrantsFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__10TTecGrantsFv(void);
void *TTecGrants__ct(void *, void *, void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_technique_base__9TTecLukerFPvs(void *, int);

void render__10TTecGrantsFv(void) {  }

void create__10TTecGrantsFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x14C);
    if (o != NULL) {
        TTecGrants__ct(o, arg0, arg1, arg2, arg3);
    }
}

extern M2C_UNK __vt__10TTecGrants[];

void run_task__10TTecGrantsFv(u8 *arg0) {
    u32 temp_r3;
    u8 *temp_r3_2;
    M2C_FIELD(arg0, u8 **, 0x1C) = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0xB4));
    if ((void *) M2C_FIELD(arg0, u8 **, 0x1C) == NULL) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xEC) == 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_r3 = (unsigned long) (TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0xF0)));
    if ((is_parents_unqueued__9TTecLukerFUi(temp_r3) != 0) && (is_valid_and_active__10TObjPlayerFUi(temp_r3) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x148) == 0)) {
        temp_r3_2 = (u8 *)(((u8 *)__nw__7TObjectFUl((int)(0x3C))));
        if (temp_r3_2 != NULL) {
            TBoss3Volopt__sub_80232EC0(temp_r3_2, (s32) temp_r3, (s32) M2C_FIELD(arg0, s16 *, 0x78), tl_07);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x148) = (s32) (M2C_FIELD(arg0, s32 *, 0x148) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x148) > 0x1E) {
        if ((temp_r3 != 0) && (is_parents_unqueued__9TTecLukerFUi(temp_r3) != 0) && (is_valid_and_active__10TObjPlayerFUi(temp_r3) != 0)) {
            ((VObj_18_4560ce *)(arg0))->m4(temp_r3);
        }
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

void *__dt__10TTecGrantsFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TTecGrants;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
