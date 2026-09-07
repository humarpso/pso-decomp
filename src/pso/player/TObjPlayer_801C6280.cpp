#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801C6518_lbl_804C3FD8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 TBoss4Type2__sub_800874F4(void *, int);
u32 update_battle_ctrl_field1c__10TObjPlayerFPv(void *);
s32 fn_801C670C(void *);
s32 TObjPlayer__sub_801C6FB4(void *, int);
s32 TObjPlayer__sub_801C6FBC(void *, void *);
extern M2C_UNK lbl_804C3FD8[];
u8 *TObjPlayer__sub_801C6518(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void *TObjPlayer__sub_801C64C0(void *arg0, s16 arg1);
void new_child_object__10TObjPlayerFi(s32 arg0);
void __dl__7TObjectFPv(void *);
void* __nw__7TObjectFUl(M2C_UNK);
void dt__13TParticleCtrlFPvs(void *, int);
void* init_attack_ctrl__10TObjPlayerFPvUsUs(void*, s32, s32);

extern s32 tl_07;

void new_child_object__10TObjPlayerFi(s32 arg0) {
    void *obj = __nw__7TObjectFUl(0x24);
    if (obj != 0) {
        init_attack_ctrl__10TObjPlayerFPvUsUs(obj, tl_07, arg0);
    }
}

extern M2C_UNK lbl_804C3FD8[];

void *TObjPlayer__sub_801C64C0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C3FD8;
        dt__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_801C6518_lbl_804C3FD8_size[sizeof(RecoveredGlobal_801C6518_lbl_804C3FD8) == 0x18 ? 1 : -1];
u8 *TObjPlayer__sub_801C6518(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r3_2;
    u32 temp_r3;
    fn_801C670C((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801C6518_lbl_804C3FD8 *)&lbl_804C3FD8).value;
    TObjPlayer__sub_801C6FBC((void *) (arg0), (void *) (arg2));
    temp_r3 = update_battle_ctrl_field1c__10TObjPlayerFPv((void *) (arg0));
    if (temp_r3 != 0U) {
        temp_r3_2 = TBoss4Type2__sub_800874F4((void *) (temp_r3 + 0x2FC), (int) (0xAF));
        if (temp_r3_2 != 0) {
            TObjPlayer__sub_801C6FB4((void *) (arg0), (int) (temp_r3_2));
            goto block_4;
        }
        queue_destruction__7TObjectFv((void *) (arg0));
        return arg0;
    }
block_4:
    return arg0;
}

}
