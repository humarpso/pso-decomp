#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8016EF68___vt__14TOMineTrapDisp {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct VBase_8016EFB4 { u8 pad[0x18]; };

struct VObj_8016EFB4 : VBase_8016EFB4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {
s32 TOMineDisp__ct(void *, void *, void *);
extern RecoveredGlobal_8016EF68___vt__14TOMineTrapDisp __vt__14TOMineTrapDisp;
extern s32 lbl_805D3088;
u8 *TOMineTrapDisp__ct(u8 *arg0, s32 arg1, s32 arg2, s16 arg3);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 is_locally_controlled__10TObjPlayerFPv(void);
f32 horizontal_distance_squared(void *, void *);
void *get_mine_data_ptr__10TOMineTrapFPv(void *);
void get_player_state__6TOMineFPv(void *, u16);
s32 fn_80171314(void *);
s16 get_stat_by_key_state__10TObjPlayerFPv(void *);
u8 *get_player_by_client_id(u16);
extern const f32 lbl_805DB850;
void run_task__10TOMineDispFv(u8 *arg0);
M2C_UNK get_camera_mode__11TCameraCtrlFv();
u16 TCameraCtrl__sub_80068958();
M2C_UNK free_sub_objects__6TOMineFPv(int);
M2C_UNK free_parts__6TOMineFPv(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_chunk_material_color(void *, int);
extern u8 lbl_804A7418[];
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DB854;
extern const f32 lbl_805DB858;
void TOMineDisp__sub_8016EFB4(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_8016EF68___vt__14TOMineTrapDisp_size[sizeof(RecoveredGlobal_8016EF68___vt__14TOMineTrapDisp) == 0x34 ? 1 : -1];
u8 *TOMineTrapDisp__ct(u8 *arg0, s32 arg1, s32 arg2, s16 arg3) {
    TOMineDisp__ct((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__14TOMineTrapDisp.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3088;
    M2C_FIELD(arg0, s16 *, 0xAC) = arg3;
    return arg0;
}

void TOMineDisp__sub_8016EFB4(u8 *arg0) {
    s32 temp_r31;
    s32 temp_r4;
    u16 id = ((u16 (*)(s32))TCameraCtrl__sub_80068958)(get_camera_mode__11TCameraCtrlFv());
    if (id != M2C_FIELD(arg0, u16 *, 0xA8)) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0xA4) != 2) {
        return;
    }
    if (((VObj_8016EFB4 *)arg0)->m8(lbl_805DB854, lbl_805DB858) == 0) {
        return;
    }
    TObjPlayer__sub_803D9B2C();
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x10);
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
    free_parts__6TOMineFPv(temp_r31);
    begin_effect_render__13TParticleCtrlFv();
    temp_r4 = some_id_805c6f74;
    lbl_805D5660 = temp_r4;
    some_id_805c6f74 = temp_r4 | 0x20;
    set_chunk_material_color(arg0 + 0x94, temp_r4);
    free_sub_objects__6TOMineFPv(temp_r31);
    ((M2C_UNK (*)(void *))set_chunk_material_color)(lbl_804A7418);
    some_id_805c6f74 = lbl_805D5660;
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
}

void run_task__10TOMineDispFv(u8 *arg0) {
    void *mine = *(void **)(arg0 + 0x10);
    u8 *p;
    switch (*(s32 *)(arg0 + 0xA4)) {
    case 0:
        p = get_player_by_client_id(*(u16 *)(arg0 + 0xA8));
        if (p != NULL && is_locally_controlled__10TObjPlayerFPv() != 0 && fn_80171314(p) != 0) {
            if (horizontal_distance_squared(arg0 + 0x38, p + 0x38) <= lbl_805DB850 ||
                get_stat_by_key_state__10TObjPlayerFPv(p) == get_stat_by_key_state__10TObjPlayerFPv(arg0)) {
                *(s32 *)(arg0 + 0xA4) = 2;
            }
        }
        break;
    case 3:
        break;
    case 2:
        get_player_state__6TOMineFPv(mine, *(u16 *)(arg0 + 0xA8));
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, get_mine_data_ptr__10TOMineTrapFPv(mine));
        break;
    }
}

}
