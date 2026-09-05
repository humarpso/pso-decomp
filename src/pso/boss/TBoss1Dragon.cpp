#include "pso/boss/TBoss1Dragon.h"
typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct DragonVirtualBase { char pad[0x18]; };
struct DragonVirtualInterface : DragonVirtualBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(s16, s32);
};

extern "C" {
int TBoss1Dragon__sub_80020A34(void* p);
void draw__12TBoss1DragonFPv(u8 *arg0);
void action__12TBoss1DragonFPvi(void *arg0, s32 arg1);
void update_wander_state__12TBoss1DragonFPvi(void *arg0, s32 arg1);
s32 filter_input_flags__12TBoss1DragonFiii(s32 arg1, s32 arg2, s32 arg3);
s32 check_can_attack__12TBoss1DragonFPv(void *arg0);
u8 check_attack_ready__12TBoss1DragonFPv(void *arg0);
void update_switch_attack__12TBoss1DragonFPv(u8 *arg0);
void TBoss1Dragon__sub_80027B20(void);
void update_from_data__12TBoss1DragonFv(void);
void clear_work__12TBoss1DragonFi(s32 arg0);
s32 check_phase_advance__12TBoss1DragonFPv(void *arg0);
s32 update_max_hp_phase__12TBoss1DragonFPv(void *arg0);
void handle_6x12_dragon_boss_actions(void *arg0);
void set_params__12TBoss1DragonFPvPv(void *arg0, void *arg1);
M2C_UNK TBoss1Dragon__sub_80027B78(f32, f32, f32);
int TBoss1Dragon__sub_80027F54(void*, int);
M2C_UNK TBoss1Dragon__sub_800284B4(void *, M2C_UNK);
void TBoss1Dragon__sub_80028598(void *, void *);
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
void handle_6x11_dragon_boss_actions(void *arg0);
void copy_params__12TBoss1DragonFPvPv(void *arg0, void *arg1);
void handle_6x10_dragon_boss_actions(void *arg0);
void set_result_flag__12TBoss1DragonFPvii(void *arg0, s32 arg1, s32 arg2);
void spawn_trap__12TBoss1DragonFii(s32 arg0, s32 arg1);
void play_se_at_pos__12TBoss1DragonFii(s32 arg0, s32 arg1);
M2C_UNK TBoss3Volopt__sub_8022675C(s32, s32, M2C_UNK, M2C_UNK);
s32 TBoss4Type2__sub_80141FA8(s32, s32);
M2C_UNK TOTrapAncient01__sub_80226578(s32, s32, s32, M2C_UNK, M2C_UNK);
void bswap_dragon_boss_fields__10TObjPlayerFPv(void *);
void bswap_stats__10TObjPlayerFPv(void *);
void calc_target_vector__12TBoss1DragonFPv(u8 *arg0);
void update_linked_epsilon_position__12TBoss1DragonFv(void);
void update_position_history__12TBoss1DragonFi(s32 arg0);
void TBoss1Dragon__sub_8002966C(void);
void TBoss1Dragon__sub_80029670(void);
void TBoss1Dragon__sub_80029674(void);
void TBoss1Dragon__sub_80029678(void);
void check_death__12TBoss1DragonFPv(void *arg0);
void choose_next_action__12TBoss1DragonFPv(void *arg0);
void free_resources__12TBoss1DragonFv(void);
s32 get_instance__12TBoss1DragonFv(void);
void *dt__12TBoss1DragonFPvs(void *arg0, s16 arg1);
void *init_base__12TBoss1DragonFPv(void *arg0);
int TBoss1Dragon__sub_8002AC4C(void);
int TBoss1Dragon__sub_8002ACE0(void);
int TBoss1Dragon__sub_8002AD54(void);
void TBoss1Dragon__sub_8002ADAC(void);
void TBoss1Dragon__sub_8002ADB0(void);
void TBoss1Dragon__sub_8002ADB4(void);
void TBoss1Dragon__sub_8002ADB8(void);
void TBoss1Dragon__sub_8002ADBC(void);
void TBoss1Dragon__sub_8002ADC0(void);
void TBoss1Dragon__sub_8002ADC4(void);
void TLobby__sub_8001FE7C(void*, int);
s32 VecCopy__FP3VecPC3Vec(s32, s32);
void __dl__7TObjectFPv(void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *, f32, f32);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
void fn_800BC4C8(void *);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);
int check_v2_mode__9TObjEneDDFv();

