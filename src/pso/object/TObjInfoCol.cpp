#include "types.h"
#include "pso/object/TObjInfoCol.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80191E28_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 is_inactive__10TObjPlayerFPv(int);
M2C_UNK open_lobby_warp_menu__6TLobbyFv();
s32 is_idle__6TLobbyFv();
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 check_flag_100__10TObjPlayerFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern RecoveredGlobal_80191E28_lbl_8050E208 lbl_8050E208;
extern s32 lbl_805D53A0;
}

extern "C" {

void *__dt__11TObjInfoColFv(void *arg0, s16 arg1);
void bswap_6x78__11TObjInfoColFPv(void* p);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void __dl__7TObjectFPv(void *);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
f32 fn_801315A0(const Vec *, const Vec *);
int read_be16_field2__10TObjPlayerFPv(void*);

void bswap_6x78__11TObjInfoColFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }

extern s32 lbl_805D53A0;

}

s32 TObjInfoCol::is_target_in_range(f32 radius_squared) {
    u32 player = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (player != 0 &&
        fn_801315A0((const Vec *) (player + 0x38), &position) < radius_squared) {
        return 1;
    }
    return 0;
}

extern "C" {

extern M2C_UNK __vt__11TObjInfoCol[];

typedef char RecoveredGlobal_80191E28_lbl_8050E208_size[sizeof(RecoveredGlobal_80191E28_lbl_8050E208) == 0x1B0 ? 1 : -1];
}

void TObjInfoCol::run_task() {
    f32 radius = interaction_radius;
    u32 player;
    if (is_target_in_range(radius * radius) == 1 &&
        TWindowShortListCtrl__check_controller_button((u8 *) &lbl_8050E208.value + 0x20, 4) != 0 &&
        ((player = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0), player == 0) ||
         check_flag_100__10TObjPlayerFPv() == 0) &&
        (player == 0 || is_inactive__10TObjPlayerFPv((int) player) != 0) &&
        is_idle__6TLobbyFv() != 0) {
        open_lobby_warp_menu__6TLobbyFv();
    }
}

extern "C" {

void *__dt__11TObjInfoColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjInfoCol;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
