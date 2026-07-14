#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__10TItemEffPGFv(void *arg0, s16 arg1);
void run_task__10TItemEffPGFv(void *arg0);
M2C_UNK TItemEffPG__sub_8034FA50(void *);
void __dl__7TObjectFPv(void *);
M2C_UNK disallow_rendering__7TObjectFv(void *);
s32 fn_802E4748();
M2C_UNK TItemAttackCol__sub_802E4918(void *);
void destroy_attack_collision__14TItemAttackColFPvs(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);

}

struct PgBase { char pad[0x18]; };
struct PgV : PgBase {
    virtual void vf00(); virtual void vf01(); virtual void vf02(); virtual void vf03();
    virtual void vf04(); virtual s32 vf05();
};

extern "C" {

void run_task__10TItemEffPGFv(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 var_r31;

    var_r31 = 1;
    if (fn_802E4748() == 0) {
        var_r31 = 0;
    }
    if (((PgV *)arg0)->vf05() == 0) {
        var_r31 = 0;
    }
    if (var_r31 != 0) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x40);
        if (temp_f1 < M2C_FIELD(arg0, f32 *, 0xC4)) {
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0xC8));
            temp_f1_2 = M2C_FIELD(arg0, f32 *, 0xC4);
            if (temp_f1_2 < M2C_FIELD(arg0, f32 *, 0x40)) {
                M2C_FIELD(arg0, f32 *, 0x40) = temp_f1_2;
            }
        }
        TItemAttackCol__sub_802E4918(arg0);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x14) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        disallow_rendering__7TObjectFv(arg0);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xD0) != 0U) {
        TItemEffPG__sub_8034FA50(M2C_FIELD(arg0, void **, 0xD0));
        M2C_FIELD(arg0, u32 *, 0xD0) = 0U;
    }
}

extern M2C_UNK __vt__10TItemEffPG[];

void *__dt__10TItemEffPGFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TItemEffPG;
        destroy_attack_collision__14TItemAttackColFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
