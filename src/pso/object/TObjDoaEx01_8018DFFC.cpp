#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8018E1E0_lbl_804B7588 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8018E1E0_lbl_804B7588_size[sizeof(RecoveredGlobal_8018E1E0_lbl_804B7588) == 0x10 ? 1 : -1];

extern "C" {
s32 TObjFish__sub_8001EDC4(void *, s32);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8018E1E0_lbl_804B7588 lbl_804B7588;
extern u32 TObjDoaEx01__data_805D5BB0;
extern u8 *TObjDoaEx01__data_805D5BB4;
extern s32 TObjDoaEx01__data_805D5BB8;
void TObjDoaEx01__sub_8018E1E0(void);
}

extern "C" {

void *TObjDoaEx01__create(void *arg0);
void *__dt__11TObjDoaEx01Fv(void *arg0, s16 arg1);
void free_resource__11TObjDoaEx01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjDoaEx01__ct(void *, void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);

extern M2C_UNK __vt__11TObjDoaEx01[];

void *__dt__11TObjDoaEx01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjDoaEx01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

void *TObjDoaEx01__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE4);
    if (o != NULL) {
        o = TObjDoaEx01__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TObjDoaEx01__data_805D5BB0;

void free_resource__11TObjDoaEx01Fv(void) {
    if ((u32) TObjDoaEx01__data_805D5BB0 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjDoaEx01__data_805D5BB0, 1);
        TObjDoaEx01__data_805D5BB0 = 0U;
    }
}
void TObjDoaEx01__sub_8018E1E0(void) {
    s32 temp_r3;
    s32 var_r0;
    u8 *temp_r3_2;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804B7588.value, 0, 0, 0));
    }
    (*(u8 * *)&TObjDoaEx01__data_805D5BB0) = (unsigned char *) ((void *) var_r0);
    temp_r3_2 = (u8 *)(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(TObjFish__sub_8001EDC4((void *) var_r0, 0), void **, 0x2C), void **, 0x30), void **, 0x2C), void **, 0x2C));
    TObjDoaEx01__data_805D5BB4 = temp_r3_2;
    TObjDoaEx01__data_805D5BB8 = M2C_FIELD(temp_r3_2, s32 *, 0x30);
}

}
