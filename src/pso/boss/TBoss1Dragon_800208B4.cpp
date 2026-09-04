#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TBoss1Dragon__sub_800208B4(void);
int TBoss1Dragon__sub_80020A34(void* p);
void TBoss1Dragon__sub_80027B20(void);
int TBoss1Dragon__sub_80028480(void);
void action__12TBoss1DragonFPvi(void *arg0, s32 arg1);
void calc_facing_vector__12TBoss1DragonFPv(void *arg0);
u8 check_attack_ready__12TBoss1DragonFPv(void *arg0);
s32 check_can_attack__12TBoss1DragonFPv(void *arg0);
s32 check_phase_advance__12TBoss1DragonFPv(void *arg0);
void clear_work__12TBoss1DragonFi(s32 arg0);
void draw__12TBoss1DragonFPv(u8 *arg0);
s32 filter_input_flags__12TBoss1DragonFiii(s32 arg1, s32 arg2, s32 arg3);
void handle_6x12_dragon_boss_actions(void *arg0);
int init_default__12TBoss1DragonFPv(void* p);
void restore_position__12TBoss1DragonFPv(void* p);
void save_pos__12TBoss1DragonFPv(void* p);
void save_position__12TBoss1DragonFPv(void* p);
void save_target_pos__12TBoss1DragonFPv(void* p);
void set_move_speed__12TBoss1DragonFPvi(void *arg0, s32 arg1);
void set_params__12TBoss1DragonFPvPv(void *arg0, void *arg1);
int set_state_1__12TBoss1DragonFPv(void* p);
void update_from_data__12TBoss1DragonFv(void);
s32 update_max_hp_phase__12TBoss1DragonFPv(void *arg0);
void update_switch_attack__12TBoss1DragonFPv(u8 *arg0);
void update_wander_state__12TBoss1DragonFPvi(void *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80027B78(f32, f32, f32);
int TBoss1Dragon__sub_80027F54(void*, int);
M2C_UNK TBoss1Dragon__sub_800284B4(void *, M2C_UNK);
void TBoss1Dragon__sub_80028598(void *, void *);
s32 TBoss1Dragon__sub_800291B4(void *);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss8Dragon__sub_800B9958(void *, u16);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
M2C_UNK TOSwitchAttack__sub_80087278(void *, s32, M2C_UNK);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
M2C_UNK TObjEneDD__sub_800BBA18(void *, s16);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK alloc_effect_node__12TBoss3VoloptFUisi(s32, M2C_UNK, s32);
void bswap_6x12_packet__10TObjPlayerFPv(void *);
s32 check_flag_100__10TObjPlayerFPv();
void copy_xyz__10TObjPlayerFPvPv(void* p, void* q);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
void *get_enemy_entity(int);
int get_target_info__9TObjEneDDFPv(void*);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(M2C_UNK *);
M2C_UNK set_hp_phase_value__12TBoss1DragonFPvi(void *, M2C_UNK);

int TBoss1Dragon__sub_800208B4(void) { return 0; }

int TBoss1Dragon__sub_80020A34(void* p) { return get_target_info__9TObjEneDDFPv(p); }

extern M2C_UNK TBoss1Dragon__sub_8002116C[];
extern s32 TBoss1Dragon__data_805D4B28;
extern const f32 TBoss1Dragon__data_805D7F24;
extern const f32 TBoss1Dragon__data_805D7F28;

void draw__12TBoss1DragonFPv(u8 *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x34);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) TBoss1Dragon__data_805D4B28;
    set_global_state__16TObjEneRe7BeruraFi(TBoss1Dragon__sub_8002116C);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    TObjPlayer__sub_803D9624(0, TBoss1Dragon__data_805D7F28, M2C_FIELD(arg0, f32 *, 0x5DC), TBoss1Dragon__data_805D7F28);
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
    TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x5C));
    TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x64));
    TOMonitorMachine01__sub_803D8B5C(0, TBoss1Dragon__data_805D7F24, TBoss1Dragon__data_805D7F24, TBoss1Dragon__data_805D7F24);
    draw__16TObjEneRe7BeruraFPv(arg0);
    TObjPlayer__sub_803D9B78();
    set_global_state__16TObjEneRe7BeruraFi(NULL);
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r31;
}

