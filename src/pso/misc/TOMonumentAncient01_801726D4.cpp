#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 calc_angle_to__10TObjPlayerFPvPv(void *, void *);
M2C_UNK TObjPlayer__sub_80154954(void *, void *);
s32 TLobby__sub_80156A80(void *, void *, int);
M2C_UNK start_camera_pan__10TObjPlayerFPvs(int, int, void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(void *);
void TOMonumentAncient02__vt11(u8 *arg0, u16 arg1);
}

extern "C" {

void *__dt__19TOMonumentAncient01Fv(void *arg0, s16 arg1);
void *create__19TOMonumentAncient01FPv(void *arg0);
void release_static_resource__19TOMonumentAncient01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TOMonumentAncient01__ct(void *, void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_key_object__5TOKeyFPvs(void *, M2C_UNK);

extern void *tl_05;

void *create__19TOMonumentAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE4);
    if (o != NULL) {
        o = TOMonumentAncient01__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TOMonumentAncient01__data_805D5A60;

void release_static_resource__19TOMonumentAncient01Fv(void) {
    if ((u32) TOMonumentAncient01__data_805D5A60 != 0U) {
        TLobby__sub_8001FE7C((void*)TOMonumentAncient01__data_805D5A60, 1);
        TOMonumentAncient01__data_805D5A60 = 0U;
    }
}

extern M2C_UNK __vt__19TOMonumentAncient01[];

void *__dt__19TOMonumentAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TOMonumentAncient01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_key_object__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void TOMonumentAncient02__vt11(u8 *arg0, u16 arg1) {
    s16 sp8;
    s32 temp_r3;
    switch (M2C_FIELD(arg0, s32 *, 0xAC)) {
    case 1:
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((void *) (arg1));
        if (temp_r3 != 0) {
            M2C_FIELD(arg0, s32 *, 0xAC) = 2;
            start_camera_pan__10TObjPlayerFPvs((int) (temp_r3), (int) (0xC), (void *) (calc_angle_to__10TObjPlayerFPvPv((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38))));
            if (TLobby__sub_80156A80((void *) (arg0), (void *) (&sp8), (int) (1)) != 0) {
                sp8 = (s16) M2C_FIELD(arg0, s32 *, 0xAC);
                TLobby__sub_80156A80((void *) (arg0), (void *) (&sp8), (int) (0));
                TObjPlayer__sub_80154954((void *) (arg0), (void *) (&sp8));
            }
        }
        break;
    }
}

}
