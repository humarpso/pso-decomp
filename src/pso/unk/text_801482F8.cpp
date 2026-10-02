#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18_801482f8 { char pad[0x18]; };
struct VObj18_801482f8 : VBase18_801482f8 {
    virtual void vpad0();
    virtual void vpad1();
    virtual void vpad2();
    virtual void vpad3();
    virtual void vpad4();
    virtual void vpad5();
    virtual void vpad6();
    virtual void vpad7();
    virtual void vpad8();
    virtual void vpad9();
    virtual void vpad10();
    virtual void vpad11();
    virtual void vpad12();
    virtual void vpad13();
    virtual void vpad14();
    virtual void vpad15();
    virtual void vpad16();
    virtual void vpad17();
    virtual void vpad18();
    virtual void vpad19();
    virtual void vpad20();
    virtual void vpad21();
    virtual void vpad22();
    virtual void vpad23();
    virtual void vpad24();
    virtual void vpad25();
    virtual void vpad26();
    virtual void vpad27();
    virtual void vpad28();
    virtual void vpad29();
    virtual void vpad30();
    virtual void vpad31();
    virtual void vpad32();
    virtual void vpad33();
    virtual void vpad34();
    virtual void vpad35();
    virtual void vpad36();
    virtual void vpad37();
    virtual void vpad38();
    virtual void vpad39();
    virtual void vpad40();
    virtual void vpad41();
    virtual void vpad42();
    virtual void vpad43();
    virtual void vpad44();
    virtual void vpad45();
    virtual void vpad46();
    virtual void vpad47();
    virtual void vpad48();
    virtual void vpad49();
    virtual void vpad50();
    virtual void vpad51();
    virtual void vpad52();
    virtual void vpad53();
    virtual void vpad54();
    virtual void vpad55();
    virtual void vpad56();
    virtual void vpad57();
    virtual void vpad58();
    virtual void vpad59();
    virtual void vpad60();
    virtual void vpad61();
    virtual void vpad62();
    virtual void vpad63();
    virtual void vpad64();
    virtual void vpad65();
    virtual void vpad66();
    virtual void vpad67();
    virtual void vpad68();
    virtual void vpad69();
    virtual void vpad70();
    virtual void vpad71();
    virtual void vpad72();
    virtual void vpad73();
    virtual void vpad74();
    virtual void vpad75();
    virtual void vpad76();
    virtual void vpad77();
    virtual void vpad78();
    virtual void vpad79();
    virtual void vpad80();
    virtual void vpad81();
    virtual void vpad82();
    virtual void vpad83();
    virtual void vpad84();
    virtual void vpad85();
    virtual void vf160(int);
};

struct VBase18_801489B8 { char pad[0x18]; };

