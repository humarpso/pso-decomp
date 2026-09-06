#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

extern "C" {
void render__19TWindowMessageYesNoFv(void);
void *TParticleCtrl__sub_8008673C(int);
void *TParticleCtrl__sub_8008B060(void *, void *, void *, void *, void *);
void *TParticleCtrl__sub_8008B060(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void render__19TWindowMessageYesNoFv(void);
extern M2C_UNK __vt__19TWindowMessageYesNo[];
extern void *lbl_805D3DF8;
void * TParticleCtrl__sub_80089FEC(void *arg0, void *arg1, void *arg2, void *arg3);
void *TParticleCtrl__sub_80089B50(void *, void *, void *, void *);
void *TParticleCtrl__sub_8008673C(int);
void * TParticleCtrl__sub_800887EC(void *arg0, void *arg1, void *arg2);
void *TParticleCtrl__sub_8008C21C(void *, void *, void *, void *);
void *TParticleCtrl__sub_8008673C(int);
void * TParticleCtrl__sub_8008B4E0(void *arg0, void *arg1, void *arg2);
extern const f32 TParticleCtrl__data_805D9528;
void TParticleCtrl__sub_8008A04C(u8 *arg0);
int queue_destruction__7TObjectFv(void *);
f32 TCameraCtrl__sub_803D8D00(void *);
extern const f32 TParticleCtrl__data_805D9558;
extern const f32 TParticleCtrl__data_805D955C;
void TParticleCtrl__sub_8008B538(u8 *arg0);
}

extern "C" {

void *TParticleCtrl__sub_8008968C(void *arg0, s16 arg1);
void *TParticleCtrl__sub_8008ABCC(void *arg0, s16 arg1);
void *TParticleCtrl__sub_8008BF00(void *arg0, s16 arg1);
void destroy_keyboard_objects(void * _w0);
void free_all__13TParticleCtrlFv(void);
s32 get_particle_by_index__13TParticleCtrlFi(s32 arg0);
void init_particle_buffer__13TParticleCtrlFv(void);
int TKeyBoardControl__sub_8000F91C(int);
int TKeyBoardControl__sub_8000F9CC(int);
void TLobby__sub_8001FE7C(void*, int);
s32 TLobby__sub_800F9DF4(s32, s32);
int TLobby__sub_80227248(void);
int TLobby__sub_8022743C(void);
M2C_UNK TLobby__sub_803DA16C(void*);
void TParticleCtrl__sub_8008655C(void *, int);
s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(s32);
void free_from_heap__13TParticleCtrlFPv(void *);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern s32 lbl_805D4EFC;
extern u32 TParticleCtrl__data_805D4F00;
extern u32 TParticleCtrl__data_805D4F04;

void free_all__13TParticleCtrlFv(void) {
    free__11TOBoss4RockFUi(lbl_805D4EFC);
    lbl_805D4EFC = 0;
    if ((u32) TParticleCtrl__data_805D4F00 != 0U) {
        TLobby__sub_8001FE7C((void*)TParticleCtrl__data_805D4F00, 1);
        TParticleCtrl__data_805D4F00 = 0U;
    }
    if ((u32) TParticleCtrl__data_805D4F04 != 0U) {
        TLobby__sub_803DA16C((void*)TParticleCtrl__data_805D4F04);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TParticleCtrl__data_805D4F04);
        TParticleCtrl__data_805D4F04 = 0U;
    }
}

extern s32 lbl_805D2944;
extern u32 lbl_805D2948;
extern s32 lbl_805D4EF8;

void init_particle_buffer__13TParticleCtrlFv(void) {
    s32 temp_r3;

    temp_r3 = TLobby__sub_800F9DF4(lbl_805D2944, (lbl_805D4EF8 = alloc_buffer__11TOBoss4RockFPv(0x13000)));
    lbl_805D2948 = 0;
    if (temp_r3 >= 0) {
        lbl_805D2948 = (u32) temp_r3 / 152U;
    }
}

extern s32 lbl_805D4EF8;
extern s32 lbl_805D4EFC;

s32 get_particle_by_index__13TParticleCtrlFi(s32 arg0) {
    if (arg0 >= 0x200) {
        return lbl_805D4EFC + ((arg0 - 0x200) * 0x98);
    }
    return lbl_805D4EF8 + (arg0 * 0x98);
}

extern M2C_UNK TParticleCtrl__data_8048E778[];

void * TParticleCtrl__sub_800887EC(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = TParticleCtrl__sub_8008673C(0xd0);
    if (o != NULL) {
        o = TParticleCtrl__sub_80089B50(o, arg0, arg1, arg2);
    }
    return o;
}

void *TParticleCtrl__sub_8008968C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = TParticleCtrl__data_8048E778;
        TParticleCtrl__sub_8008655C(arg0, 0);
        if (arg1 > 0) {
            free_from_heap__13TParticleCtrlFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK TParticleCtrl__data_8048E790[];

void * TParticleCtrl__sub_80089FEC(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = TParticleCtrl__sub_8008673C(0xe0);
    if (o != NULL) {
        o = TParticleCtrl__sub_8008B060(o, arg0, arg1, arg2, arg3);
    }
    return o;
}

void TParticleCtrl__sub_8008A04C(u8 *arg0) {
    if (M2C_FIELD(arg0, f32 *, 0x58) >= TParticleCtrl__data_805D9528) {
        queue_destruction__7TObjectFv((void *)(arg0));
    }
}

void *TParticleCtrl__sub_8008ABCC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = TParticleCtrl__data_8048E790;
        TParticleCtrl__sub_8008655C(arg0, 0);
        if (arg1 > 0) {
            free_from_heap__13TParticleCtrlFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK TParticleCtrl__data_8048E7A8[];

void * TParticleCtrl__sub_8008B4E0(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = TParticleCtrl__sub_8008673C(0xc4);
    if (o != NULL) {
        o = TParticleCtrl__sub_8008C21C(o, arg0, arg1, arg2);
    }
    return o;
}

void TParticleCtrl__sub_8008B538(u8 *arg0) {
    if ((M2C_FIELD(arg0, f32 *, 0x58) >= TParticleCtrl__data_805D9558) || (TParticleCtrl__data_805D955C == TCameraCtrl__sub_803D8D00((void *) (arg0 + 0x3C)))) {
        queue_destruction__7TObjectFv((void *)(arg0));
    }
}

void *TParticleCtrl__sub_8008BF00(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = TParticleCtrl__data_8048E7A8;
        TParticleCtrl__sub_8008655C(arg0, 0);
        if (arg1 > 0) {
            free_from_heap__13TParticleCtrlFPv(arg0);
        }
    }
    return arg0;
}

void destroy_keyboard_objects(void * _w0) { queue_destruction__7TObjectFv((void *)(_w0)); TKeyBoardControl__sub_8000F91C(2); TKeyBoardControl__sub_8000F9CC(18); TLobby__sub_8022743C(); TLobby__sub_80227248(); }

}
