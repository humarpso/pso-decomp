#include "types.h"
#include "pso/unk/text_800F9B84.h"
#include "pso/unk/text_80082910.h"
#include "pso/misc/TLobby.h"
struct C_80082AA8 { s32 v; };

struct B_80082AA8 { u8 pad[0xc]; C_80082AA8 *c; };

struct E_80082AA8 { u32 a; u32 b; B_80082AA8 *node; };

struct Vec_80082954 { s32 x, y, z; };

struct Copy_80082954 {
    struct Vec_80082954 **animation;
    struct Vec_80082954 **destination;
    s32 frame;
    s32 slot;
};

struct Vec_800829E0 { s32 x, y, z; };

struct Copy_800829E0 {
    struct Vec_800829E0 **animation;
    struct Vec_800829E0 **destination;
    s32 frame;
    s32 slot;
};

extern E_80082AA8 *shared_effect_texture_list[];
extern s32 particle_texture_id_table[];
extern void *lbl_805D4ED8;
extern char lbl_80438EF8[];
extern void *const lbl_80438EE8[];
extern "C" {
void bind_gvm_texture_list(const char *name, void *data);
void copy_slot_to_anim_frame(struct Copy_80082954 *c);
void fn_800829E0(struct Copy_800829E0 *c);
void fn_80082A6C(void);
void TLobby__sub_803DA16C(void *);
}

s32 find_particle_texture_index(s32 id) {
    s32 r = 0;
    s32 i;
    for (i = 0; i < 0x36; i++) {
        if (id == particle_texture_id_table[i]) {
            r = i;
            break;
        }
    }
    return r;
}

void copy_slot_to_anim_frame(struct Copy_80082954 *c) {
    (*c->animation)[c->frame].z = (*c->destination)[c->slot].z;
    (*c->animation)[c->frame].y = (*c->destination)[c->slot].y;
    (*c->animation)[c->frame].x = (*c->destination)[c->slot].x;
}

void fn_800829E0(struct Copy_800829E0 *c) {
    (*c->destination)[c->slot].z = (*c->animation)[c->frame].z;
    (*c->destination)[c->slot].y = (*c->animation)[c->frame].y;
    (*c->destination)[c->slot].x = (*c->animation)[c->frame].x;
}

void fn_80082A6C(void) {
    TLobby__sub_803DA16C(lbl_80438EE8[0]);
    TLobby::free_nodes_with_id((u32)lbl_805D4ED8);
    lbl_805D4ED8 = 0;
}

void load_critical_effect_resources(void) {
    E_80082AA8 *e;
    s32 i;
    lbl_805D4ED8 = (void *)create_named_object((s32)lbl_80438EF8);
    bind_gvm_texture_list((const char *)lbl_80438EE8[1], lbl_80438EE8[0]);
    e = shared_effect_texture_list[0];
    for (i = 0; i < 0x36; i++) {
        particle_texture_id_table[i] = e[i].node->c->v;
    }
}
