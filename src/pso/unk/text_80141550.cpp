#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_801415BC {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
};

struct Cfg_80141604 { u32 a; u8 b; u8 c; u8 pad6[2]; u32 d; u8 e; u8 f; u8 pad_e[2]; u32 g; };

extern "C" {
M2C_UNK set_chunk_material_color(void *, f32);
extern s32 some_id_805c6f74;
extern const f32 lbl_805DB150;
extern const f32 lbl_805DB154;
void set_shadow_material_state(void);
void copy_config__10TObjPlayerFPvPv(void *, void *);
void TObjPlayer__sub_80141604(void);
}

extern "C" {

int set_cull_none__8TObjFishFv(void);
int set_cull_mode_front__8TObjFishFv(void);
int set_cull_back__8TObjFishFv(void);
int GXSetCullMode(void*);

int set_cull_none__8TObjFishFv(void) { return GXSetCullMode((void*)(0)); }
int set_cull_mode_front__8TObjFishFv(void) { return GXSetCullMode((void*)(1)); }
int set_cull_back__8TObjFishFv(void) { return GXSetCullMode((void*)(2)); }
void set_shadow_material_state(void) {
    Stack_801415BC stack;
    stack.spC = lbl_805DB150;
    stack.sp10 = lbl_805DB150;
    stack.sp14 = lbl_805DB150;
    stack.sp8 = lbl_805DB154;
    set_chunk_material_color((void *) (&stack.sp8), (f32) (lbl_805DB150));
    some_id_805c6f74 |= 0x400;
}
u32 lbl_8050BEC0[8];
f32 lbl_8050BEE0[8];
f32 lbl_8050BF00[8];
u32 lbl_8050BF20[8];
u32 lbl_8050BF40[8];
f32 lbl_8050BF60[16];
u32 lbl_8050BFA0[16];
f32 lbl_8050BFE0[4];
u32 lbl_8050BFF0[4];
Cfg_80141604 lbl_8050C000;
Cfg_80141604 lbl_8050C014;
Cfg_80141604 lbl_8050C028;
void TObjPlayer__sub_80141604(void) {
    lbl_8050C000.a = 7;
    lbl_8050C000.b = 1;
    lbl_8050C000.c = 1;
    lbl_8050C000.d = 1;
    lbl_8050C000.e = 1;
    lbl_8050C000.f = 0xBF;
    lbl_8050C000.g = 1;
    copy_config__10TObjPlayerFPvPv(&lbl_8050C014, &lbl_8050C000);
    copy_config__10TObjPlayerFPvPv(&lbl_8050C028, &lbl_8050C000);
}

}
