#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80323214_lbl_80476658 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_80323278_lbl_80476658 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct Vec_80323134 { f32 x, y, z; };
struct Ctl_80323134 { u8 pad[0x38]; Vec_80323134 pos; };
struct Obj_80323134 { u8 pad[0xC8]; Vec_80323134 pos; void *items[9]; };
struct T_80323320 { u8 pad[0xD4]; s32 arr[9]; };

extern "C" {
s32 create_particle_emitter(s32, s32);
void set_flags__11TBoss4Type2FPvUi(void *, s32);
extern RecoveredGlobal_80323214_lbl_80476658 lbl_80476658;
void TBoss6GravBall__sub_80323214(s32 arg0, s32 arg1);
s32 create_particle_emitter(s32, s32);
void set_flags__11TBoss4Type2FPvUi(void *, s32);
extern RecoveredGlobal_80323214_lbl_80476658 lbl_80476658;
void create_emitter__14TBoss6GravBallFii(s32 arg0, s32 arg1);
s32 request_destroy__11TBoss4Type2FUi(int);
void TBoss6GravBall__sub_803231D0(s32 arg0, s32 arg1);
void TBoss6GravBall__sub_803231D0(s32 arg0, s32 arg1);
void init_parts__14TBoss6GravBallFPv(s32 arg0);
void TBoss6GravBall__sub_80323320(T_80323320 *self);
void VecCopy__FP3VecPC3Vec(void *, void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
Ctl_80323134 *get_player_by_client_id(int);
}

extern "C" {

void fn_80323134(Obj_80323134 *arg0);
void render__14TBoss6GravBallFv(void);
int TAdEndText__sub_803997FC(void*);
int get_abs__15TAdLdQuestPrtGCFPv(void* p);

void fn_80323134(Obj_80323134 *arg0) {
    s32 i;
    Vec_80323134 v;
    Ctl_80323134 *c;
    for (i = 0; i < 9; i++) {
        if (arg0->items[i] != 0) {
            switch (i) {
            case 5: case 6: case 7: case 8:
                c = get_player_by_client_id((u16)(i - 5));
                if (c != 0) {
                    VecCopy__FP3VecPC3Vec(&v, &c->pos);
                    copy_pos__11TNowLoadingFPvPv(arg0->items[i], &v);
                }
                break;
            default:
                copy_pos__11TNowLoadingFPvPv(arg0->items[i], &arg0->pos);
                break;
            }
        }
    }
}

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_80323214_lbl_80476658_size[sizeof(RecoveredGlobal_80323214_lbl_80476658) == 0x24 ? 1 : -1];

#pragma push
#pragma opt_common_subs off
void TBoss6GravBall__sub_803231D0(s32 arg0, s32 arg1) {
    u32 temp_r3;
    u8 *temp_r31;
    temp_r31 = (u8 *)(arg0 + (arg1 * 4));
    temp_r3 = M2C_FIELD(temp_r31, u32 *, 0xD4);
    if (temp_r3 != 0U) {
        request_destroy__11TBoss4Type2FUi((int) (temp_r3));
        M2C_FIELD(temp_r31, u32 *, 0xD4) = 0U;
    }
}
#pragma pop

void TBoss6GravBall__sub_80323214(s32 arg0, s32 arg1) {
    s32 temp_r5;
    u8 *temp_r31;
    u8 *temp_r3;
    temp_r5 = arg1 * 4;
    temp_r31 = (u8 *)(arg0 + temp_r5);
    if ((void *) M2C_FIELD(temp_r31, u8 **, 0xD4) == NULL) {
        M2C_FIELD(temp_r31, u8 **, 0xD4) = (unsigned char *) (create_particle_emitter(arg0 + 0xC8, M2C_FIELD(&lbl_80476658.value, M2C_UNK *, temp_r5)));
        temp_r3 = (u8 *)(M2C_FIELD(temp_r31, u8 **, 0xD4));
        if (temp_r3 != NULL) {
            set_flags__11TBoss4Type2FPvUi(temp_r3, 0x2040);
        }
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_80323278_lbl_80476658_size[sizeof(RecoveredGlobal_80323278_lbl_80476658) == 0x24 ? 1 : -1];
void create_emitter__14TBoss6GravBallFii(s32 arg0, s32 arg1) {
    s32 temp_r5;
    u8 *temp_r31;
    u8 *temp_r3;
    temp_r5 = arg1 * 4;
    temp_r31 = (u8 *)(arg0 + temp_r5);
    if ((void *) M2C_FIELD(temp_r31, u8 **, 0xD4) == NULL) {
        M2C_FIELD(temp_r31, u8 **, 0xD4) = (unsigned char *) (create_particle_emitter(arg0 + 0xC8, M2C_FIELD(&(*(RecoveredGlobal_80323278_lbl_80476658 *)&lbl_80476658).value, M2C_UNK *, temp_r5)));
        temp_r3 = (u8 *)(M2C_FIELD(temp_r31, u8 **, 0xD4));
        if (temp_r3 != NULL) {
            set_flags__11TBoss4Type2FPvUi(temp_r3, 0x40);
        }
    }
}
#pragma pop

void init_parts__14TBoss6GravBallFPv(s32 arg0) {
    s32 var_r31;
    var_r31 = 0;
    do {
        TBoss6GravBall__sub_803231D0(arg0, var_r31);
        var_r31 += 1;
    } while (var_r31 < 9);
}

void TBoss6GravBall__sub_80323320(T_80323320 *self) {
    s32 i;
    for (i = 0; i < 9; i++) {
        self->arr[i] = 0;
    }
}

void render__14TBoss6GravBallFv(void) {  }

}
