#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TObjFish__sub_8001ED9C(void *, int);
s32 TObjFish__sub_8001EDC4(void *, int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470();
M2C_UNK TObjDoor__sub_803DC894(int, int, f32);
extern u32 TObjWeddingLobby__data_805D6F60;
extern u32 lbl_805D6F64;
extern const f32 TObjWeddingLobby__data_805E0158;
void render__16TObjWeddingLobbyFv(u8 *arg0);
}

extern "C" {

void TObjWeddingLobby__sub_8035BC20(void);
void *__dt__16TObjWeddingLobbyFv(void *arg0, s16 arg1);
void *create__16TObjWeddingLobbyFPv(void *arg0);
void release__16TObjWeddingLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjWeddingLobby__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_key_base__5TOKeyFPvs(void *, int);

void TObjWeddingLobby__sub_8035BC20(void) {  }

extern void *tl_05;

void render__16TObjWeddingLobbyFv(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r31;
    s32 temp_r3;
    if (((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 0) && ((u32) lbl_805D6F64 != 0U)) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi((void *) (lbl_805D6F64));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 3) {
            temp_f1 = M2C_FIELD(arg0, f32 *, 0xCC);
            TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (temp_f1), (f32) (TObjWeddingLobby__data_805E0158), (f32) (temp_f1));
        }
        TObjFish__sub_8001EDC4((void *) ((*(s32 *)&TObjWeddingLobby__data_805D6F60)), (int) (0));
        TObjBoss2Tunnel__sub_803DB470();
        TObjDoor__sub_803DC894((int) TObjFish__sub_8001EDC4((void *) ((*(s32 *)&TObjWeddingLobby__data_805D6F60)), (int) (1)), (int) TObjFish__sub_8001ED9C((void *) ((*(s32 *)&TObjWeddingLobby__data_805D6F60)), (int) (0)), (f32) (M2C_FIELD(arg0, f32 *, 0xB0)));
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
    }
}

void *create__16TObjWeddingLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TObjWeddingLobby__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TObjWeddingLobby__data_805D6F60;

void release__16TObjWeddingLobbyFv(void) {
    if ((u32) TObjWeddingLobby__data_805D6F60 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjWeddingLobby__data_805D6F60, 1);
        TObjWeddingLobby__data_805D6F60 = 0U;
    }
}

extern M2C_UNK __vt__16TObjWeddingLobby[];

void *__dt__16TObjWeddingLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjWeddingLobby;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
