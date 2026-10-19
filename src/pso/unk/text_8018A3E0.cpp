#include "types.h"
#include "pso/system/BmlResourceDescriptor.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TMotorcycle.h"
#include "pso/misc/TLanguage_801E4874.h"
#include "pso/object/TObjSeabedSuisoBrakable.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct ForestBoxCollisionBody_8018A3E0 {
    f32 center[3];
    f32 radius;
    f32 height;
    u32 unknown_14;
    u32 flags;
    u32 unknown_1c[4];
};

struct ForestBoxBreakParam_8018A3E0 {
    f32 f0[3];
    f32 offset[3];
    f32 scale[3];
    s32 f24;
    s32 f28;
    s32 f2c;
    s32 count;
    s32 f34;
    f32 f38;
    f32 f3c;
    s32 f40;
    s32 texture;
    s32 f48;
};

typedef char ForestBoxCollisionBody_8018A3E0_size[sizeof(ForestBoxCollisionBody_8018A3E0) == 0x2C ? 1 : -1];
typedef char ForestBoxBreakParam_8018A3E0_size[sizeof(ForestBoxBreakParam_8018A3E0) == 0x4C ? 1 : -1];

extern "C" {
extern const char lbl_80444B90[];
extern const char lbl_80444BAC[];
extern const char lbl_80444BC0[];
extern const char lbl_80444BDC[];
extern const char lbl_80444BF8[];
extern const char lbl_80444C10[];
extern const char lbl_80444C28[];
extern const char lbl_80444C3C[];
extern const char lbl_80444C54[];
extern const char lbl_80444C6C[];
extern const char lbl_80444C8C[];
extern const char lbl_80444CA4[];
extern const char lbl_80444CC4[];
extern const char lbl_80444CDC[];
extern const char lbl_80444D00[];
extern const char lbl_80444D24[];
extern const char lbl_80444D40[];
extern const char lbl_80444F58[];
extern const char lbl_80444F6C[];
extern const char lbl_80444F80[];
extern const char *lbl_805D32D8[];
extern const char *lbl_805D32DC[];
extern const char *lbl_805D32E0[];
extern const char *lbl_805D32E4[];
extern const f32 lbl_805DBD0C;
extern const f32 lbl_805DBCF4;
extern void *lbl_805D5B78;
extern s32 lbl_805D5B7C;
extern ForestBoxBreakParam_8018A3E0 *lbl_805D5B80;
extern ForestBoxBreakParam_8018A3E0 *lbl_805D5B84;
void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *get_bml_model(void *bundle, s32 index);
s32 get_container_param(s32 kind);
void load_forest_box_resources(void);
}

const char *fe_obj_hako01_hahen02_model_names[4] = {
    lbl_80444B90, lbl_80444BAC, lbl_80444BC0, NULL,
};

BmlResourceDescriptor fe_obj_hako01_hahen02_resource_descriptor = {
    lbl_80444BDC, fe_obj_hako01_hahen02_model_names, lbl_805D32D8, 3, 0,
};

const char *fe_obj_con_hahen1_model_names[5] = {
    lbl_80444BF8, lbl_80444C10, lbl_80444C28, lbl_80444C3C, NULL,
};

BmlResourceDescriptor fe_obj_con_hahen1_resource_descriptor = {
    lbl_80444C54, fe_obj_con_hahen1_model_names, lbl_805D32DC, 4, 0,
};

const char *bm_obj_seabed_con_model_names[4] = {
    lbl_80444C6C, lbl_80444C8C, lbl_80444CA4, NULL,
};

BmlResourceDescriptor bm_obj_seabed_con_resource_descriptor = {
    lbl_80444CC4, bm_obj_seabed_con_model_names, lbl_805D32E0, 3, 0,
};

const char *bm_obj_seabed_con_rare_model_names[4] = {
    lbl_80444CDC, lbl_80444D00, lbl_80444D24, NULL,
};

BmlResourceDescriptor bm_obj_seabed_con_rare_resource_descriptor = {
    lbl_80444D40, bm_obj_seabed_con_rare_model_names, lbl_805D32E4, 3, 0,
};

ForestBoxCollisionBody_8018A3E0 forest_box_collision_body_parts = {
    { 0.0f, 6.0f, 0.0f }, 9.0f, 9.0f, 0, 0x38003, { 0, 0, 0, 0 },
};

ForestBoxBreakParam_8018A3E0 forest_box_break_params[4] = {
    { { 0.5f, 0.03f, 0.2f }, { 0.0f, 0.0f, 0.0f }, { 3.0f, 5.0f, 3.0f }, 0x800, 0x100, 0x800, 7, 0x32, 0.0f, 1.0f, 0, 0, 0x16 },
    { { 0.5f, 0.03f, 0.19f }, { 0.0f, 0.0f, 0.0f }, { 3.5f, 5.0f, 3.5f }, 0x400, 0x100, 0x400, 5, 0x32, 0.0f, 1.0f, 0, 0, 0x16 },
    { { 0.5f, 0.03f, 0.2f }, { 0.0f, 0.0f, 0.0f }, { 3.0f, 5.0f, 3.0f }, 0x800, 0x100, 0x800, 7, 0x32, 0.0f, 0.5f, 0, 0, 0x16 },
    { { 0.5f, 0.03f, 0.19f }, { 0.0f, 0.0f, 0.0f }, { 3.5f, 5.0f, 3.5f }, 0x400, 0x100, 0x400, 5, 0x32, 0.0f, 0.5f, 0, 0, 0x16 },
};

void load_forest_box_resources(void) {
    void *bundle;
    u32 *node;
    lbl_805D5B78 = NULL;
    lbl_805D5B7C = 0;
    switch (TOKeyMachine01::get_global_state()) {
    case 28:
    case 29:
    case 31:
        bundle = (void *)((TAdSinglePlyChrSelectGC *)0x440)->alloc();
        if (bundle != NULL) {
            bundle = load_resource_from_descriptor(bundle, 5, &bm_obj_seabed_con_resource_descriptor, 0, 0, 0);
        }
        lbl_805D5B78 = bundle;
        lbl_805D5B7C = (s32)load_gvm_texture_file((s32)lbl_80444F58);
        lbl_805D5B80 = &forest_box_break_params[2];
        lbl_805D5B84 = &forest_box_break_params[3];
        node = (u32 *)((TObjSeabedSuisoBrakable *)get_bml_model(lbl_805D5B78, 1))->count_linked_switches(2);
        if (node != NULL) {
            *node |= 0x100000;
        }
        break;
    default:
        bundle = (void *)((TAdSinglePlyChrSelectGC *)0x440)->alloc();
        if (bundle != NULL) {
            bundle = load_resource_from_descriptor(bundle, 5, &fe_obj_hako01_hahen02_resource_descriptor, 0, 0, 0);
        }
        lbl_805D5B78 = bundle;
        lbl_805D5B7C = TLobby::is_online_ready() != 0 ? (s32)load_gvm_texture_file((s32)lbl_80444F6C) : (s32)load_gvm_texture_file((s32)lbl_80444F80);
        lbl_805D5B80 = &forest_box_break_params[0];
        lbl_805D5B84 = &forest_box_break_params[1];
        break;
    }
    TMotorcycle::add_entry(1, get_container_param(1), lbl_805D5B7C, lbl_805DBD0C, lbl_805DBCF4);
}
