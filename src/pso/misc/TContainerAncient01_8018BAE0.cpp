#include "types.h"
#include "pso/misc/TContainerAncient01.h"
#include "pso/enemy/TObjEneMe3Stelth.h"

struct Param_8018BB64 { s32 a; s32 b; s32 c; s32 d; };

struct Res_8018BB64 { u8 pad[0x430]; s32 x430; };

extern "C" {
s32 TObjFish__sub_8001EDB0(u32, int);
s32 get_bml_model(u32, int);
void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFv(s32);
extern Param_8018BB64 container_ancient_anim_binding[];
extern u8 TContainerAncient01__resource_descriptor[];
extern u8 TContainerAncient01__resource_descriptor_2[];
extern s32 TContainerAncient01__effect_id_table[];
extern u32 TContainerAncient01__bml_resource;
extern const f32 TContainerAncient01__data_805DBD14;
extern const f32 TContainerAncient01__data_805DBD20;
}

extern "C" {

void *TContainerAncient01__ct(void *, void *, void *);
void TLobby__sub_8001FE7C(void*, int);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TContainerAncient01::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x370);
    if (o != NULL) {
        o = TContainerAncient01__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TContainerAncient01__bml_resource;

void TContainerAncient01::release_static_resource() {
    if ((u32) TContainerAncient01__bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TContainerAncient01__bml_resource, 1);
        TContainerAncient01__bml_resource = 0U;
    }
}
void TContainerAncient01::load_resources() {
    void *p;
    TContainerAncient01__bml_resource = 0;
    if (TContainerAncient01::is_global_state_in_table() != 0) {
        p = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 5, TContainerAncient01__resource_descriptor_2, 0, 0, 0);
        }
        TContainerAncient01__effect_id_table[0] = 0x230;
        TContainerAncient01__bml_resource = (u32)p;
        TContainerAncient01__effect_id_table[1] = 0x231;
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 5, TContainerAncient01__resource_descriptor, 0, 0, 0);
        }
        TContainerAncient01__effect_id_table[0] = 0x45;
        TContainerAncient01__bml_resource = (u32)p;
        TContainerAncient01__effect_id_table[1] = 0x46;
    }
    Param_8018BB64 prm = container_ancient_anim_binding[0];
    prm.a = ((Res_8018BB64 *)TContainerAncient01__bml_resource)->x430;
    TObjEneMe3Stelth::spawn_attack((s16)0x3B, (s32)(get_bml_model(TContainerAncient01__bml_resource, 0)), (s32)(TObjFish__sub_8001EDB0(TContainerAncient01__bml_resource, 0)), (s32)(&prm), (f32)TContainerAncient01__data_805DBD20, (f32)TContainerAncient01__data_805DBD14);
}

}