extern const f32 TBoss1Dragon__data_805D7F28;
extern const f32 lbl_805D7F44;

void action__12TBoss1DragonFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x864) = 0;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TBoss1Dragon__data_805D7F28;
        M2C_FIELD(arg0, f32 *, 0x5DC) = (f32) (lbl_805D7F44 + M2C_FIELD(arg0, f32 *, 0x5E0));
        M2C_FIELD(arg0, f32 *, 0x5D8) = (f32) (M2C_FIELD(arg0, f32 *, 0x5E0) + (M2C_FIELD(arg0, f32 *, 0x5DC) + M2C_FIELD(arg0, f32 *, 0x3C)));
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x864) > 0x96) {
            TObjEneDD__sub_800BBA18((void *)(arg0), (s16)(8));
        }
    case 5:
    case 1:
        return;
    case 0:
        if ((TPlayerBattleCtrl4P__sub_801BA74C((s32)(0)) != 0U) || (TPlayerBattleCtrl4P__sub_801BA74C((s32)(1)) != 0U) || (TPlayerBattleCtrl4P__sub_801BA74C((s32)(2)) != 0U) || (TPlayerBattleCtrl4P__sub_801BA74C((s32)(3)) != 0U)) {
            M2C_FIELD(arg0, s32 *, 0x864) = (s32) (M2C_FIELD(arg0, s32 *, 0x864) + 1);
        }
        break;
    }
}

void update_wander_state__12TBoss1DragonFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xB;
        M2C_FIELD(arg0, s32 *, 0x864) = 0;
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x864) = (s32) (M2C_FIELD(arg0, s32 *, 0x864) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x864) > 0x5A) {
            M2C_FIELD(arg0, s32 *, 0x864) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = (s16) (M2C_FIELD(arg0, s16 *, 0xB8) + 1);
            if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) >= 0x1B) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            }
        }
        TBoss1Dragon__sub_80143504();
    case 3:
    case 5:
    case 1:
        return;
    }
}

extern s32 lbl_805D53A0;

s32 filter_input_flags__12TBoss1DragonFiii(s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r31;

    var_r31 = arg3;
    if ((TPlayerBattleCtrl4P__sub_801BA74C((s32)(lbl_805D53A0)) == 0U) || (check_flag_100__10TObjPlayerFPv() != 0)) {
        arg2 &= 0xFFFCF9F9;
    }
    return arg2 & var_r31;
}

extern f32 lbl_805D8088;

void calc_facing_vector__12TBoss1DragonFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (lbl_805D8088 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x76C)));
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (lbl_805D8088 * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x76C)));
}

s32 check_can_attack__12TBoss1DragonFPv(void *arg0) {
    u8 var_r31;

    var_r31 = 0;
    if ((filter_input_flags__12TBoss1DragonFiii((s32)((s32)(arg0)), (s32)((s32)(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6E4), s32 *, 8))), (s32)((s32)(0x400))) != 0) && (TBoss1Dragon__sub_800291B4(arg0) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

u8 check_attack_ready__12TBoss1DragonFPv(void *arg0) {
    u8 var_r31;

    var_r31 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x768) >= 0x96) && (filter_input_flags__12TBoss1DragonFiii((s32)((s32)(arg0)), (s32)((s32)(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6E4), s32 *, 8))), (s32)((s32)(0x400))) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

void update_switch_attack__12TBoss1DragonFPv(u8 *arg0) {
    TOSwitchAttack__sub_80087278(arg0 + 0x38, M2C_FIELD(M2C_FIELD(arg0, void **, 0x778), s32 *, 4), 0x40);
}

extern const f32 TBoss1Dragon__data_805D7F84;
extern const f32 TBoss1Dragon__data_805D8010;
extern const f32 lbl_805D8098;