extern M2C_UNK TBoss1Dragon__sub_8002116C[];
extern u32 TBoss1Dragon__data_805D4B28;
extern const f32 TBoss1Dragon__data_805D7F24;
extern const f32 TBoss1Dragon__data_805D7F28;
extern const f32 lbl_805D7F44;
extern s32 lbl_805D53A0;
extern f32 lbl_805D8088;
extern const f32 TBoss1Dragon__data_805D7F84;
extern const f32 TBoss1Dragon__data_805D8010;
extern const f32 lbl_805D8098;
extern const f32 lbl_805D809C;
extern const f32 lbl_805D80A0;
extern M2C_UNK TBoss1Dragon__data_80435380;
extern const f32 lbl_805D7F30;
extern s32 enable_v2_features;
extern s32 lbl_805D4B34;
extern s32 TBoss1Dragon__data_805D4B38;
extern s16 TBoss1Dragon__data_805D4B3C;
extern u32 TBoss1Dragon__data_805D4B08;
extern s32 TBoss1Dragon__data_805D4B2C;
extern M2C_UNK lbl_80481B34[];
}

bool TBoss1Dragon::isV2Mode() {
    return check_v2_mode__9TObjEneDDFv() != 0;
}

extern "C" {

int TBoss1Dragon__sub_80020A34(void* p) { return get_target_info__9TObjEneDDFPv(p); }

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

s32 filter_input_flags__12TBoss1DragonFiii(s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r31;

    var_r31 = arg3;
    if ((TPlayerBattleCtrl4P__sub_801BA74C((s32)(lbl_805D53A0)) == 0U) || (check_flag_100__10TObjPlayerFPv() != 0)) {
        arg2 &= 0xFFFCF9F9;
    }
    return arg2 & var_r31;
}

}

void TBoss1Dragon::updateFacingPosition() {
    positionX = lbl_805D8088 * TBoss8Dragon__sub_803D64C0(facingAngle);
    positionZ = lbl_805D8088 * TBoss8Dragon__sub_803D64DC(facingAngle);
}

extern "C" {

s32 check_can_attack__12TBoss1DragonFPv(void *arg0) {
    u8 var_r31;

    var_r31 = 0;
    if ((filter_input_flags__12TBoss1DragonFiii((s32)((s32)(arg0)), (s32)((s32)(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6E4), s32 *, 8))), (s32)((s32)(0x400))) != 0) && (((TBoss1Dragon*)arg0)->isHpPhaseComplete() != 0)) {
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

void TBoss1Dragon__sub_800275BC(s32, s32, u8*, s32);

void TBoss1Dragon__sub_80027590(void* object, void* action) {
    TBoss1Dragon__sub_800275BC((s32)object, (s32)((char*)object + 0x38), (u8*)action, 0);
}

void TBoss1Dragon__sub_80027B20(void) {
    TBoss1Dragon__sub_80027B78(TBoss1Dragon__data_805D8010, lbl_805D8098, TBoss1Dragon__data_805D7F84);
}

void update_from_data__12TBoss1DragonFv(void) {
    TBoss1Dragon__sub_80027B78(TBoss1Dragon__data_805D8010, lbl_805D809C, lbl_805D80A0);
}

}

int TBoss1Dragon::setState1() {
    return TBoss1Dragon__sub_80027F54(this, 1);
}

int TBoss1Dragon::initDefault() {
    return TBoss1Dragon__sub_80027F54(this, 0);
}

extern "C" {

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
        ((TBoss1Dragon*)arg0)->setHpPhaseValue(1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3E4) == 0) {
            TBoss1Dragon__sub_800284B4(arg0, 0xD);
            return 1;
        }
        TBoss1Dragon__sub_800284B4(arg0, 0xB);
        return 1;
    }
    return 0;
}

}

void TBoss1Dragon::saveCurrentDestination() {
    destinationX = positionX;
    destinationZ = positionZ;
}

void TBoss1Dragon::setDestinationX(int x) {
    destinationX = (f32)x;
    destinationZ = TBoss1Dragon__data_805D7F28;
}

void TBoss1Dragon::saveTargetDestination() {
    destinationX = targetX;
    destinationZ = targetZ;
}

void TBoss1Dragon::restorePosition() {
    positionX = savedX;
    positionZ = savedZ;
}

