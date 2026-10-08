#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80192E70_lbl_804B7FB0 {
    M2C_UNK value;
    u8 remaining[0x104];
};

struct RecoveredGlobal_80192E70___vt__18TObjLazerFenceNorm {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 construct_collider_proxy__10TObjPlayerFPv(void *);
s32 select_models__18TObjLazerFenceNormFPv(void *);
extern RecoveredGlobal_80192E70_lbl_804B7FB0 lbl_804B7FB0;
extern M2C_UNK __vt__18TObjLazerFenceNorm[];
extern s32 lbl_805D33A0;
extern const f32 lbl_805DBE58;
u8 *TObjLazerFenceNorm__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void *TObjLazerFenceNorm__create(void *arg0);
void *__dt__18TObjLazerFenceNormFv(void *arg0, s16 arg1);
void free_resources__18TObjLazerFenceNormFv(void);
void run_task__18TObjLazerFenceNormFv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK update_closed__18TObjLazerFenceNormFPv();
M2C_UNK unregister_object_by_id(void *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK reset_by_door__18TObjLazerFenceNormFPv();
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

void run_task__18TObjLazerFenceNormFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4);
    switch (temp_r0) {
    case 0:
        update_closed__18TObjLazerFenceNormFPv();
        return;
    case 1:
        reset_by_door__18TObjLazerFenceNormFPv();
        return;
    }
}

extern M2C_UNK __vt__18TObjLazerFenceNorm[];

void *__dt__18TObjLazerFenceNormFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjLazerFenceNorm;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

typedef char RecoveredGlobal_80192E70_lbl_804B7FB0_size[sizeof(RecoveredGlobal_80192E70_lbl_804B7FB0) == 0x108 ? 1 : -1];
typedef char RecoveredGlobal_80192E70___vt__18TObjLazerFenceNorm_size[sizeof(RecoveredGlobal_80192E70___vt__18TObjLazerFenceNorm) == 0x38 ? 1 : -1];
u8 *TObjLazerFenceNorm__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    u32 temp_r4;
    u32 temp_r6;
    construct_collider_proxy__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80192E70___vt__18TObjLazerFenceNorm *)&__vt__18TObjLazerFenceNorm).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D33A0;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DBE58;
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) M2C_FIELD(arg0, f32 *, 0x68);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xAC) < 0) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xAC) > 3) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
    }
    M2C_FIELD(arg0, s16 *, 0xB0) = (s16) M2C_FIELD(arg0, s32 *, 0x84);
    select_models__18TObjLazerFenceNormFPv((void *) (arg0));
    temp_r4 = M2C_FIELD(arg0, u32 *, 0x8C);
    temp_r6 = temp_r4 >> 0x1FU;
    init_collision_body_parts((void *) (arg0), (void *) ((u8 *)&lbl_804B7FB0.value + ((((temp_r4 & 1) ^ temp_r6) - temp_r6) * 0x84)), (int) (3));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000000);
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    refresh_collision_body_centers((void *) (arg0));
    return arg0;
}

void *TObjLazerFenceNorm__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TObjLazerFenceNorm__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 lbl_805D5C28;
extern u32 lbl_805D5C2C;

void free_resources__18TObjLazerFenceNormFv(void) {
    if ((u32) lbl_805D5C2C != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5C2C, 1);
        lbl_805D5C2C = 0U;
    }
    if ((u32) lbl_805D5C28 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5C28);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5C28);
        lbl_805D5C28 = 0U;
    }
}

}
