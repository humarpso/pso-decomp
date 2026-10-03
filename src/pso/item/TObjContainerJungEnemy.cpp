#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8018CEDC_lbl_804B7168 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8018CEDC___vt__22TObjContainerJungEnemy {
    M2C_UNK value;
    u8 remaining[0x148];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void reset_photon_effect__10TObjPlayerFPv(s32);
u32 init_collision_body_parts(void *, s32, s32);
u8 * fn_8018A150(void *, s32);
void load_models__22TObjContainerJungEnemyFPv(void *arg0);
extern RecoveredGlobal_8018CEDC_lbl_804B7168 lbl_804B7168;
extern M2C_UNK __vt__22TObjContainerJungEnemy[];
extern s32 lbl_805D3320;
u8 *TObjContainerJungEnemy__ct(u8 *arg0, s32 arg1, s32 _w2);
}

extern "C" {

void TObjContainerJungEnemy__vt78(void *arg0);
void *__dt__22TObjContainerJungEnemyFv(void *arg0, s16 arg1);
void *create__22TObjContainerJungEnemyFPv(void *arg0);
void load_models__22TObjContainerJungEnemyFPv(void *arg0);
s32 TObjContainerJungEx__sub_8018D900(M2C_UNK);
s32 TObjContainerJungEx__sub_8018D93C(M2C_UNK);
s32 TObjContainerJung__sub_8018D3B8(M2C_UNK);
s32 TObjContainerJung__sub_8018D3C0(M2C_UNK);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(void *);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_container_object__10TObjPlayerFPvs(void *, M2C_UNK);

void TObjContainerJungEnemy__vt78(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x364) != 0) {
            submit_cursor_candidate(arg0, -1);
        }
    case 1:
        return;
    }
}

void load_models__22TObjContainerJungEnemyFPv(void *arg0) {
    s32 var_r0;
    s32 temp_r3 = M2C_FIELD(arg0, s32 *, 0x88);
    if (temp_r3 < 0) {
        var_r0 = 0;
    } else {
        var_r0 = 1;
        if (temp_r3 <= 1) {
            var_r0 = temp_r3;
        }
    }
    switch (var_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x368) = TObjContainerJung__sub_8018D3C0(0);
        M2C_FIELD(arg0, s32 *, 0x36C) = TObjContainerJung__sub_8018D3C0(1);
        M2C_FIELD(arg0, s32 *, 0x370) = TObjContainerJung__sub_8018D3C0(2);
        M2C_FIELD(arg0, s32 *, 0x374) = TObjContainerJung__sub_8018D3C0(3);
        M2C_FIELD(arg0, s32 *, 0x24) = TObjContainerJung__sub_8018D3B8(0);
        return;
    default:
    case 1:
        M2C_FIELD(arg0, s32 *, 0x368) = TObjContainerJungEx__sub_8018D93C(0);
        M2C_FIELD(arg0, s32 *, 0x36C) = TObjContainerJungEx__sub_8018D93C(1);
        M2C_FIELD(arg0, s32 *, 0x370) = TObjContainerJungEx__sub_8018D93C(2);
        M2C_FIELD(arg0, s32 *, 0x374) = TObjContainerJungEx__sub_8018D93C(3);
        M2C_FIELD(arg0, s32 *, 0x24) = TObjContainerJungEx__sub_8018D900(0);
        return;
    }
}

extern void *tl_05;

void *create__22TObjContainerJungEnemyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x378);
    if (o != NULL) {
        o = TObjContainerJungEnemy__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__22TObjContainerJungEnemy[];

void *__dt__22TObjContainerJungEnemyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjContainerJungEnemy;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_container_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8018CEDC_lbl_804B7168_size[sizeof(RecoveredGlobal_8018CEDC_lbl_804B7168) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8018CEDC___vt__22TObjContainerJungEnemy_size[sizeof(RecoveredGlobal_8018CEDC___vt__22TObjContainerJungEnemy) == 0x14C ? 1 : -1];
u8 *TObjContainerJungEnemy__ct(u8 *arg0, s32 arg1, s32 _w2) {
    fn_8018A150(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8018CEDC___vt__22TObjContainerJungEnemy *)&__vt__22TObjContainerJungEnemy).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3320;
    load_models__22TObjContainerJungEnemyFPv(arg0);
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x60000000);
    init_collision_body_parts(arg0, (s32) &lbl_804B7168.value, 1);
    reset_photon_effect__10TObjPlayerFPv((s32) arg0);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) (M2C_FIELD(arg0, f32 *, 0x78) + M2C_FIELD(&lbl_804B7168.value, f32 *, 4));
    return arg0;
}

}
