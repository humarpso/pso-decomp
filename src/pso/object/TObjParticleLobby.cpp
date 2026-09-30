#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80369ADC___vt__17TObjParticleLobby {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
M2C_UNK TObjParticleLobby__sub_803697E8(void *);
s32 TBoss4Type2__sub_800874F4(void *, int);
s32 init_map_object_base(void *, void *);
extern M2C_UNK __vt__17TObjParticleLobby[];
extern s32 lbl_805D44B8;
extern const f32 lbl_805E0344;
u8 *TObjParticleLobby__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 TLobby__sub_80351DFC();
s32 TObjParticleLobby__sub_80369654(void);
}

extern "C" {

void TObjParticleLobby__sub_80369698(void);
void TObjParticleLobby__sub_80369A60(void);
void TObjParticleLobby__sub_80369A64(void);
void *__dt__17TObjParticleLobbyFv(void *arg0, s16 arg1);
void *create__17TObjParticleLobbyFPv(void *arg0);
void render__17TObjParticleLobbyFv(void);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_key_base__5TOKeyFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

s32 TObjParticleLobby__sub_80369654(void) {
    s32 r = TLobby__sub_80351DFC();
    switch (r) {
    case 12:
        return 0;
    case 13:
        return 8;
    }
    return r;
}

void TObjParticleLobby__sub_80369698(void) {  }
void render__17TObjParticleLobbyFv(void) {  }

extern void *tl_05;

void *create__17TObjParticleLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TObjParticleLobby__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

void TObjParticleLobby__sub_80369A60(void) {  }
void TObjParticleLobby__sub_80369A64(void) {  }

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
typedef char RecoveredGlobal_80369ADC___vt__17TObjParticleLobby_size[sizeof(RecoveredGlobal_80369ADC___vt__17TObjParticleLobby) == 0x38 ? 1 : -1];
u8 *TObjParticleLobby__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_map_object_base((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80369ADC___vt__17TObjParticleLobby *)&__vt__17TObjParticleLobby).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D44B8;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0xD4) = TBoss4Type2__sub_800874F4((void *) (arg0 + 0x38), (int) (1));
    TObjParticleLobby__sub_803697E8((void *) (arg0));
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) lbl_805E0344;
    return arg0;
}

}
