#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80163B8C_lbl_804B1760 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80163B8C_lbl_804B1760_size[sizeof(RecoveredGlobal_80163B8C_lbl_804B1760) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80163C44_lbl_804B1770 { M2C_UNK value; u8 remaining[0x28]; };

struct RecoveredGlobal_80163C44___vt__12TODoorVoShip { M2C_UNK value; u8 remaining[0x38]; };

struct VBase_801639B4 { char pad[0x18]; };

struct VObj_801639B4 : VBase_801639B4 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual s32 m8(f32, f32); };

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80163B8C_lbl_804B1760 lbl_804B1760;
extern u32 TODoorVoShip__data_805D5980;
void TODoorVoShip__sub_80163B8C(void);
s32 get_main_phase(void);
s32 TObjFish__sub_8001ED9C(void *, s32);
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
u32 TObjEneGibbles__sub_80156780(void *, s32, s32);
u8 * init_map_object_base(void *);
s32 TODoorVoShip__sub_801F44BC(s32);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, int, int);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK refresh_collision_body_centers(void *);
extern RecoveredGlobal_80163C44_lbl_804B1770 lbl_804B1770;
extern M2C_UNK __vt__12TODoorVoShip[];
extern s32 lbl_805D2F88;
extern u32 TODoorVoShip__data_805D5980;
extern const f32 lbl_805DB534;
extern const f32 lbl_805DB53C;
extern const f32 lbl_805DB540;
extern const f32 lbl_805DB544;
u8 *TODoorVoShip__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
s32 get_main_phase(void);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, int, int);
void update_anim_phase__17TOBarrierEnergy01FPv(void *);
s32 TODoorVoShip__sub_801F44BC(s32);
extern const f32 lbl_805DB530;
extern const f32 lbl_805DB534;
extern const f32 lbl_805DB538;
void run_task__12TODoorVoShipFv(u8 *arg0);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK set_chunk_material_color(void *);
M2C_UNK TObjPlayer__sub_803E4684(int);
M2C_UNK TObjEneSlimeOne__sub_803E4B54(int, int, int, f32);
extern u8 lbl_804A7418[];
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
void render__12TODoorVoShipFv(u8 *arg0);
}

extern "C" {

void *__dt__12TODoorVoShipFv(void *arg0, s16 arg1);
void *create__12TODoorVoShipFPv(void *arg0);
void free_static_data__12TODoorVoShipFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_key_base__5TOKeyFPvs(void *, M2C_UNK);

extern void *tl_05;

#pragma push
#pragma opt_common_subs off
void run_task__12TODoorVoShipFv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xCC) & 0xE) {
        update_anim_phase__17TOBarrierEnergy01FPv(arg0);
        if (M2C_FIELD(arg0, s32 *, 0xCC) & 0x10) {
            M2C_FIELD(arg0, f32 *, 0xDC) = (f32) (M2C_FIELD(arg0, f32 *, 0xDC) + lbl_805DB530);
            if (lbl_805DB534 <= M2C_FIELD(arg0, f32 *, 0xDC)) {
                M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_805DB534;
                M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) & 0xFFFFFFEF);
            }
        } else {
            M2C_FIELD(arg0, f32 *, 0xDC) = (f32) (M2C_FIELD(arg0, f32 *, 0xDC) - lbl_805DB530);
            if (M2C_FIELD(arg0, f32 *, 0xDC) <= lbl_805DB538) {
                M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_805DB538;
                M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) | 0x10);
            }
        }
        if (TODoorVoShip__sub_801F44BC((s32)((int) (0x2C))) != 0) {
            M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) & 0xFFFFFFFD);
        }
        if (TODoorVoShip__sub_801F44BC((s32)((int) (0x2D))) != 0) {
            M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) & 0xFFFFFFFB);
        }
        if (TODoorVoShip__sub_801F44BC((s32)((int) (0x2E))) != 0) {
            M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) & 0xFFFFFFF7);
        }
        if ((TODoorVoShip__sub_801F44BC((s32)((int) (0x2F))) != 0) || (get_main_phase() == 0xF)) {
            M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) & 0xFFFFFFF1);
            clear_player_status_flag__10TObjPlayerFPviUi((void *)(arg0), (int)(0), (int)(1U));
        }
    }
}
#pragma pop