void TBoss1Dragon::copySavedX(int* x) {
    *x = (int)savedX;
}

void TBoss1Dragon::restoreTargetPosition() {
    targetX = savedX;
    targetZ = savedZ;
}

extern "C" {

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

}

void TBoss1Dragon::beginHeightTransition() {
    flags |= 0x100;
    height = positionY;
    heightOffset = defaultHeightOffset;
}

void TBoss1Dragon::setPhase2() {
    phase = 2;
}

void TBoss1Dragon::setActive() {
    phase = 1;
}

void TBoss1Dragon::clearState() {
    phase = 0;
}

extern "C" {

void spawn_trap__12TBoss1DragonFii(s32 arg0, s32 arg1) {
    TOTrapAncient01__sub_80226578(arg1, arg0, arg0 + 0x63C, 0, 0);
}

void play_se_at_pos__12TBoss1DragonFii(s32 arg0, s32 arg1) {
    TBoss3Volopt__sub_8022675C(arg1, arg0 + 0x63C, 0, 0);
}

}

s32 TBoss1Dragon::isHpPhaseComplete() {
    return (u8)(hpPhaseValue >= 50);
}

s32 TBoss1Dragon::isHpPhasePending() {
    return hpPhaseValue < 50;
}

void TBoss1Dragon::setHpPhaseValue(int complete) {
    if (complete == 0) {
        hpPhaseValue = 0;
        return;
    }
    hpPhaseValue = 50;
}

void TBoss1Dragon::resetHpPhase() {
    setHpPhaseValue(0);
}

extern "C" {

void calc_target_vector__12TBoss1DragonFPv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x394);
    M2C_FIELD(arg0, f32 *, 0x5C8) = (f32) (temp_f2 - M2C_FIELD(arg0, f32 *, 0x40C));
    M2C_FIELD(arg0, f32 *, 0x5CC) = (f32) TBoss1Dragon__data_805D7F28;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x39C);
    M2C_FIELD(arg0, f32 *, 0x5D0) = (f32) (temp_f1 - M2C_FIELD(arg0, f32 *, 0x414));
    M2C_FIELD(arg0, f32 *, 0x5D4) = clamp_velocity__15TObjBoss2TunnelFPv(arg0 + 0x5C8, temp_f1, temp_f2);
}

void update_linked_epsilon_position__12TBoss1DragonFv(void) {
    update_linked_position__14TObjEneEpsilonFPv(lbl_805D7F30);
}

void update_position_history__12TBoss1DragonFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x430);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

void TBoss1Dragon__sub_8002966C(void) {  }

void TBoss1Dragon__sub_80029670(void) {  }

void TBoss1Dragon__sub_80029674(void) {  }

void TBoss1Dragon__sub_80029678(void) {  }

void check_death__12TBoss1DragonFPv(void *arg0) {
    if (((TBoss1Dragon*)arg0)->isHpPhasePending() != 0) {
        if (update_max_hp_phase__12TBoss1DragonFPv(arg0) != 0) {
            return;
        }
        goto block_8;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 0x800) && ((s32) M2C_FIELD(arg0, s16 *, 0x32C) <= 0)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3E4) == 1) {
            TBoss1Dragon__sub_800284B4(arg0, 0xC);
            return;
        }
        TBoss1Dragon__sub_800284B4(arg0, 0x15);
        return;
    }
block_8:
    ((DragonVirtualInterface *)arg0)->m85(M2C_FIELD(arg0, s16 *, 0x326), 0xB);
}

void choose_next_action__12TBoss1DragonFPv(void *arg0) {
    if (((TBoss1Dragon*)arg0)->isHpPhasePending() != 0) {
        if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 0x400)) {
            if (update_max_hp_phase__12TBoss1DragonFPv(arg0) == 0) {
                if (check_phase_advance__12TBoss1DragonFPv(arg0) != 0) {
                    return;
                }
                goto block_12;
            }
        } else {
            goto block_12;
        }
    } else {
        if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 0x800) && (M2C_FIELD(arg0, s16 *, 0x32C) <= 0)) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3E4) == 1) {
                if ((s32) enable_v2_features != 0) {
                    TBoss1Dragon__sub_800284B4(arg0, 0xC);
                    return;
                }
                TObjEneDD__sub_800BBA18(arg0, 0xC);
                return;
            }
            TBoss1Dragon__sub_800284B4(arg0, 0x15);
            return;
        }
