#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80184314_80184210 { char pad[0x18]; };
struct VObj_80184314_80184210 : Base_80184314_80184210 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual s32 m8(f32, f32); };

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_801842B4_lbl_804B5D6C {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
s32 TPhotonMagicSquare__sub_801A2640(void *, void *);
extern M2C_UNK lbl_804B5D6C[];
extern s32 lbl_805D3274;
u8 *TObjCity_Season_XmasWreath__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TObjCity_Season_XmasTree__sub_801843E0(M2C_UNK arg0);
void *TObjCity_Season_XmasWreath__create(void *arg0);
void *dt__26TObjCity_Season_XmasWreathFPvs(void *arg0, s16 arg1);
void render_debug__26TObjCity_Season_XmasWreathFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjCity_Season_EasterEgg__sub_80184A08(M2C_UNK, M2C_UNK, f32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK draw_chunk_object(s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
u8 *get_anim_frame__25TObjCity_Season_EasterEggFPv();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern void *tl_05;

void *TObjCity_Season_XmasWreath__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x90);
    if (o != NULL) {
        o = TObjCity_Season_XmasWreath__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK lbl_804B5D6C[];

void *dt__26TObjCity_Season_XmasWreathFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5D6C;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8050DC50[];
extern const f32 lbl_805DBC40;
extern const f32 lbl_805DBC44;

typedef char RecoveredGlobal_801842B4_lbl_804B5D6C_size[sizeof(RecoveredGlobal_801842B4_lbl_804B5D6C) == 0x34 ? 1 : -1];
u8 *TObjCity_Season_XmasWreath__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801842B4_lbl_804B5D6C *)&lbl_804B5D6C).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3274;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    return arg0;
}

void render_debug__26TObjCity_Season_XmasWreathFPv(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = get_anim_frame__25TObjCity_Season_EasterEggFPv();
    if ((temp_r3 != NULL) && (((VObj_80184314_80184210 *)arg0)->m8(lbl_805DBC44, lbl_805DBC40) != 0)) {
        set_global_param__8TObjFishFi(M2C_FIELD(lbl_8050DC50, s32 *, 8));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x42C), s32 *, 0x78), M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x430), s32 *, 0xC), M2C_FIELD(arg0, f32 *, 0xB0));
        TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x42C), s32 *, 0x68), M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x430), s32 *, 4), M2C_FIELD(arg0, f32 *, 0xB0));
        draw_chunk_object(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x42C), s32 *, 0x88));
        draw_chunk_object(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x42C), s32 *, 0x98));
        pop_matrix();
    }
}

extern const f32 lbl_805DBC70;

void TObjCity_Season_XmasTree__sub_801843E0(M2C_UNK arg0) {
    TObjCity_Season_EasterEgg__sub_80184A08(arg0, 1, lbl_805DBC70);
}

}