void render__12TODoorVoShipFv(u8 *arg0) {
    s32 temp_r4;
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    u8 *temp_r31_4;
    if ((((VObj_801639B4 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) && (M2C_FIELD(arg0, s32 *, 0xCC) & 0xE)) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjEneSlimeOne__sub_803E4B54((int) (M2C_FIELD(arg0, s32 *, 0x34)), (int) (M2C_FIELD(arg0, s32 *, 0xBC)), (int) (M2C_FIELD(arg0, s32 *, 0xD0)), (f32) (M2C_FIELD(arg0, f32 *, 0xB0)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0xD8)));
        temp_r4 = some_id_805c6f74;
        lbl_805D5660 = temp_r4;
        some_id_805c6f74 = temp_r4 | 0x20;
        set_chunk_material_color((void *) (arg0 + 0xDC));
        begin_effect_render__13TParticleCtrlFv();
        temp_r31 = M2C_FIELD(arg0, u8 **, 0xD4);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (temp_r31 + 8));
        temp_r31_2 = M2C_FIELD(temp_r31, u8 **, 0x2C);
        if (M2C_FIELD(arg0, s32 *, 0xCC) & 4) {
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (temp_r31_2 + 8));
            TObjPlayer__sub_803E4684((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
            pop_matrix();
        }
        temp_r31_3 = M2C_FIELD(temp_r31_2, u8 **, 0x30);
        if (M2C_FIELD(arg0, s32 *, 0xCC) & 2) {
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (temp_r31_3 + 8));
            TObjPlayer__sub_803E4684((int) (M2C_FIELD(temp_r31_3, s32 *, 4)));
            pop_matrix();
        }
        temp_r31_4 = M2C_FIELD(temp_r31_3, u8 **, 0x30);
        if (M2C_FIELD(arg0, s32 *, 0xCC) & 8) {
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (temp_r31_4 + 8));
            TObjPlayer__sub_803E4684((int) (M2C_FIELD(temp_r31_4, s32 *, 4)));
            pop_matrix();
        }
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
        set_chunk_material_color(lbl_804A7418);
        some_id_805c6f74 = lbl_805D5660;
        pop_matrix();
    }
}

void *create__12TODoorVoShipFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xEC);
    if (o != NULL) {
        o = TODoorVoShip__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TODoorVoShip__data_805D5980;

void free_static_data__12TODoorVoShipFv(void) {
    if ((u32) TODoorVoShip__data_805D5980 != 0U) {
        TLobby__sub_8001FE7C((void*)TODoorVoShip__data_805D5980, 1);
        TODoorVoShip__data_805D5980 = 0U;
    }
}

extern M2C_UNK __vt__12TODoorVoShip[];

void TODoorVoShip__sub_80163B8C(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804B1760.value, 0, 0, 0));
    }
    (*(s32 *)&TODoorVoShip__data_805D5980) = var_r0;
}

void *__dt__12TODoorVoShipFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TODoorVoShip;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TODoorVoShip__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    init_map_object_base(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80163C44___vt__12TODoorVoShip *)&__vt__12TODoorVoShip).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2F88;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((*(u8 * *)&TODoorVoShip__data_805D5980), 1);
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((*(u8 * *)&TODoorVoShip__data_805D5980), 1);
    M2C_FIELD(arg0, s32 *, 0xBC) = TObjFish__sub_8001ED9C((*(u8 * *)&TODoorVoShip__data_805D5980), 0);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, s32 *, 0xBC), u32 *, 4) - lbl_805DB53C);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DB53C;
    M2C_FIELD(arg0, s32 *, 0xD0) = TObjFish__sub_8001ED9C((*(u8 * *)&TODoorVoShip__data_805D5980), 1);
    M2C_FIELD(arg0, s32 *, 0xD4) = get_bml_model((*(u8 * *)&TODoorVoShip__data_805D5980), 0);
    M2C_FIELD(arg0, s32 *, 0xD8) = TObjFish__sub_8001EDB0((*(u8 * *)&TODoorVoShip__data_805D5980), 0);
    TObjEneGibbles__sub_80156780(arg0, (s32) &lbl_804B1770.value, 1);
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB540;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB544;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0xE;
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) lbl_805DB534;
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) lbl_805DB534;
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) lbl_805DB534;
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_805DB534;
    if (TODoorVoShip__sub_801F44BC(0x2C) != 0) {
        M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) & 0xFFFFFFFD);
    }
    if (TODoorVoShip__sub_801F44BC(0x2D) != 0) {
        M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) & 0xFFFFFFFB);
    }
    if (TODoorVoShip__sub_801F44BC(0x2E) != 0) {
        M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) & 0xFFFFFFF7);
    }
    if (TODoorVoShip__sub_801F44BC(0x2F) == 0) {
        if (get_main_phase() == 0xF) {
            goto block_8;
        }
    } else {
block_8:
        M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) & 0xFFFFFFF1);
        clear_player_status_flag__10TObjPlayerFPviUi((void *) (arg0), (int) (0), (int) (1));
    }
    return arg0;
}

}
