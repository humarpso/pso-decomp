#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__16TODoorJungleMainFv(void *arg0, s16 arg1);
void free_static_resources__16TODoorJungleMainFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void destroy_ancient_door_base__15TODoorAncient01FPvs(void *, int);
void queue_destruction__7TObjectFv(void *);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TODoorJungleMain__data_805D65B8;
extern u32 lbl_805D65BC;

void free_static_resources__16TODoorJungleMainFv(void) {
    if ((u32) lbl_805D65BC != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D65BC);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D65BC);
        lbl_805D65BC = 0U;
    }
    if ((u32) TODoorJungleMain__data_805D65B8 != 0U) {
        TLobby__sub_8001FE7C((void*)TODoorJungleMain__data_805D65B8, 1);
        TODoorJungleMain__data_805D65B8 = 0U;
    }
}

extern M2C_UNK __vt__16TODoorJungleMain[];

void *__dt__16TODoorJungleMainFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TODoorJungleMain;
        if (M2C_FIELD(arg0, void **, 0xDC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xDC)); M2C_FIELD(arg0, M2C_UNK *, 0xDC) = 0; }
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
