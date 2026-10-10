#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 is_valid_player_motion_variant(u32 arg0);
u8 TLobby__sub_802A7278(u32 arg0);
int match_coordinate_pair(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TObjSeabedSuisoBrakable__vt17(void);
void free_static_resources__23TObjSeabedSuisoBrakableFv(void);
int get_break_data__23TObjSeabedSuisoBrakableFi(int a0);
int get_table0_entry__23TObjSeabedSuisoBrakableFi(int a0);
int get_table1_entry__23TObjSeabedSuisoBrakableFi(int a0);
void TLobby__sub_8001FE7C(void*, int);
void TLobby__sub_802A7318(void* p);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

struct Tbl_802A6F98 { s32 w[5]; };
struct Brk_802A6F98 { s32 a[5]; s32 b[3]; s32 *c[3]; };

void *get_bml_model(u32, int);
u32 load_resource_from_descriptor(void *, int, void *, int, int, int);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 count_linked_switches__23TObjSeabedSuisoBrakableFUii(void *, int);
u32 load_gvm_texture_file(void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 find_entry_by_name__12TObjDoorJungFPvPv(u32, s32);
extern Tbl_802A6F98 seabed_suiso_texture_name_table;
extern Tbl_802A6F98 lbl_80466C80;
extern M2C_UNK lbl_80466CE0[];
extern M2C_UNK lbl_80466CF8[];
extern M2C_UNK bm_obj_seabed_suiso_resource_descriptor[];
extern M2C_UNK bm_obj_seabed_suiso_2_resource_descriptor[];

int TObjSeabedSuisoBrakable__break_model_entries[5];
int TObjSeabedSuisoBrakable__model12_render_nodes[3];
int lbl_80540AE0[4];

extern u32 TObjSeabedSuisoBrakable__resource_bundle;
extern u32 lbl_805D6674;

void free_static_resources__23TObjSeabedSuisoBrakableFv(void) {
    if ((u32) lbl_805D6674 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6674);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6674);
        lbl_805D6674 = 0U;
    }
    if ((u32) TObjSeabedSuisoBrakable__resource_bundle != 0U) {
        TLobby__sub_8001FE7C((void*)TObjSeabedSuisoBrakable__resource_bundle, 1);
        TObjSeabedSuisoBrakable__resource_bundle = 0U;
    }
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void load_resources__23TObjSeabedSuisoBrakableFv(void) {
    s32 i;
    void *p;
    void *item;
    s32 **ptrs;
    Tbl_802A6F98 t1;
    Tbl_802A6F98 t2;

    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 0x1D:
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = (void *)load_resource_from_descriptor(p, 1, bm_obj_seabed_suiso_2_resource_descriptor, 0, 0, 0);
        }
        TObjSeabedSuisoBrakable__resource_bundle = (u32)p;
        if ((lbl_805D6674 = load_gvm_texture_file(lbl_80466CE0)) != 0) {
            t1 = seabed_suiso_texture_name_table;
            for (i = 0; i < 5; i++) {
                TObjSeabedSuisoBrakable__break_model_entries[i] = find_entry_by_name__12TObjDoorJungFPvPv(lbl_805D6674, t1.w[i]);
            }
        }
        break;
    case 0x1C:
    default:
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = (void *)load_resource_from_descriptor(p, 1, bm_obj_seabed_suiso_resource_descriptor, 0, 0, 0);
        }
        TObjSeabedSuisoBrakable__resource_bundle = (u32)p;
        if ((lbl_805D6674 = load_gvm_texture_file(lbl_80466CF8)) != 0) {
            t2 = lbl_80466C80;
            for (i = 0; i < 5; i++) {
                TObjSeabedSuisoBrakable__break_model_entries[i] = find_entry_by_name__12TObjDoorJungFPvPv(lbl_805D6674, t2.w[i]);
            }
        }
        break;
    }
    if ((item = get_bml_model(TObjSeabedSuisoBrakable__resource_bundle, 0xC)) != NULL) {
        TObjSeabedSuisoBrakable__model12_render_nodes[0] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(item, 1);
        TObjSeabedSuisoBrakable__model12_render_nodes[1] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(item, 2);
        TObjSeabedSuisoBrakable__model12_render_nodes[2] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(item, 4);
    }
    if ((p = get_bml_model(TObjSeabedSuisoBrakable__resource_bundle, 0xD)) != NULL) {
        lbl_80540AE0[0] = (int) count_linked_switches__23TObjSeabedSuisoBrakableFUii(p, 1);
        lbl_80540AE0[1] = (int) count_linked_switches__23TObjSeabedSuisoBrakableFUii(p, 2);
        lbl_80540AE0[2] = (int) count_linked_switches__23TObjSeabedSuisoBrakableFUii(p, 3);
        ptrs = (s32 **)lbl_80540AE0;
        for (i = 0; i < 3; i++) {
            if (ptrs[i] != NULL) {
                *ptrs[i] |= 0x100000;
            }
        }
    }
}
extern int fold_flush_802A6F98;
#pragma pop

    extern int TObjSeabedSuisoBrakable__break_model_entries[];
int get_break_data__23TObjSeabedSuisoBrakableFi(int a0) {  return TObjSeabedSuisoBrakable__break_model_entries[a0]; }

    extern int TObjSeabedSuisoBrakable__model12_render_nodes[];
int get_table0_entry__23TObjSeabedSuisoBrakableFi(int a0) {  return TObjSeabedSuisoBrakable__model12_render_nodes[a0]; }

    extern int lbl_80540AE0[];
int get_table1_entry__23TObjSeabedSuisoBrakableFi(int a0) {  return lbl_80540AE0[a0]; }

void TObjSeabedSuisoBrakable__vt17(void) {  }

int match_coordinate_pair(u8 *arg0, s32 arg1, s32 arg2) {
    u8 var_r6;
    var_r6 = 0;
    if ((arg1 == (s32) M2C_FIELD(arg0, s32 *, 0)) && (arg2 == (s32) M2C_FIELD(arg0, s32 *, 4))) {
        var_r6 = 1;
    }
    return var_r6;
}

u8 is_valid_player_motion_variant(u32 arg0) {
    return (u8) (arg0 < 0x13U);
}

u8 TLobby__sub_802A7278(u32 arg0) {
    return (u8) (arg0 < 6U);
}

}
