#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80163B8C_lbl_804B1760 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80163B8C_lbl_804B1760_size[sizeof(RecoveredGlobal_80163B8C_lbl_804B1760) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80163B8C_lbl_804B1760 lbl_804B1760;
extern u32 TODoorVoShip__data_805D5980;
void TODoorVoShip__sub_80163B8C(void);
}

extern "C" {

void *__dt__12TODoorVoShipFv(void *arg0, s16 arg1);
void *create__12TODoorVoShipFPv(void *arg0);
void free_static_data__12TODoorVoShipFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TODoorVoShip__ct(void *, void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_key_base__5TOKeyFPvs(void *, M2C_UNK);

extern void *tl_05;

void *create__12TODoorVoShipFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xEC);
    if (o != NULL) {
        o = TODoorVoShip__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TODoorVoShip__data_805D5980;

void free_static_data__12TODoorVoShipFv(void) {
    if ((u32) TODoorVoShip__data_805D5980 != 0U) {
        TLobby__sub_8001FE7C((void*)TODoorVoShip__data_805D5980, 1);
        TODoorVoShip__data_805D5980 = 0U;
    }
}

extern M2C_UNK __vt__12TODoorVoShip[];

void TODoorVoShip__sub_80163B8C(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804B1760.value, 0, 0, 0));
    }
    (*(s32 *)&TODoorVoShip__data_805D5980) = var_r0;
}

void *__dt__12TODoorVoShipFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TODoorVoShip;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
