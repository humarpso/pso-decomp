#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803640C8_lbl_8058D4C0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8036414C_lbl_8058D4C0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80364198_lbl_8058D4C0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_803640F8_lbl_8058D4C0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

typedef s32 M2C_UNK;
struct Rec_80364028 { f32 a; s32 b; s32 c; s32 d; };

extern "C" {
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
extern RecoveredGlobal_803640C8_lbl_8058D4C0 lbl_8058D4C0;
extern void *lbl_805D6FB8;
void TObjPlayer__sub_803640C8(void);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
extern RecoveredGlobal_803640C8_lbl_8058D4C0 lbl_8058D4C0;
extern void *lbl_805D6FB8;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void TObjPlayer__sub_8036414C(void);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
extern RecoveredGlobal_803640C8_lbl_8058D4C0 lbl_8058D4C0;
extern void *lbl_805D6FB8;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void TObjPlayer__sub_80364198(void);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
extern RecoveredGlobal_803640C8_lbl_8058D4C0 lbl_8058D4C0;
extern void *lbl_805D6FB8;
void TObjPlayer__sub_803640F8(M2C_UNK *arg0);
void TObjPlayer__sub_803640F8(M2C_UNK *arg0);
void set_chunk_material_override_pair(s32, s32);
M2C_UNK set_chunk_blend(M2C_UNK);
extern Rec_80364028 lbl_80479FF8;
extern void *lbl_805D6FB8;
extern s32 some_id_805c6f74;
extern const f32 lbl_805E0288;
void TObjPlayer__sub_80364028(f32 farg0);
}

extern "C" {

void spawn_cleanup_helper__10TObjPlayerFPv(void *arg0);
void warn_if_gauge_low__10TObjPlayerFv(void);
M2C_UNK set_chunk_blend(M2C_UNK);
void *__nw__7TObjectFUl(int);
void *init_vtable_804F2A10__10TObjPlayerFPv(void *, void *);

void spawn_cleanup_helper__10TObjPlayerFPv(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        init_vtable_804F2A10__10TObjPlayerFPv(o, arg0);
    }
}

extern void *lbl_805D6FB8;
extern const f32 lbl_805E0288;

void warn_if_gauge_low__10TObjPlayerFv(void) {
    if (M2C_FIELD(lbl_805D6FB8, f32 *, 0x2C) < lbl_805E0288) {
        set_chunk_blend(0x2500);
        TObjPlayer__sub_803640C8();
    }
}
typedef char RecoveredGlobal_803640C8_lbl_8058D4C0_size[sizeof(RecoveredGlobal_803640C8_lbl_8058D4C0) == 0x10 ? 1 : -1];

void TObjPlayer__sub_80364028(f32 farg0) {
    if (farg0 < lbl_805E0288) {
        some_id_805c6f74 |= 0x24;
        set_chunk_material_override_pair(-1, 0x800);
        set_chunk_blend(0x2500);
        Rec_80364028 r = lbl_80479FF8;
        r.a = farg0 - lbl_805E0288;
        TObjPlayer__sub_803640F8((M2C_UNK *)&r);
    }
    *(f32 *)((u8 *)lbl_805D6FB8 + 0x2C) = farg0;
}

void TObjPlayer__sub_803640C8(void) {
    copy_vec4__13TRaderMapCoreFPvPv((void *) (&lbl_8058D4C0.value), (void *) ((*(s32 *)&lbl_805D6FB8) + 0x1C));
}
typedef char RecoveredGlobal_8036414C_lbl_8058D4C0_size[sizeof(RecoveredGlobal_8036414C_lbl_8058D4C0) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_803640F8_lbl_8058D4C0_size[sizeof(RecoveredGlobal_803640F8_lbl_8058D4C0) == 0x10 ? 1 : -1];
void TObjPlayer__sub_803640F8(M2C_UNK *arg0) {
    copy_vec4__13TRaderMapCoreFPvPv((void *) ((*(s32 *)&lbl_805D6FB8) + 0x1C), (void *) (&(*(RecoveredGlobal_803640F8_lbl_8058D4C0 *)&lbl_8058D4C0).value));
    if (arg0 != NULL) {
        copy_vec4__13TRaderMapCoreFPvPv((void *) (&(*(RecoveredGlobal_803640F8_lbl_8058D4C0 *)&lbl_8058D4C0).value), (void *) (arg0));
    }
}

void TObjPlayer__sub_8036414C(void) {
    some_id_805c6f74 = M2C_FIELD((*(u8 * *)&lbl_805D6FB8), s32 *, 0);
    copy_vec4__13TRaderMapCoreFPvPv((void *) (&(*(RecoveredGlobal_8036414C_lbl_8058D4C0 *)&lbl_8058D4C0).value), (void *) ((*(u8 * *)&lbl_805D6FB8) + 0xC));
    lbl_805D7784 = M2C_FIELD((*(u8 * *)&lbl_805D6FB8), s32 *, 4);
    lbl_805D7780 = M2C_FIELD((*(u8 * *)&lbl_805D6FB8), s32 *, 8);
}
typedef char RecoveredGlobal_80364198_lbl_8058D4C0_size[sizeof(RecoveredGlobal_80364198_lbl_8058D4C0) == 0x10 ? 1 : -1];
void TObjPlayer__sub_80364198(void) {
    M2C_FIELD((*(u8 * *)&lbl_805D6FB8), s32 *, 0) = (s32) some_id_805c6f74;
    copy_vec4__13TRaderMapCoreFPvPv((void *) ((*(u8 * *)&lbl_805D6FB8) + 0xC), (void *) (&(*(RecoveredGlobal_80364198_lbl_8058D4C0 *)&lbl_8058D4C0).value));
    M2C_FIELD((*(u8 * *)&lbl_805D6FB8), s32 *, 4) = (s32) lbl_805D7784;
    M2C_FIELD((*(u8 * *)&lbl_805D6FB8), s32 *, 8) = (s32) lbl_805D7780;
}

}
