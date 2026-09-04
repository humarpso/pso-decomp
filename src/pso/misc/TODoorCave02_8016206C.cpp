#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__12TODoorCave02Fv(void *arg0, s16 arg1);
void *create__12TODoorCave02FPv(void *arg0);
void free_globals__12TODoorCave02Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TODoorCave02__ct(void *, void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern void *tl_05;

void *create__12TODoorCave02FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE4);
    if (o != NULL) {
        o = TODoorCave02__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D5960;
extern s32 *TODoorCave02__data_805D5964;

void free_globals__12TODoorCave02Fv(void) {
    if ((s32 *) TODoorCave02__data_805D5964 != NULL) {
        free_if_valid__10TObjPlayerFi(*TODoorCave02__data_805D5964);
        if ((s32 *) TODoorCave02__data_805D5964 != NULL) {
            free__11TOBoss4RockFUi((void*)TODoorCave02__data_805D5964);
            TODoorCave02__data_805D5964 = NULL;
        }
    }
    if ((u32) lbl_805D5960 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5960, 1);
        lbl_805D5960 = 0U;
    }
}

extern M2C_UNK __vt__12TODoorCave02[];

void *__dt__12TODoorCave02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TODoorCave02;
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