struct VObj18_801489B8 : VBase18_801489B8 {
    virtual void vpad0();
    virtual void vpad1();
    virtual void vpad2();
    virtual void vpad3();
    virtual void vpad4();
    virtual void vpad5();
    virtual void vpad6();
    virtual void vpad7();
    virtual void vpad8();
    virtual void vpad9();
    virtual void vpad10();
    virtual void vpad11();
    virtual void vpad12();
    virtual void vpad13();
    virtual void vpad14();
    virtual void vpad15();
    virtual void vpad16();
    virtual void vpad17();
    virtual void vpad18();
    virtual void vpad19();
    virtual void vpad20();
    virtual void vpad21();
    virtual void vpad22();
    virtual void vpad23();
    virtual void vpad24();
    virtual void vpad25();
    virtual void vpad26();
    virtual void vpad27();
    virtual void vpad28();
    virtual void vpad29();
    virtual void vpad30();
    virtual void vpad31();
    virtual void vpad32();
    virtual void vpad33();
    virtual void vpad34();
    virtual void vpad35();
    virtual void vpad36();
    virtual void vpad37();
    virtual void vpad38();
    virtual void vpad39();
    virtual void vpad40();
    virtual void vpad41();
    virtual void vpad42();
    virtual void vpad43();
    virtual void vpad44();
    virtual void vpad45();
    virtual void vpad46();
    virtual void vpad47();
    virtual void vpad48();
    virtual void vpad49();
    virtual void vpad50();
    virtual void vpad51();
    virtual void vpad52();
    virtual void vpad53();
    virtual void vpad54();
    virtual void vpad55();
    virtual void vpad56();
    virtual void vpad57();
    virtual void vpad58();
    virtual void vpad59();
    virtual void vpad60();
    virtual void vpad61();
    virtual void vpad62();
    virtual void vpad63();
    virtual void vpad64();
    virtual void vpad65();
    virtual void vpad66();
    virtual void vpad67();
    virtual void vpad68();
    virtual void vpad69();
    virtual void vpad70();
    virtual void vpad71();
    virtual void vpad72();
    virtual void vpad73();
    virtual void vpad74();
    virtual void vpad75();
    virtual void vpad76();
    virtual void vpad77();
    virtual void vpad78();
    virtual void vpad79();
    virtual void vpad80();
    virtual void vpad81();
    virtual void vpad82();
    virtual void vpad83();
    virtual void vpad84();
    virtual void vpad85();
    virtual void vf160(int);
    virtual void vpad87();
    virtual void vf168();
};

typedef struct Vec_801489B8 { f32 x, y, z; } Vec_801489B8;

extern "C" {
s32 approach_angle_limited(s32, s32, s32);
void TObjPlayer__sub_80148C14(u8 *arg0);
void TObjPlayer__sub_80148CF8(void *arg0);
f32 calc_boss4_scale__10TObjPlayerFi();
void move_with_wall_slide(void *);
void enemy_set_heading_velocity(void *, s32, f32);
void select_enemy_destination(void *, void *, s32);
void enemy_turn_toward_dest(void *, s32);
f32 horizontal_distance_squared(void *, void *);
s32 objInBand__FP7GameObjf(void *, f32);
void update_collisions__10TObjPlayerFPv(void *);
void TBoss4Zako__sub_803D8910(void *, void *);
void rotate_vector_by_matrix(int, void *, void *);
void rotate_matrix_y(int, int);
void push_matrix_from(void *);
void pop_matrix();
extern u8 lbl_8058D490[];
extern const f32 lbl_805DB1C4;
extern const f32 lbl_805DB1C8;
extern const f32 lbl_805DB1CC;
extern const f32 lbl_805DB1D0;
extern const f32 lbl_805DB1D4;
extern const f32 lbl_805DB1D8;
extern const f32 lbl_805DB1DC;
void TObjPlayer__sub_801489B8(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_80148D80(void);
void handle_message_event__17TObjNpcFemaleBaseFPvUs(void *arg0, u16 arg1);
u32 get_player_by_client_id();
M2C_UNK play_effect_default__10TObjPlayerFii(u32, s32);

extern s32 lbl_805D53A0;

void handle_message_event__17TObjNpcFemaleBaseFPvUs(void *arg0, u16 arg1) {
    u32 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) > 0) {
        if ((s32) arg1 == (s32) lbl_805D53A0) {
            temp_r3 = get_player_by_client_id();
            if ((temp_r3 != 0U) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 3)) {
                M2C_FIELD(arg0, s16 *, 0x326) = 3;
                M2C_FIELD(arg0, s16 *, 0x328) = 0;
                M2C_FIELD(arg0, u16 *, 0x94) = arg1;
                M2C_FIELD(arg0, u16 *, 0x338) = arg1;
                M2C_FIELD(arg0, u32 *, 0x2A8) = temp_r3;
                if ((s32) M2C_FIELD(arg0, u16 *, 0x338) == (s32) lbl_805D53A0) {
                    play_effect_default__10TObjPlayerFii(temp_r3, -1);
                }
                ((VObj18_801482f8 *) arg0)->vf160(1);
                M2C_FIELD(arg0, s32 *, 0x2AC) = 0;
            }
        } else {
            M2C_FIELD(arg0, u16 *, 0x94) = 0xFFFFU;
            M2C_FIELD(arg0, u16 *, 0x338) = 0xFFFFU;
        }
    }
}

