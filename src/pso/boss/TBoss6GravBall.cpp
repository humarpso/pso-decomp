#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct P_80323348 { u8 pad[0x30]; u32 flags; };

extern "C" {
P_80323348 *get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv();
s32 is_state_1f__14TBoss6PlotFalzFUi();
void TBoss6GravBall__sub_80323348(void);
}

extern "C" {

void update_lifetime__14TBoss6GravBallFPv(void *arg0);
int TBoss6GravBall__sub_803231D0(void*, void*);
void init_parts__14TBoss6GravBallFPv(void* p);
M2C_UNK queue_destruction__7TObjectFv();
void render__14TBoss6GravBallFv(void);

void TBoss6GravBall__sub_80323348(void) {
    s32 n = get_game_mode__6TLobbyFv();
    s32 i;
    for (i = 0; i < n; i++) {
        P_80323348 *p = get_player_data__10TObjPlayerFi(i);
        if (is_state_1f__14TBoss6PlotFalzFUi() != 0) {
            p->flags &= 0xFFFDFFFF;
        }
    }
}

void update_lifetime__14TBoss6GravBallFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4) + 1;
    M2C_FIELD(arg0, s32 *, 0xB4) = temp_r0;
    if (temp_r0 > 0x1E) {
        queue_destruction__7TObjectFv();
    }
}

}
