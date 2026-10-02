#include "pso/TBoss6EffHyoui.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void set_position_xy__10TObjPlayerFPvff(void *, f32, f32);
void *create_particle_emitter(void *, s32);
void set_flags__11TBoss4Type2FPvUi(void *, u32);
s32 get_player_by_client_id(int);
void __ct__7TObjectFP7TObject(void *, void *);
s32 is_active__14TBoss6PlotFalzFPv();
extern s32 lbl_8047AC70[];
extern M2C_UNK __vt__14TBoss6EffHyoui[];
extern s32 lbl_805D44D8;
extern f32 lbl_805D6FF8;
extern s8 lbl_805D6FFC;
extern const f32 lbl_805E0380;
void *TBoss6EffHyoui__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
}

extern "C" {
void request_destroy__11TBoss4Type2FUi(void*);
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK copy_pos__11TNowLoadingFPvPv(int, void *);
s32 get_player_by_client_id(int);
s32 is_active__14TBoss6PlotFalzFPv();
}

extern "C" {

void * create__14TBoss6EffHyouiFPvPvPv(void *arg0, void *arg1, void *arg2);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void run_task__14TBoss6EffHyouiFv(u8 *arg0) {
    s32 temp_r3;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        temp_r3 = get_player_by_client_id((int) (M2C_FIELD(arg0, u16 *, 0x20)));
        if ((temp_r3 != 0) && (is_active__14TBoss6PlotFalzFPv() != 0)) {
            copy_pos__11TNowLoadingFPvPv((int) (M2C_FIELD(arg0, u32 *, 0x1C)), (void *) (temp_r3 + 0x38));
        }
    }
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) > (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

TBoss6EffHyoui::~TBoss6EffHyoui() {
    if (m_1c != nullptr) request_destroy__11TBoss4Type2FUi(m_1c);
}
void *TBoss6EffHyoui__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    u8 *self = (u8 *)arg0;
    u8 *p;
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(self, M2C_UNK **, 0x18) = __vt__14TBoss6EffHyoui;
    M2C_FIELD(self, s32 *, 0) = lbl_805D44D8;
    M2C_FIELD(self, u16 *, 0x20) = (u16)(u32)arg2;
    M2C_FIELD(self, void **, 0x24) = arg4;
    M2C_FIELD(self, void **, 0x1C) = NULL;
    p = (u8 *)get_player_by_client_id(M2C_FIELD(self, u16 *, 0x20));
    if (p != NULL && is_active__14TBoss6PlotFalzFPv() != 0) {
        if (lbl_805D6FFC == 0) {
            lbl_805D6FFC = 1;
            lbl_805D6FF8 = lbl_805E0380;
        }
        if ((M2C_FIELD(self, void **, 0x1C) = create_particle_emitter(p + 0x38, lbl_8047AC70[(s32)arg3])) != NULL) {
            set_flags__11TBoss4Type2FPvUi(M2C_FIELD(self, void **, 0x1C), 0x40);
            set_position_xy__10TObjPlayerFPvff(M2C_FIELD(self, void **, 0x1C), lbl_805D6FF8, lbl_805D6FF8);
        }
    }
    M2C_FIELD(self, s32 *, 0x28) = 0;
    return arg0;
}

void * create__14TBoss6EffHyouiFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TBoss6EffHyoui__ct((void *)(o), (void *)(tl_02), (void *)(arg0), (void *)(arg1), (void *)(arg2));
    }
    return o;
}

}
