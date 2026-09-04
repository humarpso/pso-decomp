#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TODoorVS2Door01__vt13(u8 *arg0);
void TODoorVS2Door01__vt15(u8 *arg0);
void TODoorVS2Door01__vt18(void);
void *__dt__15TODoorVS2Door01Fv(void *arg0, s16 arg1);
void *create__15TODoorVS2Door01FPv(void *arg0);
void free_resources__15TODoorVS2Door01Fv(void);
u8 is_open__15TODoorVS2Door01FPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void TLobby__sub_8001FE7C(void*, int);
void *TODoorVS2Door01__ct(void *, void *, void *);
s32 TODragonfly__sub_80158360(f32);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);
s32 fn_801582C4();
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

void TODoorVS2Door01__vt18(void) {  }

extern const f32 lbl_805DB54C;

void TODoorVS2Door01__vt15(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0xD0) & 1) || (TODragonfly__sub_80158360(lbl_805DB54C) == 0)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 8);
        TBoss3Volopt__sub_8022675C(0x4004AA0B, arg0 + 0x38, 0, 0);
    }
}

extern const f32 lbl_805DB554;

void TODoorVS2Door01__vt13(u8 *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xD0) & 1) && (TODragonfly__sub_80158360(lbl_805DB554) != 0)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        set_indexed_flags(arg0, 0, 8);
        TBoss3Volopt__sub_8022675C(0x4004AA0B, arg0 + 0x38, 0, 0);
    }
}

u8 is_open__15TODoorVS2Door01FPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if ((fn_801582C4() != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0xAC) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

extern void *tl_05;

void *create__15TODoorVS2Door01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TODoorVS2Door01__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D5988;
extern s32 *TODoorVS2Door01__data_805D598C;

void free_resources__15TODoorVS2Door01Fv(void) {
    if ((s32 *) TODoorVS2Door01__data_805D598C != NULL) {
        free_if_valid__10TObjPlayerFi(*TODoorVS2Door01__data_805D598C);
        if ((s32 *) TODoorVS2Door01__data_805D598C != NULL) {
            free__11TOBoss4RockFUi((void*)TODoorVS2Door01__data_805D598C);
            TODoorVS2Door01__data_805D598C = NULL;
        }
    }
    if ((u32) lbl_805D5988 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5988, 1);
        lbl_805D5988 = 0U;
    }
}

extern M2C_UNK __vt__15TODoorVS2Door01[];

void *__dt__15TODoorVS2Door01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TODoorVS2Door01;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
