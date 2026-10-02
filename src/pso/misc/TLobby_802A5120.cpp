#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V2_802A5208 { f32 x; f32 y; };

struct Tag_802A5208 { u8 pad0[0x24]; f32 t; };

extern "C" {
void draw_ui_sprite(s32, void *, f32, f32);
void draw_ui_sprite_scaled(s32, void *, void *, f32, f32);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
extern V2_802A5208 lbl_80466720[];
extern V2_802A5208 lbl_80466728[];
extern V2_802A5208 lbl_80466730[];
extern V2_802A5208 lbl_80466738[];
extern V2_802A5208 lbl_80466740[];
extern V2_802A5208 lbl_80466748[];
extern V2_802A5208 lbl_80466750[];
extern V2_802A5208 lbl_80466758[];
extern const f32 lbl_805DDFC8;
extern const f32 lbl_805DDFCC;
extern const f32 lbl_805DDFD0;
extern const f32 lbl_805DDFD4;
extern const f32 lbl_805DDFD8;
extern const f32 lbl_805DDFDC;
extern const f32 lbl_805DDFE0;
void TObjCMAssignMenu__sub_802A5208(Tag_802A5208 *self);
}

extern "C" {

void free_dialing_gc__6TLobbyFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D6668;

void free_dialing_gc__6TLobbyFv(void) {
    if ((u32) lbl_805D6668 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6668);
        lbl_805D6668 = 0U;
    }
}
void TObjCMAssignMenu__sub_802A5208(Tag_802A5208 *self) {
    f32 a;
    a = lbl_805DDFC8;
    if (self->t < lbl_805DDFCC) {
        a = self->t / lbl_805DDFCC;
    }
    V2_802A5208 p1 = lbl_80466720[0];
    draw_ui_sprite(0x7E, &p1, lbl_805DDFD0, a);
    V2_802A5208 p2 = lbl_80466728[0];
    draw_ui_sprite(0x80, &p2, lbl_805DDFD0, a);
    V2_802A5208 p3 = lbl_80466730[0];
    draw_ui_sprite(0x84, &p3, lbl_805DDFD0, a);
    V2_802A5208 p4 = lbl_80466738[0];
    draw_ui_sprite(0x86, &p4, lbl_805DDFD0, a);
    V2_802A5208 scale = lbl_80466740[0];
    V2_802A5208 p5 = lbl_80466748[0];
    draw_ui_sprite_scaled(0x7F, &p5, &scale, lbl_805DDFD0, a);
    V2_802A5208 p6 = lbl_80466750[0];
    draw_ui_sprite_scaled(0x85, &p6, &scale, lbl_805DDFD0, a);
    V2_802A5208 base = lbl_80466758[0];
    V2_802A5208 cur;
    for (; base.y <= lbl_805DDFE0; base.y += lbl_805DDFDC) {
        copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&cur, &base);
        draw_ui_sprite(0x81, &cur, lbl_805DDFD0, a);
        cur.x += lbl_805DDFD4;
        draw_ui_sprite_scaled(0x82, &cur, &scale, lbl_805DDFD0, a);
        cur.x = lbl_805DDFD8;
        draw_ui_sprite(0x83, &cur, lbl_805DDFD0, a);
    }
}

}
