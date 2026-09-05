#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK set_indexed_flags(void *, int, int);
s32 TODragonfly__sub_80158360(f32);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DB4F4;
extern const f32 lbl_805DB4F8;
extern const f32 lbl_805DB4FC;
extern const f32 lbl_805DB500;
void TODoorMachine01__vt13(u8 *arg0);
}

extern "C" {

void TODoorMachine01__vt15(u8 *arg0);
void TODoorMachine01__vt18(void);
void *__dt__15TODoorMachine01Fv(void *arg0, s16 arg1);
void *create__15TODoorMachine01FPv(void *arg0);
void free_resources__15TODoorMachine01Fv(void);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void TLobby__sub_8001FE7C(void*, int);
void *TODoorMachine01__ct(void *, void *, void *);
s32 TODragonfly__sub_80158360(f32);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

void TODoorMachine01__vt18(void) {  }

extern const f32 lbl_805DB4F0;

void TODoorMachine01__vt15(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0xD0) & 1) || (TODragonfly__sub_80158360(lbl_805DB4F0) != 1)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 8);
        TBoss3Volopt__sub_8022675C(0x4004BC01, arg0 + 0x38, 0, 0);
    }
}

extern void *tl_05;

void TODoorMachine01__vt13(u8 *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xD0) & 1) && (TODragonfly__sub_80158360((f32) (lbl_805DB4F4)) == 1)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        set_indexed_flags((void *) (arg0), (int) (0), (int) (8));
        TBoss3Volopt__sub_8022675C((M2C_UNK)((int) (0x4004BC01)), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    }
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 0x100000) {
        M2C_FIELD(arg0, f32 *, 0xE0) = (f32) (M2C_FIELD(arg0, f32 *, 0xE0) + lbl_805DB4F8);
        if (lbl_805DB4FC <= M2C_FIELD(arg0, f32 *, 0xE0)) {
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) & 0xFFEFFFFF);
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0xE0) = (f32) (M2C_FIELD(arg0, f32 *, 0xE0) - lbl_805DB4F8);
        if (M2C_FIELD(arg0, f32 *, 0xE0) <= lbl_805DB500) {
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 0x100000);
        }
    }
}

void *create__15TODoorMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xEC);
    if (o != NULL) {
        o = TODoorMachine01__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D5970;
extern s32 *lbl_805D5974;

void free_resources__15TODoorMachine01Fv(void) {
    if ((s32 *) lbl_805D5974 != NULL) {
        free_if_valid__10TObjPlayerFi(*lbl_805D5974);
        if ((s32 *) lbl_805D5974 != NULL) {
            free__11TOBoss4RockFUi((void*)lbl_805D5974);
            lbl_805D5974 = NULL;
        }
    }
    if ((u32) lbl_805D5970 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5970, 1);
        lbl_805D5970 = 0U;
    }
}

extern M2C_UNK __vt__15TODoorMachine01[];

void *__dt__15TODoorMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TODoorMachine01;
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
