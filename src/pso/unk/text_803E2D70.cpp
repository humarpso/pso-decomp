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
struct ChunkNode_803E2F78 {
    u32 flags;
    s32 obj;
    f32 pos[3];
    s32 ang[3];
    f32 scl[3];
    ChunkNode_803E2F78 *child;
    ChunkNode_803E2F78 *sibling;
    f32 f34;
};

struct Hdr_803E34B0 { u8 *dst; u8 *src; s32 count; };

typedef s32 M2C_UNK;
typedef struct Vtx_803E2D70 { f32 x, y, w, u, v; u32 color; } Vtx_803E2D70;

typedef union WGPipe_803E2D70 {
    u8 u8;
    u16 u16;
    u32 u32;
    f32 f32;
} WGPipe_803E2D70;

typedef struct Vtx_803E36C4 { f32 x, y, z, nx, ny, nz; u32 pad[2]; } Vtx_803E36C4;

typedef union WGPipe_803E36C4 {
    u8 u8;
    u16 u16;
    u32 u32;
    f32 f32;
} WGPipe_803E36C4;

typedef struct Vtx_803E46FC { f32 x, y, z, nx, ny, nz; u32 pad[2]; } Vtx_803E46FC;

typedef union WGPipe_803E46FC {
    u8 u8;
    u16 u16;
    u32 u32;
    f32 f32;
} WGPipe_803E46FC;

typedef struct Vtx_803E47E0 { f32 x, y, z, nx, ny, nz; u32 pad[2]; } Vtx_803E47E0;

typedef union WGPipe_803E47E0 {
    u8 u8;
    u16 u16;
    u32 u32;
    f32 f32;
} WGPipe_803E47E0;

struct Sub_803E3B6C { u8 pad[0xC]; u8 *q; };

struct Rec_803E3B6C { u8 pad[8]; Sub_803E3B6C *p; };

struct Holder_803E3B6C { Rec_803E3B6C *recs; };

