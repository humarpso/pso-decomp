#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80158078_lbl_80440200 { char value[0x17]; };
typedef char RecoveredGlobal_80158078_lbl_80440200_size[sizeof(RecoveredGlobal_80158078_lbl_80440200) == 0x17 ? 1 : -1];

struct RecoveredGlobal_80158078_lbl_804AFB24 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80158078_lbl_804AFB24_size[sizeof(RecoveredGlobal_80158078_lbl_804AFB24) == 0x10 ? 1 : -1];

extern "C" {
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 TObjFish__sub_8001EDC4(void *, s32);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
int alloc_buffer__11TOBoss4RockFPv(void *);
u8 * TLanguage__sub_801E4874(s32);
extern RecoveredGlobal_80158078_lbl_80440200 lbl_80440200;
extern RecoveredGlobal_80158078_lbl_804AFB24 lbl_804AFB24;
extern u32 lbl_805D5890;
extern s32 *TOBarrierEnergy01__data_805D5894;
extern s32 lbl_805D5898;
void TOBarrierEnergy01__sub_80158078(void);
}

extern "C" {

void *__dt__17TOBarrierEnergy01Fv(void *arg0, s16 arg1);
void free_resources__17TOBarrierEnergy01Fv(void);
void update_anim_phase__17TOBarrierEnergy01FPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern u32 lbl_805D5890;
extern s32 *TOBarrierEnergy01__data_805D5894;

void free_resources__17TOBarrierEnergy01Fv(void) {
    if ((s32 *) TOBarrierEnergy01__data_805D5894 != NULL) {
        free_if_valid__10TObjPlayerFi(*TOBarrierEnergy01__data_805D5894);
        if ((s32 *) TOBarrierEnergy01__data_805D5894 != NULL) {
            free__11TOBoss4RockFUi((void*)TOBarrierEnergy01__data_805D5894);
            TOBarrierEnergy01__data_805D5894 = NULL;
        }
    }
    if ((u32) lbl_805D5890 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5890, 1);
        lbl_805D5890 = 0U;
    }
}

extern M2C_UNK __vt__17TOBarrierEnergy01[];

void TOBarrierEnergy01__sub_80158078(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804AFB24.value, 0, 0, 0));
    }
    (*(u8 * *)&lbl_805D5890) = (unsigned char *) ((void *) var_r0);
    lbl_805D5898 = TObjFish__sub_8001EDC4((void *) var_r0, 0);
    (*(s32 *)&TOBarrierEnergy01__data_805D5894) = alloc_buffer__11TOBoss4RockFPv((void *)0xC);
    M2C_FIELD((*(s32 *)&TOBarrierEnergy01__data_805D5894), u8 **, 0) = TLanguage__sub_801E4874((s32) &lbl_80440200.value);
    M2C_FIELD((*(s32 *)&TOBarrierEnergy01__data_805D5894), s32 *, 4) = TObjFish__sub_8001EDB0((*(u8 * *)&lbl_805D5890), 1);
    M2C_FIELD((*(s32 *)&TOBarrierEnergy01__data_805D5894), s32 *, 8) = TObjFish__sub_8001EDB0((*(u8 * *)&lbl_805D5890), 0);
}

void *__dt__17TOBarrierEnergy01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOBarrierEnergy01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void update_anim_phase__17TOBarrierEnergy01FPv(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;

    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (M2C_FIELD(arg0, f32 *, 0xB0) + M2C_FIELD(arg0, f32 *, 0xB8));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xB4);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0xB0);
    if (temp_f1 < temp_f0) {
        M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (temp_f0 - temp_f1);
    }
}

}
