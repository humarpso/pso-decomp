#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Msg_801C6B60 {
    u8 pad0[2];
    u16 type;
    f32 f;
} Msg_801C6B60;

typedef struct Obj_801C6B60 {
    u8 pad0[8];
    f32 f8;
} Obj_801C6B60;

extern "C" {
s32 obj_isState2_324();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void TObjPlayer__sub_801C68EC(void *);
s32 get_obj_type__10TObjPlayerFPv(void *);
void init_shrink_effect__10TObjPlayerFPv(void *);
void update_and_send_60__10TObjPlayerFPv(void *);
extern s32 lbl_805D53A0;
void TObjPlayer__sub_801C6B60(Obj_801C6B60 *arg0);
}

extern "C" {

int TObjPlayer__sub_801C6A3C(void);
void apply_stat_multipliers_default__10TObjPlayerFv(void);
int clear_shrink_flag__10TObjPlayerFPv(void* p);
void handle_6x87_shrink__10TObjPlayerFPvf(u8 *arg0, f32 farg0);
void reset_stat_scale_and_ring__10TObjPlayerFi(s32 arg0);
M2C_UNK apply_stat_multipliers__10TObjPlayerFiif(f32);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
M2C_UNK set_flags__10TObjPlayerFPvUi(void *, int);
M2C_UNK set_ring_action__10TObjPlayerFPvi(s32, M2C_UNK);
M2C_UNK set_stat_scale__10TObjPlayerFPvf(f32);

extern const f32 lbl_805DC320;

void apply_stat_multipliers_default__10TObjPlayerFv(void) {
    apply_stat_multipliers__10TObjPlayerFiif(lbl_805DC320);
}

extern const f32 lbl_805DC320;

void reset_stat_scale_and_ring__10TObjPlayerFi(s32 arg0) {
    set_stat_scale__10TObjPlayerFPvf(lbl_805DC320);
    set_ring_action__10TObjPlayerFPvi(arg0, 0);
}

int clear_shrink_flag__10TObjPlayerFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x4, 1); }

int TObjPlayer__sub_801C6A3C(void) { return 0; }

void handle_6x87_shrink__10TObjPlayerFPvf(u8 *arg0, f32 farg0) {
    set_flags__10TObjPlayerFPvUi(arg0 + 4, 1);
    M2C_FIELD(arg0, f32 *, 8) = farg0;
}
void TObjPlayer__sub_801C6B60(Obj_801C6B60 *arg0) {
    Msg_801C6B60 m;
    if ((TPlayerBattleCtrl4P__sub_801BA74C((u16)get_obj_type__10TObjPlayerFPv(arg0)) == 0U) || (obj_isState2_324() == 0)) {
        if (lbl_805D53A0 == (u16)get_obj_type__10TObjPlayerFPv(arg0)) {
            TObjPlayer__sub_801C68EC(arg0);
        }
        init_shrink_effect__10TObjPlayerFPv(&m);
        m.type = get_obj_type__10TObjPlayerFPv(arg0);
        m.f = arg0->f8;
        update_and_send_60__10TObjPlayerFPv(&m);
    }
}

}
