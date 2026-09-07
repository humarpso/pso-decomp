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

extern "C" {
void GXSetZMode(u8, s32, s32);
void GXSetZCompLoc(s32);
void set_current_scene__6TSceneFi(s32);
extern RecoveredGlobal_80141860_lbl_8050C000 lbl_8050C000;
void set_depth_buffer_settings_2__Fv(void);
s32 set_depth_buffer_id__16TObjEneMe3StelthFi(int);
extern RecoveredGlobal_80141730_lbl_8050C028 lbl_8050C028;
void func_80141618__Fv(void);
void copy_config__10TObjPlayerFPvPv(void* p, void* q);
extern RecoveredGlobal_80141860_lbl_8050C000 lbl_8050C000;
extern RecoveredGlobal_80141730_lbl_8050C028 lbl_8050C028;
void restore_depth_buffer_settings__Fv(void);
void copy_config__10TObjPlayerFPvPv(void* p, void* q);
extern RecoveredGlobal_80141860_lbl_8050C000 lbl_8050C000;
extern RecoveredGlobal_80141730_lbl_8050C028 lbl_8050C028;
void save_depth_buffer_settings__Fv(void);
void set_current_scene__6TSceneFi(s32);
extern RecoveredGlobal_80141730_lbl_8050C028 lbl_8050C028;
extern s32 some_id_805c6f74;
void TObjPlayer__sub_801417E8(void);
}

extern "C" {

void copy_config__10TObjPlayerFPvPv(void* p, void* q);

void copy_config__10TObjPlayerFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u8*)((char*)p + 0x4) = *(u8*)((char*)q + 0x4); *(u8*)((char*)p + 0x5) = *(u8*)((char*)q + 0x5); *(u32*)((char*)p + 0x8) = *(u32*)((char*)q + 0x8); *(u8*)((char*)p + 0xc) = *(u8*)((char*)q + 0xc); *(u8*)((char*)p + 0xd) = *(u8*)((char*)q + 0xd); *(u32*)((char*)p + 0x10) = *(u32*)((char*)q + 0x10); }
typedef char RecoveredGlobal_80141860_lbl_8050C000_size[sizeof(RecoveredGlobal_80141860_lbl_8050C000) == 0x28 ? 1 : -1];

typedef char RecoveredGlobal_80141730_lbl_8050C028_size[sizeof(RecoveredGlobal_80141730_lbl_8050C028) == 0x18 ? 1 : -1];
void func_80141618__Fv(void) {
    set_depth_buffer_id__16TObjEneMe3StelthFi((int) (M2C_FIELD(&lbl_8050C028.value, s32 *, 0x10)));
}

typedef char RecoveredGlobal_80141788_lbl_8050C000_size[sizeof(RecoveredGlobal_80141788_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_80141788_lbl_8050C028_size[sizeof(RecoveredGlobal_80141788_lbl_8050C028) == 0x18 ? 1 : -1];
void restore_depth_buffer_settings__Fv(void) {
    copy_config__10TObjPlayerFPvPv((void*)((void *) (&(*(RecoveredGlobal_80141788_lbl_8050C000 *)&lbl_8050C000).value)), (void*)((void *) (&(*(RecoveredGlobal_80141788_lbl_8050C028 *)&lbl_8050C028).value)));
}

typedef char RecoveredGlobal_801417B8_lbl_8050C000_size[sizeof(RecoveredGlobal_801417B8_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_801417B8_lbl_8050C028_size[sizeof(RecoveredGlobal_801417B8_lbl_8050C028) == 0x18 ? 1 : -1];
void save_depth_buffer_settings__Fv(void) {
    copy_config__10TObjPlayerFPvPv((void*)((void *) (&(*(RecoveredGlobal_801417B8_lbl_8050C028 *)&lbl_8050C028).value)), (void*)((void *) (&(*(RecoveredGlobal_801417B8_lbl_8050C000 *)&lbl_8050C000).value)));
}

typedef char RecoveredGlobal_801417E8_lbl_8050C028_size[sizeof(RecoveredGlobal_801417E8_lbl_8050C028) == 0x18 ? 1 : -1];
void TObjPlayer__sub_801417E8(void) {
    some_id_805c6f74 &= 0xFFFFFFFE;
    set_current_scene__6TSceneFi((s32)((int) ((s32) M2C_FIELD(&(*(RecoveredGlobal_801417E8_lbl_8050C028 *)&lbl_8050C028).value, u8 *, 0xD))));
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
