#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__19TOMonumentAncient02Fv(void *arg0, s16 arg1);
void *create__19TOMonumentAncient02FPv(void *arg0);
void free_shared_data__19TOMonumentAncient02Fv(void);
void run_task__19TOMonumentAncient02Fv(u8 *arg0);
void TLobby__sub_8001FE7C(void*, int);
void *TOMonumentAncient02__ct(void *, void *, void *);
M2C_UNK TOTrapAncient01__sub_80226578(s32, void *, void *, M2C_UNK, M2C_UNK);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_key_base__5TOKeyFPvs(void *, int);
M2C_UNK enable__13TParticleCtrlFPv(void *);
s32 is_not_split_screen__13TRaderMapCoreFv();
void request_destroy__11TBoss4Type2FUi(void *);

void run_task__19TOMonumentAncient02Fv(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    default:
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        if ((u32) M2C_FIELD(arg0, u32 *, 0xE8) != 0U) {
            enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xE8));
        }
        return;
    case 1:
        if ((is_not_split_screen__13TRaderMapCoreFv() != 1) && ((s32) M2C_FIELD(arg0, s32 *, 0xEC) == 1)) {
            TObjPlayer__sub_801B4A18(arg0, -1);
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xE8) != 0U) {
            enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xE8));
            return;
        }
        break;
    case 2:
        TOTrapAncient01__sub_80226578(M2C_FIELD(arg0, s32 *, 0xD4), arg0, arg0 + 0x38, 0, 0);
        break;
    }
}

extern void *tl_05;

void *create__19TOMonumentAncient02FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF0);
    if (o != NULL) {
        o = TOMonumentAncient02__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TOMonumentAncient02__data_805D5A68;

void free_shared_data__19TOMonumentAncient02Fv(void) {
    if ((u32) TOMonumentAncient02__data_805D5A68 != 0U) {
        TLobby__sub_8001FE7C((void*)TOMonumentAncient02__data_805D5A68, 1);
        TOMonumentAncient02__data_805D5A68 = 0U;
    }
}

extern M2C_UNK __vt__19TOMonumentAncient02[];

void *__dt__19TOMonumentAncient02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TOMonumentAncient02;
        request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0xE8));
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
