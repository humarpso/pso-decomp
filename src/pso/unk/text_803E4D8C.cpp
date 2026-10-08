#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803E5458_lbl_8058DC00 {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct Ctx_803E53BC { s32 f0; s32 f4; s32 f8; s32 fc; s32 f10; s32 f14; s32 f18; s32 f1c; };

#include <stddef.h>
struct Stack_803D6DDC {
    u8 * sp8;
    u8 * spC;
    f32 sp10;
};

struct Stack_803D6E8C {
    u8 * sp8;
    u8 * spC;
    f32 sp10;
};

struct RecoveredGlobal_803D662C_lbl_8058D4D0 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_803D77C0_lbl_8047E3C8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_803D77C0_lbl_804FA500 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_803D77C0_lbl_804FA50C {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_803D77C0_lbl_804FA51C {
    s32 value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_803D78A8_lbl_8058CAB8 {
    M2C_UNK value;
    u8 remaining[0x7C];
};

struct St_803D7784 { s32 a0, a4, a8, ac, b0, b4, b8, x1c; };

struct Vec_803D7CA4 { f32 x, y, z; };

struct Angles_803D7CA4 { s32 x, y, z; };

struct Quat_803D7CA4 { f32 x, y, z, w; };

struct Node_803E4E20 {
    u32 flags;
    s32 *obj;
    u8 pad[0x2C - 0x8];
    Node_803E4E20 *child;
    Node_803E4E20 *next;
};

struct Ctx_803E4E20 {
    u8 pad[0xC];
    void (*draw)(s32 *);
};

typedef s32 M2C_UNK;
struct Key_803E500C { u32 frame; f32 *data; };

extern "C" {
extern u8 *lbl_805D7818;
void TObjPlayer__sub_803E53F8(u8 *arg0, f32 farg0);
extern RecoveredGlobal_803E5458_lbl_8058DC00 lbl_8058DC00;
extern u8 *lbl_805D7818;
void TObjPlayer__sub_803E5458(s32 arg0);
extern u8 *lbl_805D7818;
void TObjPlayer__sub_803E53BC(void);
extern u8 *lbl_805D7818;
void TObjPlayer__sub_803E5378(s32 n);
void bind_motion_context(s32);
void draw_motion_node_tree__10TObjPlayerFPv(s32);
void TObjPlayer__sub_803E53F8(u8 *arg0, f32 farg0);
void TObjPlayer__sub_803E5458(s32 arg0);
extern u8 *lbl_805D4698;
void draw_motion_bound__10TObjPlayerFiiPvfi(s32 arg0, s32 arg1, u8 *arg2, f32 farg0, s32 arg3);
void compose_motion_node_matrix(Node_803E4E20 *);
void push_matrix(void);
void pop_matrix(void);
void TObjPlayer__sub_803E53BC(void);
void update_render_state__10TObjPlayerFv(s32 *, s32 *);
extern u8 *lbl_805D4698;
void draw_motion_node_list__10TObjPlayerFi(s32 arg0);
void find_motion_key_interval(void *, s32, s32 count, f32 t, void *, void *, void *);
extern u32 *lbl_805D7778;
extern const f32 lbl_805E10B8;
void TObjPlayer__sub_803E500C(void *motA, s32 keyA, void *motB, s32 keyB, f32 t, u32 *src, u32 **out);
}

extern "C" {

#pragma push
#pragma scheduling off
#pragma opt_common_subs off
#pragma peephole off
typedef char RecoveredGlobal_803D662C_lbl_8058D4D0_size[sizeof(RecoveredGlobal_803D662C_lbl_8058D4D0) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_803D77C0_lbl_8047E3C8_size[sizeof(RecoveredGlobal_803D77C0_lbl_8047E3C8) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_803D77C0_lbl_804FA500_size[sizeof(RecoveredGlobal_803D77C0_lbl_804FA500) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_803D77C0_lbl_804FA50C_size[sizeof(RecoveredGlobal_803D77C0_lbl_804FA50C) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_803D77C0_lbl_804FA51C_size[sizeof(RecoveredGlobal_803D77C0_lbl_804FA51C) == 0x24 ? 1 : -1];

void draw_motion_bound__10TObjPlayerFiiPvfi(s32 arg0, s32 arg1, u8 *arg2, f32 farg0, s32 arg3) {
    u8 *p = lbl_805D4698;
    bind_motion_context(arg1);
    *(s32 *)(p + 0xC) = arg3;
    if (arg2 == NULL) {
        draw_motion_node_tree__10TObjPlayerFPv(arg0);
        return;
    }
    TObjPlayer__sub_803E5458(0);
    TObjPlayer__sub_803E53F8(arg2, farg0);
    draw_motion_node_list__10TObjPlayerFi((s32)(arg0));
}

void draw_motion_node_list__10TObjPlayerFi(s32 arg0) {
    s32 tmp;
    Ctx_803E4E20 *ctx;
    s32 *obj;
    s32 save;
    Node_803E4E20 *n;
    n = (Node_803E4E20 *)arg0;
    ctx = (Ctx_803E4E20 *)lbl_805D4698;
    do {
        push_matrix();
        compose_motion_node_matrix(n);
        if (!(n->flags & 0x80)) {
            obj = n->obj;
            if (obj != NULL && !(n->flags & 8)) {
                update_render_state__10TObjPlayerFv(obj, &tmp);
                save = *obj;
                *obj = tmp;
                ctx->draw(obj);
                *obj = save;
            } else {
                TObjPlayer__sub_803E53BC();
            }
        } else if (n->obj != NULL && !(n->flags & 8)) {
            ctx->draw(n->obj);
        }
        if (n->child != NULL) {
            draw_motion_node_list__10TObjPlayerFi((s32)n->child);
        }
        pop_matrix();
        n = n->next;
    } while (n != NULL);
}

#pragma push
#pragma use_lmw_stmw off
void TObjPlayer__sub_803E500C(void *motA, s32 keyA, void *motB, s32 keyB, f32 t, u32 *src, u32 **out) {
    f32 *a0;
    f32 *a1;
    f32 *b0;
    f32 *b1;
    f32 wa;
    f32 wb;
    f32 fa;
    Key_803E500C *ka0;
    Key_803E500C *ka1;
    f32 fb;
    Key_803E500C *kb0;
    Key_803E500C *kb1;
    u32 *s;
    u32 hdr;
    u32 *p;
    u32 *d;
    u32 n;
    s32 count;
    s32 pos;
    s32 rot;
    s32 c0;
    s32 c1;
    s32 i;
    if (motA != 0) {
        find_motion_key_interval(motA, 8, keyA, t, &ka0, &ka1, &fa);
        wa = lbl_805E10B8 - fa;
        a0 = ka0->data;
        b0 = ka1->data;
    }
    if (motB != 0) {
        find_motion_key_interval(motB, 8, keyB, t, &kb0, &kb1, &fb);
        wb = lbl_805E10B8 - fb;
        a1 = kb0->data;
        b1 = kb1->data;
    }
    p = src;
    *out = d = lbl_805D7778;
    for (;;) {
        hdr = p[0];
        if ((u8)hdr == 0xFF) {
            *d = hdr;
            return;
        }
        n = hdr >> 16;
        count = p[1] >> 16;
        switch ((u8)hdr) {
        case 34:
            pos = 1; rot = 0; c0 = 0; c1 = 0;
            break;
        case 35:
            pos = 1; rot = 0; c0 = 1; c1 = 0;
            break;
        case 36:
            pos = 1; rot = 0; c0 = 0; c1 = 1;
            break;
        case 41:
            pos = 1; rot = 1; c0 = 0; c1 = 0;
            break;
        case 42:
            pos = 1; rot = 1; c0 = 1; c1 = 0;
            break;
        case 43:
            pos = 1; rot = 1; c0 = 0; c1 = 1;
            break;
        case 44:
            pos = 1; rot = 1; c0 = 0; c1 = 1;
            break;
        default:
            pos = 0; rot = 0; c0 = 0; c1 = 0;
            break;
        }
        d[0] = hdr;
        d[1] = p[1];
        s = p + 2;
        d += 2;
        for (i = 0; i < count; i++) {
            if (pos != 0) {
                if (motA != 0) {
                    ((f32 *)d)[0] = a0[0] * wa + b0[0] * fa;
                    ((f32 *)d)[1] = a0[1] * wa + b0[1] * fa;
                    ((f32 *)d)[2] = a0[2] * wa + b0[2] * fa;
                    a0 += 3;
                    b0 += 3;
                } else {
                    ((f32 *)d)[0] = ((f32 *)s)[0];
                    ((f32 *)d)[1] = ((f32 *)s)[1];
                    ((f32 *)d)[2] = ((f32 *)s)[2];
                }
                d += 3;
                s += 3;
            }
            if (rot != 0) {
                if (motB != 0) {
                    ((f32 *)d)[0] = a1[0] * wb + b1[0] * fb;
                    ((f32 *)d)[1] = a1[1] * wb + b1[1] * fb;
                    ((f32 *)d)[2] = a1[2] * wb + b1[2] * fb;
                    a1 += 3;
                    b1 += 3;
                } else {
                    ((f32 *)d)[0] = ((f32 *)s)[0];
                    ((f32 *)d)[1] = ((f32 *)s)[1];
                    ((f32 *)d)[2] = ((f32 *)s)[2];
                }
                d += 3;
                s += 3;
            }
            if (c0 != 0) {
                *d++ = *s++;
            }
            if (c1 != 0) {
                *d++ = *s++;
            }
        }
        p += n + 1;
    }
}
#pragma pop

void TObjPlayer__sub_803E5378(s32 n) {
    s32 w = n * 4;
    s32 a;
    *(s32 *)(lbl_805D7818 + 0x4) = w;
    *(s32 *)(lbl_805D7818 + 0x8) = w + w;
    a = *(s32 *)(lbl_805D7818 + 0x0);
    *(s32 *)(lbl_805D7818 + 0xc) = a;
    *(s32 *)(lbl_805D7818 + 0x10) = a + *(s32 *)(lbl_805D7818 + 0x4);
    *(s32 *)(lbl_805D7818 + 0x1c) = 0;
}
typedef char RecoveredGlobal_803D78A8_lbl_8058CAB8_size[sizeof(RecoveredGlobal_803D78A8_lbl_8058CAB8) == 0x80 ? 1 : -1];
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer__sub_803E53BC(void) {
    s32 v = ((Ctx_803E53BC *)lbl_805D7818)->f0;
    v += ((Ctx_803E53BC *)lbl_805D7818)->f8;
    ((Ctx_803E53BC *)lbl_805D7818)->f0 = v;
    ((Ctx_803E53BC *)lbl_805D7818)->fc = v;
    ((Ctx_803E53BC *)lbl_805D7818)->f10 = v + ((Ctx_803E53BC *)lbl_805D7818)->f4;
    ((Ctx_803E53BC *)lbl_805D7818)->f1c = 0;
}
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer__sub_803E53F8(u8 *arg0, f32 farg0) {
    M2C_FIELD(lbl_805D7818, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(lbl_805D7818, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(lbl_805D7818, f32 *, 0x14) = farg0;
    M2C_FIELD(lbl_805D7818, s32 *, 0x1C) = 0;
    M2C_FIELD(lbl_805D7818, s32 *, 0x20) = (s32) M2C_FIELD(arg0, u16 *, 8);
    TObjPlayer__sub_803E5378((s32)(M2C_FIELD(arg0, u16 *, 0xA) & 0xFFFFFF3F));
}
#pragma pop

typedef char RecoveredGlobal_803E5458_lbl_8058DC00_size[sizeof(RecoveredGlobal_803E5458_lbl_8058DC00) == 0x48 ? 1 : -1];
void TObjPlayer__sub_803E5458(s32 arg0) {
    lbl_805D7818 = (u8 *)&lbl_8058DC00.value + (arg0 * 0x24);
}

}
