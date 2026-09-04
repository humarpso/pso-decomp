#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TORockCave__ct(void *arg0);
void TORockCave__sub_80175460(void);
void TORockCave__sub_80175464(void);
void *__dt__10TORockCaveFv(void *arg0, s16 arg1);
void free_instances__10TORockCaveFv(void);
void TLobby__sub_8001FE7C(void*, int);
void TOSensor__sub_80175468(void);
void TObjPlayer__sub_801569F4(void *, void *);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);

extern u32 lbl_805D5A80;
extern u32 lbl_805D5A84;

void free_instances__10TORockCaveFv(void) {
    if ((u32) lbl_805D5A84 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A84, 1);
        lbl_805D5A84 = 0U;
    }
    if ((u32) lbl_805D5A80 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A80, 1);
        lbl_805D5A80 = 0U;
    }
}

extern M2C_UNK __vt__10TORockCave[];

void *__dt__10TORockCaveFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TORockCave;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;
extern const f32 lbl_805DB974;
extern M2C_UNK __vt__10TORockCave[];
extern const f32 lbl_805DB978;
extern void *lbl_805D30F8;

void *TORockCave__ct(void *arg0) {
    TObjPlayer__sub_801569F4(arg0, tl_05);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TORockCave;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D30F8;
    M2C_FIELD(arg0, f32 *, 0xAC) = lbl_805DB974;
    M2C_FIELD(arg0, f32 *, 0xB0) = lbl_805DB978;
    return arg0;
}

void TORockCave__sub_80175460(void) {  }
void TORockCave__sub_80175464(void) {  }

}
