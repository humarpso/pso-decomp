#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TBoss1Dragon__sub_80028B54(void);
u8 TBoss1Dragon__sub_800291B4(void *arg0);
void TBoss1Dragon__sub_80029214(void *arg0);
void clear_state__12TBoss1DragonFPv(void* p);
void copy_params__12TBoss1DragonFPvPv(void *arg0, void *arg1);
void handle_6x10_dragon_boss_actions(void *arg0);
void handle_6x11_dragon_boss_actions(void *arg0);
s32 is_hp_low__12TBoss1DragonFPv(void *arg0);
void play_se_at_pos__12TBoss1DragonFii(s32 arg0, s32 arg1);
void set_active__12TBoss1DragonFPv(void* p);
void set_hp_phase_value__12TBoss1DragonFPvi(void *arg0, s32 arg1);
void set_phase_2__12TBoss1DragonFPv(void* p);
void set_result_flag__12TBoss1DragonFPvii(void *arg0, s32 arg1, s32 arg2);
void spawn_trap__12TBoss1DragonFii(s32 arg0, s32 arg1);
M2C_UNK TBoss3Volopt__sub_8022675C(s32, s32, M2C_UNK, M2C_UNK);
s32 TBoss4Type2__sub_80141FA8(s32, s32);
M2C_UNK TBoss8Dragon__sub_800B9958(void *, u16);
M2C_UNK TOTrapAncient01__sub_80226578(s32, s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, s16);
void bswap_dragon_boss_fields__10TObjPlayerFPv(void *);
void bswap_stats__10TObjPlayerFPv(void *);
void *get_enemy_entity(int);
void set_params__12TBoss1DragonFPvPv(void *, void *);

void handle_6x11_dragon_boss_actions(void *arg0) {
    void *x;
    bswap_dragon_boss_fields__10TObjPlayerFPv(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        set_params__12TBoss1DragonFPvPv(x, arg0);
    }
}

void copy_params__12TBoss1DragonFPvPv(void *arg0, void *arg1) {
    TBoss8Dragon__sub_800B9958(arg0, (u16) M2C_FIELD(arg1, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x67C) = (s32) M2C_FIELD(arg1, s16 *, 6);
    TObjEneDD__sub_800BBA18(arg0, M2C_FIELD(arg1, s16 *, 4));
}

void handle_6x10_dragon_boss_actions(void *arg0) {
    void *x;
    bswap_stats__10TObjPlayerFPv(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        copy_params__12TBoss1DragonFPvPv((void *)(x), (void *)(arg0));
    }
}

void set_result_flag__12TBoss1DragonFPvii(void *arg0, s32 arg1, s32 arg2) {
    if (TBoss4Type2__sub_80141FA8(arg1, arg2) >= 0) {
        M2C_FIELD(arg0, s32 *, 0x65C) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x65C) = -1;
}

int TBoss1Dragon__sub_80028B54(void) { return 0; }

void set_phase_2__12TBoss1DragonFPv(void* p) { *(s32*)((char*)p + 0x3e4) = 2; }
void set_active__12TBoss1DragonFPv(void* p) { *(s32*)((char*)p + 0x3e4) = 1; }
void clear_state__12TBoss1DragonFPv(void* p) { *(s32*)((char*)p + 0x3e4) = 0; }

void spawn_trap__12TBoss1DragonFii(s32 arg0, s32 arg1) {
    TOTrapAncient01__sub_80226578(arg1, arg0, arg0 + 0x63C, 0, 0);
}

void play_se_at_pos__12TBoss1DragonFii(s32 arg0, s32 arg1) {
    TBoss3Volopt__sub_8022675C(arg1, arg0 + 0x63C, 0, 0);
}

u8 TBoss1Dragon__sub_800291B4(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x67C) >= 0x32);
}

s32 is_hp_low__12TBoss1DragonFPv(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x67C) < 0x32;
}

void set_hp_phase_value__12TBoss1DragonFPvi(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x67C) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x67C) = 0x32;
}

void TBoss1Dragon__sub_80029214(void *arg0) {
    set_hp_phase_value__12TBoss1DragonFPvi((void *)(arg0), (s32)(0));
}

}
