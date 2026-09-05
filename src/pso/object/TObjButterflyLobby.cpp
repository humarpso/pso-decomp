#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjFish__sub_8001EDB0(void *, int);
s32 TObjFish__sub_8001EDC4(void *, int);
M2C_UNK copy_xyz__10TObjPlayerFPvPv(void *, void *);
M2C_UNK TPhotonMagicSquare__sub_801A2640();
M2C_UNK init_params__18TObjButterflyLobbyFPv(void *);
s32 is_lobby_event_active();
extern M2C_UNK __vt__18TObjButterflyLobby[];
extern s32 lbl_805D4360;
extern u32 lbl_805D6EB8;
extern const f32 TObjButterflyLobby__data_805DFE58;
u8 *TObjButterflyLobby__ct(u8 *arg0, int arg1, u8 *arg2);
}

extern "C" {

void *TObjButterflyLobby__create(void *arg0);
void *__dt__18TObjButterflyLobbyFv(void *arg0, s16 arg1);
void destroy_instance__18TObjButterflyLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__18TObjButterflyLobby[];

void *__dt__18TObjButterflyLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjButterflyLobby;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

u8 *TObjButterflyLobby__ct(u8 *arg0, int arg1, u8 *arg2) {
    TPhotonMagicSquare__sub_801A2640();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjButterflyLobby;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4360;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg2 + 0xC));
    copy_xyz__10TObjPlayerFPvPv((void *) (arg0 + 0x5C), (void *) (arg2 + 0x18));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x68), (void *) (arg2 + 0x24));
    if (is_lobby_event_active() != 0) {
        M2C_FIELD(arg0, s32 *, 0x90) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x90) = 3;
    }
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) TObjButterflyLobby__data_805DFE58;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x30) < 1) {
        M2C_FIELD(arg0, s32 *, 0xC4) = TObjFish__sub_8001EDC4((void *) ((*(s32 *)&lbl_805D6EB8)), (int) (0));
        M2C_FIELD(arg0, s32 *, 0xC8) = TObjFish__sub_8001EDB0((void *) ((*(s32 *)&lbl_805D6EB8)), (int) (0));
    } else {
        M2C_FIELD(arg0, s32 *, 0xC4) = TObjFish__sub_8001EDC4((void *) ((*(s32 *)&lbl_805D6EB8)), (int) (1));
        M2C_FIELD(arg0, s32 *, 0xC8) = TObjFish__sub_8001EDB0((void *) ((*(s32 *)&lbl_805D6EB8)), (int) (1));
    }
    init_params__18TObjButterflyLobbyFPv((void *) (arg0));
    return arg0;
}

void *TObjButterflyLobby__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = TObjButterflyLobby__ct((u8 *)(o), (int)(tl_05), (u8 *)(arg0));
    }
    return o;
}

extern u32 lbl_805D6EB8;

void destroy_instance__18TObjButterflyLobbyFv(void) {
    if ((u32) lbl_805D6EB8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6EB8, 1);
        lbl_805D6EB8 = 0U;
    }
}

}
