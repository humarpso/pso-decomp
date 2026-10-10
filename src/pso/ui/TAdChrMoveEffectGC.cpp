#pragma push

#include "types.h"
typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct S_803491F8 { u32 w[8]; };

struct V2_8034923C { f32 x, y; };

struct E_8034923C {
    V2_8034923C start;
    V2_8034923C end;
    u8 col0[4];
    u8 col1[4];
    u8 pad18[8];
    V2_8034923C cur;
    u8 curcol[4];
    u8 f2C;
    u8 pad2D[3];
    u32 flags;
    s32 cnt;
};

struct O_8034923C { u8 pad0[0x1C]; s32 n; s32 active; E_8034923C e[16]; };

extern "C" {
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void draw_tri_fan_2d__14TObjCMHairMenuFPviif(void *, int, int, f32);
void copy4__18TAdChrMoveEffectGCFPvPv(void *, void *);
extern const f32 lbl_805DFCE8;
extern const f32 lbl_805DFCEC;
void fn_80348E34(u8 *arg0);
void copy_effect_data__18TAdChrMoveEffectGCFPvPv(S_803491F8 *arg0, S_803491F8 *arg1);
void reset_effect_entries__18TAdChrMoveEffectGCFPv(void *arg0);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void copy4__18TAdChrMoveEffectGCFPvPv(void *, void *);
void run_task__18TAdChrMoveEffectGCFv(O_8034923C *self);
}

extern "C" {

#pragma push
#pragma fp_contract on
typedef struct {
    f32 *pos;
    u8 *col;
    s32 a;
    s32 n;
} Desc_80348E34;
void fn_80348E34(u8 *arg0) {
    f32 pos[8];
    Desc_80348E34 desc;
    u8 col[16];
    u8 *e;
    s32 i;
    u8 *src;
    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        for (i = 0; i < 16; i++) {
            e = arg0 + i * 0x38;
            if (M2C_FIELD(e, u32 *, 0x54) & 1) {
                desc.pos = pos;
                desc.col = col;
                desc.a = 0;
                desc.n = 4;
                copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(pos, e + 0x44);
                src = e + 0x4C;
                copy4__18TAdChrMoveEffectGCFPvPv(desc.col, src);
                desc.col[3] = M2C_FIELD(e, u8 *, 0x50);
                desc.pos[2] = M2C_FIELD(e, f32 *, 0x44);
                desc.pos[3] = M2C_FIELD(e, f32 *, 0x48) + M2C_FIELD(e, f32 *, 0x40);
                copy4__18TAdChrMoveEffectGCFPvPv(desc.col + 4, src);
                desc.col[7] = M2C_FIELD(e, u8 *, 0x50);
                desc.pos[4] = M2C_FIELD(e, f32 *, 0x44) + M2C_FIELD(e, f32 *, 0x3C);
                desc.pos[5] = M2C_FIELD(e, f32 *, 0x48) + M2C_FIELD(e, f32 *, 0x40);
                copy4__18TAdChrMoveEffectGCFPvPv(desc.col + 8, src);
                desc.col[11] = M2C_FIELD(e, u8 *, 0x50);
                desc.pos[6] = M2C_FIELD(e, f32 *, 0x44) + M2C_FIELD(e, f32 *, 0x3C);
                desc.pos[7] = M2C_FIELD(e, f32 *, 0x48);
                copy4__18TAdChrMoveEffectGCFPvPv(desc.col + 12, src);
                desc.col[15] = M2C_FIELD(e, u8 *, 0x50);
                draw_tri_fan_2d__14TObjCMHairMenuFPviif(&desc, 4, 7, lbl_805DFCEC * (f32)i + lbl_805DFCE8);
            }
        }
    }
}
#pragma pop

}

#pragma pop

#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_803490AC { u32 flags; u8 pad[0x34]; };

struct O_803490AC { u8 pad[0x20]; s32 n; u8 pad2[0x30]; E_803490AC e[16]; };

struct E_80349194 { u8 b[0x38]; };