extern "C" {
M2C_UNK TObjPlayer__sub_803E20B0();
M2C_UNK setup_render__10TObjPlayerFv();
M2C_UNK setup_blended_textured_draw();
M2C_UNK load_context_texture_obj();
void TLobby__sub_803E2EE4(s32 arg0);
void TObjPlayer__sub_803E4354(void *);
void TObjPlayer__sub_803E44D4(void *);
void draw_chunk_model(void *arg0);
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
void setup_chunk_tev_stages(void);
M2C_UNK GXSetZMode(int, int, int);
M2C_UNK GXSetZCompLoc(int);
M2C_UNK pop_matrix();
M2C_UNK set_effect_active__10TObjPlayerFv();
M2C_UNK apply_scene_fog();
extern s32 lbl_805D7788;
extern M2C_UNK (*lbl_805D77DC)();
void TObjPlayer__sub_803E4468(void);
M2C_UNK load_list_texture(int, int, int, int);
extern s32 lbl_805D77EC;
void apply_chunk_texture_command(s32 arg0, s32 arg1);
void GXSetChanMatColor(s32, ByteColor);
void convert_color_f32_to_u8(const FloatColor*,ByteColor*);
void convert_color_u8_to_f32(const ByteColor*,FloatColor*);
extern FloatColor lbl_8058D4C0;
extern const ByteColor lbl_805E1090;
extern s32 some_id_805c6f74,lbl_805D7788;
extern u32 lbl_805D77F0;
extern u32 lbl_805D77D4;
void set_chunk_blend(u32 x);
void GXSetAlphaCompare(int comp0, int ref0, int op, int comp1, int ref1);
s32 set_chunk_alpha_compare_ref(int ref);
extern s32 lbl_805D7800;
extern s32 lbl_805D77FC;
extern s32 lbl_805D77F8;
void TObjPlayer__sub_803E492C(s32 a, s32 b);
void TObjPlayer__sub_803E4354(void *);
void TObjPlayer__sub_803E44D4(void *);
void transform_chunk_object_tree(void *, void (*)(void *));
void TObjPlayer__sub_803E4468(void);
void draw_chunk_object(void *arg0);
extern s32 lbl_805D7774;
void TObjPlayer__sub_803E2F28(struct Mtx_803DC994 *src);
s32 __cvt_fp2unsigned(f32);
void get_current_matrix(void *m);
void TObjPlayer__sub_803D993C(f32 *arg0, f32 farg0);
void rotate_matrix_by_node_angles(void *, int);
void push_matrix(void);
void scale_current_matrix(void *);
void post_translate_matrix(void *);
extern u8 lbl_8058DBD0[];
void transform_point_by_current_matrix(u8 *, u8 *);
void rotate_vector_by_current_matrix(u8 *, u8 *);
void TObjPlayer__sub_803E34B0(Hdr_803E34B0 *arg0);
void GXBegin(int, int, u16);
extern const f32 lbl_805E1088;
void draw_projected_textured_strip(Vtx_803E2D70 *v, s32 n);
void Dolphin_GXSetVtxDesc(int, int);
void GXClearVtxDesc(void);
void GXBegin(int, int, u16);
void TObjPlayer__sub_803E36C4(s16 *list, Vtx_803E36C4 *verts, u32 info);
void GXSetChanCtrl(s32 chan, u8 enable, s32 ambSrc, s32 matSrc, u32 lightMask, s32 diffFn, s32 attnFn);
extern u32 lbl_805D7794;
extern u32 lbl_805D77E0;
void set_strip_lighting_chan_ctrl(u32 flags);
void Dolphin_GXSetVtxDesc(int, int);
void GXClearVtxDesc(void);
void GXBegin(int, int, u16);
void TObjPlayer__sub_803E46FC(s16 *list, Vtx_803E46FC *verts, u32 info);
void Dolphin_GXSetVtxDesc(int, int);
void GXClearVtxDesc(void);
void GXBegin(int, int, u16);
void clear_move_state_bits__10TObjPlayerFv(void);
extern s32 lbl_805D77F8;
void TObjPlayer__sub_803E47E0(s16 *list, Vtx_803E47E0 *verts, u32 info);
M2C_UNK GXSetBlendMode(int, int, int, int);
M2C_UNK GXSetZMode(int, int, int);
M2C_UNK GXSetZCompLoc(int);
s32 set_chunk_alpha_compare_ref(int ref);
void clear_move_state_bits__10TObjPlayerFv(void);
extern FloatColor lbl_8058D4C0;
extern s32 lbl_805D46D0;
extern u8 *lbl_805D774C;
extern s32 lbl_805D7788;
extern s32 some_id_805c6f74;
extern s32 lbl_805D77EC;
extern u32 lbl_805D77F0;
extern s32 lbl_805D77F8;
extern u32 lbl_805E1094;
extern const u32 lbl_805E1098;
extern const f32 lbl_805E109C;
extern const f32 lbl_805E10A0;
void set_chunk_blend_depth_mode(s32 arg0, s32 arg1);
}

