#include "types.h"
#include "pso/system/ChunkMaterialState.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma scheduling off
#pragma scheduling off

struct FloatColor { f32 a, r, g, b; };

struct ByteColor { u8 r, g, b, a; };

typedef M2C_UNK (*RecoveredCallback_92513335c3ed)(void *);
typedef void (*RecoveredCallback_2be3cacebb2e)(void);
struct RecoveredGlobal_803DCBD8_lbl_8058D380 {
    M2C_UNK value;
    u8 remaining[0xEC];
};

struct MotionCtx_803DC894 {
    u8 pad[0xC];
    void (*fn)(void);
};

struct Mtx_803DC994 { f32 m[3][4]; };

struct Hdr_803E34B0 { u8 *dst; u8 *src; s32 count; };

extern "C" {
M2C_UNK TObjPlayer__sub_803E20B0();
M2C_UNK setup_render__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803E2224();
M2C_UNK TObjPlayer__sub_803E224C();
void TLobby__sub_803E2EE4(s32 arg0);
void TObjPlayer__sub_803E4354(void *);
void TObjPlayer__sub_803E44D4(void *);
void TObjPlayer__sub_803E4684(void *arg0);
void GXSetNumTexGens(u8);
M2C_UNK GXSetTevOp(int, int);
M2C_UNK GXSetTevOrder(int, int, int, int);
M2C_UNK GXSetNumTevStages(int);
void TObjPlayer__sub_803E39A0(void);
void GXSetNumTexGens(u8);
M2C_UNK GXSetTevOp(int, int);
M2C_UNK GXSetTevOrder(int, int, int, int);
M2C_UNK GXSetNumTevStages(int);
extern s32 some_id_805c6f74;
extern u8 lbl_805D77D8;
extern u8 lbl_805D77D9;
void TObjPlayer__sub_803E39EC(void);
M2C_UNK GXSetZMode(int, int, int);
M2C_UNK GXSetZCompLoc(int);
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_effect_active__10TObjPlayerFv();
M2C_UNK TParticleCtrl__sub_803E2010();
extern s32 lbl_805D7788;
extern M2C_UNK (*lbl_805D77DC)();
void TObjPlayer__sub_803E4468(void);
M2C_UNK TObjPlayer__sub_803E1D90(int, int, int, int);
extern s32 lbl_805D77EC;
void TObjPlayer__sub_803E3914(s32 arg0, s32 arg1);
void GXSetChanMatColor(s32, ByteColor);
void TObjPlayer__sub_803D7FE0(const FloatColor*,ByteColor*);
void TObjPlayer__sub_803D8008(const ByteColor*,FloatColor*);
extern FloatColor lbl_8058D4C0;
extern const ByteColor lbl_805E1090;
extern s32 some_id_805c6f74,lbl_805D7788;
extern u32 lbl_805D77F0;
extern u32 lbl_805D77D4;
void TObjPlayer__sub_803E38FC(u32 x);
void GXSetAlphaCompare(int comp0, int ref0, int op, int comp1, int ref1);
s32 TObjPlayer__sub_803E3B38(int ref);
extern s32 lbl_805D7800;
extern s32 lbl_805D77FC;
extern s32 lbl_805D77F8;
void TObjPlayer__sub_803E492C(s32 a, s32 b);
void TObjPlayer__sub_803E4354(void *);
void TObjPlayer__sub_803E44D4(void *);
void TObjPlayer__sub_803E2F78(void *, void (*)(void *));
void TObjPlayer__sub_803E4468(void);
void TObjFish__sub_803E46BC(void *arg0);
extern s32 lbl_805D7774;
void TObjPlayer__sub_803E2F28(struct Mtx_803DC994 *src);
s32 __cvt_fp2unsigned(f32);
void TObjPlayer__sub_803D9884(u8 *, u8 *);
void TObjPlayer__sub_803D9990(u8 *, u8 *);
void TObjPlayer__sub_803E34B0(Hdr_803E34B0 *arg0);
}

