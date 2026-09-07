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

struct RecoveredGlobal_8023A094_lbl_804CC1CC { M2C_UNK value; u8 remaining[0x340]; };
typedef char RecoveredGlobal_8023A094_lbl_804CC1CC_size[sizeof(RecoveredGlobal_8023A094_lbl_804CC1CC) == 0x344 ? 1 : -1];

struct RecoveredGlobal_8023A094___vt__12TTecReverser { M2C_UNK value; u8 remaining[0x24]; };
typedef char RecoveredGlobal_8023A094___vt__12TTecReverser_size[sizeof(RecoveredGlobal_8023A094___vt__12TTecReverser) == 0x28 ? 1 : -1];

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
u32 TPhotonMylla__sub_80154CB4(int);
s32 is_valid_and_active__10TObjPlayerFUi(int);
s32 is_active__12TTecReverserFPv();
void run_task__12TTecReverserFv(u8 *arg0);
s32 obj_getField1c(int);
s32 TObjPlayer__sub_8004433C(void *);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
s32 TTecAnti__sub_8022B35C(void *, void *);
s32 TTecAnti__sub_8022B3E8(void *, void *);
s32 fn_8022BE64(void *, void *, void *);
s32 fn_8022C10C(void *, void *, void *, void *);
extern RecoveredGlobal_8023A094_lbl_804CC1CC lbl_804CC1CC;
extern M2C_UNK __vt__12TTecReverser[];
extern s32 lbl_805D3818;
u8 *TTecReverser__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
}

extern "C" {

void *__dt__12TTecReverserFPvs(void *arg0, s16 arg1);
void *__dt__12TTecReverserFv(void *arg0, s16 arg1);
void create__12TTecReverserFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__12TTecReverserFv(void);
void update__12TTecReverserFPv(u8 *arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, M2C_UNK);
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
        TTecReverser__ct((u8 *)(o), (s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(arg3));
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
u8 *TTecReverser__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u32 temp_r3;
    fn_8022C10C((void *) (arg0), (void *) (arg1), (void *) (arg2), (void *) (arg4));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8023A094___vt__12TTecReverser *)&__vt__12TTecReverser).value;
    TObjPlayer__sub_8004433C((void *) (arg0 + 0xEC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3818;
    TTecAnti__sub_8022B35C((void *) (arg0 + 0x88), (void *) ((u8 *)&lbl_804CC1CC.value + 0x2EC));
    fn_8022BE64((void *) (arg0), (void *) (arg0 + 0x88), (void *) (arg4));
    TTecAnti__sub_8022B3E8((void *) (arg0 + 0xEC), (void *) (arg3));
    TBoss3Volopt__sub_8022675C((int) (0x4002A812), (void *) (arg0 + 0x20), (int) (0), (int) (0));
    temp_r3 = M2C_FIELD(arg0, u32 *, 0x1C);
    if (temp_r3 != 0U) {
        M2C_FIELD(arg0, s16 *, 0xB4) = obj_getField1c((int) (temp_r3));
    }
    return arg0;
}

}
