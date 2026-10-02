#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8025AF90_lbl_804CFA28 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8025AF90_lbl_804CFA28_size[sizeof(RecoveredGlobal_8025AF90_lbl_804CFA28) == 0x18 ? 1 : -1];

struct Win_8025AD5C { u16 flags; u8 pad2[6]; f32 f8; f32 fC; u8 pad10[8]; f32 f18; f32 f1C; s8 *text; s32 i24; };

struct Ref_8025AD5C { u8 pad0[0x10]; f32 f10; f32 f14; f32 f18; u8 pad1c[0x30 - 0x1C]; s32 i30; u8 pad34[4]; f32 f38; u8 pad3c[8]; f32 f44; };

struct Pt_8025AD5C { f32 x; f32 y; };

struct Win_8025B0D0 {
    u16 flags; u8 pad2[6];
    f32 f8; f32 fC; f32 f10; f32 f14; f32 f18;
    f32 f1C; f32 f20; f32 f24; f32 f28;
    s32 i2C; s32 *p30; s32 i34;
};

struct Ref_8025B0D0 { u8 pad0[0x10]; f32 f10; f32 f14; f32 f18; u8 pad1c[0x30 - 0x1C]; s32 i30; u8 pad34[4]; f32 f38; };

struct Quad_8025B0D0 { f32 v[8]; };

extern "C" {
void TWindowSubSymbolChatPartsSet__sub_8025B050(u8 *arg0);
void TWindowSubSymbolChatPartsSet__sub_8025B064(u8 *arg0);
extern const f32 lbl_805DCFE0;
void TWindowHelpItem__sub_8025B08C(u8 *arg0, f32 farg0, f32 farg1);
f32 TWindowSubStatusDisp__sub_801A5228(int);
s32 reset_entry__20TWindowSubStatusDispFPv(void *, void *);
extern M2C_UNK lbl_804CFA28[];
extern const f32 lbl_805DCFA8;
extern const f32 lbl_805DCFAC;
extern const f32 lbl_805DCFC4;
u8 *construct_text_entry(u8 *arg0, u8 *arg1, s32 arg2);
extern const f32 lbl_805DCFA8;
void advance_text_entry_reveal(u8 *arg0);
s32 TWindowSubStatusDisp__sub_8024FBB0(void *, void *, s32, f32);
s32 TWindowSubStatusDisp__sub_8024FD8C(void *, void *, s32, s32, f32);
void set_text_draw_params(void *, u8, s32, f32, f32);
extern const f32 lbl_805DCFB0;
extern const f32 lbl_805DCFC8;
extern const f32 lbl_805DCFCC;
extern const f32 lbl_805DCFD0;
extern const f32 lbl_805DCFD4;
extern const f32 lbl_805DCFD8;
void TWindowSubStatusDisp__sub_8025AD5C(Win_8025AD5C *arg0, Ref_8025AD5C *arg1);
void reset_transform_state__10TObjPlayerFv(void);
void init_xyz_limits__10TObjPlayerFv(void);
void TWindowKeyBoardSoft__sub_8024E6D8(void *, void *);
s32 try_open__19TWindowKeyBoardSoftFii(void *, void *);
void set_global_param__8TObjFishFi(s32);
void begin_screen_draw(s32);
void get_player__20TWindowSubStatusDispFv(void);
void draw_textured_quad_at_depth(void *, f32);
void TWindowSubStatusDisp__sub_803DF160(s32, s32);
extern const f32 lbl_805DCFE4;
extern const f32 lbl_805DCFE8;
extern const f32 lbl_805DCFEC;
extern const f32 lbl_805DCFF0;
extern const f32 lbl_805DCFF4;
extern const f32 lbl_805DCFF8;
extern const f32 lbl_805DCFFC;
extern const f32 lbl_805DD000;
void TWindowSubStatusDisp__sub_8025B0D0(Win_8025B0D0 *arg0, Ref_8025B0D0 *arg1);
}