struct W_80349194 { u8 pad0[0x20]; s32 f20; E_80349194 e[16]; };

struct E_80349038 { u8 pad0[0x1C]; s32 f1C; u8 pad20[4]; u8 v24[8]; u8 pad2C[8]; u8 v34[4]; u8 pad38[0xC]; u8 v44[8]; u8 v4C[4]; s32 f50; s32 f54; s32 f58; };

struct V2_803490D8 { u8 b[8]; };

struct C4_803490D8 { u8 b[4]; };

struct P_803490D8 { V2_803490D8 a; V2_803490D8 b; C4_803490D8 c; C4_803490D8 d; V2_803490D8 e; };

extern "C" {
void clear_entries__18TAdChrMoveEffectGCFPv(O_803490AC *self);
void TAdChrMoveEffectGC__sub_80349194(W_80349194 *arg0, void *arg1);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void copy4__18TAdChrMoveEffectGCFPvPv(void *, void *);
void reset_effect_entries__18TAdChrMoveEffectGCFPv(void *arg0);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void copy4__18TAdChrMoveEffectGCFPvPv(void *, void *);
void TAdChrMoveEffectGC__sub_80349194(W_80349194 *arg0, void *arg1);
extern V2_803490D8 chr_move_effect_pos_table[];
extern C4_803490D8 lbl_804786E8[];
extern u8 lbl_804786F0[];
void setup_move_effect_params__18TAdChrMoveEffectGCFPvii(void *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *TAdChrMoveEffectGC__ct(void *arg0);
void *__dt__18TAdChrMoveEffectGCFv(void *arg0, s16 arg1);
void render__18TAdChrMoveEffectGCFv(void* p);
void __ct__7TObjectFP7TObject(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
int set_cached_blend_factor(void*, void*);

int get_state_flag__9TMainTaskFv(void*);

void render__18TAdChrMoveEffectGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { set_cached_blend_factor((void*)0, (void*)8); set_cached_blend_factor((void*)1, (void*)10); ((int (*)(void*))fn_80348E34)(p); set_cached_blend_factor((void*)0, (void*)8); set_cached_blend_factor((void*)1, (void*)6); } }

extern M2C_UNK __vt__18TAdChrMoveEffectGC[];
extern u32 lbl_805D6E78;

void reset_effect_entries__18TAdChrMoveEffectGCFPv(void *arg0) {
    E_80349038 *e;
    s32 i;
    ((E_80349038 *)arg0)->f1C = 0;
    for (i = 0; i < 16; i++) {
        e = (E_80349038 *)((u8 *)arg0 + i * 0x38);
        copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(e->v44, e->v24);
        copy4__18TAdChrMoveEffectGCFPvPv(e->v4C, e->v34);
        *(u8 *)&e->f50 = e->v34[3];
        e->f54 = 0;
        e->f58 = 0;
    }
}

void clear_entries__18TAdChrMoveEffectGCFPv(O_803490AC *self) {
    s32 i;
    self->n = 0;
    for (i = 0; i < 16; i++) {
        self->e[i].flags &= ~1;
    }
}

struct W_80349194;
void setup_move_effect_params__18TAdChrMoveEffectGCFPvii(void *arg0, s32 arg1, s32 arg2) {
    P_803490D8 p;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&p.a, &chr_move_effect_pos_table[arg1]);
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&p.b, &chr_move_effect_pos_table[arg2]);
    copy4__18TAdChrMoveEffectGCFPvPv(&p.c, arg1 < 3 ? &lbl_804786E8[0] : &lbl_804786E8[1]);
    copy4__18TAdChrMoveEffectGCFPvPv(&p.d, arg2 < 3 ? &lbl_804786E8[0] : &lbl_804786E8[1]);
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&p.e, lbl_804786F0);
    TAdChrMoveEffectGC__sub_80349194((W_80349194 *)arg0, &p);
}

