#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base1 { char pad[0x18]; };

struct VObj1 : Base1 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {
s32 fn_801582C4(void *, f32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
extern s32 lbl_805D5940;
extern const f32 lbl_805DB450;
extern const f32 lbl_805DB454;
extern const f32 lbl_805DB458;
extern const f32 lbl_805DB45C;
void render__15TODoorAncient07Fv(u8 *arg0);
void set_indexed_flags(void *, s32, s32);
s32 TODragonfly__sub_80158360(void *, f32);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
extern u8 *TODoorAncient07__data_805D593C;
extern const f32 lbl_805DB464;
void TODoorAncient07__vt13(u8 *arg0);
}

extern "C" {

void TODoorAncient07__vt15(u8 *arg0);
void *create__15TODoorAncient07FPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void *TODoorAncient07__ct(void *, void *, void *);
s32 TODragonfly__sub_80158360(void *, f32);
void *__nw__7TObjectFUl(int);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);

extern u8 *TODoorAncient07__data_805D593C;
extern const f32 lbl_805DB460;

void render__15TODoorAncient07Fv(u8 *arg0) {
    VObj1 *self = (VObj1 *)arg0;
    if ((self->m8(lbl_805DB450, lbl_805DB454) != 0) && (fn_801582C4(arg0, lbl_805DB458) != 0)) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        if (((u32) M2C_FIELD(arg0, u32 *, 0xBC) != 0U) && (lbl_805DB45C != M2C_FIELD(arg0, f32 *, 0xB0))) {
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB0));
        } else {
            TObjBoss2Tunnel__sub_803DB470(lbl_805D5940);
            TObjBoss2Tunnel__sub_803DB470(lbl_805D5940 + 0x38);
            begin_effect_render__13TParticleCtrlFv();
            TObjBoss2Tunnel__sub_803DB470(lbl_805D5940 + 0x70);
            end_effect_render__13TParticleCtrlFv();
        }
        TObjPlayer__sub_803D9B78();
    }
}

void TODoorAncient07__vt15(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 1) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(TODoorAncient07__data_805D593C, s32 *, 4);
        if (TODragonfly__sub_80158360(arg0, lbl_805DB460) != 1) {
            M2C_FIELD(arg0, s32 *, 0xAC) = 3;
            clear_player_status_flag__10TObjPlayerFPviUi(arg0, (M2C_UNK)0, (M2C_UNK)8);
            TBoss3Volopt__sub_8022675C(0x4004B708, arg0 + 0x38, 0, 0);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(TODoorAncient07__data_805D593C, s32 *, 0);
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, (M2C_UNK)NULL, (M2C_UNK)8);
        TBoss3Volopt__sub_8022675C(0x4004B708, arg0 + 0x38, 0, 0);
    }
}

extern void *tl_05;

void TODoorAncient07__vt13(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 1) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(TODoorAncient07__data_805D593C, s32 *, 4);
        if (TODragonfly__sub_80158360((void *)((s32) arg0), lbl_805DB464) == 1) {
            M2C_FIELD(arg0, s32 *, 0xAC) = 1;
            set_indexed_flags(arg0, 0, 8);
            TBoss3Volopt__sub_8022675C((M2C_UNK)(0x4004B708), (void *)((u32) (arg0 + 0x38)), (M2C_UNK)(0), (M2C_UNK)(0));
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(TODoorAncient07__data_805D593C, s32 *, 0);
    }
}

void *create__15TODoorAncient07FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TODoorAncient07__ct(o, tl_05, arg0);
    }
    return o;
}

}