extern "C" {

void *TWindowSubStatusDisp__sub_8025AF0C(void *arg0, s16 arg1);
void TWindowSubStatusDisp__sub_8025B2D8(void);
void *TWindowSubStatusDisp__sub_8025B2DC(void *arg0, s16 arg1);
void TWindowSubSymbolChatPartsSet__sub_8025B0C4(void* p, f32 a, f32 b);
void fn_8025B078(void* p, f32 a, f32 b, f32 c, f32 d);
M2C_UNK __dl__FPv(void *);
M2C_UNK deleting_destructor__20TWindowSubStatusDispFPvs(void *, M2C_UNK);
M2C_UNK destroy__20TWindowSubStatusDispFPvs(void *, s16);
M2C_UNK free__11TOBoss4RockFUi(u32);

extern M2C_UNK lbl_804CFA28[];

#pragma push
#pragma fp_contract on
void TWindowSubStatusDisp__sub_8025AD5C(Win_8025AD5C *arg0, Ref_8025AD5C *arg1) {
    f32 t;
    f32 a;
    f32 len;
    Pt_8025AD5C pt;
    f32 scale;
    f32 alpha;
    s32 r;
    if (arg0->text != NULL && *arg0->text != 0) {
    pt.x = arg1->f10 + arg0->f8;
    pt.y = arg1->f14 + arg0->fC;
    scale = lbl_805DCFC8 / (lbl_805DCFCC * arg0->f18 + arg1->f38);
    if (arg0->flags & 0x40) {
        alpha = lbl_805DCFB0;
    } else {
        alpha = arg1->f44;
    }
    a = arg0->fC / lbl_805DCFD0;
    t = a + arg0->f8 / arg1->f18;
    t *= lbl_805DCFD4;
    len = lbl_805DCFD8 * ((f32)arg1->i30 - t);
    if (len > arg0->f1C) {
        len = arg0->f1C;
    }
    set_text_draw_params(arg1, !(arg0->flags & 0x100), arg0->flags & 0x80, scale, alpha);
    if (arg0->flags & 4) {
        r = TWindowSubStatusDisp__sub_8024FBB0(&pt, arg0->text, arg0->i24, len);
    } else {
        r = TWindowSubStatusDisp__sub_8024FD8C(&pt, arg0->text, arg0->i24, (arg0->flags >> 9) & 1, len);
    }
    if (r != 0) {
        arg0->flags |= 0x10;
    } else {
        arg0->flags &= ~0x10;
    }
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
void advance_text_entry_reveal(u8 *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0) & 8)) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + M2C_FIELD(arg0, f32 *, 0x28));
        if (M2C_FIELD(arg0, f32 *, 0x1C) > lbl_805DCFA8) {
            M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805DCFA8;
        }
    }
}
#pragma pop

void *TWindowSubStatusDisp__sub_8025AF0C(void *arg0, s16 arg1) {
    u16 temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CFA28;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            temp_r3 = M2C_FIELD(arg0, u16 *, 0);
            if (temp_r3 & 0x20) {
                M2C_FIELD(arg0, u16 *, 0) = (u16) (temp_r3 & 0xFFFFFFDF);
                free__11TOBoss4RockFUi(M2C_FIELD(arg0, u32 *, 0x20));
            }
        }
        deleting_destructor__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

u8 *construct_text_entry(u8 *arg0, u8 *arg1, s32 arg2) {
    reset_entry__20TWindowSubStatusDispFPv((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 4) = &(*(RecoveredGlobal_8025AF90_lbl_804CFA28 *)&lbl_804CFA28).value;
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, u16 *, 0) = (u16) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805DCFAC;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x28) = TWindowSubStatusDisp__sub_801A5228((int) ((s32) M2C_FIELD(arg0, s16 *, 2)));
    if (M2C_FIELD(arg0, u16 *, 0) & 4) {
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) * lbl_805DCFC4);
    }
    if (M2C_FIELD(arg0, f32 *, 0x28) <= lbl_805DCFAC) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805DCFA8;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    return arg0;
}