void TObjPlayer__sub_801489B8(u8 *arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x328)) {
    case 0: {
        Vec_801489B8 v;
        s32 angle;
        f32 s;
        v.y = lbl_805DB1C4;
        v.x = lbl_805DB1C4;
        v.z = lbl_805DB1C8;
        angle = (s32)(lbl_805DB1CC * (lbl_805DB1D0 * calc_boss4_scale__10TObjPlayerFi()));
        push_matrix_from(lbl_8058D490);
        rotate_matrix_y(0, angle);
        rotate_vector_by_matrix(0, &v, &v);
        pop_matrix();
        v.x = v.x * M2C_FIELD(arg0, f32 *, 0x354);
        v.z = v.z * M2C_FIELD(arg0, f32 *, 0x354);
        TBoss4Zako__sub_803D8910(&v, arg0 + 0x50);
        if (lbl_805DB1D4 < horizontal_distance_squared(&v, arg0 + 0x38)) {
            Vec_801489B8 d = v;
            select_enemy_destination(arg0, &d, 0);
            M2C_FIELD(arg0, f32 *, 0x308) = M2C_FIELD(arg0, f32 *, 0x310) = lbl_805DB1C4;
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            ((VObj18_801489B8 *) arg0)->vf160(1);
        }
        break;
    }
    case 1: {
        u8 *o;
        f32 r;
        enemy_turn_toward_dest(arg0, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8));
        enemy_set_heading_velocity(arg0, M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4));
        move_with_wall_slide(arg0);
        if (objInBand__FP7GameObjf(arg0, lbl_805DB1C8) != 0 || objInBand__FP7GameObjf(arg0, lbl_805DB1D8) != 0) {
            ((VObj18_801489B8 *) arg0)->vf168();
        }
        {
            f32 dist = horizontal_distance_squared(arg0 + 0x29C, arg0 + 0x2FC);
            r = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC);
            if (dist < r * r || (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), u32 *, 0x18) & 0x380000)) {
                M2C_FIELD(arg0, s16 *, 0x328) = 3;
                ((VObj18_801489B8 *) arg0)->vf160(0);
            }
        }
        break;
    }
    case 2:
        break;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x2AC)++;
        if (lbl_805DB1DC < (f32) M2C_FIELD(arg0, s32 *, 0x2AC)) {
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s32 *, 0x2AC) = 0;
        }
        break;
    }
    update_collisions__10TObjPlayerFPv(arg0);
}

void TObjPlayer__sub_80148C14(u8 *arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x328)) {
    case 0:
        if (M2C_FIELD(arg0, s32 *, 0x60) != M2C_FIELD(arg0, s32 *, 0x384)) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            ((VObj18_801482f8 *) arg0)->vf160(1);
        } else {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            ((VObj18_801482f8 *) arg0)->vf160(0);
        }
        break;
    case 1:
        break;
    case 2:
        if (M2C_FIELD(arg0, s32 *, 0x60) != M2C_FIELD(arg0, s32 *, 0x384)) {
            M2C_FIELD(arg0, s32 *, 0x60) = approach_angle_limited(M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x384), M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8));
        } else {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            ((VObj18_801482f8 *) arg0)->vf160(0);
        }
        break;
    }
}

void TObjPlayer__sub_80148CF8(void *arg0) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 >= 4) || (temp_r0 < 1)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x368) != 1) {
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            ((VObj18_801482f8 *) arg0)->vf160(0);
            return;
        }
        M2C_FIELD(arg0, s16 *, 0x326) = 2;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        ((VObj18_801482f8 *) arg0)->vf160(0);
    }
}

void TObjPlayer__sub_80148D80(void) {  }

}
