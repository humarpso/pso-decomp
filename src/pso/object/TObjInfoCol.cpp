#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/object/TObjInfoCol.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_80191E28_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_80191EC0___vt__11TObjInfoCol {
    s32 value;
    u8 remaining[0x34];
};

extern "C" {
s32 open_lobby_warp_menu__6TLobbyFv();
s32 is_idle__6TLobbyFv();
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 check_flag_100__10TObjPlayerFPv();
u32 get_player_by_client_id(s32);
extern RecoveredGlobal_80191E28_lbl_8050E208 controller_input_state;
extern s32 local_client_id;
s32 construct_collider_proxy__13TUnk_804AF8A0Fv(void *, void *);
extern s32 __vt__11TObjInfoCol[];
extern s32 TObjInfoCol__class_name;
u8 *TObjInfoCol__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *__dt__11TObjInfoColFv(void *arg0, s16 arg1);
u32 get_player_by_client_id(s32);
void __dl__7TObjectFPv(void *);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
f32 xyz_distance_squared(const Vec *, const Vec *);
int read_be16_field2__10TObjPlayerFv(void*);

void TObjInfoCol::bswap_6x78() { read_be16_field2__10TObjPlayerFv(this); bswap_16__FPUs((char*)this + 0x4); bswap_16__FPUs((char*)this + 0x6); bswap_32__FPUl((char*)this + 0x8); }

extern s32 local_client_id;

}

s32 TObjInfoCol::is_target_in_range(f32 radius_squared) {
    u32 player = get_player_by_client_id(local_client_id);
    if (player != 0 &&
        xyz_distance_squared((const Vec *) (player + 0x38), &position) < radius_squared) {
        return 1;
    }
    return 0;
}

extern "C" {

extern s32 __vt__11TObjInfoCol[];

typedef char RecoveredGlobal_80191E28_lbl_8050E208_size[sizeof(RecoveredGlobal_80191E28_lbl_8050E208) == 0x1B0 ? 1 : -1];
}

void TObjInfoCol::run_task() {
    f32 radius = interaction_radius;
    u32 player;
    if (is_target_in_range(radius * radius) == 1 &&
        TWindowShortListCtrl__check_controller_button((u8 *) &controller_input_state.value + 0x20, 4) != 0 &&
        ((player = get_player_by_client_id(local_client_id), player == 0) ||
         check_flag_100__10TObjPlayerFPv() == 0) &&
        (player == 0 || ((TObjPlayer *)player)->is_inactive() != 0) &&
        is_idle__6TLobbyFv() != 0) {
        open_lobby_warp_menu__6TLobbyFv();
    }
}

extern "C" {

typedef char RecoveredGlobal_80191EC0___vt__11TObjInfoCol_size[sizeof(RecoveredGlobal_80191EC0___vt__11TObjInfoCol) == 0x38 ? 1 : -1];
u8 *TObjInfoCol__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_collider_proxy__13TUnk_804AF8A0Fv((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80191EC0___vt__11TObjInfoCol *)&__vt__11TObjInfoCol).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjInfoCol__class_name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    *(f32 *)((s8 *)arg0 + 0xAC) = (f32) *(f32 *)((s8 *)arg0 + 0x68);
    return arg0;
}

void *__dt__11TObjInfoColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TObjInfoCol;
        ((TUnk_804AF8A0 *)arg0)->destroy_particle_controller(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
