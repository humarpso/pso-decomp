#include <dolphin/mtx.h>
#include "pso/TBoss5GryphonLightningHorn.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>

struct RecoveredGlobal_8012DBF4_lbl_804A5B20 {
    M2C_UNK value;
    u8 remaining[0xF4];
};

typedef struct SlicerLaunchData_8012D9C8 {
    u16 player; u16 pad;
    void *textures; void *model; u32 weapon;
    s16 kind, stage; f32 multiplier; f32 color[4];
    s32 facing, spin; f32 first[3], second[3];
} SlicerLaunchData_8012D9C8;

extern "C" {
M2C_UNK TBoss5GryphonLightning__ct(f32);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int, f32, f32);
extern M2C_UNK __vt__26TBoss5GryphonLightningHorn[];
extern s32 lbl_805D41A0;
extern const f32 lbl_805DF630;
extern const f32 lbl_805DF634;
extern const f32 lbl_805DF644;
extern const f32 lbl_805DF650;
u8 *__ct__26TBoss5GryphonLightningHornFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u8 *csnVecterUnder(M2C_UNK *, s32);
s32 __nw__7TObjectFUl(int);
u8 *__ct__26TBoss5GryphonLightningHornFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern const f32 lbl_805D8D48;
extern const f32 lbl_805DF654;
s32 TBoss8Dragon__sub_803263A4(s32 arg0, s32 arg1, s32 arg2);
void TObjPlayer__sub_801295FC(SlicerLaunchData_8012D9C8 *);
u16 obj_getField1c(void *);
u32 get_field_d8__10TObjPlayerFPv(void *);
s16 TObjPlayer__sub_801D2F4C(void *);
s16 get_validated_attack_stage(void *);
f32 query_extended_state__10TObjPlayerFPv(void *);
void get_weapon_color__11TItemWeaponFPv(f32 *, void *);
void copy_vec4__13TRaderMapCoreFPvPv(f32 *, f32 *);
void draw_icon__10TObjPlayerFPvii(void *, int, f32 *);
void create__10TTecSlicerFPUs(SlicerLaunchData_8012D9C8 *);
void TObjPlayer__sub_80326450(u8 *weapon);
}

extern "C" {

void *item_equip_variant_deleting_dtor_80326520(void *arg0, s16 arg1);
void render__26TBoss5GryphonLightningHornFv(void);
void run_task__26TBoss5GryphonLightningHornFv(void* p);
int fn_80324E10(void*);
int fn_80325F7C(void*);
int fn_80326074(void*);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_80326520(void *arg0, s16 arg1);

void render__26TBoss5GryphonLightningHornFv(void) {  }
void run_task__26TBoss5GryphonLightningHornFv(void* p) { fn_80326074(p); fn_80325F7C(p); fn_80324E10(p); }
TBoss5GryphonLightningHorn::~TBoss5GryphonLightningHorn() {}
u8 *__ct__26TBoss5GryphonLightningHornFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 temp_f1;
    TBoss5GryphonLightning__ct((f32) (lbl_805DF644));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__26TBoss5GryphonLightningHorn;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D41A0;
    M2C_FIELD(arg0, s32 *, 0xA4) = arg3;
    temp_f1 = lbl_805DF650 * sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0xA4)));
    M2C_FIELD(arg0, f32 *, 0x98) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) lbl_805DF630;
    M2C_FIELD(arg0, f32 *, 0xA0) = (f32) (lbl_805DF650 * cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0xA4)), (f32) (temp_f1), (f32) (lbl_805DF650)));
    M2C_FIELD(arg0, f32 *, 0x8C) = (f32) lbl_805DF634;
    M2C_FIELD(arg0, s32 *, 0x90) = 4;
    return arg0;
}
s32 TBoss8Dragon__sub_803263A4(s32 arg0, s32 arg1, s32 arg2) {
    Vec position;
    f32 ground_height;
    s32 allocation;
    s32 effect;
    u8* collision;
    VecCopy__FP3VecPC3Vec(&position, (void*)arg1);
    collision = csnVecterUnder((M2C_UNK*)&position, 0x16EF);
    if (collision == NULL) {
        position.y = lbl_805D8D48;
    } else {
        ground_height = M2C_FIELD(M2C_FIELD(collision, u8**, 4), f32*, 4);
        if (ground_height > lbl_805D8D48) {
            position.y = lbl_805D8D48;
        } else {
            position.y = ground_height;
        }
    }
    position.y += lbl_805DF654;
    allocation = __nw__7TObjectFUl(0xA8);
    effect = allocation;
    if (effect != 0) {
        effect = (s32)__ct__26TBoss5GryphonLightningHornFv((u8*)allocation, arg0, (s32)&position, arg2);
    }
    return effect;
}

extern M2C_UNK lbl_804ECDC0[];

void TObjPlayer__sub_80326450(u8 *weapon) {
    f32 tmp[4];
    SlicerLaunchData_8012D9C8 launch;
    TObjPlayer__sub_801295FC(&launch);
    launch.player = obj_getField1c(M2C_FIELD(weapon, u8 **, 0xF0));
    launch.weapon = get_field_d8__10TObjPlayerFPv(weapon);
    launch.textures = M2C_FIELD(weapon, void **, 0x24);
    launch.model = M2C_FIELD(weapon, void **, 0x188);
    launch.kind = TObjPlayer__sub_801D2F4C(M2C_FIELD(weapon, u8 **, 0xF0) + 0x7CC);
    launch.stage = get_validated_attack_stage(M2C_FIELD(weapon, u8 **, 0xF0) + 0x7CC);
    launch.multiplier = query_extended_state__10TObjPlayerFPv(M2C_FIELD(weapon, u8 **, 0xF0));
    get_weapon_color__11TItemWeaponFPv(tmp, weapon);
    copy_vec4__13TRaderMapCoreFPvPv(launch.color, tmp);
    launch.facing = M2C_FIELD(M2C_FIELD(weapon, u8 **, 0xF0), s32 *, 0x60);
    draw_icon__10TObjPlayerFPvii(weapon, 0x2, launch.first);
    draw_icon__10TObjPlayerFPvii(weapon, 0x1, launch.second);
    create__10TTecSlicerFPUs(&launch);
}
typedef char RecoveredGlobal_8012DBF4_lbl_804A5B20_size[sizeof(RecoveredGlobal_8012DBF4_lbl_804A5B20) == 0xF8 ? 1 : -1];

void *item_equip_variant_deleting_dtor_80326520(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ECDC0;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
