#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_position__11TMainCursorFi(s32 arg0);
u8 is_position_moved__11TMainCursorFPv(s32);
void *TPhotonMylla__sub_80154CB4();
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
M2C_UNK get_id__11TMainCursorFPv(s32);

void update_position__11TMainCursorFi(s32 arg0) {
    void *temp_r3;

    get_id__11TMainCursorFPv(arg0 + 0x60);
    temp_r3 = TPhotonMylla__sub_80154CB4();
    if (temp_r3 != NULL) {
        s32 base = M2C_FIELD(temp_r3, s32 *, 0xA4) + is_position_moved__11TMainCursorFPv(arg0) * 0x2C;
        VecCopy__FP3VecPC3Vec(arg0 + 0x40, base + 0x1C);
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8013AE18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_target_player__11TMainCursorFi(s32 arg0);
void *get_state__11TMainCursorFPv(s32);
M2C_UNK TObjPlayer__sub_8013DEF8(s32);
s32 TObjPlayer__sub_801C6DAC(s32);

void update_target_player__11TMainCursorFi(s32 arg0) {
    if ((TObjPlayer__sub_801C6DAC(arg0 + 0x1C) != 0) && ((u32) M2C_FIELD(get_state__11TMainCursorFPv(arg0 + 0x1C), u32 *, 0x424) != 0U)) {
        TObjPlayer__sub_8013DEF8(M2C_FIELD(get_state__11TMainCursorFPv(arg0 + 0x1C), s32 *, 0x424) + 0x520);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013AE78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *__dt__11TMainCursorFPvs(u8 *arg0, s16 arg1);
u8 *get_state__11TMainCursorFPv(void *);
M2C_UNK destroy_lock_on__11TMainCursorFPvi(int, int);
s32 TObjPlayer__sub_801C6DAC(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_cursor__11TMainCursorFPvs(void *, int);

extern M2C_UNK lbl_804A71C4[];

u8 *__dt__11TMainCursorFPvs(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A71C4;
        if ((TObjPlayer__sub_801C6DAC((void *) (arg0 + 0x1C)) != 0) &&((u32) M2C_FIELD(get_state__11TMainCursorFPv(arg0 + 0x1C), u32 *, 0x424) != 0U)) {
            destroy_lock_on__11TMainCursorFPvi((int) (M2C_FIELD(get_state__11TMainCursorFPv(arg0 + 0x1C), s32 *, 0x424)), (int) (0));
        }
        destroy_cursor__11TMainCursorFPvs((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013AF0C
#include "types.h"

extern "C" {

void* init_lockon__11TMainCursorFPv(void* a0);
int init__13TLockOnCursorFPvPvPv(void);

    extern unsigned char lbl_804A71C4[];
    extern int lbl_805D2CC4;
void* init_lockon__11TMainCursorFPv(void* a0) { init__13TLockOnCursorFPvPvPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A71C4; *(int*)((char*)a0 + 0x0) = lbl_805D2CC4; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013B018
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *destruct__11TMainCursorFPvs(u8 *arg0, s16 arg1);
u8 *get_state__11TMainCursorFPv(void *);
s32 TObjPlayer__sub_801C6DAC(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_cursor__11TMainCursorFPvs(void *, int);
M2C_UNK set_target__11TMainCursorFPvi(int, int);

extern M2C_UNK lbl_804A7278[];

u8 *destruct__11TMainCursorFPvs(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A7278;
        if ((TObjPlayer__sub_801C6DAC((void *) (arg0 + 0x1C)) != 0) &&((u32) M2C_FIELD(get_state__11TMainCursorFPv(arg0 + 0x1C), u32 *, 0x424) != 0U)) {
            set_target__11TMainCursorFPvi((int) (M2C_FIELD(get_state__11TMainCursorFPv(arg0 + 0x1C), s32 *, 0x424)), (int) (0));
        }
        destroy_cursor__11TMainCursorFPvs((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013B0AC
#include "types.h"

extern "C" {

void* init_vtable__11TMainCursorFPv(void* a0);
int init__13TLockOnCursorFPvPvPv(void);

    extern unsigned char lbl_804A7278[];
    extern int lbl_805D2CC0;
void* init_vtable__11TMainCursorFPv(void* a0) { init__13TLockOnCursorFPvPvPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A7278; *(int*)((char*)a0 + 0x0) = lbl_805D2CC0; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013B1CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *destroy_and_delete__11TMainCursorFPvs(u8 *arg0, s16 arg1);
u8 *get_state__11TMainCursorFPv(void *);
s32 TObjPlayer__sub_801C6DAC(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_cursor__11TMainCursorFPvs(void *, int);
M2C_UNK set_sub_cursor_value__11TMainCursorFPvi(int, int);

extern M2C_UNK lbl_804A7290[];

u8 *destroy_and_delete__11TMainCursorFPvs(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A7290;
        if ((TObjPlayer__sub_801C6DAC((void *) (arg0 + 0x1C)) != 0) && ((u32) M2C_FIELD(get_state__11TMainCursorFPv(arg0 + 0x1C), u32 *, 0x424) != 0U)) {
            set_sub_cursor_value__11TMainCursorFPvi((int) (M2C_FIELD(get_state__11TMainCursorFPv(arg0 + 0x1C), s32 *, 0x424)), (int) (0));
        }
        destroy_cursor__11TMainCursorFPvs((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013B260
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void* init__11TMainCursorFPv(void* a0);
void TMainCursor__sub_8013B2A4(u16 *arg0);
M2C_UNK TPlayerBattleCtrl4P__sub_801BA74C(u16);
int init__13TLockOnCursorFPvPvPv(void);

    extern unsigned char lbl_804A7290[];
    extern int lbl_805D2CBC;
void* init__11TMainCursorFPv(void* a0) { init__13TLockOnCursorFPvPvPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A7290; *(int*)((char*)a0 + 0x0) = lbl_805D2CBC; return a0; }

void TMainCursor__sub_8013B2A4(u16 *arg0) {
    TPlayerBattleCtrl4P__sub_801BA74C(*arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013B398
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TMainCursor__sub_8013B398(void *arg0, void *arg1);

void TMainCursor__sub_8013B398(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013B4B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_photon_chair__11TMainCursorFi(s32 arg0);
M2C_UNK get_cursor_state__11TMainCursorFv();
f32 get_pos__11TMainCursorFPv(s32);
M2C_UNK fn_801424DC(s32, f32, f32, f32, f32);
M2C_UNK TObjFish__sub_803E46BC();
M2C_UNK update_parts2__15TPlyPhotonChairFPv(s32);
M2C_UNK update_parts__15TPlyPhotonChairFPv(s32);

extern f32 TMainCursor__data_805DB0C0;
extern f32 lbl_805DB0C8;
extern f32 TMainCursor__data_805DB0CC;

void update_photon_chair__11TMainCursorFi(s32 arg0) {
    if (get_pos__11TMainCursorFPv(arg0 + 0x4C) > lbl_805DB0C8) {
        update_parts2__15TPlyPhotonChairFPv(arg0 + 0x4C);
        fn_801424DC(arg0 + 0x4C, TMainCursor__data_805DB0CC, TMainCursor__data_805DB0C0, TMainCursor__data_805DB0C0, TMainCursor__data_805DB0C0);
        get_cursor_state__11TMainCursorFv();
        TObjFish__sub_803E46BC();
        update_parts__15TPlyPhotonChairFPv(arg0 + 0x4C);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013B524
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void update_chair__11TMainCursorFPv(void *arg0);
void TMainCursor__sub_8013E2DC(void);
void TObjFish__sub_803E46BC(void);
void play_sound__15TPlyPhotonChairFPv(void *);
void update_parts2__15TPlyPhotonChairFPv(void *);
void update_parts__15TPlyPhotonChairFPv(void *);

struct VOff_8013B524_arg0 { char pad_0[0x4C]; char f_4C[1]; };

void update_chair__11TMainCursorFPv(void *arg0) {
    struct VOff_8013B524_arg0 *self = (struct VOff_8013B524_arg0 *)arg0;
    update_parts2__15TPlyPhotonChairFPv(self->f_4C);
    play_sound__15TPlyPhotonChairFPv(self->f_4C);
    TMainCursor__sub_8013E2DC();
    TObjFish__sub_803E46BC();
    update_parts__15TPlyPhotonChairFPv(self->f_4C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013B56C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__11TMainCursorFPv(u8 *arg0);
M2C_UNK update_photon_chair__11TMainCursorFi(void *);
M2C_UNK update_chair__11TMainCursorFPv(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, M2C_UNK);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK fn_8023601C(void *, M2C_UNK *, f32);
M2C_UNK set_position_vec3__10TObjPlayerFPvPv(M2C_UNK, M2C_UNK *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern u8 *lbl_805D4DF0;
extern const f32 TMainCursor__data_805DB0C0;

void render__11TMainCursorFPv(u8 *arg0) {
    M2C_UNK sp8;
    f32 temp_f31;

    begin_effect_render__13TParticleCtrlFv();
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x30);
    TObjPlayer__sub_803D9B2C();
    fn_8023601C(arg0 + 0x40, &sp8, M2C_FIELD(arg0, f32 *, 0x2C));
    set_position_vec3__10TObjPlayerFPvPv(0, &sp8);
    TObjPlayer__sub_803D9214(0, M2C_FIELD(lbl_805D4DF0, s32 *, 0x194));
    TObjPlayer__sub_803D9B2C();
    TObjBoss2Tunnel__sub_803D929C(0, 0x2AAA);
    TObjPlayer__sub_803D9624(0, TMainCursor__data_805DB0C0, temp_f31, TMainCursor__data_805DB0C0);
    update_photon_chair__11TMainCursorFi(arg0);
    update_chair__11TMainCursorFPv(arg0);
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803D9B2C();
    TObjBoss2Tunnel__sub_803D929C(0, 0x7FFF);
    TObjPlayer__sub_803D9624(0, TMainCursor__data_805DB0C0, temp_f31, TMainCursor__data_805DB0C0);
    update_photon_chair__11TMainCursorFi(arg0);
    update_chair__11TMainCursorFPv(arg0);
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803D9B2C();
    TObjBoss2Tunnel__sub_803D929C(0, 0xD554);
    TObjPlayer__sub_803D9624(0, TMainCursor__data_805DB0C0, temp_f31, TMainCursor__data_805DB0C0);
    update_photon_chair__11TMainCursorFi(arg0);
    update_chair__11TMainCursorFPv(arg0);
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803D9B78();
    end_effect_render__13TParticleCtrlFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013B690
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_can_pickup__11TMainCursorFi(s32 arg0);
u32 check_field_24__11TMainCursorFPv(s32);
M2C_UNK get_id__11TMainCursorFPv(s32);
s32 TPhotonMylla__sub_80154CB4();
s32 can_pickup_item_by_id__10TObjPlayerFii(u32, s32);

s32 obj_testFlags30(M2C_UNK, M2C_UNK);

s32 check_can_pickup__11TMainCursorFi(s32 arg0) {
    s32 temp_r3;
    u32 temp_r3b;

    get_id__11TMainCursorFPv(arg0 + 0x60);
    temp_r3 = TPhotonMylla__sub_80154CB4();
    if ((temp_r3 != 0) && ((u32) (obj_testFlags30(temp_r3, 0x80000000) + 0x80000000) == 0U) && ((temp_r3b = check_field_24__11TMainCursorFPv(arg0)) != 0U) && (can_pickup_item_by_id__10TObjPlayerFii(temp_r3b, temp_r3) == 0)) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013BAA4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__11TMainCursorFv(u8 *arg0);
s32 init_render_flags__11TMainCursorFPv(void *);
s32 update__11TMainCursorFPv(void *);
s32 check_flag_1__11TMainCursorFPv(void *);
f32 get_pos__11TMainCursorFPv(void *);
M2C_UNK TMainCursor__sub_8013F180(void *);
M2C_UNK TMainCursor__sub_8013B70C();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern const f32 TMainCursor__data_805DB0C0;
extern const f32 TMainCursor__data_805DB0CC;
extern const f32 lbl_805DB0D0;

void run_task__11TMainCursorFv(u8 *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 2) {
        TMainCursor__sub_8013B70C();
        if (check_flag_1__11TMainCursorFPv(arg0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        }
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) - TMainCursor__data_805DB0CC);
        if (!(M2C_FIELD(arg0, f32 *, 0x30) > M2C_FIELD(arg0, f32 *, 0x34))) {
            M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
            if (init_render_flags__11TMainCursorFPv(arg0) == 0) {
                if (update__11TMainCursorFPv(arg0) != 0) {
                    TBoss3Volopt__sub_8022675C(0x3816, arg0 + 0x40, 0, 1);
                    return;
                }
                TBoss3Volopt__sub_8022675C(0x3111, arg0 + 0x40, 0, 1);
            }
        }
    case 1:
        return;
    case 2:
        if ((get_pos__11TMainCursorFPv(arg0 + 0x4C) - lbl_805DB0D0) > TMainCursor__data_805DB0C0) {
            TMainCursor__sub_8013F180(arg0 + 0x4C);
            return;
        }
        queue_destruction__7TObjectFv(arg0);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013BD4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__11TMainCursorFv(void *arg0, s16 arg1);
void TMainCursor__sub_8013E5E8(void *, int);
void destroy__11TMainCursorFis(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void destroy__11TMainCursorFPvs(void *, int);

extern M2C_UNK __vt__11TMainCursor[];

void *__dt__11TMainCursorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TMainCursor;
        destroy__11TMainCursorFis((s8 *)arg0 + 0x60, -1);
        destroy__11TMainCursorFPvs((s8 *)arg0 + 0x4C, -1);
        TMainCursor__sub_8013E5E8((s8 *)arg0 + 0x24, -1);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013BEB8
#include "types.h"

extern "C" {

s32 TMainCursor__sub_8013DF08();
int TMainCursor__sub_8013BE98(void* p);
int TMainCursor__sub_8013DF5C(void*, void* a1 = 0, void* a2 = 0);

s32 try_move__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2) {
    if (TMainCursor__sub_8013DF08() != 0) {
        return TMainCursor__sub_8013DF5C((void*)(arg0), (void*)(arg1), (void*)(arg2));
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013C600
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_cursor_parts__11TMainCursorFPv(u8 *arg0);
M2C_UNK set_cursor_id__11TMainCursorFPvs(M2C_UNK, int);
M2C_UNK set_size__11TMainCursorFPvf(f32);
M2C_UNK TMainCursor__sub_8013F154(void *, int);
M2C_UNK TMainCursor__sub_8013F170(void *, int);

extern const f32 TMainCursor__data_805DB0C0;

void reset_cursor_parts__11TMainCursorFPv(u8 *arg0) {
    s32 var_r30;

    TMainCursor__sub_8013F170((void *) (arg0 + 0x40), (int) (0));
    var_r30 = 0;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) TMainCursor__data_805DB0C0;
    do {
        TMainCursor__sub_8013F154((void *) (arg0 + 0x40), (int) (var_r30));
        set_size__11TMainCursorFPvf((f32) (TMainCursor__data_805DB0C0));
        set_cursor_id__11TMainCursorFPvs(TMainCursor__sub_8013F154((void *) (arg0 + 0x40), (int) (var_r30)), (int) (0xFFFF));
        var_r30 += 1;
    } while (var_r30 < 0xA);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013C7A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void quick_sort__11TMainCursorFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void reset_slots__11TMainCursorFi(s32 arg0);
void init_slots__11TMainCursorFPv(void* p);
s32 find_by_pos__11TMainCursorFiss(s32 arg0, s16 arg1, s16 arg2);
s32 TMainCursor__sub_8013C678();
M2C_UNK reset_slot__11TMainCursorFPv(s32);
M2C_UNK fn_80044330(s32);
int TMainCursor__sub_8013E870(void*, void*);
s32 get_selected_entry__11TMainCursorFPv(s32);
u8 get_active__11TMainCursorFPv(s32);
u8 TMainCursor__sub_8013E900(s32);

void quick_sort__11TMainCursorFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    if (arg2 < arg3) {
        temp_r3 = TMainCursor__sub_8013C678();
        quick_sort__11TMainCursorFiiii(arg0, arg1, arg2, temp_r3 - 1);
        quick_sort__11TMainCursorFiiii(arg0, arg1, temp_r3 + 1, arg3);
    }
}

void reset_slots__11TMainCursorFi(s32 arg0) {
    s32 i;
    s32 base;

    base = arg0 + 0x5C;
    i = 0;
    do {
        fn_80044330(base + 0x40);
        reset_slot__11TMainCursorFPv(base + 0x9C);
        i += 1;
        base += 0x124;
    } while (i < 4);
}

void init_slots__11TMainCursorFPv(void* p) { { int i; for (i = 0; i < 4; i++) { TMainCursor__sub_8013E870(p, (void*)i); } } }

s32 find_by_pos__11TMainCursorFiss(s32 arg0, s16 arg1, s16 arg2) {
    s32 i;
    s32 ptr;

    i = 0;
    ptr = arg0 + 0x5C;
loop_1:
    if ((arg1 == (s32) TMainCursor__sub_8013E900(ptr)) && (arg2 == (s32) get_active__11TMainCursorFPv(ptr)) && (get_selected_entry__11TMainCursorFPv(ptr) != 0)) {
        return ptr;
    }
    i += 1;
    ptr += 0x124;
    if (i >= 4) {
        return 0;
    }
    goto loop_1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013CADC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_cursor_pos__11TMainCursorFiUsi(s32 arg0, u16 arg1, s32 arg2);
u16 get_id__11TMainCursorFPv(s32);
M2C_UNK TMainCursor__sub_8013E970(s32, u16, s32, s32);

void set_cursor_pos__11TMainCursorFiUsi(s32 arg0, u16 arg1, s32 arg2) {
    u32 eq = (u32) __cntlzw((u32) ((u16) get_id__11TMainCursorFPv(arg0 + 0x4F8) - (u16) arg1)) >> 5;
    TMainCursor__sub_8013E970(arg0 + 0x508, arg1, arg2, eq + 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013CC78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_cursor_color__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2);
void set_display_flags__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2);
void setup_flags__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2);
s32 get_type__10TObjPlayerFPv(s32);
M2C_UNK set_color_mode__11TMainCursorFPvi(s32, M2C_UNK);
M2C_UNK set_color__11TMainCursorFPvi(s32, M2C_UNK);
M2C_UNK set_field_0c__11TMainCursorFPvi(s32, M2C_UNK);
M2C_UNK set_flags__11TMainCursorFPvi(s32, M2C_UNK);
s32 TObjPlayer__sub_801B066C(s32);
s32 is_technique_ready__8TTecCtrlFv();

void set_cursor_color__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2) {
    if (get_type__10TObjPlayerFPv(arg1 + 0x828) != 0) {
        set_color__11TMainCursorFPvi(arg2, 0xA000);
        set_color_mode__11TMainCursorFPvi(arg2, 0x70000000);
        return;
    }
    set_color__11TMainCursorFPvi(arg2, 0x8000);
    set_color_mode__11TMainCursorFPvi(arg2, 0x60000000);
}

void set_display_flags__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2) {
    set_color__11TMainCursorFPvi(arg2, 0x2000);
    set_color_mode__11TMainCursorFPvi(arg2, 0x10000000);
    set_flags__11TMainCursorFPvi(arg2, 0xE0000800);
    if (is_technique_ready__8TTecCtrlFv() == 0) {
        set_field_0c__11TMainCursorFPvi(arg2, 0x30000);
        return;
    }
    if (TObjPlayer__sub_801B066C(arg1) == 1) {
        set_field_0c__11TMainCursorFPvi(arg2, 0x40030000);
        return;
    }
    set_field_0c__11TMainCursorFPvi(arg2, 0x40030000);
}

void setup_flags__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2) {
    set_color__11TMainCursorFPvi(arg2, 0x2000);
    set_field_0c__11TMainCursorFPvi(arg2, 0x3C000);
    set_color_mode__11TMainCursorFPvi(arg2, 0x800);
    set_flags__11TMainCursorFPvi(arg2, 0xE0000000);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013D434
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void sort_list__11TMainCursorFii(s32 arg0, s32 arg1);
M2C_UNK quick_sort__11TMainCursorFiiii(s32, s32, M2C_UNK, s32);
s32 get_selected_entry__11TMainCursorFPv(s32, s32);
s32 TMainCursor__sub_8013F154(s32, M2C_UNK);
s32 TMainCursor__sub_8013F168(s32);

void sort_list__11TMainCursorFii(s32 arg0, s32 arg1) {
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r4;

    temp_r4 = arg1 * 0x124;
    temp_r30 = arg0 + temp_r4 + 0x5C;
    if (get_selected_entry__11TMainCursorFPv(temp_r30, temp_r4) != 0) {
        temp_r31 = TMainCursor__sub_8013F168(temp_r30 + 0x40);
        quick_sort__11TMainCursorFiiii(temp_r30, TMainCursor__sub_8013F154(temp_r30 + 0x40, 0), 0, temp_r31 - 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013DF1C
#include "types.h"

extern "C" {

s32 destroy__13TForceOperateFis(s32 arg0, s16 arg1);
int __dl__FPv();
int check_visible__11TMainCursorFPv(void* p);
u8 get_enabled__11TMainCursorFPv(void* p);
u8 get_type__11TMainCursorFPv(void* p);
void set_slot__20TWindowActionPaletteFPvUc(void* p, u8 v);
void set_mode__20TWindowActionPaletteFPvUc(void* p, u8 v);
s32 get_state__11TMainCursorFPv(void* p);
void set_field_0__13TForceOperateFPvs(void* p, s16 v);
u16 TMainCursor__sub_8013E03C(void* p);
int find_action_slot_for_target__11TMainCursorFiiii(void*);

int check_visible__11TMainCursorFPv(void* p) { return find_action_slot_for_target__11TMainCursorFiiii(p); }
u8 get_enabled__11TMainCursorFPv(void* p) { return *(u8*)((char*)p + 0x1); }
u8 get_type__11TMainCursorFPv(void* p) { return *(u8*)((char*)p + 0x0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013DFD4
#include "types.h"

extern "C" {

s32 destroy__13TForceOperateFis(s32 arg0, s16 arg1);
int __dl__FPv();
int check_visible__11TMainCursorFPv(void* p);
u8 get_enabled__11TMainCursorFPv(void* p);
u8 get_type__11TMainCursorFPv(void* p);
void set_slot__20TWindowActionPaletteFPvUc(void* p, u8 v);
void set_mode__20TWindowActionPaletteFPvUc(void* p, u8 v);
s32 get_state__11TMainCursorFPv(void* p);
void set_field_0__13TForceOperateFPvs(void* p, s16 v);
u16 TMainCursor__sub_8013E03C(void* p);
int find_action_slot_for_target__11TMainCursorFiiii(void*);

s32 get_state__11TMainCursorFPv(void* p) { return *(s32*)((char*)p + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E03C
#include "types.h"

extern "C" {

s32 destroy__13TForceOperateFis(s32 arg0, s16 arg1);
int __dl__FPv();
int check_visible__11TMainCursorFPv(void* p);
u8 get_enabled__11TMainCursorFPv(void* p);
u8 get_type__11TMainCursorFPv(void* p);
void set_slot__20TWindowActionPaletteFPvUc(void* p, u8 v);
void set_mode__20TWindowActionPaletteFPvUc(void* p, u8 v);
s32 get_state__11TMainCursorFPv(void* p);
void set_field_0__13TForceOperateFPvs(void* p, s16 v);
u16 TMainCursor__sub_8013E03C(void* p);
int find_action_slot_for_target__11TMainCursorFiiii(void*);

u16 TMainCursor__sub_8013E03C(void* p) { return *(u16*)((char*)p + 0x0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E044
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy_cursor__11TMainCursorFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void destroy__13TForceOperateFis(void *, int);

extern M2C_UNK lbl_804A7260[];

void *destroy_cursor__11TMainCursorFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A7260;
        destroy__13TForceOperateFis((s8 *)arg0 + 0x1C, -1);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E0AC
#include "types.h"

extern "C" {

void destroy_lock_on__11TMainCursorFPvi(void* p, s32 a1);
void TLockOnCursor__sub_8013E0D0(void* p, s32 v);

void destroy_lock_on__11TMainCursorFPvi(void* p, s32 a1) { TLockOnCursor__sub_8013E0D0((char*)p + 0x3c, a1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E17C
#include "types.h"

extern "C" {

int TMainCursor__sub_8013E1FC(void* a0 = 0, void* a1 = 0);
void update_cursor_pos__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E17C(void* p, f32 v);
f32 TMainCursor__sub_8013E184(void* p);
void TMainCursor__sub_8013E18C(void* p, s16 v);
u16 TMainCursor__sub_8013E194(void* p);
void set_target__11TMainCursorFPvi(void* p, s32 a1);
void TMainCursor__sub_8013E1C0(void* p, s32 v);
void set_target_index__11TMainCursorFPvs(void* p, s16 v);

void TMainCursor__sub_8013E17C(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }
f32 TMainCursor__sub_8013E184(void* p) { return *(f32*)((char*)p + 0xc); }
void TMainCursor__sub_8013E18C(void* p, s16 v) { *(s16*)((char*)p + 0x4) = v; }
u16 TMainCursor__sub_8013E194(void* p) { return *(u16*)((char*)p + 0x6); }
void set_target__11TMainCursorFPvi(void* p, s32 a1) { TMainCursor__sub_8013E1C0((char*)p + 0x3c, a1); }
void TMainCursor__sub_8013E1C0(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E1C8
#include "types.h"

extern "C" {

int TMainCursor__sub_8013E1FC(void* a0 = 0, void* a1 = 0);
void update_cursor_pos__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E17C(void* p, f32 v);
f32 TMainCursor__sub_8013E184(void* p);
void TMainCursor__sub_8013E18C(void* p, s16 v);
u16 TMainCursor__sub_8013E194(void* p);
void set_target__11TMainCursorFPvi(void* p, s32 a1);
void TMainCursor__sub_8013E1C0(void* p, s32 v);
void set_target_index__11TMainCursorFPvs(void* p, s16 v);

void set_target_index__11TMainCursorFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x4) = v; }
void update_cursor_pos__11TMainCursorFPv(void* p) { TMainCursor__sub_8013E1FC((char*)p + 0x14, (char*)p + 0xc); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E26C
#include "types.h"

extern "C" {

void set_sub_cursor_value__11TMainCursorFPvi(void* p, s32 a1);
void TMainCursor__sub_8013E290(void* p, s32 v);
s16 TMainCursor__sub_8013E298(void* p);
s32 TMainCursor__sub_8013E2A0(void* p);
s32 get_index__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E2B0(void* p);
void reset_slot__11TMainCursorFPv(void* p);
void set_type__11TMainCursorFPvi(void* p, s32 v);
int get_cursor_state__11TMainCursorFv(void);
int TMainCursor__sub_8013E2DC(void);

void set_sub_cursor_value__11TMainCursorFPvi(void* p, s32 a1) { TMainCursor__sub_8013E290((void*)((char*)p + 0x3c), a1); }
void TMainCursor__sub_8013E290(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
s16 TMainCursor__sub_8013E298(void* p) { return *(s16*)((char*)p + 0x0); }
s32 TMainCursor__sub_8013E2A0(void* p) { return *(s32*)((char*)p + 0x0); }
s32 get_index__11TMainCursorFPv(void* p) { return *(s32*)((char*)p + 0x4); }
void TMainCursor__sub_8013E2B0(void* p) { *(s16*)((char*)p + 0x2) = 0; *(s16*)((char*)p + 0x0) = 0; }
void reset_slot__11TMainCursorFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void set_type__11TMainCursorFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }

    extern int lbl_805D564C;
int get_cursor_state__11TMainCursorFv(void) {  return lbl_805D564C; }

    extern int lbl_805D5644;
int TMainCursor__sub_8013E2DC(void) {  return lbl_805D5644; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E2E4
#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
void update_cursor_pos__13TLockOnCursorFPv(void* p);
int check_field_24__11TMainCursorFPv(void* p);
u16 get_id__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E310(void* p);
int TMainCursor__sub_8013E338(void* p);
int TMainCursor__sub_8013E358(void* p);
void* get_list__11TMainCursorFPv(void* p);
int update_target_sub__11TMainCursorFPv(void* p);
u16 get_render_flag__11TMainCursorFPv(void* p);
u16 TMainCursor__sub_8013E4A0(void* p);
int test_flag_2_at_20__11TMainCursorFPv(void* p);
int init_render_flags__11TMainCursorFPv(void* p);
int update__11TMainCursorFPv(void* p);
int check_flag_1__11TMainCursorFPv(void* p);
u8 is_position_moved__11TMainCursorFPv(void* p);
s16 TMainCursor__sub_8013E570(void* p);
int check_flag_4__11TMainCursorFPv(void* p);
int forward_13E338_at_60__11TMainCursorFPv(void* p);
int update_sub_60__11TMainCursorFPv(void* p);
void set_offset_y__11TMainCursorFPvs(void* p, s16 a1);
void TMainCursor__sub_8013E694(void* p, s16 v);
int init_field_60__11TMainCursorFPv(void* p);
int get_action_palette__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E6E0(void* p);
int update_action_palette__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E724(void* p, f32 v);
void set_target_id__11TMainCursorFPvs(void* p, s16 v);
int TMainCursor__sub_8013E75C(void* p);
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
int TMainCursor__sub_8013E8A0(void* p);
int get_selected_entry__11TMainCursorFPv(void* p);
int get_active__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E900(void* p);
s16 TMainCursor__sub_8013E920(void* p);
void TMainCursor__sub_8013E928(void* p, s16 v);
void TMainCursor__sub_8013E930(void* p, s16 v);
u16 get_target_id__11TMainCursorFPv(void* p);
int is_cursor_clear__11TMainCursorFPv(void* p);
void set_color_mode__11TMainCursorFPvi(void* p, s32 v);
void set_color__11TMainCursorFPvi(void* p, s32 v);
void set_field_0c__11TMainCursorFPvi(void* p, s32 v);
void set_flags__11TMainCursorFPvi(void* p, s32 v);
int TMainCursor__sub_8013E9A0(void* p);
int TMainCursor__sub_8013E9C0(void* p);
int TMainCursor__sub_8013E9E0(void* p);
void TMainCursor__sub_8013EA00(void* p, s32 v);
int render_part__13TLockOnCursorFPv(void* p);
int set_flag_8_bit0__13TLockOnCursorFPv(void* p);
int update_ring__13TLockOnCursorFPv(void* p);
int is_bit1_set__13TLockOnCursorFPv(void* p);
int is_inactive__13TLockOnCursorFPv(void* p);
int update_ring_sub__13TLockOnCursorFPv(void* p);
s32 TLockOnCursor__sub_8013EB2C(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

int check_field_24__11TMainCursorFPv(void* p) { return TMainCursor__sub_8013B2A4((char*)p + 0x24); }
u16 get_id__11TMainCursorFPv(void* p) { return *(u16*)((char*)p + 0x4); }
int TMainCursor__sub_8013E310(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x20, 2); }
int TMainCursor__sub_8013E338(void* p) { return get_enabled__11TMainCursorFPv(p); }
int TMainCursor__sub_8013E358(void* p) { return get_type__11TMainCursorFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E44C
#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
void update_cursor_pos__13TLockOnCursorFPv(void* p);
int check_field_24__11TMainCursorFPv(void* p);
u16 get_id__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E310(void* p);
int TMainCursor__sub_8013E338(void* p);
int TMainCursor__sub_8013E358(void* p);
void* get_list__11TMainCursorFPv(void* p);
int update_target_sub__11TMainCursorFPv(void* p);
u16 get_render_flag__11TMainCursorFPv(void* p);
u16 TMainCursor__sub_8013E4A0(void* p);
int test_flag_2_at_20__11TMainCursorFPv(void* p);
int init_render_flags__11TMainCursorFPv(void* p);
int update__11TMainCursorFPv(void* p);
int check_flag_1__11TMainCursorFPv(void* p);
u8 is_position_moved__11TMainCursorFPv(void* p);
s16 TMainCursor__sub_8013E570(void* p);
int check_flag_4__11TMainCursorFPv(void* p);
int forward_13E338_at_60__11TMainCursorFPv(void* p);
int update_sub_60__11TMainCursorFPv(void* p);
void set_offset_y__11TMainCursorFPvs(void* p, s16 a1);
void TMainCursor__sub_8013E694(void* p, s16 v);
int init_field_60__11TMainCursorFPv(void* p);
int get_action_palette__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E6E0(void* p);
int update_action_palette__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E724(void* p, f32 v);
void set_target_id__11TMainCursorFPvs(void* p, s16 v);
int TMainCursor__sub_8013E75C(void* p);
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
int TMainCursor__sub_8013E8A0(void* p);
int get_selected_entry__11TMainCursorFPv(void* p);
int get_active__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E900(void* p);
s16 TMainCursor__sub_8013E920(void* p);
void TMainCursor__sub_8013E928(void* p, s16 v);
void TMainCursor__sub_8013E930(void* p, s16 v);
u16 get_target_id__11TMainCursorFPv(void* p);
int is_cursor_clear__11TMainCursorFPv(void* p);
void set_color_mode__11TMainCursorFPvi(void* p, s32 v);
void set_color__11TMainCursorFPvi(void* p, s32 v);
void set_field_0c__11TMainCursorFPvi(void* p, s32 v);
void set_flags__11TMainCursorFPvi(void* p, s32 v);
int TMainCursor__sub_8013E9A0(void* p);
int TMainCursor__sub_8013E9C0(void* p);
int TMainCursor__sub_8013E9E0(void* p);
void TMainCursor__sub_8013EA00(void* p, s32 v);
int render_part__13TLockOnCursorFPv(void* p);
int set_flag_8_bit0__13TLockOnCursorFPv(void* p);
int update_ring__13TLockOnCursorFPv(void* p);
int is_bit1_set__13TLockOnCursorFPv(void* p);
int is_inactive__13TLockOnCursorFPv(void* p);
int update_ring_sub__13TLockOnCursorFPv(void* p);
s32 TLockOnCursor__sub_8013EB2C(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

void* get_list__11TMainCursorFPv(void* p) { return (char*)p + 0xc; }
int update_target_sub__11TMainCursorFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x20, 1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E47C
#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
void update_cursor_pos__13TLockOnCursorFPv(void* p);
int check_field_24__11TMainCursorFPv(void* p);
u16 get_id__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E310(void* p);
int TMainCursor__sub_8013E338(void* p);
int TMainCursor__sub_8013E358(void* p);
void* get_list__11TMainCursorFPv(void* p);
int update_target_sub__11TMainCursorFPv(void* p);
u16 get_render_flag__11TMainCursorFPv(void* p);
u16 TMainCursor__sub_8013E4A0(void* p);
int test_flag_2_at_20__11TMainCursorFPv(void* p);
int init_render_flags__11TMainCursorFPv(void* p);
int update__11TMainCursorFPv(void* p);
int check_flag_1__11TMainCursorFPv(void* p);
u8 is_position_moved__11TMainCursorFPv(void* p);
s16 TMainCursor__sub_8013E570(void* p);
int check_flag_4__11TMainCursorFPv(void* p);
int forward_13E338_at_60__11TMainCursorFPv(void* p);
int update_sub_60__11TMainCursorFPv(void* p);
void set_offset_y__11TMainCursorFPvs(void* p, s16 a1);
void TMainCursor__sub_8013E694(void* p, s16 v);
int init_field_60__11TMainCursorFPv(void* p);
int get_action_palette__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E6E0(void* p);
int update_action_palette__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E724(void* p, f32 v);
void set_target_id__11TMainCursorFPvs(void* p, s16 v);
int TMainCursor__sub_8013E75C(void* p);
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
int TMainCursor__sub_8013E8A0(void* p);
int get_selected_entry__11TMainCursorFPv(void* p);
int get_active__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E900(void* p);
s16 TMainCursor__sub_8013E920(void* p);
void TMainCursor__sub_8013E928(void* p, s16 v);
void TMainCursor__sub_8013E930(void* p, s16 v);
u16 get_target_id__11TMainCursorFPv(void* p);
int is_cursor_clear__11TMainCursorFPv(void* p);
void set_color_mode__11TMainCursorFPvi(void* p, s32 v);
void set_color__11TMainCursorFPvi(void* p, s32 v);
void set_field_0c__11TMainCursorFPvi(void* p, s32 v);
void set_flags__11TMainCursorFPvi(void* p, s32 v);
int TMainCursor__sub_8013E9A0(void* p);
int TMainCursor__sub_8013E9C0(void* p);
int TMainCursor__sub_8013E9E0(void* p);
void TMainCursor__sub_8013EA00(void* p, s32 v);
int render_part__13TLockOnCursorFPv(void* p);
int set_flag_8_bit0__13TLockOnCursorFPv(void* p);
int update_ring__13TLockOnCursorFPv(void* p);
int is_bit1_set__13TLockOnCursorFPv(void* p);
int is_inactive__13TLockOnCursorFPv(void* p);
int update_ring_sub__13TLockOnCursorFPv(void* p);
s32 TLockOnCursor__sub_8013EB2C(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

u16 get_render_flag__11TMainCursorFPv(void* p) { return TMainCursor__sub_8013E4A0((char*)p + 0x24); }
u16 TMainCursor__sub_8013E4A0(void* p) { return *(u16*)((char*)p + 0x0); }
int test_flag_2_at_20__11TMainCursorFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x20, 2); }
int init_render_flags__11TMainCursorFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x20, 8); }
int update__11TMainCursorFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x20, 4); }
int check_flag_1__11TMainCursorFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x20, 1); }
u8 is_position_moved__11TMainCursorFPv(void* p) { return (u8)(TMainCursor__sub_8013E570((char*)p + 0x60)); }
s16 TMainCursor__sub_8013E570(void* p) { return *(s16*)((char*)p + 0x6); }
int check_flag_4__11TMainCursorFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x20, 4); }
int forward_13E338_at_60__11TMainCursorFPv(void* p) { return TMainCursor__sub_8013E338((char*)p + 0x60); }
int update_sub_60__11TMainCursorFPv(void* p) { return TMainCursor__sub_8013E358((char*)p + 0x60); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E624
#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
void update_cursor_pos__13TLockOnCursorFPv(void* p);
int check_field_24__11TMainCursorFPv(void* p);
u16 get_id__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E310(void* p);
int TMainCursor__sub_8013E338(void* p);
int TMainCursor__sub_8013E358(void* p);
void* get_list__11TMainCursorFPv(void* p);
int update_target_sub__11TMainCursorFPv(void* p);
u16 get_render_flag__11TMainCursorFPv(void* p);
u16 TMainCursor__sub_8013E4A0(void* p);
int test_flag_2_at_20__11TMainCursorFPv(void* p);
int init_render_flags__11TMainCursorFPv(void* p);
int update__11TMainCursorFPv(void* p);
int check_flag_1__11TMainCursorFPv(void* p);
u8 is_position_moved__11TMainCursorFPv(void* p);
s16 TMainCursor__sub_8013E570(void* p);
int check_flag_4__11TMainCursorFPv(void* p);
int forward_13E338_at_60__11TMainCursorFPv(void* p);
int update_sub_60__11TMainCursorFPv(void* p);
void set_offset_y__11TMainCursorFPvs(void* p, s16 a1);
void TMainCursor__sub_8013E694(void* p, s16 v);
int init_field_60__11TMainCursorFPv(void* p);
int get_action_palette__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E6E0(void* p);
int update_action_palette__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E724(void* p, f32 v);
void set_target_id__11TMainCursorFPvs(void* p, s16 v);
int TMainCursor__sub_8013E75C(void* p);
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
int TMainCursor__sub_8013E8A0(void* p);
int get_selected_entry__11TMainCursorFPv(void* p);
int get_active__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E900(void* p);
s16 TMainCursor__sub_8013E920(void* p);
void TMainCursor__sub_8013E928(void* p, s16 v);
void TMainCursor__sub_8013E930(void* p, s16 v);
u16 get_target_id__11TMainCursorFPv(void* p);
int is_cursor_clear__11TMainCursorFPv(void* p);
void set_color_mode__11TMainCursorFPvi(void* p, s32 v);
void set_color__11TMainCursorFPvi(void* p, s32 v);
void set_field_0c__11TMainCursorFPvi(void* p, s32 v);
void set_flags__11TMainCursorFPvi(void* p, s32 v);
int TMainCursor__sub_8013E9A0(void* p);
int TMainCursor__sub_8013E9C0(void* p);
int TMainCursor__sub_8013E9E0(void* p);
void TMainCursor__sub_8013EA00(void* p, s32 v);
int render_part__13TLockOnCursorFPv(void* p);
int set_flag_8_bit0__13TLockOnCursorFPv(void* p);
int update_ring__13TLockOnCursorFPv(void* p);
int is_bit1_set__13TLockOnCursorFPv(void* p);
int is_inactive__13TLockOnCursorFPv(void* p);
int update_ring_sub__13TLockOnCursorFPv(void* p);
s32 TLockOnCursor__sub_8013EB2C(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

s32 destroy__11TMainCursorFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        free_if_valid__14TPlyDispConfigFis(arg0, -1);
        if (arg1 > 0) {
            __dl__FPv((void*)(arg0));
        }
    }
    return arg0;
}
void set_offset_y__11TMainCursorFPvs(void* p, s16 a1) { TMainCursor__sub_8013E694((char*)p + 0x24, a1); }
void TMainCursor__sub_8013E694(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
int init_field_60__11TMainCursorFPv(void* p) { return get_action_palette__11TMainCursorFPv((char*)p + 0x60); }
int get_action_palette__11TMainCursorFPv(void* p) { return set_slot__20TWindowActionPaletteFPvUc(p); }
int TMainCursor__sub_8013E6E0(void* p) { return update_action_palette__11TMainCursorFPv((char*)p + 0x60); }
int update_action_palette__11TMainCursorFPv(void* p) { return set_mode__20TWindowActionPaletteFPvUc(p); }
void TMainCursor__sub_8013E724(void* p, f32 v) { *(f32*)((char*)p + 0x2c) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E754
#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
void update_cursor_pos__13TLockOnCursorFPv(void* p);
int check_field_24__11TMainCursorFPv(void* p);
u16 get_id__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E310(void* p);
int TMainCursor__sub_8013E338(void* p);
int TMainCursor__sub_8013E358(void* p);
void* get_list__11TMainCursorFPv(void* p);
int update_target_sub__11TMainCursorFPv(void* p);
u16 get_render_flag__11TMainCursorFPv(void* p);
u16 TMainCursor__sub_8013E4A0(void* p);
int test_flag_2_at_20__11TMainCursorFPv(void* p);
int init_render_flags__11TMainCursorFPv(void* p);
int update__11TMainCursorFPv(void* p);
int check_flag_1__11TMainCursorFPv(void* p);
u8 is_position_moved__11TMainCursorFPv(void* p);
s16 TMainCursor__sub_8013E570(void* p);
int check_flag_4__11TMainCursorFPv(void* p);
int forward_13E338_at_60__11TMainCursorFPv(void* p);
int update_sub_60__11TMainCursorFPv(void* p);
void set_offset_y__11TMainCursorFPvs(void* p, s16 a1);
void TMainCursor__sub_8013E694(void* p, s16 v);
int init_field_60__11TMainCursorFPv(void* p);
int get_action_palette__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E6E0(void* p);
int update_action_palette__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E724(void* p, f32 v);
void set_target_id__11TMainCursorFPvs(void* p, s16 v);
int TMainCursor__sub_8013E75C(void* p);
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
int TMainCursor__sub_8013E8A0(void* p);
int get_selected_entry__11TMainCursorFPv(void* p);
int get_active__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E900(void* p);
s16 TMainCursor__sub_8013E920(void* p);
void TMainCursor__sub_8013E928(void* p, s16 v);
void TMainCursor__sub_8013E930(void* p, s16 v);
u16 get_target_id__11TMainCursorFPv(void* p);
int is_cursor_clear__11TMainCursorFPv(void* p);
void set_color_mode__11TMainCursorFPvi(void* p, s32 v);
void set_color__11TMainCursorFPvi(void* p, s32 v);
void set_field_0c__11TMainCursorFPvi(void* p, s32 v);
void set_flags__11TMainCursorFPvi(void* p, s32 v);
int TMainCursor__sub_8013E9A0(void* p);
int TMainCursor__sub_8013E9C0(void* p);
int TMainCursor__sub_8013E9E0(void* p);
void TMainCursor__sub_8013EA00(void* p, s32 v);
int render_part__13TLockOnCursorFPv(void* p);
int set_flag_8_bit0__13TLockOnCursorFPv(void* p);
int update_ring__13TLockOnCursorFPv(void* p);
int is_bit1_set__13TLockOnCursorFPv(void* p);
int is_inactive__13TLockOnCursorFPv(void* p);
int update_ring_sub__13TLockOnCursorFPv(void* p);
s32 TLockOnCursor__sub_8013EB2C(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

void set_target_id__11TMainCursorFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x6) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E780
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK init_gc_tag();
M2C_UNK reset_target__11TMainCursorFi(void *);
s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
void update_cursor_pos__13TLockOnCursorFPv(void* p);
int check_field_24__11TMainCursorFPv(void* p);
u16 get_id__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E310(void* p);
int TMainCursor__sub_8013E338(void* p);
int TMainCursor__sub_8013E358(void* p);
void* get_list__11TMainCursorFPv(void* p);
int update_target_sub__11TMainCursorFPv(void* p);
u16 get_render_flag__11TMainCursorFPv(void* p);
u16 TMainCursor__sub_8013E4A0(void* p);
int test_flag_2_at_20__11TMainCursorFPv(void* p);
int init_render_flags__11TMainCursorFPv(void* p);
int update__11TMainCursorFPv(void* p);
int check_flag_1__11TMainCursorFPv(void* p);
u8 is_position_moved__11TMainCursorFPv(void* p);
s16 TMainCursor__sub_8013E570(void* p);
int check_flag_4__11TMainCursorFPv(void* p);
int forward_13E338_at_60__11TMainCursorFPv(void* p);
int update_sub_60__11TMainCursorFPv(void* p);
void set_offset_y__11TMainCursorFPvs(void* p, s16 a1);
void TMainCursor__sub_8013E694(void* p, s16 v);
int init_field_60__11TMainCursorFPv(void* p);
int get_action_palette__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E6E0(void* p);
int update_action_palette__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E724(void* p, f32 v);
void set_target_id__11TMainCursorFPvs(void* p, s16 v);
int TMainCursor__sub_8013E75C(void* p);
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
int TMainCursor__sub_8013E8A0(void* p);
int get_selected_entry__11TMainCursorFPv(void* p);
int get_active__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E900(void* p);
s16 TMainCursor__sub_8013E920(void* p);
void TMainCursor__sub_8013E928(void* p, s16 v);
void TMainCursor__sub_8013E930(void* p, s16 v);
u16 get_target_id__11TMainCursorFPv(void* p);
int is_cursor_clear__11TMainCursorFPv(void* p);
void set_color_mode__11TMainCursorFPvi(void* p, s32 v);
void set_color__11TMainCursorFPvi(void* p, s32 v);
void set_field_0c__11TMainCursorFPvi(void* p, s32 v);
void set_flags__11TMainCursorFPvi(void* p, s32 v);
int TMainCursor__sub_8013E9A0(void* p);
int TMainCursor__sub_8013E9C0(void* p);
int TMainCursor__sub_8013E9E0(void* p);
void TMainCursor__sub_8013EA00(void* p, s32 v);
int render_part__13TLockOnCursorFPv(void* p);
int set_flag_8_bit0__13TLockOnCursorFPv(void* p);
int update_ring__13TLockOnCursorFPv(void* p);
int is_bit1_set__13TLockOnCursorFPv(void* p);
int is_inactive__13TLockOnCursorFPv(void* p);
int update_ring_sub__13TLockOnCursorFPv(void* p);
s32 TLockOnCursor__sub_8013EB2C(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

s32 reset__11TMainCursorFi(s32 arg0) {
    init_gc_tag();
    reset_target__11TMainCursorFi((void *) (arg0));
    return arg0;
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E7B8
#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
void update_cursor_pos__13TLockOnCursorFPv(void* p);
int check_field_24__11TMainCursorFPv(void* p);
u16 get_id__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E310(void* p);
int TMainCursor__sub_8013E338(void* p);
int TMainCursor__sub_8013E358(void* p);
void* get_list__11TMainCursorFPv(void* p);
int update_target_sub__11TMainCursorFPv(void* p);
u16 get_render_flag__11TMainCursorFPv(void* p);
u16 TMainCursor__sub_8013E4A0(void* p);
int test_flag_2_at_20__11TMainCursorFPv(void* p);
int init_render_flags__11TMainCursorFPv(void* p);
int update__11TMainCursorFPv(void* p);
int check_flag_1__11TMainCursorFPv(void* p);
u8 is_position_moved__11TMainCursorFPv(void* p);
s16 TMainCursor__sub_8013E570(void* p);
int check_flag_4__11TMainCursorFPv(void* p);
int forward_13E338_at_60__11TMainCursorFPv(void* p);
int update_sub_60__11TMainCursorFPv(void* p);
void set_offset_y__11TMainCursorFPvs(void* p, s16 a1);
void TMainCursor__sub_8013E694(void* p, s16 v);
int init_field_60__11TMainCursorFPv(void* p);
int get_action_palette__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E6E0(void* p);
int update_action_palette__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E724(void* p, f32 v);
void set_target_id__11TMainCursorFPvs(void* p, s16 v);
int TMainCursor__sub_8013E75C(void* p);
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
int TMainCursor__sub_8013E8A0(void* p);
int get_selected_entry__11TMainCursorFPv(void* p);
int get_active__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E900(void* p);
s16 TMainCursor__sub_8013E920(void* p);
void TMainCursor__sub_8013E928(void* p, s16 v);
void TMainCursor__sub_8013E930(void* p, s16 v);
u16 get_target_id__11TMainCursorFPv(void* p);
int is_cursor_clear__11TMainCursorFPv(void* p);
void set_color_mode__11TMainCursorFPvi(void* p, s32 v);
void set_color__11TMainCursorFPvi(void* p, s32 v);
void set_field_0c__11TMainCursorFPvi(void* p, s32 v);
void set_flags__11TMainCursorFPvi(void* p, s32 v);
int TMainCursor__sub_8013E9A0(void* p);
int TMainCursor__sub_8013E9C0(void* p);
int TMainCursor__sub_8013E9E0(void* p);
void TMainCursor__sub_8013EA00(void* p, s32 v);
int render_part__13TLockOnCursorFPv(void* p);
int set_flag_8_bit0__13TLockOnCursorFPv(void* p);
int update_ring__13TLockOnCursorFPv(void* p);
int is_bit1_set__13TLockOnCursorFPv(void* p);
int is_inactive__13TLockOnCursorFPv(void* p);
int update_ring_sub__13TLockOnCursorFPv(void* p);
s32 TLockOnCursor__sub_8013EB2C(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

void reset_target__11TMainCursorFi(s32 arg0) {
    init__6gc_tagFv();
    set_target_index__11TMainCursorFPvs((void*)(arg0), (void*)(0xFFFF));
    set_target_id__11TMainCursorFPvs((void*)(arg0), 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E810
#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
void update_cursor_pos__13TLockOnCursorFPv(void* p);
int check_field_24__11TMainCursorFPv(void* p);
u16 get_id__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E310(void* p);
int TMainCursor__sub_8013E338(void* p);
int TMainCursor__sub_8013E358(void* p);
void* get_list__11TMainCursorFPv(void* p);
int update_target_sub__11TMainCursorFPv(void* p);
u16 get_render_flag__11TMainCursorFPv(void* p);
u16 TMainCursor__sub_8013E4A0(void* p);
int test_flag_2_at_20__11TMainCursorFPv(void* p);
int init_render_flags__11TMainCursorFPv(void* p);
int update__11TMainCursorFPv(void* p);
int check_flag_1__11TMainCursorFPv(void* p);
u8 is_position_moved__11TMainCursorFPv(void* p);
s16 TMainCursor__sub_8013E570(void* p);
int check_flag_4__11TMainCursorFPv(void* p);
int forward_13E338_at_60__11TMainCursorFPv(void* p);
int update_sub_60__11TMainCursorFPv(void* p);
void set_offset_y__11TMainCursorFPvs(void* p, s16 a1);
void TMainCursor__sub_8013E694(void* p, s16 v);
int init_field_60__11TMainCursorFPv(void* p);
int get_action_palette__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E6E0(void* p);
int update_action_palette__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E724(void* p, f32 v);
void set_target_id__11TMainCursorFPvs(void* p, s16 v);
int TMainCursor__sub_8013E75C(void* p);
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
int TMainCursor__sub_8013E8A0(void* p);
int get_selected_entry__11TMainCursorFPv(void* p);
int get_active__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E900(void* p);
s16 TMainCursor__sub_8013E920(void* p);
void TMainCursor__sub_8013E928(void* p, s16 v);
void TMainCursor__sub_8013E930(void* p, s16 v);
u16 get_target_id__11TMainCursorFPv(void* p);
int is_cursor_clear__11TMainCursorFPv(void* p);
void set_color_mode__11TMainCursorFPvi(void* p, s32 v);
void set_color__11TMainCursorFPvi(void* p, s32 v);
void set_field_0c__11TMainCursorFPvi(void* p, s32 v);
void set_flags__11TMainCursorFPvi(void* p, s32 v);
int TMainCursor__sub_8013E9A0(void* p);
int TMainCursor__sub_8013E9C0(void* p);
int TMainCursor__sub_8013E9E0(void* p);
void TMainCursor__sub_8013EA00(void* p, s32 v);
int render_part__13TLockOnCursorFPv(void* p);
int set_flag_8_bit0__13TLockOnCursorFPv(void* p);
int update_ring__13TLockOnCursorFPv(void* p);
int is_bit1_set__13TLockOnCursorFPv(void* p);
int is_inactive__13TLockOnCursorFPv(void* p);
int update_ring_sub__13TLockOnCursorFPv(void* p);
s32 TLockOnCursor__sub_8013EB2C(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

s32 TMainCursor__sub_8013E810(void* p) { return *(s32*)((char*)p + 0xc); }
s32 TMainCursor__sub_8013E818(void* p) { return *(s32*)((char*)p + 0x8); }
s32 TMainCursor__sub_8013E820(void* p) { return *(s32*)((char*)p + 0x14); }
s32 TMainCursor__sub_8013E828(void* p) { return *(s32*)((char*)p + 0x10); }
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2) { TMainCursor__sub_8013E854(a2); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E8A0
#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
void update_cursor_pos__13TLockOnCursorFPv(void* p);
int check_field_24__11TMainCursorFPv(void* p);
u16 get_id__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E310(void* p);
int TMainCursor__sub_8013E338(void* p);
int TMainCursor__sub_8013E358(void* p);
void* get_list__11TMainCursorFPv(void* p);
int update_target_sub__11TMainCursorFPv(void* p);
u16 get_render_flag__11TMainCursorFPv(void* p);
u16 TMainCursor__sub_8013E4A0(void* p);
int test_flag_2_at_20__11TMainCursorFPv(void* p);
int init_render_flags__11TMainCursorFPv(void* p);
int update__11TMainCursorFPv(void* p);
int check_flag_1__11TMainCursorFPv(void* p);
u8 is_position_moved__11TMainCursorFPv(void* p);
s16 TMainCursor__sub_8013E570(void* p);
int check_flag_4__11TMainCursorFPv(void* p);
int forward_13E338_at_60__11TMainCursorFPv(void* p);
int update_sub_60__11TMainCursorFPv(void* p);
void set_offset_y__11TMainCursorFPvs(void* p, s16 a1);
void TMainCursor__sub_8013E694(void* p, s16 v);
int init_field_60__11TMainCursorFPv(void* p);
int get_action_palette__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E6E0(void* p);
int update_action_palette__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E724(void* p, f32 v);
void set_target_id__11TMainCursorFPvs(void* p, s16 v);
int TMainCursor__sub_8013E75C(void* p);
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
int TMainCursor__sub_8013E8A0(void* p);
int get_selected_entry__11TMainCursorFPv(void* p);
int get_active__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E900(void* p);
s16 TMainCursor__sub_8013E920(void* p);
void TMainCursor__sub_8013E928(void* p, s16 v);
void TMainCursor__sub_8013E930(void* p, s16 v);
u16 get_target_id__11TMainCursorFPv(void* p);
int is_cursor_clear__11TMainCursorFPv(void* p);
void set_color_mode__11TMainCursorFPvi(void* p, s32 v);
void set_color__11TMainCursorFPvi(void* p, s32 v);
void set_field_0c__11TMainCursorFPvi(void* p, s32 v);
void set_flags__11TMainCursorFPvi(void* p, s32 v);
int TMainCursor__sub_8013E9A0(void* p);
int TMainCursor__sub_8013E9C0(void* p);
int TMainCursor__sub_8013E9E0(void* p);
void TMainCursor__sub_8013EA00(void* p, s32 v);
int render_part__13TLockOnCursorFPv(void* p);
int set_flag_8_bit0__13TLockOnCursorFPv(void* p);
int update_ring__13TLockOnCursorFPv(void* p);
int is_bit1_set__13TLockOnCursorFPv(void* p);
int is_inactive__13TLockOnCursorFPv(void* p);
int update_ring_sub__13TLockOnCursorFPv(void* p);
s32 TLockOnCursor__sub_8013EB2C(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

int TMainCursor__sub_8013E8A0(void* p) { return TObjPlayer__sub_8013DEF8(p); }
int get_selected_entry__11TMainCursorFPv(void* p) { return TMainCursor__sub_8013DF08(p); }
int get_active__11TMainCursorFPv(void* p) { return get_enabled__11TMainCursorFPv(p); }
int TMainCursor__sub_8013E900(void* p) { return get_type__11TMainCursorFPv(p); }
s16 TMainCursor__sub_8013E920(void* p) { return *(s16*)((char*)p + 0x2); }
void TMainCursor__sub_8013E928(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void TMainCursor__sub_8013E930(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
u16 get_target_id__11TMainCursorFPv(void* p) { return *(u16*)((char*)p + 0x20); }
int is_cursor_clear__11TMainCursorFPv(void* p) { return (TObjPlayer__sub_8001BEF8((char*)p + 0x1c, 1)) == 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E980
#include "types.h"

extern "C" {

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_8013E854(void* a0 = 0);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
void update_cursor_pos__13TLockOnCursorFPv(void* p);
int check_field_24__11TMainCursorFPv(void* p);
u16 get_id__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E310(void* p);
int TMainCursor__sub_8013E338(void* p);
int TMainCursor__sub_8013E358(void* p);
void* get_list__11TMainCursorFPv(void* p);
int update_target_sub__11TMainCursorFPv(void* p);
u16 get_render_flag__11TMainCursorFPv(void* p);
u16 TMainCursor__sub_8013E4A0(void* p);
int test_flag_2_at_20__11TMainCursorFPv(void* p);
int init_render_flags__11TMainCursorFPv(void* p);
int update__11TMainCursorFPv(void* p);
int check_flag_1__11TMainCursorFPv(void* p);
u8 is_position_moved__11TMainCursorFPv(void* p);
s16 TMainCursor__sub_8013E570(void* p);
int check_flag_4__11TMainCursorFPv(void* p);
int forward_13E338_at_60__11TMainCursorFPv(void* p);
int update_sub_60__11TMainCursorFPv(void* p);
void set_offset_y__11TMainCursorFPvs(void* p, s16 a1);
void TMainCursor__sub_8013E694(void* p, s16 v);
int init_field_60__11TMainCursorFPv(void* p);
int get_action_palette__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E6E0(void* p);
int update_action_palette__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E724(void* p, f32 v);
void set_target_id__11TMainCursorFPvs(void* p, s16 v);
int TMainCursor__sub_8013E75C(void* p);
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
int TMainCursor__sub_8013E8A0(void* p);
int get_selected_entry__11TMainCursorFPv(void* p);
int get_active__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E900(void* p);
s16 TMainCursor__sub_8013E920(void* p);
void TMainCursor__sub_8013E928(void* p, s16 v);
void TMainCursor__sub_8013E930(void* p, s16 v);
u16 get_target_id__11TMainCursorFPv(void* p);
int is_cursor_clear__11TMainCursorFPv(void* p);
void set_color_mode__11TMainCursorFPvi(void* p, s32 v);
void set_color__11TMainCursorFPvi(void* p, s32 v);
void set_field_0c__11TMainCursorFPvi(void* p, s32 v);
void set_flags__11TMainCursorFPvi(void* p, s32 v);
int TMainCursor__sub_8013E9A0(void* p);
int TMainCursor__sub_8013E9C0(void* p);
int TMainCursor__sub_8013E9E0(void* p);
void TMainCursor__sub_8013EA00(void* p, s32 v);
int render_part__13TLockOnCursorFPv(void* p);
int set_flag_8_bit0__13TLockOnCursorFPv(void* p);
int update_ring__13TLockOnCursorFPv(void* p);
int is_bit1_set__13TLockOnCursorFPv(void* p);
int is_inactive__13TLockOnCursorFPv(void* p);
int update_ring_sub__13TLockOnCursorFPv(void* p);
s32 TLockOnCursor__sub_8013EB2C(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);
int TMainCursor__sub_8013B2A4(void*);
int TObjPlayer__sub_8013DEF8(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);

void set_color_mode__11TMainCursorFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x10) = v; }
void set_color__11TMainCursorFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x8) = v; }
void set_field_0c__11TMainCursorFPvi(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }
void set_flags__11TMainCursorFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x14) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E9A0
#include "types.h"

extern "C" {

int TMainCursor__sub_8013E9A0(void* p);
int TMainCursor__sub_8013E9C0(void* p);
int TMainCursor__sub_8013E9E0(void* p);
void TMainCursor__sub_8013EA00(void* p, s32 v);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int render_part__13TLockOnCursorFPv(void* p);
void update_cursor_pos__13TLockOnCursorFPv(void* p);
int set_flag_8_bit0__13TLockOnCursorFPv(void* p);
int update_ring__13TLockOnCursorFPv(void* p);
int is_bit1_set__13TLockOnCursorFPv(void* p);
int update_ring_sub__13TLockOnCursorFPv(void* p);
s32 TLockOnCursor__sub_8013EB2C(void* p);
int TMainCursor__sub_8013B2A4(void*);
int TMainCursor__sub_8013DF08(void*);
int get_enabled__11TMainCursorFPv(void*);
int get_type__11TMainCursorFPv(void*);
int TMainCursor__sub_8013DFC4(void*);
int set_target_index__11TMainCursorFPvs(void*, void* a1 = 0);
int check_field_24__11TMainCursorFPv(void* p);
u16 get_id__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E310(void* p);
int TMainCursor__sub_8013E338(void* p);
int TMainCursor__sub_8013E358(void* p);
int TMainCursor__sub_8013E378(void* a0 = 0, void* a1 = 0);
void* get_list__11TMainCursorFPv(void* p);
int update_target_sub__11TMainCursorFPv(void* p);
u16 get_render_flag__11TMainCursorFPv(void* p);
u16 TMainCursor__sub_8013E4A0(void* p);
int test_flag_2_at_20__11TMainCursorFPv(void* p);
int init_render_flags__11TMainCursorFPv(void* p);
int update__11TMainCursorFPv(void* p);
int check_flag_1__11TMainCursorFPv(void* p);
u8 is_position_moved__11TMainCursorFPv(void* p);
s16 TMainCursor__sub_8013E570(void* p);
int check_flag_4__11TMainCursorFPv(void* p);
int forward_13E338_at_60__11TMainCursorFPv(void* p);
int update_sub_60__11TMainCursorFPv(void* p);
void set_offset_y__11TMainCursorFPvs(void* p, s16 a1);
void TMainCursor__sub_8013E694(void* p, s16 v);
int init_field_60__11TMainCursorFPv(void* p);
int get_action_palette__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E6E0(void* p);
int update_action_palette__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E724(void* p, f32 v);
void set_target_id__11TMainCursorFPvs(void* p, s16 v);
int TMainCursor__sub_8013E75C(void* p);
s32 TMainCursor__sub_8013E810(void* p);
s32 TMainCursor__sub_8013E818(void* p);
s32 TMainCursor__sub_8013E820(void* p);
s32 TMainCursor__sub_8013E828(void* p);
void TMainCursor__sub_8013E830(void* p, void* a1, void* a2);
int TMainCursor__sub_8013E854(void* a0 = 0);
int TMainCursor__sub_8013E8A0(void* p);
int get_selected_entry__11TMainCursorFPv(void* p);
int get_active__11TMainCursorFPv(void* p);
int TMainCursor__sub_8013E900(void* p);
s16 TMainCursor__sub_8013E920(void* p);
void TMainCursor__sub_8013E928(void* p, s16 v);
void TMainCursor__sub_8013E930(void* p, s16 v);
u16 get_target_id__11TMainCursorFPv(void* p);
int is_cursor_clear__11TMainCursorFPv(void* p);
void set_color_mode__11TMainCursorFPvi(void* p, s32 v);
void set_color__11TMainCursorFPvi(void* p, s32 v);
void set_field_0c__11TMainCursorFPvi(void* p, s32 v);
void set_flags__11TMainCursorFPvi(void* p, s32 v);
int set_flags__10TObjPlayerFPvUi(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);
int TObjPlayer__sub_8013DEF8(void*);
s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);
s32 __dl__FPv(void* a0 = 0);
s32 init__6gc_tagFv();
int is_inactive__13TLockOnCursorFPv(void* p);

int TMainCursor__sub_8013E9A0(void* p) { return TMainCursor__sub_8013DFC4(p); }
int TMainCursor__sub_8013E9C0(void* p) { return set_slot__20TWindowActionPaletteFPvUc(p); }
int TMainCursor__sub_8013E9E0(void* p) { return set_mode__20TWindowActionPaletteFPvUc(p); }
void TMainCursor__sub_8013EA00(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013F104
#include "types.h"

extern "C" {

int init_forward__10TObjPlayerFPv(void*);
int fn_8004438C(void*);
int init_gc_tag(void*);
int TMainCursor__sub_8013E240(void*);
int reset__11TMainCursorFi(void*);
int TLockOnCursor__sub_8013EC1C(void*);
int TLockOnCursor__sub_8013EC38(void*);
void reset_fields__13TLockOnCursorFPv(void* p);
void TMainCursor__sub_8013F104(void* p, s32 v);
void TMainCursor__sub_8013F10C(void* p, s32 v);
void TMainCursor__sub_8013F114(void* p);
void set_cursor_id__11TMainCursorFPvs(void* p, s16 v);
void set_field2__11TMainCursorFPvs(void* p, s16 v);
void set_size__11TMainCursorFPvf(void* p, f32 v);
f32 TMainCursor__sub_8013F14C(void* p);
s32 TMainCursor__sub_8013F168(void* p);
void TMainCursor__sub_8013F170(void* p, s32 v);
f32 get_pos__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013F180(void* p, f32 v);
int get_rader_map__11TMainCursorFPv(void* p);
int copy_vec4__13TRaderMapCoreFPvPv(void*);

void TMainCursor__sub_8013F104(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void TMainCursor__sub_8013F10C(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
void TMainCursor__sub_8013F114(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013F124
#include "types.h"

extern "C" {

int init_forward__10TObjPlayerFPv(void*);
int fn_8004438C(void*);
int init_gc_tag(void*);
int TMainCursor__sub_8013E240(void*);
int reset__11TMainCursorFi(void*);
int TLockOnCursor__sub_8013EC1C(void*);
int TLockOnCursor__sub_8013EC38(void*);
void reset_fields__13TLockOnCursorFPv(void* p);
void TMainCursor__sub_8013F104(void* p, s32 v);
void TMainCursor__sub_8013F10C(void* p, s32 v);
void TMainCursor__sub_8013F114(void* p);
void set_cursor_id__11TMainCursorFPvs(void* p, s16 v);
void set_field2__11TMainCursorFPvs(void* p, s16 v);
void set_size__11TMainCursorFPvf(void* p, f32 v);
f32 TMainCursor__sub_8013F14C(void* p);
s32 TMainCursor__sub_8013F168(void* p);
void TMainCursor__sub_8013F170(void* p, s32 v);
f32 get_pos__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013F180(void* p, f32 v);
int get_rader_map__11TMainCursorFPv(void* p);
int copy_vec4__13TRaderMapCoreFPvPv(void*);

void set_cursor_id__11TMainCursorFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void set_field2__11TMainCursorFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void set_size__11TMainCursorFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x4) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013F14C
#include "types.h"

extern "C" {

int init_forward__10TObjPlayerFPv(void*);
int fn_8004438C(void*);
int init_gc_tag(void*);
int TMainCursor__sub_8013E240(void*);
int reset__11TMainCursorFi(void*);
int TLockOnCursor__sub_8013EC1C(void*);
int TLockOnCursor__sub_8013EC38(void*);
void reset_fields__13TLockOnCursorFPv(void* p);
void TMainCursor__sub_8013F104(void* p, s32 v);
void TMainCursor__sub_8013F10C(void* p, s32 v);
void TMainCursor__sub_8013F114(void* p);
void set_cursor_id__11TMainCursorFPvs(void* p, s16 v);
void set_field2__11TMainCursorFPvs(void* p, s16 v);
void set_size__11TMainCursorFPvf(void* p, f32 v);
f32 TMainCursor__sub_8013F14C(void* p);
s32 TMainCursor__sub_8013F168(void* p);
void TMainCursor__sub_8013F170(void* p, s32 v);
f32 get_pos__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013F180(void* p, f32 v);
int get_rader_map__11TMainCursorFPv(void* p);
int copy_vec4__13TRaderMapCoreFPvPv(void*);

f32 TMainCursor__sub_8013F14C(void* p) { return *(f32*)((char*)p + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013F168
#include "types.h"

extern "C" {

int init_forward__10TObjPlayerFPv(void*);
int fn_8004438C(void*);
int init_gc_tag(void*);
int TMainCursor__sub_8013E240(void*);
int reset__11TMainCursorFi(void*);
int TLockOnCursor__sub_8013EC1C(void*);
int TLockOnCursor__sub_8013EC38(void*);
void reset_fields__13TLockOnCursorFPv(void* p);
void TMainCursor__sub_8013F104(void* p, s32 v);
void TMainCursor__sub_8013F10C(void* p, s32 v);
void TMainCursor__sub_8013F114(void* p);
void set_cursor_id__11TMainCursorFPvs(void* p, s16 v);
void set_field2__11TMainCursorFPvs(void* p, s16 v);
void set_size__11TMainCursorFPvf(void* p, f32 v);
f32 TMainCursor__sub_8013F14C(void* p);
s32 TMainCursor__sub_8013F168(void* p);
void TMainCursor__sub_8013F170(void* p, s32 v);
f32 get_pos__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013F180(void* p, f32 v);
int get_rader_map__11TMainCursorFPv(void* p);
int copy_vec4__13TRaderMapCoreFPvPv(void*);

s32 TMainCursor__sub_8013F168(void* p) { return *(s32*)((char*)p + 0x0); }
void TMainCursor__sub_8013F170(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013F178
#include "types.h"

extern "C" {

int init_forward__10TObjPlayerFPv(void*);
int fn_8004438C(void*);
int init_gc_tag(void*);
int TMainCursor__sub_8013E240(void*);
int reset__11TMainCursorFi(void*);
int TLockOnCursor__sub_8013EC1C(void*);
int TLockOnCursor__sub_8013EC38(void*);
void reset_fields__13TLockOnCursorFPv(void* p);
void TMainCursor__sub_8013F104(void* p, s32 v);
void TMainCursor__sub_8013F10C(void* p, s32 v);
void TMainCursor__sub_8013F114(void* p);
void set_cursor_id__11TMainCursorFPvs(void* p, s16 v);
void set_field2__11TMainCursorFPvs(void* p, s16 v);
void set_size__11TMainCursorFPvf(void* p, f32 v);
f32 TMainCursor__sub_8013F14C(void* p);
s32 TMainCursor__sub_8013F168(void* p);
void TMainCursor__sub_8013F170(void* p, s32 v);
f32 get_pos__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013F180(void* p, f32 v);
int get_rader_map__11TMainCursorFPv(void* p);
int copy_vec4__13TRaderMapCoreFPvPv(void*);

f32 get_pos__11TMainCursorFPv(void* p) { return *(f32*)((char*)p + 0x0); }
void TMainCursor__sub_8013F180(void* p, f32 v) { *(f32*)((char*)p + 0x0) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013F188
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int get_rader_map__11TMainCursorFPv(void* p);
void *destroy__11TMainCursorFPvs(void *arg0, s16 arg1);
int TLockOnCursor__sub_8013EC1C(void*);
int TLockOnCursor__sub_8013EC38(void*);
int TMainCursor__sub_8013E240(void*);
f32 get_pos__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013F180(void* p, f32 v);
int init_forward__10TObjPlayerFPv(void*);
M2C_UNK __dl__FPv(void *);
int copy_vec4__13TRaderMapCoreFPvPv(void*);
int fn_8004438C(void*);
int init_gc_tag(void*);
int reset__11TMainCursorFi(void*);
void TMainCursor__sub_8013F104(void* p, s32 v);
void TMainCursor__sub_8013F10C(void* p, s32 v);
void TMainCursor__sub_8013F114(void* p);
void set_cursor_id__11TMainCursorFPvs(void* p, s16 v);
void set_field2__11TMainCursorFPvs(void* p, s16 v);
void set_size__11TMainCursorFPvf(void* p, f32 v);
f32 TMainCursor__sub_8013F14C(void* p);
s32 TMainCursor__sub_8013F168(void* p);
void TMainCursor__sub_8013F170(void* p, s32 v);
void reset_fields__13TLockOnCursorFPv(void* p);

int get_rader_map__11TMainCursorFPv(void* p) { return copy_vec4__13TRaderMapCoreFPvPv(p); }

extern M2C_UNK lbl_804A7254[];

void *destroy__11TMainCursorFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x10) = lbl_804A7254;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013F22C
#include "types.h"

extern "C" {

void TMainCursor__sub_8013F22C(void* a0);

    extern const float TMainCursor__data_805DB0C0;
void TMainCursor__sub_8013F22C(void* a0) { *(float*)((char*)a0 + 0xc) = TMainCursor__data_805DB0C0; *(float*)((char*)a0 + 0x8) = TMainCursor__data_805DB0C0; *(float*)((char*)a0 + 0x4) = TMainCursor__data_805DB0C0; *(float*)((char*)a0 + 0x0) = TMainCursor__data_805DB0C0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013F244
#include "types.h"

extern "C" {

int TMainCursor__sub_8013F244(void);

int TMainCursor__sub_8013F244(void) { return -1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80154090
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_flags__10TObjPlayerFPvUi(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 clear_flags__11TAdRicoRingFPvUi(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 TMainCursor__sub_80154288(void);
s32 TObjPlayer__sub_8001BEF8(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
int TMainCursor__sub_801540D8(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_801540FC(void* a0 = 0, void* a1 = 0);
void update_pair__11TMainCursorFPv(void* p);
void update_cursor_pair__11TMainCursorFPv(void* p);
void TMainCursor__sub_80154090(void);
void TMainCursor__sub_80154094(void);

void TMainCursor__sub_80154090(void) {  }
void TMainCursor__sub_80154094(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80154120
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_flags__10TObjPlayerFPvUi(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 clear_flags__11TAdRicoRingFPvUi(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 TMainCursor__sub_80154288(void);
s32 TObjPlayer__sub_8001BEF8(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
int TMainCursor__sub_801540D8(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_801540FC(void* a0 = 0, void* a1 = 0);
void update_pair__11TMainCursorFPv(void* p);
void update_cursor_pair__11TMainCursorFPv(void* p);
void TMainCursor__sub_80154090(void);
void TMainCursor__sub_80154094(void);

void update_pair__11TMainCursorFPv(void* p) { TMainCursor__sub_801540D8(*(void**)((char*)p + 0xa4), *(void**)((char*)p + 0xa8)); }
void update_cursor_pair__11TMainCursorFPv(void* p) { TMainCursor__sub_801540FC(*(void**)((char*)p + 0xa4), *(void**)((char*)p + 0xa8)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80154178
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_flags__10TObjPlayerFPvUi(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 clear_flags__11TAdRicoRingFPvUi(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 TMainCursor__sub_80154288(void);
s32 TObjPlayer__sub_8001BEF8(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
int TMainCursor__sub_801540D8(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_801540FC(void* a0 = 0, void* a1 = 0);
void update_pair__11TMainCursorFPv(void* p);
void update_cursor_pair__11TMainCursorFPv(void* p);
void TMainCursor__sub_80154090(void);
void TMainCursor__sub_80154094(void);

s32 test_button__11TMainCursorFPviUs(void *arg0, s32 arg1, u16 arg2) {
    s32 temp_r5;

    if (TMainCursor__sub_80154288() != 0) {
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x9C);
        return TObjPlayer__sub_8001BEF8(temp_r5 + (arg1 * 4), 1 << arg2, temp_r5);
    }
    return 0;
}
void set_flag_bit__11TMainCursorFPviUs(void *arg0, s32 arg1, u16 arg2) {
    s32 temp_r5;

    if (TMainCursor__sub_80154288() != 0) {
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x9C);
        clear_flags__11TAdRicoRingFPvUi(temp_r5 + (arg1 * 4), 1 << arg2, temp_r5);
    }
}
void TMainCursor__sub_80154230(void *arg0, s32 arg1, u16 arg2) {
    s32 temp_r5;

    if (TMainCursor__sub_80154288() != 0) {
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x9C);
        set_flags__10TObjPlayerFPvUi(temp_r5 + (arg1 * 4), 1 << arg2, temp_r5);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D7A78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void find_action_slot_for_target__11TMainCursorFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TObjPlayer__sub_801D84A8();
M2C_UNK find_action_slot__11TMainCursorFiPvsii(s32, s32, s32, s32, s32);

void find_action_slot_for_target__11TMainCursorFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    find_action_slot__11TMainCursorFiPvsii(arg0, arg1, arg2, arg3, TObjPlayer__sub_801D84A8());
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D7AC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 find_action_slot__11TMainCursorFiPvsii(s32 arg0, void *arg1, s16 arg2, s32 arg3, s32 arg4);
u8 get_type__11TMainCursorFPv(s32);
s32 TMainCursor__sub_8013DF5C(s32, u8, u8);
s32 TObjPlayer__sub_801D84F0(s32);
s32 TWindowActionPalette__sub_801C1C68(s32, s32);

s32 find_action_slot__11TMainCursorFiPvsii(s32 arg0, void *arg1, s16 arg2, s32 arg3, s32 arg4) {
    s32 temp_r31;
    s32 var_r30;
    s32 var_r29;
    u32 temp_r3;

    if (arg1 != NULL) {
        temp_r3 = M2C_FIELD(arg1, u32 *, 0x424);
        if (temp_r3 != 0U) {
            temp_r31 = temp_r3 + 0x520;
            if (TObjPlayer__sub_801D84F0(temp_r31) != 0) {
                if (get_type__11TMainCursorFPv(temp_r31) == 1) {
                    if (arg2 == (s32) get_type__11TMainCursorFPv(temp_r31)) {
                        return 0;
                    }
                    goto block_8;
                }
                if (TMainCursor__sub_8013DF5C(temp_r31, (u8) arg2, (u8) arg3) != 0) {
                    return 0;
                }
                goto block_8;
            }
        }
    }
block_8:
    var_r29 = TWindowActionPalette__sub_801C1C68(arg0, arg4);
    var_r30 = 0;
loop_9:
    if (get_type__11TMainCursorFPv(var_r29) == 1) {
        if (arg2 == (s32) get_type__11TMainCursorFPv(var_r29)) {
            return var_r30;
        }
        goto block_14;
    }
    if (TMainCursor__sub_8013DF5C(var_r29, (u8) arg2, (u8) arg3) != 0) {
        return var_r30;
    }
block_14:
    var_r30 += 1;
    var_r29 += 4;
    if (var_r30 >= 4) {
        return -1;
    }
    goto loop_9;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013E1FC
#include "types.h"

extern "C" {

void* TMainCursor__sub_8013E1FC(void* p, void* a1);
void TMainCursor__sub_8013E17C(void* p, f32 v);
f32 TMainCursor__sub_8013E184(void* p);
void TMainCursor__sub_8013E18C(void* p, s16 v);
u16 TMainCursor__sub_8013E194(void* p);
void TMainCursor__sub_8013E1C0(void* p, s32 v);
int TObjPlayer__sub_8013A820(void* a0 = 0);
void set_target__11TMainCursorFPvi(void* p, s32 a1);
void set_target_index__11TMainCursorFPvs(void* p, s16 v);
void update_cursor_pos__11TMainCursorFPv(void* p);

void* TMainCursor__sub_8013E1FC(void* p, void* a1) { TObjPlayer__sub_8013A820(p); *(short*)((char*)p + 0x4) = *(unsigned short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); return p; }

}
#endif
#endif
