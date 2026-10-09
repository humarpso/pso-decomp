#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Elem_80125628 { u8 pad[0x1c]; u8 f1c[0x2c - 0x1c]; };

struct Obj_80125628 { u8 pad[0xa4]; Elem_80125628 *elems; };

struct Ctx_80125628 { Obj_80125628 *obj; s32 idx; };

struct Self_8012573C { u8 pad[0x23c]; u32 f23c; };

struct Out_8012573C { u8 pad[0x40]; u32 f40; u8 pad44[0x50 - 0x44]; s32 f50; u8 pad54[0x70 - 0x54]; void *f70; void *f74; s32 f78; s32 f7c; };

extern "C" {
s32 TWindowCtrl__sub_8024A314(void);
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
s32 TWindowCtrl__sub_8024A314(void);
void apply_to_item_by_id__10TObjPlayerFii(s32 arg0, s32 arg1);
u32 find_item_by_id(void);
s32 TObjPlayer__sub_80125678(u32 a0 = 0, s32 a1 = 0);
void apply_to_item_by_id__10TObjPlayerFii(s32 arg0, s32 arg1);
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
s32 TWindowCtrl__sub_8024A314(void);
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
void apply_to_item_by_id__10TObjPlayerFii(s32 arg0, s32 arg1);
u32 find_item_by_id(void);
s32 TObjPlayer__sub_80125678(u32 a0, s32 a1);
void TObjPlayer__sub_80125628(s32 arg0, s32 arg1);
void apply_to_item_by_id__10TObjPlayerFii(s32 arg0, s32 arg1);
void TObjPlayer__sub_80125628(s32 arg0, s32 arg1);
void setup_effect_callbacks__10TObjPlayerFPvPv(Self_8012573C *self, Out_8012573C *out);
}

extern "C" {

void apply_to_item_by_id__10TObjPlayerFii(s32 arg0, s32 arg1) {
    u32 temp_r3 = find_item_by_id();
    if (temp_r3 != 0U) {
        TObjPlayer__sub_80125678(temp_r3, arg1);
    }
}
void TObjPlayer__sub_80125628(s32 arg0, s32 arg1) {
    Ctx_80125628 *ctx = (Ctx_80125628 *)arg1;
    u32 p = find_item_by_id();
    if (p != 0U) {
        TObjPlayer__sub_80125678(p, (s32)ctx->obj->elems[ctx->idx].f1c);
    }
}
void setup_effect_callbacks__10TObjPlayerFPvPv(Self_8012573C *self, Out_8012573C *out) {
    out->f74 = (void *)TObjPlayer__sub_80125628;
    out->f70 = (void *)apply_to_item_by_id__10TObjPlayerFii;
    out->f50 = -0x4000;
    out->f40 |= self->f23c;
    out->f78 = 0x1bb;
    out->f7c = 0x1bc;
}

}
