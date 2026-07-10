#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_particle__15TObjSuisouLobbyFPv(void *arg0);
void TObjSuisouLobby__sub_80369D68(void);
void *create__15TObjSuisouLobbyFPv(void *arg0);
void *TObjSuisouLobby__ct(void *, void *, void *);
s32 TParticleCtrl__sub_80088000(void *);
s32 TParticleCtrl__sub_80088010(void *);
void *__nw__7TObjectFUl(int);

void update_particle__15TObjSuisouLobbyFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) == 3) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD4) != 0U) {
            TParticleCtrl__sub_80088000(M2C_FIELD(arg0, void **, 0xD4));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD8) != 0U) {
            TParticleCtrl__sub_80088000(M2C_FIELD(arg0, void **, 0xD8));
        }
    } else {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD4) != 0U) {
            TParticleCtrl__sub_80088010(M2C_FIELD(arg0, void **, 0xD4));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD8) != 0U) {
            TParticleCtrl__sub_80088010(M2C_FIELD(arg0, void **, 0xD8));
        }
    }
}
void TObjSuisouLobby__sub_80369D68(void) {  }

extern void *tl_05;

void *create__15TObjSuisouLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjSuisouLobby__ct(o, tl_05, arg0);
    }
    return o;
}

}