block_12:
        if ((s32) lbl_805D4B34 != 0) {
            ((DragonVirtualInterface *) arg0)->m85(M2C_FIELD(arg0, s16 *, 0x326), 2);
            return;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x760) != 0) {
            ((DragonVirtualInterface *) arg0)->m85(M2C_FIELD(arg0, s16 *, 0x326), 0xB);
            return;
        }
        ((DragonVirtualInterface *) arg0)->m85(M2C_FIELD(arg0, s16 *, 0x326), 9);
    }
}

}

void TBoss1Dragon::clearControlOverride() {
    TBoss1Dragon__data_805D4B38 = 0;
}

void TBoss1Dragon::setControlOverride(s16 controlId) {
    if (enable_v2_features != 0) {
        TBoss1Dragon__data_805D4B3C = controlId;
        TBoss1Dragon__data_805D4B38 = 1;
    }
}

void TBoss1Dragon::requestActionRefresh() {
    lbl_805D4B34 = 1;
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual M2C_UNK m20(s32, f32);
};
extern "C" {
void update_switch_attack__12TBoss1DragonFPv(u8 *arg0);
s32 objInBand__FP7GameObjf(f32);
extern const f32 TBoss1Dragon__data_805D8018;
void TBoss1Dragon__sub_800274A4(s32 arg0);
extern f32 TObjEneDf2Bringer__data_805D9820;
void TBoss1Dragon__sub_800274A4(s32 arg0);
extern const f32 lbl_805D800C;
void TBoss1Dragon__sub_80028AFC(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_8002AB6C(void *);
extern const f32 TBoss1Dragon__data_805D7F40;
void TBoss1Dragon__sub_8002AA7C(u8 *arg0, u8 *arg1);
}

extern "C" {

}
extern "C" {
struct Base_80098E4C_80098DB0 { char pad[0x18]; };
struct VObj_80098E4C_80098DB0 : Base_80098E4C_80098DB0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual int m97();
};
void TBoss1Dragon__sub_800274A4(s32 arg0) {
    if (objInBand__FP7GameObjf((f32) (TBoss1Dragon__data_805D8018)) != 0) {
        update_switch_attack__12TBoss1DragonFPv((u8 *)((void *) (arg0)));
    }
}

void TBoss1Dragon__sub_80028AFC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFEFF);
    M2C_FIELD(arg0, f32 *, 0x5D8) = (f32) (lbl_805D800C + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x5DC) = (f32) (lbl_805D800C + M2C_FIELD(arg0, f32 *, 0x5E0));
}

void free_resources__12TBoss1DragonFv(void) {
    if ((u32) TBoss1Dragon__data_805D4B28 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TBoss1Dragon__data_805D4B28);
        TBoss1Dragon__data_805D4B28 = 0U;
    }
    if ((u32) TBoss1Dragon__data_805D4B08 != 0U) {
        TLobby__sub_8001FE7C((void*)TBoss1Dragon__data_805D4B08, 1);
        TBoss1Dragon__data_805D4B08 = 0U;
    }
}

s32 get_instance__12TBoss1DragonFv(void) {
    return TBoss1Dragon__data_805D4B2C;
}

void TBoss1Dragon__sub_8002AA7C(u8 *arg0, u8 *arg1) {
    ((VObj_18 *)(arg1))->m20(M2C_FIELD(arg0, s32 *, 0xAC), TBoss1Dragon__data_805D7F40);
    TBoss1Dragon__sub_8002AB6C((void *) (arg1));
}

void *dt__12TBoss1DragonFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80481B34;
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *init_base__12TBoss1DragonFPv(void *arg0) {
    fn_800BC4C8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80481B34;
    return arg0;
}

int TBoss1Dragon__sub_8002AC4C(void) { return 0; }

int TBoss1Dragon__sub_8002ACE0(void) { return 0; }

int TBoss1Dragon__sub_8002AD54(void) { return 0; }

void TBoss1Dragon__sub_8002ADAC(void) {  }

void TBoss1Dragon__sub_8002ADB0(void) {  }

void TBoss1Dragon__sub_8002ADB4(void) {  }

void TBoss1Dragon__sub_8002ADB8(void) {  }

void TBoss1Dragon__sub_8002ADBC(void) {  }

void TBoss1Dragon__sub_8002ADC0(void) {  }

void TBoss1Dragon__sub_8002ADC4(void) {  }

}