extern "C" {

void func_803e11e8__FUl(s32 arg0);
void func_803e11f0__Fv(void);

extern s32 lbl_805D77F8;

void TLobby__sub_803E2EE4(s32 arg0) {
    TObjPlayer__sub_803E20B0();
    if (arg0 != 0) {
        TObjPlayer__sub_803E2224();
    } else {
        setup_render__10TObjPlayerFv();
    }
    TObjPlayer__sub_803E224C();
}

#pragma push
#pragma peephole off
#pragma scheduling off
typedef char RecoveredGlobal_803DCBD8_lbl_8058D380_size[sizeof(RecoveredGlobal_803DCBD8_lbl_8058D380) == 0xF0 ? 1 : -1];
void TObjPlayer__sub_803E2F28(struct Mtx_803DC994 *src) {
    struct Mtx_803DC994 *dst = (struct Mtx_803DC994 *)lbl_805D7774;
    dst->m[0][0] = src->m[0][0];
    dst->m[0][1] = src->m[0][1];
    dst->m[0][2] = src->m[0][2];
    dst->m[1][0] = src->m[1][0];
    dst->m[1][1] = src->m[1][1];
    dst->m[1][2] = src->m[1][2];
    dst->m[2][0] = src->m[2][0];
    dst->m[2][1] = src->m[2][1];
    dst->m[2][2] = src->m[2][2];
}
#pragma pop

void TObjPlayer__sub_803E34B0(Hdr_803E34B0 *arg0) {
    s32 n = arg0->count;
    u8 *src = arg0->src;
    u8 *dst = arg0->dst;
    while (n-- > 0) {
        TObjPlayer__sub_803D9884(src, dst);
        TObjPlayer__sub_803D9990(src + 0xC, dst + 0xC);
        f32 t = *(f32 *)(src + 0x18);
        src += 0x1C;
        *(s32 *)(dst + 0x18) = __cvt_fp2unsigned(t);
        dst += 0x20;
    }
}

#pragma push
#pragma scheduling off
#pragma peephole off
void submit_chunk_material_color(u8 type, s16* data) {
    FloatColor add;
    ByteColor color;
    ByteColor fallback=lbl_805E1090;
    ByteColor converted;
    ByteColor convertedAdd;
    if ((u32)((type-0x10)&1)!=0U) {
        s16 gb=data[0],ar=data[1];
        color.a=(ar>>8)&255;
        color.r=(u8)ar;
        color.g=(gb>>8)&255;
        color.b=(u8)gb;
        if ((u32)(some_id_805c6f74&0x10)!=0U) {
            TObjPlayer__sub_803D7FE0(&lbl_8058D4C0,&converted);
            GXSetChanMatColor(4,converted);
        } else if ((u32)(some_id_805c6f74&0x20)!=0U) {
            TObjPlayer__sub_803D8008(&color,&add);
            add.a+=lbl_8058D4C0.a;
            add.r+=lbl_8058D4C0.r;
            add.g+=lbl_8058D4C0.g;
            add.b+=lbl_8058D4C0.b;
            TObjPlayer__sub_803D7FE0(&add,&convertedAdd);
            GXSetChanMatColor(4,convertedAdd);
        } else GXSetChanMatColor(4,color);
    }
    if ((u32)(lbl_805D7788&2)!=0U) GXSetChanMatColor(4,fallback);
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
void TObjPlayer__sub_803E38FC(u32 x) {
    lbl_805D77F0 = x & 0x3F00;
    lbl_805D77D4 |= 8;
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma scheduling off
#pragma peephole off
void TObjPlayer__sub_803E3914(s32 arg0, s32 arg1) {
    s32 var_r31;
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    var_r5 = 1;
    var_r6 = 1;
    if ((u32) (arg0 & 0x2000) != 0) {
        var_r6 = 0;
    } else if ((u32) (arg0 & 0x8000) != 0) {
        var_r6 = 2;
    }
    if ((u32) (arg0 & 0x1000) != 0) {
        var_r5 = 0;
    } else if ((u32) (arg0 & 0x4000) != 0) {
        var_r5 = 2;
    }
    var_r31 = arg1 & 0x1FFF;
    var_r3 = var_r31;
    var_r4 = var_r6;
    var_r6 = 0;
    TObjPlayer__sub_803E1D90((int) (var_r3), (int) (var_r4), (int) (var_r5), (int) (0));
    lbl_805D77EC = var_r31;
}
#pragma pop

void TObjPlayer__sub_803E39A0(void) {
    GXSetNumTevStages((int) (1));
    GXSetNumTexGens(0U);
    GXSetTevOp((int) (0), (int) (4));
    GXSetTevOrder((int) (0), (int) (0xFF), (int) (0xFF), (int) (4));
}

#pragma push
#pragma peephole off
void TObjPlayer__sub_803E39EC(void) {
    if ((u32) (some_id_805c6f74 & 0x80000) != 0) {
        GXSetNumTevStages((int)((void *) ((u8) (lbl_805D77D8 + 1))));
        GXSetNumTexGens((u8)((void *) ((u8) (lbl_805D77D9 + 1))));
    } else {
        GXSetNumTevStages((int)((void *) (1U)));
        GXSetNumTexGens((u8)((void *) (1U)));
    }
    GXSetTevOp((int) (0), (int) (0));
    GXSetTevOrder((int) (0), (int) (0), (int) (0), (int) (4));
}
#pragma pop

#pragma push
#pragma scheduling off
s32 TObjPlayer__sub_803E3B38(int ref) {
    GXSetAlphaCompare(4, ref, 0, 7, 0);
}
#pragma pop

#pragma push
#pragma peephole off
void TObjPlayer__sub_803E4468(void) {
    if ((u32) (lbl_805D7788 & 2) != 0) {
        set_effect_active__10TObjPlayerFv();
        TParticleCtrl__sub_803E2010();
    }
    TObjPlayer__sub_803D9B78();
    GXSetZCompLoc((int) (1));
    GXSetZMode((int) (1), (int) (1), (int) (1));
    TObjPlayer__sub_803E3B38((int)((int) (0)));
    if (((M2C_UNK (*)()) lbl_805D77DC) != NULL) {
        lbl_805D77DC();
    }
}
#pragma pop

void TObjPlayer__sub_803E4684(void *arg0) {
    TObjPlayer__sub_803E4354(arg0);
    TObjPlayer__sub_803E44D4(arg0);
    TObjPlayer__sub_803E4468();
}

#pragma push
#pragma scheduling off
void TObjFish__sub_803E46BC(void *arg0) {
    TObjPlayer__sub_803E4354(arg0);
    TObjPlayer__sub_803E2F78(arg0, TObjPlayer__sub_803E44D4);
    TObjPlayer__sub_803E4468();
}
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer__sub_803E492C(s32 a, s32 b) {
    lbl_805D7800 = a;
    lbl_805D77FC = b;
    lbl_805D77F8 = 0;
}
#pragma pop

void func_803e11e8__FUl(s32 arg0) {
    lbl_805D77F8 = arg0;
}

extern s32 lbl_805D77F8;

void func_803e11f0__Fv(void) {
    lbl_805D77F8 = 0;
}

}