extern "C" {

void func_803e11e8__FUl(s32 arg0);
void func_803e11f0__Fv(void);

extern s32 lbl_805D77F8;

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
static inline void GXPosition3f32_803E2D70(f32 x, f32 y, f32 z) {
    (*(volatile WGPipe_803E2D70 *)0xCC008000).f32 = x;
    (*(volatile WGPipe_803E2D70 *)0xCC008000).f32 = y;
    (*(volatile WGPipe_803E2D70 *)0xCC008000).f32 = z;
}
static inline void GXColor1u32_803E2D70(u32 c) {
    (*(volatile WGPipe_803E2D70 *)0xCC008000).u32 = c;
}
static inline void GXTexCoord2f32_803E2D70(f32 s, f32 t) {
    (*(volatile WGPipe_803E2D70 *)0xCC008000).f32 = s;
    (*(volatile WGPipe_803E2D70 *)0xCC008000).f32 = t;
}
void draw_projected_textured_strip(Vtx_803E2D70 *v, s32 n) {
    f32 inv;
    u32 c;
    GXBegin(0x98, 4, n);
    for (; n > 0; n--) {
        inv = lbl_805E1088 / v->w;
        GXPosition3f32_803E2D70(v->x * inv, v->y * inv, inv);
        c = v->color;
        GXColor1u32_803E2D70(((c & 0xFFFFFF) << 8) | ((c & 0xFF000000) >> 24));
        GXTexCoord2f32_803E2D70(v->u, v->v);
        v++;
    }
}
#pragma pop

void TLobby__sub_803E2EE4(s32 arg0) {
    TObjPlayer__sub_803E20B0();
    if (arg0 != 0) {
        setup_blended_textured_draw();
    } else {
        setup_render__10TObjPlayerFv();
    }
    load_context_texture_obj();
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

#define node ((ChunkNode_803E2F78 *)arg0)
void transform_chunk_object_tree(void *arg0, void (*cb)(void *)) {
    u32 flags;
    s32 r;

    do {
        flags = node->flags;
        r = 0;
        if (flags & 0x800) {
            get_current_matrix(lbl_8058DBD0);
        }
        if ((flags & 7) == 7) {
            if (!(flags & 8)) {
                r = ((s32 (*)(s32))cb)(node->obj);
            }
            if (!(flags & 0x10) && (!(flags & 0x100) || r == 0)) {
                transform_chunk_object_tree(node->child, cb);
            }
        } else {
            push_matrix();
            if (!(flags & 1)) {
                post_translate_matrix(node->pos);
            }
            if (!(flags & 2)) {
                if (flags & 0x1000) {
                    TObjPlayer__sub_803E2F28((struct Mtx_803DC994 *)lbl_8058DBD0);
                } else if (flags & 0x400) {
                    ((void (*)(f32, f32 *))TObjPlayer__sub_803D993C)(node->f34, (f32 *)node->ang);
                } else {
                    rotate_matrix_by_node_angles(node->ang, flags & 0x20);
                }
            }
            if (!(flags & 4)) {
                scale_current_matrix(node->scl);
            }
            if (!(flags & 8)) {
                r = ((s32 (*)(s32))cb)(node->obj);
            }
            if (!(flags & 0x10) && (!(flags & 0x100) || r == 0)) {
                transform_chunk_object_tree(node->child, cb);
            }
            pop_matrix();
        }
        arg0 = node->sibling;
    } while (arg0 != NULL);
}
#undef node

void TObjPlayer__sub_803E34B0(Hdr_803E34B0 *arg0) {
    s32 n = arg0->count;
    u8 *src = arg0->src;
    u8 *dst = arg0->dst;
    while (n-- > 0) {
        transform_point_by_current_matrix(src, dst);
        rotate_vector_by_current_matrix(src + 0xC, dst + 0xC);
        f32 t = *(f32 *)(src + 0x18);
        src += 0x1C;
        *(s32 *)(dst + 0x18) = __cvt_fp2unsigned(t);
        dst += 0x20;
    }
}

#pragma push
#pragma use_lmw_stmw off
#pragma dont_inline off
#pragma inline_depth(4)
static inline void GXPosition3f32_803E36C4(f32 x, f32 y, f32 z) {
    (*(volatile WGPipe_803E36C4 *)0xCC008000).f32 = x;
    (*(volatile WGPipe_803E36C4 *)0xCC008000).f32 = y;
    (*(volatile WGPipe_803E36C4 *)0xCC008000).f32 = z;
}
static inline void GXNormal3f32_803E36C4(f32 x, f32 y, f32 z) {
    (*(volatile WGPipe_803E36C4 *)0xCC008000).f32 = x;
    (*(volatile WGPipe_803E36C4 *)0xCC008000).f32 = y;
    (*(volatile WGPipe_803E36C4 *)0xCC008000).f32 = z;
}
void TObjPlayer__sub_803E36C4(s16 *list, Vtx_803E36C4 *verts, u32 info) {
    s32 skip;
    s32 n;
    u32 count;
    Vtx_803E36C4 *v;
    skip = (info >> 14) & 3;
    count = info & 0x3FFF;
    GXClearVtxDesc();
    Dolphin_GXSetVtxDesc(9, 1);
    Dolphin_GXSetVtxDesc(0xA, 1);
    do {
        n = *list++;
        if (n < 0) {
            n = -n;
        }
        GXBegin(0x98, 0, n);
        do {
            v = &verts[*list++];
            GXPosition3f32_803E36C4(v->x, v->y, v->z);
            GXNormal3f32_803E36C4(v->nx, v->ny, v->nz);
            list += skip;
        } while (--n != 0);
    } while (--count != 0);
}
#pragma pop

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
            convert_color_f32_to_u8(&lbl_8058D4C0,&converted);
            GXSetChanMatColor(4,converted);
        } else if ((u32)(some_id_805c6f74&0x20)!=0U) {
            convert_color_u8_to_f32(&color,&add);
            add.a+=lbl_8058D4C0.a;
            add.r+=lbl_8058D4C0.r;
            add.g+=lbl_8058D4C0.g;
            add.b+=lbl_8058D4C0.b;
            convert_color_f32_to_u8(&add,&convertedAdd);
            GXSetChanMatColor(4,convertedAdd);
        } else GXSetChanMatColor(4,color);
    }
    if ((u32)(lbl_805D7788&2)!=0U) GXSetChanMatColor(4,fallback);
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
void set_chunk_blend(u32 x) {
    lbl_805D77F0 = x & 0x3F00;
    lbl_805D77D4 |= 8;
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma scheduling off
#pragma peephole off
void apply_chunk_texture_command(s32 arg0, s32 arg1) {
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
    load_list_texture((int) (var_r3), (int) (var_r4), (int) (var_r5), (int) (0));
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
void setup_chunk_tev_stages(void) {
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

void set_strip_lighting_chan_ctrl(u32 flags) {
    u8 enable;
    if (lbl_805D77E0 != 0) {
        enable = 0;
    } else if (flags & 1) {
        enable = 0;
    } else {
        enable = 1;
    }
    if (lbl_805D77E0 != 0) {
        GXSetChanCtrl(0, enable, 0, 1, lbl_805D7794, 2, 2);
        GXSetChanCtrl(2, 0, 0, 1, lbl_805D7794, 2, 2);
    } else {
        GXSetChanCtrl(0, enable, 0, 0, lbl_805D7794, 2, 2);
        GXSetChanCtrl(2, 0, 0, 0, lbl_805D7794, 2, 2);
    }
}

#pragma push
#pragma scheduling off
s32 set_chunk_alpha_compare_ref(int ref) {
    GXSetAlphaCompare(4, ref, 0, 7, 0);
}
#pragma pop

void set_chunk_blend_depth_mode(s32 arg0, s32 arg1) {
    s32 var_r31;
    s32 temp_r30;
    s32 temp_r29;
    u32 var_r28;
    u8 *temp_r4;
    u32 id;
    u8 *temp_r3;
    u32 var_r6;
    if ((u32) (arg0 & 8) != 0) {
        var_r31 = 1;
    } else {
        var_r31 = 0;
    }
    temp_r30 = (u32) (lbl_805D77F0 & 0x3800) >> 0xBU;
    temp_r29 = (u32) (lbl_805D77F0 & 0x700) >> 8U;
    if ((u32) lbl_805D77F8 != 0) {
        clear_move_state_bits__10TObjPlayerFv();
    }
    if (arg1 == 0) {
        GXSetBlendMode((int) (var_r31), (int) (temp_r30), (int) (temp_r29), (int) (0));
        GXSetZCompLoc((int) (0));
        GXSetZMode((int) (1), (int) (3), (int) (0));
    } else if (var_r31 != 0) {
        var_r6 = 0;
        var_r28 = 1U;
        temp_r4 = (u8 *)((*(Holder_803E3B6C **)(lbl_805D774C + 0x20))->recs[lbl_805D77EC].p->q);
        id = some_id_805c6f74;
        if (((u32) (id & 0x10) != 0) && (lbl_805E109C != lbl_8058D4C0.a)) {
            var_r28 = 0U;
        }
        if (((u32) (id & 0x20) != 0) && (lbl_805E10A0 != lbl_8058D4C0.a)) {
            var_r28 = 0U;
        }
        if ((u32) M2C_FIELD(temp_r4, u32 *, 4) == 0xEU) {
            if ((u32) (id & 0x400000) != 0) {
                if ((u32) (M2C_FIELD(temp_r4, s32 *, 0x1C) & 0x40000000) != 0) {
                    var_r6 |= lbl_805E1094;
                }
            } else {
                var_r6 |= lbl_805E1094;
            }
        }
        if ((u32) (id & 1) != 0) {
            var_r6 |= lbl_805E1098;
        }
        if ((var_r28 != 0U) && (var_r6 != 0) && (temp_r30 == 4) && (temp_r29 == 5)) {
            if ((u32) lbl_805D77F8 != 0) {
                lbl_805D77F8 |= 0x200;
            }
            GXSetBlendMode((int) (var_r31), (int) (temp_r30), (int) (temp_r29), (int) (0));
            if ((u32) (some_id_805c6f74 & 0x200000) != 0) {
                GXSetZCompLoc((int) (0));
                GXSetZMode((int) (1), (int) (3), (int) (1));
                set_chunk_alpha_compare_ref(0);
            } else {
                GXSetZCompLoc((int) (0));
                GXSetZMode((int) (1), (int) (3), (int) (1));
                set_chunk_alpha_compare_ref((u8) lbl_805D46D0);
            }
        } else {
            if ((u32) lbl_805D77F8 != 0) {
                lbl_805D77F8 |= 0x200;
            }
            if (((u32) (id & 0x01000000) != 0) && ((u32) (lbl_805D7788 & 2) == 0)) {
                GXSetBlendMode((int) (var_r31), (int) (temp_r30), (int) (temp_r29), (int) (0));
                GXSetZCompLoc((int) (0));
                GXSetZMode((int) (1), (int) (3), (int) (1));
                set_chunk_alpha_compare_ref((u8) lbl_805D46D0);
            } else {
                GXSetBlendMode((int) (var_r31), (int) (temp_r30), (int) (temp_r29), (int) (0));
                GXSetZCompLoc((int) (0));
                if (var_r28 != 0U) {
                    GXSetZMode((int) (1), (int) (3), (int) (0));
                } else {
                    GXSetZMode((int) (1), (int) (3), (int) (1));
                }
                set_chunk_alpha_compare_ref(0);
            }
        }
    } else {
        if ((u32) lbl_805D77F8 != 0) {
            lbl_805D77F8 |= 0x400;
        }
        temp_r3 = (u8 *)((*(Holder_803E3B6C **)(lbl_805D774C + 0x20))->recs[lbl_805D77EC].p->q);
        if (((u32) M2C_FIELD(temp_r3, u32 *, 4) == 0xEU) && ((u32) (M2C_FIELD(temp_r3, s32 *, 0x1C) & 0x40000000) != 0)) {
            set_chunk_alpha_compare_ref(0x1F);
            GXSetBlendMode((int) (0), (int) (temp_r30), (int) (temp_r29), (int) (0));
            GXSetZCompLoc((int) (0));
            GXSetZMode((int) (1), (int) (3), (int) (1));
        } else {
            GXSetBlendMode((int) (0), (int) (temp_r30), (int) (temp_r29), (int) (0));
            GXSetZCompLoc((int) (1));
            GXSetZMode((int) (1), (int) (3), (int) (1));
        }
    }
    if ((u32) (some_id_805c6f74 & 0x400) != 0) {
        GXSetZMode((int) (1), (int) (3), (int) (0));
    }
}

#pragma push
#pragma peephole off
void TObjPlayer__sub_803E4468(void) {
    if ((u32) (lbl_805D7788 & 2) != 0) {
        set_effect_active__10TObjPlayerFv();
        apply_scene_fog();
    }
    pop_matrix();
    GXSetZCompLoc((int) (1));
    GXSetZMode((int) (1), (int) (1), (int) (1));
    set_chunk_alpha_compare_ref((int)((int) (0)));
    if (((M2C_UNK (*)()) lbl_805D77DC) != NULL) {
        lbl_805D77DC();
    }
}
#pragma pop

void draw_chunk_model(void *arg0) {
    TObjPlayer__sub_803E4354(arg0);
    TObjPlayer__sub_803E44D4(arg0);
    TObjPlayer__sub_803E4468();
}

#pragma push
#pragma scheduling off
void draw_chunk_object(void *arg0) {
    TObjPlayer__sub_803E4354(arg0);
    transform_chunk_object_tree(arg0, TObjPlayer__sub_803E44D4);
    TObjPlayer__sub_803E4468();
}
#pragma pop

#pragma push
#pragma use_lmw_stmw off
#pragma dont_inline off
#pragma inline_depth(4)
static inline void GXPosition3f32_803E46FC(f32 x, f32 y, f32 z) {
    (*(volatile WGPipe_803E46FC *)0xCC008000).f32 = x;
    (*(volatile WGPipe_803E46FC *)0xCC008000).f32 = y;
    (*(volatile WGPipe_803E46FC *)0xCC008000).f32 = z;
}
static inline void GXNormal3f32_803E46FC(f32 x, f32 y, f32 z) {
    (*(volatile WGPipe_803E46FC *)0xCC008000).f32 = x;
    (*(volatile WGPipe_803E46FC *)0xCC008000).f32 = y;
    (*(volatile WGPipe_803E46FC *)0xCC008000).f32 = z;
}
void TObjPlayer__sub_803E46FC(s16 *list, Vtx_803E46FC *verts, u32 info) {
    s32 skip;
    s32 n;
    u32 count;
    Vtx_803E46FC *v;
    skip = (info >> 14) & 3;
    count = info & 0x3FFF;
    GXClearVtxDesc();
    Dolphin_GXSetVtxDesc(9, 1);
    Dolphin_GXSetVtxDesc(0xA, 1);
    do {
        n = *list++;
        if (n < 0) {
            n = -n;
        }
        GXBegin(0x98, 0, n);
        do {
            v = &verts[*list++];
            GXPosition3f32_803E46FC(v->x, v->y, v->z);
            GXNormal3f32_803E46FC(v->nx, v->ny, v->nz);
            list += skip;
        } while (--n != 0);
    } while (--count != 0);
}
#pragma pop

#pragma push
#pragma use_lmw_stmw off
#pragma dont_inline off
#pragma inline_depth(4)
#pragma optimization_level 4
static inline void GXPosition3f32_803E47E0(f32 x, f32 y, f32 z) {
    (*(volatile WGPipe_803E47E0 *)0xCC008000).f32 = x;
    (*(volatile WGPipe_803E47E0 *)0xCC008000).f32 = y;
    (*(volatile WGPipe_803E47E0 *)0xCC008000).f32 = z;
}
static inline void GXNormal3f32_803E47E0(f32 x, f32 y, f32 z) {
    (*(volatile WGPipe_803E47E0 *)0xCC008000).f32 = x;
    (*(volatile WGPipe_803E47E0 *)0xCC008000).f32 = y;
    (*(volatile WGPipe_803E47E0 *)0xCC008000).f32 = z;
}
void TObjPlayer__sub_803E47E0(s16 *list, Vtx_803E47E0 *verts, u32 info) {
    s32 skip;
    s32 n;
    s32 draw;
    u32 count;
    Vtx_803E47E0 *v;
    draw = 1;
    skip = (info >> 14) & 3;
    count = info & 0x3FFF;
    if ((u32)lbl_805D77F8 != 0) {
        if ((u32)lbl_805D77F8 & 1) {
            if ((u32)lbl_805D77F8 & 0x200) {
                clear_move_state_bits__10TObjPlayerFv();
                draw = 0;
            }
        } else if ((u32)lbl_805D77F8 & 2) {
            if ((u32)lbl_805D77F8 & 0x400) {
                clear_move_state_bits__10TObjPlayerFv();
                draw = 0;
            }
        }
    }
    clear_move_state_bits__10TObjPlayerFv();
    GXClearVtxDesc();
    Dolphin_GXSetVtxDesc(9, 1);
    Dolphin_GXSetVtxDesc(0xA, 1);
    do {
        n = *list++;
        if (n < 0) {
            n = -n;
        }
        if (draw) {
            GXBegin(0x98, 0, n);
        }
        do {
            v = &verts[*list++];
            if (draw) {
                GXPosition3f32_803E47E0(v[2].x, v[2].y, v[2].z);
                GXNormal3f32_803E47E0(v[2].nx, v[2].ny, v[2].nz);
            }
            list += skip;
        } while (--n != 0);
    } while (--count != 0);
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
