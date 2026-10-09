#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct RecoveredGlobal_80069094_camera_controller_registry { M2C_UNK value; u8 remaining[0x64]; };

struct RecoveredGlobal_80069024_TCameraCtrl__data_804FF634 {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct RecoveredGlobal_80069024_lbl_804FF67C {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct RecoveredGlobal_800695E8_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800691C8_TCameraCtrl__data_804FF6D0 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_800691C8_TCameraCtrl__data_804FF700 {
    M2C_UNK value;
    u8 remaining[0xBC];
};

struct RecoveredGlobal_800691C8_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_800687E4_TCameraCtrl__data_804FF6C4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80069148_TCameraCtrl__data_804FF6D0 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80069148_TCameraCtrl__data_804FF700 {
    M2C_UNK value;
    u8 remaining[0xBC];
};

struct RecoveredGlobal_80069C94_camera_controller_registry {
    M2C_UNK value;
    u8 remaining[0x64];
};

struct RecoveredGlobal_80069C94_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80069D04_camera_controller_registry {
    M2C_UNK value;
    u8 remaining[0x64];
};

struct RecoveredGlobal_80069D04_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800687C8_TCameraCtrl__data_804FF6C4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80069304_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8006961C_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634 {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct RecoveredGlobal_8006961C_lbl_8058CA60 {
    M2C_UNK value;
    u8 remaining[0x54];
};

struct RecoveredGlobal_80069258_TCameraCtrl__data_804FF6D0 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80069258_TCameraCtrl__data_804FF700 {
    M2C_UNK value;
    u8 remaining[0xBC];
};

struct RecoveredGlobal_80069258_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_80069A6C_camera_controller_registry {
    M2C_UNK value;
    u8 remaining[0x64];
};

struct RecoveredGlobal_80069A6C_TCameraCtrl__data_804FF628 {
    u8 value;
    u8 remaining[0xB];
};

struct Stack_80069318 {
    M2C_UNK sp8;
    u8 pad_C[0x4];
    f32 sp10;
    f32 sp14;
    u8 pad_18[0x8];
    f32 sp20;
    u8 pad_24[0xC];
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
};

struct RecoveredGlobal_80069318_lbl_804FF5E8 { M2C_UNK value; u8 remaining[0x24]; };

struct Stack_800693F4 {
    M2C_UNK sp8;
    u8 pad_C[0x4];
    f32 sp10;
    f32 sp14;
    u8 pad_18[0x8];
    f32 sp20;
    u8 pad_24[0xC];
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
};

struct RecoveredGlobal_800693F4_TCameraCtrl__data_804FF634 { M2C_UNK value; u8 remaining[0x44]; };

extern "C" {
s32 get_state__10TSceneSoraFPv(void* p);
extern s32 lbl_805D65F0;
void set_scene_flag__10TSceneSoraFi(int a0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
extern RecoveredGlobal_800687E4_TCameraCtrl__data_804FF6C4 lbl_804DC7B8;
void copy_reflection_vec__10TSceneSoraFPv(u8 *arg0);
}

extern "C" {

void *create_instance__10TSceneSoraFPv(void *arg0);
void *destroy__10TSceneSoraFPvs(void *arg0, s16 arg1);
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(M2C_UNK);
void *construct_indirect_effect_task(void *, M2C_UNK, M2C_UNK, s32);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_active_scene__6TSceneFi(M2C_UNK);
M2C_UNK set_id__6TSceneFi(M2C_UNK);
M2C_UNK set_instance__6TSceneFi(M2C_UNK);

extern M2C_UNK lbl_804DC7C4[];
extern s32 lbl_805D65F0;
extern s16 scene_sora_reflect_active;
extern s8 scene_sora_recon_active_flag;

void *destroy__10TSceneSoraFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DC7C4;
        scene_sora_reflect_active = 0;
        scene_sora_recon_active_flag = 0;
        lbl_805D65F0 = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x20));
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        set_id__6TSceneFi(0);
        set_active_scene__6TSceneFi(0);
        set_instance__6TSceneFi(0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804DC7C4[];
extern s32 tl_05;
extern void *scene_sora_instance;
extern s16 scene_sora_reflect_active;
extern s8 scene_sora_recon_active_flag;
extern s32 scene_sora_recon_object;
extern const f32 lbl_805DDD8C;
extern const f32 lbl_805DDD90;

void *create_instance__10TSceneSoraFPv(void *arg0) {
    void *obj;

    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DC7C4;
    scene_sora_reflect_active = 0;
    scene_sora_recon_active_flag = 0;
    if ((void *) scene_sora_instance != NULL) {
        return arg0;
    }
    scene_sora_instance = arg0;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) scene_sora_recon_object;
    obj = __nw__7TObjectFUl(0x20);
    if (obj != NULL) {
        obj = construct_indirect_effect_task(obj, 0x28, 1, tl_05);
    }
    M2C_FIELD(arg0, void **, 0x20) = obj;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DDD8C;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805DDD8C;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805DDD8C;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_805DDD8C;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805DDD90;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DDD8C;
    return arg0;
}
s32 get_state__10TSceneSoraFPv(void* p) { return *(s32*)((char*)p + 0x20); }
void set_scene_flag__10TSceneSoraFi(int a0) { (*(int *)&lbl_805D65F0) = a0; }
void copy_reflection_vec__10TSceneSoraFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec((void *)(&lbl_804DC7B8.value), (int)(arg0));
}

typedef char RecoveredGlobal_80069094_camera_controller_registry_size[sizeof(RecoveredGlobal_80069094_camera_controller_registry) == 0x68 ? 1 : -1];
typedef char RecoveredGlobal_800687E4_TCameraCtrl__data_804FF6C4_size[sizeof(RecoveredGlobal_800687E4_TCameraCtrl__data_804FF6C4) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_800687C8_TCameraCtrl__data_804FF6C4_size[sizeof(RecoveredGlobal_800687C8_TCameraCtrl__data_804FF6C4) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80069024_TCameraCtrl__data_804FF634_size[sizeof(RecoveredGlobal_80069024_TCameraCtrl__data_804FF634) == 0x48 ? 1 : -1];
typedef char RecoveredGlobal_80069024_lbl_804FF67C_size[sizeof(RecoveredGlobal_80069024_lbl_804FF67C) == 0x48 ? 1 : -1];
typedef char RecoveredGlobal_800691C8_TCameraCtrl__data_804FF6D0_size[sizeof(RecoveredGlobal_800691C8_TCameraCtrl__data_804FF6D0) == 0x30 ? 1 : -1];
typedef char RecoveredGlobal_800691C8_TCameraCtrl__data_804FF700_size[sizeof(RecoveredGlobal_800691C8_TCameraCtrl__data_804FF700) == 0xC0 ? 1 : -1];
typedef char RecoveredGlobal_800691C8_main_task_size[sizeof(RecoveredGlobal_800691C8_main_task) == 0x34 ? 1 : -1];
typedef char RecoveredGlobal_80069148_TCameraCtrl__data_804FF6D0_size[sizeof(RecoveredGlobal_80069148_TCameraCtrl__data_804FF6D0) == 0x30 ? 1 : -1];
typedef char RecoveredGlobal_80069148_TCameraCtrl__data_804FF700_size[sizeof(RecoveredGlobal_80069148_TCameraCtrl__data_804FF700) == 0xC0 ? 1 : -1];
typedef char RecoveredGlobal_80069258_TCameraCtrl__data_804FF6D0_size[sizeof(RecoveredGlobal_80069258_TCameraCtrl__data_804FF6D0) == 0x30 ? 1 : -1];
typedef char RecoveredGlobal_80069258_TCameraCtrl__data_804FF700_size[sizeof(RecoveredGlobal_80069258_TCameraCtrl__data_804FF700) == 0xC0 ? 1 : -1];
typedef char RecoveredGlobal_80069258_main_task_size[sizeof(RecoveredGlobal_80069258_main_task) == 0x34 ? 1 : -1];
typedef char RecoveredGlobal_800695E8_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_800695E8_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80069304_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_80069304_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8006961C_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634_size[sizeof(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634) == 0x48 ? 1 : -1];
typedef char RecoveredGlobal_8006961C_lbl_8058CA60_size[sizeof(RecoveredGlobal_8006961C_lbl_8058CA60) == 0x58 ? 1 : -1];
typedef char RecoveredGlobal_80069A6C_camera_controller_registry_size[sizeof(RecoveredGlobal_80069A6C_camera_controller_registry) == 0x68 ? 1 : -1];
typedef char RecoveredGlobal_80069A6C_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_80069A6C_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80069C94_camera_controller_registry_size[sizeof(RecoveredGlobal_80069C94_camera_controller_registry) == 0x68 ? 1 : -1];
typedef char RecoveredGlobal_80069C94_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_80069C94_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80069D04_camera_controller_registry_size[sizeof(RecoveredGlobal_80069D04_camera_controller_registry) == 0x68 ? 1 : -1];
typedef char RecoveredGlobal_80069D04_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_80069D04_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];

}