void TWindowSubSymbolChatPartsSet__sub_8025B050(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
    M2C_FIELD(arg0, f32 *, 0x28) = temp_f1;
}

void TWindowSubSymbolChatPartsSet__sub_8025B064(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x1C);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x24) = temp_f1;
}

void fn_8025B078(void* p, f32 a, f32 b, f32 c, f32 d) { *(f32*)((char*)p + 0x1c) = a; *(f32*)((char*)p + 0x20) = b; *(f32*)((char*)p + 0x24) = c; *(f32*)((char*)p + 0x28) = d; }

void TWindowHelpItem__sub_8025B08C(u8 *arg0, f32 farg0, f32 farg1) {
    f32 x, y;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (farg0 * lbl_805DCFE0);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (farg1 * lbl_805DCFE0);
    x = farg0 + M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (x * lbl_805DCFE0);
    y = farg1 + M2C_FIELD(arg0, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (y * lbl_805DCFE0);
}

void TWindowSubSymbolChatPartsSet__sub_8025B0C4(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x10) = a; *(f32*)((char*)p + 0x14) = b; }

#pragma push
#pragma fp_contract on
void TWindowSubStatusDisp__sub_8025B0D0(Win_8025B0D0 *arg0, Ref_8025B0D0 *arg1) {
    Quad_8025B0D0 q;
    f32 x;
    f32 y;
    f32 scale;
    f32 len;
    f32 a;
    f32 t;
    f32 lo;
    f32 hi;
    f32 w;
    x = arg1->f10 + arg0->f8;
    y = arg1->f14 + arg0->fC;
    scale = lbl_805DCFE4 / (lbl_805DCFE8 * arg0->f18 + arg1->f38);
    a = arg0->fC / lbl_805DCFEC;
    t = a + arg0->f8 / arg1->f18;
    t *= lbl_805DCFF0;
    len = lbl_805DCFF4 * ((f32)arg1->i30 - t);
    len /= lbl_805DCFF8 * arg0->f10;
    if (len <= lbl_805DCFFC) {
        return;
    }
    if (len > lbl_805DD000) {
        len = lbl_805DD000;
    }
    if (arg0->flags & 8) {
        init_xyz_limits__10TObjPlayerFv();
    }
    if (arg0->flags & 0xC) {
        begin_screen_draw(1);
    } else {
        begin_screen_draw(0);
    }
    set_global_param__8TObjFishFi(*arg0->p30);
    TWindowSubStatusDisp__sub_803DF160(arg0->i34, arg0->i2C);
    w = arg0->f10;
    lo = lbl_805DD000 - len;
    hi = lbl_805DD000 + len;
    q.v[0] = w * lo + x;
    q.v[1] = arg0->f14 * lo + y;
    q.v[2] = w * hi + x;
    q.v[3] = arg0->f14 * hi + y;
    q.v[4] = arg0->f1C;
    q.v[5] = arg0->f20;
    q.v[6] = arg0->f24;
    q.v[7] = arg0->f28;
    if (arg0->flags & 0x10) {
        TWindowKeyBoardSoft__sub_8024E6D8(arg1, &q);
        draw_textured_quad_at_depth(&q, scale);
    } else if (try_open__19TWindowKeyBoardSoftFii(arg1, &q) != 0) {
        draw_textured_quad_at_depth(&q, scale);
    }
    get_player__20TWindowSubStatusDispFv();
    reset_transform_state__10TObjPlayerFv();
}
#pragma pop

void TWindowSubStatusDisp__sub_8025B2D8(void) {  }

extern M2C_UNK lbl_804CFA40[];

void *TWindowSubStatusDisp__sub_8025B2DC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CFA40;
        destroy__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
