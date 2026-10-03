#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase802AF370_802af370_802AF2C8 { char pad[0x18]; };
struct VObj802AF370_802af370_802AF2C8 : VBase802AF370_802af370_802AF2C8 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8(f32, f32);
};

struct RecoveredGlobal_802AF300_lbl_804DE440 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_802AF300_lbl_804DE440_size[sizeof(RecoveredGlobal_802AF300_lbl_804DE440) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_802AF4F4_lbl_804DE450 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_802AF4F4___vt__13TOCapsuleLabo {
    M2C_UNK value;
    u8 remaining[0x40];
};

extern "C" {
s32 get_bml_model(void *, s32);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 count_linked_switches__23TObjSeabedSuisoBrakableFUii(u32, s32);
extern RecoveredGlobal_802AF300_lbl_804DE440 lbl_804DE440;
extern u32 TOCapsuleLabo__data_805D6708;
extern s32 *lbl_805D670C;
void TOCapsuleLabo__sub_802AF300(void);
s32 is_split_screen();
s32 queue_destruction__7TObjectFv(void *);
s32 TObjFish__sub_8001EDB0(int, int);
s32 get_bml_model(void *, s32);
s32 set_indexed_flags(void *, int, int);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 update_heal_gauge_state__13TOHealGeneralFPv(void *);
s32 init__5TOKeyFPv(void *);
s32 get_game_play_mode();
extern RecoveredGlobal_802AF4F4_lbl_804DE450 lbl_804DE450;
extern M2C_UNK __vt__13TOCapsuleLabo[];
extern s32 enable_v2_features;
extern s32 lbl_805D3E7C;
extern u32 TOCapsuleLabo__data_805D6708;
extern const f32 lbl_805DE1E8;
extern const f32 lbl_805DE1EC;
u8 *TOCapsuleLabo__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void TOCapsuleLabo__vt13(void *arg0);
void *__dt__13TOCapsuleLaboFv(void *arg0, s16 arg1);
void render__13TOCapsuleLaboFv(u8 *arg0);
void unload_static_data__13TOCapsuleLaboFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK draw_ginja_model(int);
M2C_UNK draw_ginja_object(int);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
void destroy_key_object__5TOKeyFPvs(void *, int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(int);

extern u32 TOCapsuleLabo__data_805D6708;

void unload_static_data__13TOCapsuleLaboFv(void) {
    if ((u32) TOCapsuleLabo__data_805D6708 != 0U) {
        TLobby__sub_8001FE7C((void*)TOCapsuleLabo__data_805D6708, 1);
        TOCapsuleLabo__data_805D6708 = 0U;
    }
}

extern s32 *lbl_805D670C;

void TOCapsuleLabo__sub_802AF300(void) {
    s32 temp_r3;
    s32 var_r0;
    u32 temp_r3_2;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804DE440.value, 0, 0, 0));
    }
    (*(u8 * *)&TOCapsuleLabo__data_805D6708) = (unsigned char *) ((void *) var_r0);
    temp_r3_2 = get_bml_model((void *) var_r0, 0);
    if (temp_r3_2 != 0) {
        (*(s32 *)&lbl_805D670C) = count_linked_switches__23TObjSeabedSuisoBrakableFUii(temp_r3_2, 3);
    }
}

void render__13TOCapsuleLaboFv(u8 *arg0) {
    s32 temp_r31_3;
    u8 *temp_r31;
    u8 *temp_r31_2;

    M2C_FIELD(arg0, s32 *, 0xE0) = ((VObj802AF370_802af370_802AF2C8 *) arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xE0) == 1) {
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) == 1) {
            if ((s32 *) lbl_805D670C != NULL) {
                *lbl_805D670C &= 0xFFFFFFF7;
            }
        } else if ((s32 *) lbl_805D670C != NULL) {
            *lbl_805D670C |= 8;
        }
        temp_r31 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x34));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        TOHangerMachine01__sub_803D9C00((void *) (temp_r31 + 8));
        draw_ginja_model((int) (M2C_FIELD(temp_r31, s32 *, 4)));
        temp_r31_2 = (unsigned char *) (M2C_FIELD(temp_r31, void **, 0x2C));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (temp_r31_2 + 8));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0xE4)));
        draw_ginja_model((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
        temp_r31_3 = M2C_FIELD(temp_r31_2, s32 *, 0x2C);
        begin_effect_render__13TParticleCtrlFv();
        TOHangerMachine01__sub_803D9C00((void *) (temp_r31_3 + 8));
        draw_ginja_object((int) (temp_r31_3));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
        pop_matrix();
    }
}

void TOCapsuleLabo__vt13(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xE4) = (s32) (M2C_FIELD(arg0, s32 *, 0xE4) + 0x222);
}

extern M2C_UNK __vt__13TOCapsuleLabo[];

void *__dt__13TOCapsuleLaboFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TOCapsuleLabo;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_key_object__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_802AF4F4_lbl_804DE450_size[sizeof(RecoveredGlobal_802AF4F4_lbl_804DE450) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_802AF4F4___vt__13TOCapsuleLabo_size[sizeof(RecoveredGlobal_802AF4F4___vt__13TOCapsuleLabo) == 0x44 ? 1 : -1];
u8 *TOCapsuleLabo__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    init__5TOKeyFPv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802AF4F4___vt__13TOCapsuleLabo *)&__vt__13TOCapsuleLabo).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3E7C;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((void *)((int) ((*(s32 *)&TOCapsuleLabo__data_805D6708))), (s32)((int) (0)));
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((int) ((*(s32 *)&TOCapsuleLabo__data_805D6708)), (int) (0));
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804DE450.value), (int) (1));
    set_indexed_flags((void *) (arg0), (int) (0), (int) (0x1288));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    update_heal_gauge_state__13TOHealGeneralFPv((void *) (arg0));
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DE1E8;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DE1EC;
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    if (((s32) enable_v2_features == 1) && (get_game_play_mode() == 1)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
    if (is_split_screen() == 1) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
    return arg0;
}

}
