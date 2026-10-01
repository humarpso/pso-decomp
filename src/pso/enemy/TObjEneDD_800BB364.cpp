#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800BB45C_lbl_80500B98 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
s32 TObjEneDD__sub_800BB484(s32, void *, f32);
extern RecoveredGlobal_800BB45C_lbl_80500B98 lbl_80500B98;
void TObjEneDD__sub_800BB45C(s32 arg0, f32 farg0);
typedef struct Ent_800BB388 {
    u8 pad0[0x30];
    s32 flags30;
    u8 pad34[0x38 - 0x34];
    u8 pos[0x2FC - 0x38];
    u8 f2FC[0xC];
} Ent_800BB388;

Ent_800BB388 *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
s32 get_game_mode__6TLobbyFv(void);
u32 TObjPlayer__sub_8007A3AC(void *, void *);
s32 is_alive__9TObjEneDDFPv(void *);
s32 get_enemy_count__9TObjEneDDFv(void);
f32 TObjPlayer__sub_80141CF8(void *, void *);

u16 TObjEneDD__sub_800BB388(Ent_800BB388 *self, f32 range);
}

extern "C" {

void set_squared_value__9TObjEneDDFf(f32 farg0);

void set_squared_value__9TObjEneDDFf(f32 farg0) {
    ((M2C_UNK (*)(f32))TObjEneDD__sub_800BB388)(farg0 * farg0);
}
u16 TObjEneDD__sub_800BB388(Ent_800BB388 *self, f32 range) {
    s32 count;
    s32 base;
    Ent_800BB388 *p;
    u16 best;
    s32 i;
    f32 d;

    best = 0xFFFF;
    base = get_game_mode__6TLobbyFv();
    count = get_enemy_count__9TObjEneDDFv();
    for (i = 0; i < count; i++) {
        p = get_player_data__10TObjPlayerFi(base + i);
        if (p != self && !(p->flags30 & 0x01000000) && is_alive__9TObjEneDDFPv(p) != 0) {
            d = TObjPlayer__sub_80141CF8(self->f2FC, p->pos);
            if (d < range && TObjPlayer__sub_8007A3AC(self->f2FC, p->f2FC) == 0) {
                best = obj_getField1c(p);
                range = d;
            }
        }
    }
    return best;
}
typedef char RecoveredGlobal_800BB45C_lbl_80500B98_size[sizeof(RecoveredGlobal_800BB45C_lbl_80500B98) == 0x20 ? 1 : -1];
void TObjEneDD__sub_800BB45C(s32 arg0, f32 farg0) {
    TObjEneDD__sub_800BB484(arg0, &lbl_80500B98.value, farg0);
}

}
