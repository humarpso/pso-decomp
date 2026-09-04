#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjParticleLobby__sub_80369A60(void);
void TObjParticleLobby__sub_80369A64(void);

void TObjParticleLobby__sub_80369A60(void) {  }
void TObjParticleLobby__sub_80369A64(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x80369698
#include "types.h"

extern "C" {

void TObjParticleLobby__sub_80369698(void);
void render__17TObjParticleLobbyFv(void);

void TObjParticleLobby__sub_80369698(void) {  }
void render__17TObjParticleLobbyFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80369A14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__17TObjParticleLobbyFPv(void *arg0);
void *TObjParticleLobby__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__17TObjParticleLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TObjParticleLobby__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80369A68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__17TObjParticleLobbyFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__17TObjParticleLobby[];

void *__dt__17TObjParticleLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjParticleLobby;
        if (M2C_FIELD(arg0, void **, 0xD4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD4)); M2C_FIELD(arg0, M2C_UNK *, 0xD4) = 0; }
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
