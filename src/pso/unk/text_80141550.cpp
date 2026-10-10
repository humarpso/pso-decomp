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
void init_default_config__10TObjPlayerFv(void);
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
void init_default_config__10TObjPlayerFv(void) {
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

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80141860_lbl_8050C000 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_80141730_lbl_8050C028 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80141788_lbl_8050C000 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_80141788_lbl_8050C028 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801417B8_lbl_8050C000 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_801417B8_lbl_8050C028 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801417E8_lbl_8050C028 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8014175C_lbl_8050C000 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct G_80141820 { u8 pad[0xd]; u8 scene; };

extern "C" {
void GXSetZMode(u8, s32, s32);
void GXSetZCompLoc(s32);
void set_current_scene__6TSceneFi(s32);
void set_depth_buffer_settings_2__Fv(void);
s32 set_ginja_draw_list_mask(int);
void func_80141618__Fv(void);
void copy_config__10TObjPlayerFPvPv(void* p, void* q);
void restore_depth_buffer_settings__Fv(void);
void copy_config__10TObjPlayerFPvPv(void* p, void* q);
void save_depth_buffer_settings__Fv(void);
void set_current_scene__6TSceneFi(s32);
extern s32 some_id_805c6f74;
void restore_default_scene(void);
s32 set_ginja_draw_list_mask(int);
void set_depth_buffer_settings_id__FUl(s32 arg0);
extern s32 some_id_805c6f74;
void set_current_scene__6TSceneFi(s32);
void set_scene_override(u8 scene);
}

extern "C" {

void copy_config__10TObjPlayerFPvPv(void* p, void* q);

void set_ginja_draw_end_callback(void *);
void set_global_state__10TObjPlayerFi(void *);
void restore_saved_depth_alpha_state();
void TObjPlayer__sub_801416AC(void);
struct Cfg_801416AC { u32 a; u8 b; u8 c; u8 pad6[2]; u32 d; u8 e; u8 f; u8 pad_e[2]; u32 g; };
#define lbl_8050C000 (*(RecoveredGlobal_80141860_lbl_8050C000 *)&lbl_8050C000)
#define lbl_8050C028 (*(RecoveredGlobal_80141730_lbl_8050C028 *)&lbl_8050C028)
void copy_config__10TObjPlayerFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u8*)((char*)p + 0x4) = *(u8*)((char*)q + 0x4); *(u8*)((char*)p + 0x5) = *(u8*)((char*)q + 0x5); *(u32*)((char*)p + 0x8) = *(u32*)((char*)q + 0x8); *(u8*)((char*)p + 0xc) = *(u8*)((char*)q + 0xc); *(u8*)((char*)p + 0xd) = *(u8*)((char*)q + 0xd); *(u32*)((char*)p + 0x10) = *(u32*)((char*)q + 0x10); }
#undef lbl_8050C000
#undef lbl_8050C028
void TObjPlayer__sub_801416AC(void) {
    lbl_8050C000.a = 7;
    lbl_8050C000.b = 1;
    lbl_8050C000.c = 1;
    lbl_8050C000.d = 1;
    lbl_8050C000.e = 1;
    lbl_8050C000.f = 0xBF;
    lbl_8050C000.g = 1;
    copy_config__10TObjPlayerFPvPv(&lbl_8050C014, &lbl_8050C000);
    copy_config__10TObjPlayerFPvPv(&lbl_8050C028, &lbl_8050C000);
    set_global_state__10TObjPlayerFi((void *)restore_saved_depth_alpha_state);
    set_ginja_draw_end_callback((void *)restore_saved_depth_alpha_state);
}
#define lbl_8050C000 (*(RecoveredGlobal_80141860_lbl_8050C000 *)&lbl_8050C000)
#define lbl_8050C028 (*(RecoveredGlobal_80141730_lbl_8050C028 *)&lbl_8050C028)
typedef char RecoveredGlobal_80141860_lbl_8050C000_size[sizeof(RecoveredGlobal_80141860_lbl_8050C000) == 0x28 ? 1 : -1];

typedef char RecoveredGlobal_80141730_lbl_8050C028_size[sizeof(RecoveredGlobal_80141730_lbl_8050C028) == 0x18 ? 1 : -1];
void func_80141618__Fv(void) {
    set_ginja_draw_list_mask((int) (M2C_FIELD(&lbl_8050C028.value, s32 *, 0x10)));
}

typedef char RecoveredGlobal_80141788_lbl_8050C000_size[sizeof(RecoveredGlobal_80141788_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_80141788_lbl_8050C028_size[sizeof(RecoveredGlobal_80141788_lbl_8050C028) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8014175C_lbl_8050C000_size[sizeof(RecoveredGlobal_8014175C_lbl_8050C000) == 0x28 ? 1 : -1];
void set_depth_buffer_settings_id__FUl(s32 arg0) {
    M2C_FIELD(&(*(RecoveredGlobal_8014175C_lbl_8050C000 *)&lbl_8050C000).value, s32 *, 0x10) = arg0;
    set_ginja_draw_list_mask((int)((void *) (arg0)));
}

void restore_depth_buffer_settings__Fv(void) {
    copy_config__10TObjPlayerFPvPv((void*)((void *) (&(*(RecoveredGlobal_80141788_lbl_8050C000 *)&lbl_8050C000).value)), (void*)((void *) (&(*(RecoveredGlobal_80141788_lbl_8050C028 *)&lbl_8050C028).value)));
}

typedef char RecoveredGlobal_801417B8_lbl_8050C000_size[sizeof(RecoveredGlobal_801417B8_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_801417B8_lbl_8050C028_size[sizeof(RecoveredGlobal_801417B8_lbl_8050C028) == 0x18 ? 1 : -1];
void save_depth_buffer_settings__Fv(void) {
    copy_config__10TObjPlayerFPvPv((void*)((void *) (&(*(RecoveredGlobal_801417B8_lbl_8050C028 *)&lbl_8050C028).value)), (void*)((void *) (&(*(RecoveredGlobal_801417B8_lbl_8050C000 *)&lbl_8050C000).value)));
}

typedef char RecoveredGlobal_801417E8_lbl_8050C028_size[sizeof(RecoveredGlobal_801417E8_lbl_8050C028) == 0x18 ? 1 : -1];
void restore_default_scene(void) {
    some_id_805c6f74 &= 0xFFFFFFFE;
    set_current_scene__6TSceneFi((s32)((int) ((s32) M2C_FIELD(&(*(RecoveredGlobal_801417E8_lbl_8050C028 *)&lbl_8050C028).value, u8 *, 0xD))));
}

void set_scene_override(u8 scene) {
    some_id_805c6f74 |= 1;
    (*(G_80141820 *)&lbl_8050C000).scene = scene;
    set_current_scene__6TSceneFi(scene);
}

void set_depth_buffer_settings_2__Fv(void) {
    M2C_FIELD(&lbl_8050C000.value, s8 *, 4) = 0;
    M2C_FIELD(&lbl_8050C000.value, s8 *, 5) = 1;
    M2C_FIELD(&lbl_8050C000.value, s32 *, 8) = 7;
    M2C_FIELD(&lbl_8050C000.value, s8 *, 0xC) = 0;
    M2C_FIELD(&lbl_8050C000.value, s8 *, 0xD) = 0;
    GXSetZCompLoc(0);
    GXSetZMode(1U, 7, 0);
    set_current_scene__6TSceneFi(0);
}

}