void TBoss1Dragon__sub_80027B20(void) {
    TBoss1Dragon__sub_80027B78(TBoss1Dragon__data_805D8010, lbl_805D8098, TBoss1Dragon__data_805D7F84);
}

extern const f32 TBoss1Dragon__data_805D8010;
extern const f32 lbl_805D809C;
extern const f32 lbl_805D80A0;

void update_from_data__12TBoss1DragonFv(void) {
    TBoss1Dragon__sub_80027B78(TBoss1Dragon__data_805D8010, lbl_805D809C, lbl_805D80A0);
}

int set_state_1__12TBoss1DragonFPv(void* p) { return TBoss1Dragon__sub_80027F54(p, 1); }
int init_default__12TBoss1DragonFPv(void* p) { return TBoss1Dragon__sub_80027F54(p, 0); }

void clear_work__12TBoss1DragonFi(s32 arg0) {
    alloc_effect_node__12TBoss3VoloptFUisi(arg0 + 0x38, 0xE0, arg0);
}

s32 check_phase_advance__12TBoss1DragonFPv(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x32C) <= (s16) M2C_FIELD(arg0, s16 *, 0x680)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3E4) == 1) {
            TBoss1Dragon__sub_800284B4(arg0, 0xA);
            return 1;
        }
        TBoss1Dragon__sub_800284B4(arg0, 9);
        return 1;
    }
    return 0;
}

s32 update_max_hp_phase__12TBoss1DragonFPv(void *arg0) {
    s16 temp_r4;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x32C) <= (temp_r4 = M2C_FIELD(arg0, s16 *, 0x682))) {
        M2C_FIELD(arg0, s16 *, 0x32C) = temp_r4;
        set_hp_phase_value__12TBoss1DragonFPvi(arg0, 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3E4) == 0) {
            TBoss1Dragon__sub_800284B4(arg0, 0xD);
            return 1;
        }
        TBoss1Dragon__sub_800284B4(arg0, 0xB);
        return 1;
    }
    return 0;
}

void save_target_pos__12TBoss1DragonFPv(void* p) { *(f32*)((char*)p + 0x690) = *(f32*)((char*)p + 0x38); *(f32*)((char*)p + 0x694) = *(f32*)((char*)p + 0x40); }

extern M2C_UNK TBoss1Dragon__data_80435380;
extern const f32 TBoss1Dragon__data_805D7F28;

void set_move_speed__12TBoss1DragonFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 0x690) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 0x694) = (f32) TBoss1Dragon__data_805D7F28;
}

void save_pos__12TBoss1DragonFPv(void* p) { *(f32*)((char*)p + 0x690) = *(f32*)((char*)p + 0x394); *(f32*)((char*)p + 0x694) = *(f32*)((char*)p + 0x39c); }
void restore_position__12TBoss1DragonFPv(void* p) { *(f32*)((char*)p + 0x38) = *(f32*)((char*)p + 0x698); *(f32*)((char*)p + 0x40) = *(f32*)((char*)p + 0x69c); }

int TBoss1Dragon__sub_80028480(void) { return 0; }

void save_position__12TBoss1DragonFPv(void* p) { *(f32*)((char*)p + 0x394) = *(f32*)((char*)p + 0x698); *(f32*)((char*)p + 0x39c) = *(f32*)((char*)p + 0x69c); }

void handle_6x12_dragon_boss_actions(void *arg0) {
    void *x;
    bswap_6x12_packet__10TObjPlayerFPv(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        TBoss1Dragon__sub_80028598(x, arg0);
    }
}

void set_params__12TBoss1DragonFPvPv(void *arg0, void *arg1) {
    TBoss8Dragon__sub_800B9958(arg0, (u16) M2C_FIELD(arg1, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x67C) = (s32) M2C_FIELD(arg1, s16 *, 6);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s16) M2C_FIELD(arg1, s16 *, 4)) {
        TObjEneDD__sub_800BBA18((void *)(arg0), (s16)((s16) M2C_FIELD(arg1, s16 *, 4)));
    }
}

}
