#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
u32 TPhotonMylla__sub_80154CB4(int);
s32 is_parents_unqueued__9TTecLukerFUi();
s32 is_valid_and_active__10TObjPlayerFUi(int);
M2C_UNK TTecRaFoie__sub_80238828(void *, void *);
void run_task__10TTecRaFoieFv(u8 *arg0);
}

extern "C" {

void *__dt__10TTecRaFoieFv(void *arg0, s16 arg1);
void create__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void create_ex__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__10TTecRaFoieFv(void);
void *TTecRaFoie__ct(void *, void *, void *, void *, void *);
void *TTecRaFoie__sub_80238BA4(void *, void *, void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_technique_base__9TTecLukerFPvs(void *, int);

void render__10TTecRaFoieFv(void) {  }

void run_task__10TTecRaFoieFv(u8 *arg0) {
    u32 temp_r31;
    if ((u32) M2C_FIELD(arg0, u32 *, 0xE8) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    M2C_FIELD(arg0, u32 *, 0x1C) = TPhotonMylla__sub_80154CB4((int) (M2C_FIELD(arg0, u16 *, 0xB4)));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x148) == 1) {
        TTecRaFoie__sub_80238828((void *) (arg0), (void *) (arg0 + 0x7C));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xEC) == 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_r31 = TPhotonMylla__sub_80154CB4((int) (M2C_FIELD(arg0, u16 *, 0xF0)));
    if ((is_parents_unqueued__9TTecLukerFUi() != 0) && (is_valid_and_active__10TObjPlayerFUi((int) (temp_r31)) != 0)) {
        TTecRaFoie__sub_80238828((void *) (arg0), (void *) (temp_r31 + 0x2FC));
    }
}

void create__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x14C);
    if (o != NULL) {
        TTecRaFoie__ct(o, arg0, arg1, arg2, arg3);
    }
}

void create_ex__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x14C);
    if (o != NULL) {
        TTecRaFoie__sub_80238BA4(o, arg0, arg1, arg2, arg3);
    }
}

extern M2C_UNK __vt__10TTecRaFoie[];

void *__dt__10TTecRaFoieFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TTecRaFoie;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
