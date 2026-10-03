#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801C6518_lbl_804C3FD8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Vec_801C6408 { f32 x, y, z; };

struct VB_801C6408 { u8 pad[0x18]; };

struct VO_801C6408 : VB_801C6408 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59(); virtual void v60(); virtual void v61(); virtual void v62();
    virtual void get_pos(s32, Vec_801C6408 *);
};

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 create_particle_emitter(void *, int);
u32 update_battle_ctrl_field1c__10TObjPlayerFPv(void *);
s32 fn_801C670C(void *);
s32 TObjPlayer__sub_801C6FB4(void *, int);
s32 TObjPlayer__sub_801C6FBC(void *, void *);
extern M2C_UNK lbl_804C3FD8[];
u8 *TObjPlayer__sub_801C6518(u8 *arg0, M2C_UNK arg1, s32 arg2);
s32 queue_destruction__7TObjectFv(void *);
s32 TLobby__sub_800822E8(VO_801C6408 *, s32);
void copy_pos__11TNowLoadingFPvPv(s32, Vec_801C6408 *);
s32 is_on_current_floor__10TObjPlayerFi(VO_801C6408 *);
u32 update_battle_ctrl_field1c__10TObjPlayerFPv(void *);
s32 free_handle__13TParticleCtrlFPv(s32);
s32 reset_key_machine_state__10TObjPlayerFv();
extern const f32 lbl_805DC338;
void TObjPlayer__sub_801C6408(s32 arg0);
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

void TObjPlayer__sub_801C6408(s32 arg0) {
    VO_801C6408 *p;
    s32 h;
    Vec_801C6408 v;
    p = (VO_801C6408 *)update_battle_ctrl_field1c__10TObjPlayerFPv((void *)arg0);
    if (p != NULL && TLobby__sub_800822E8(p, 0x8000) != 0 && reset_key_machine_state__10TObjPlayerFv() != 0 &&
        is_on_current_floor__10TObjPlayerFi(p) != 0) {
        h = free_handle__13TParticleCtrlFPv(arg0);
        if (h != 0) {
            p->get_pos(1, &v);
            v.y += lbl_805DC338;
            copy_pos__11TNowLoadingFPvPv(h, &v);
        }
    } else {
        queue_destruction__7TObjectFv((void *)arg0);
    }
}

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
        temp_r3_2 = create_particle_emitter((void *) (temp_r3 + 0x2FC), (int) (0xAF));
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