void TAdChrMoveEffectGC__sub_80349194(W_80349194 *arg0, void *arg1) {
    s32 i;
    for (i = 0; i < 16; i++) {
        copy_effect_data__18TAdChrMoveEffectGCFPvPv((S_803491F8 *)(&arg0->e[i]), (S_803491F8 *)(arg1));
    }
    reset_effect_entries__18TAdChrMoveEffectGCFPv((void *)(arg0));
    arg0->f20 = 1;
}

#pragma push
#pragma optimization_level 1
void copy_effect_data__18TAdChrMoveEffectGCFPvPv(S_803491F8 *arg0, S_803491F8 *arg1) {
    u32 b, a;
    a = arg1->w[0]; b = arg1->w[1]; arg0->w[0] = a; arg0->w[1] = b;
    a = arg1->w[2]; b = arg1->w[3]; arg0->w[2] = a; arg0->w[3] = b;
    arg0->w[4] = arg1->w[4];
    arg0->w[5] = arg1->w[5];
    a = arg1->w[6]; b = arg1->w[7]; arg0->w[6] = a; arg0->w[7] = b;
}
#pragma pop

#pragma push
#pragma fp_contract on
void run_task__18TAdChrMoveEffectGCFv(O_8034923C *self) {
    s32 i;
    f32 dx;
    f32 dy;
    f32 vx;
    f32 vy;
    s32 t;
    f32 c0;
    f32 c1;
    f32 c2;
    f32 c3;
    if (self->active == 0) {
        return;
    }
    if (++self->n < 0x11) {
        self->e[self->n].flags |= 1;
    } else if (self->n > 0x28) {
        reset_effect_entries__18TAdChrMoveEffectGCFPv(self);
    }
    for (i = 0; i < 16; i++) {
        if (self->e[i].flags & 1) {
            if (self->e[i].cnt < 0x1E) {
                dx = (self->e[i].end.x - self->e[i].start.x) / 14.4f;
                dy = (self->e[i].end.y - self->e[i].start.y) / 14.4f;
                vx = -dx / 30.0f * (f32)self->e[i].cnt + dx;
                vy = -dy / 30.0f * (f32)self->e[i].cnt + dy;
                if (self->e[i].cnt == 0) {
                    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&self->e[i].cur, &self->e[i].start);
                    copy4__18TAdChrMoveEffectGCFPvPv(self->e[i].curcol, self->e[i].col0);
                } else {
                    self->e[i].cur.x += vx;
                    self->e[i].cur.y += vy;
                    c3 = (f32)(self->e[i].col1[3] - self->e[i].col0[3]) / 30.0f;
                    c0 = (f32)(self->e[i].col1[0] - self->e[i].col0[0]) / 30.0f;
                    c1 = (f32)(self->e[i].col1[1] - self->e[i].col0[1]) / 30.0f;
                    c2 = (f32)(self->e[i].col1[2] - self->e[i].col0[2]) / 30.0f;
                    self->e[i].curcol[3] += (s32)(0.5f + c3);
                    self->e[i].curcol[0] += (s32)(0.5f + c0);
                    self->e[i].curcol[1] += (s32)(0.5f + c1);
                    self->e[i].curcol[2] += (s32)(0.5f + c2);
                }
                self->e[i].f2C = self->e[i].curcol[3] / 5;
                self->e[i].cnt++;
            } else {
                copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&self->e[i].cur, &self->e[i].end);
                copy4__18TAdChrMoveEffectGCFPvPv(self->e[i].curcol, self->e[i].col1);
                t = self->e[i].col1[3] / 10;
                self->e[i].f2C = (self->e[i].f2C > t) ? self->e[i].f2C - t : 0;
            }
        }
    }
}
#pragma pop

void *__dt__18TAdChrMoveEffectGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TAdChrMoveEffectGC;
        if ((u32) lbl_805D6E78 != 0U) {
            lbl_805D6E78 = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__18TAdChrMoveEffectGC[];
extern void *lbl_805D42F0;

void *TAdChrMoveEffectGC__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TAdChrMoveEffectGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D42F0;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    return arg0;
}

}

#pragma pop
