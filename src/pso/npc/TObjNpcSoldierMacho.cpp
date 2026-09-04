#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__19TObjNpcSoldierMachoFv(void *arg0, s16 arg1);
void unload_static_data__19TObjNpcSoldierMachoFv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *, int);

extern u32 TObjNpcSoldierMacho__data_805D5858;

void unload_static_data__19TObjNpcSoldierMachoFv(void) {
    if ((u32) TObjNpcSoldierMacho__data_805D5858 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcSoldierMacho__data_805D5858, 1);
        TObjNpcSoldierMacho__data_805D5858 = 0U;
    }
}

extern M2C_UNK __vt__19TObjNpcSoldierMacho[];

void *__dt__19TObjNpcSoldierMachoFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjNpcSoldierMacho;
        destroy_npc_lappy_base__12TObjNpcLappyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
