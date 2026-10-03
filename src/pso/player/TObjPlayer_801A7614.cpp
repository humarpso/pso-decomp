#include "types.h"

struct PhotonAttachment_801A7638;
struct PhotonDrawOwner_801A7638 {
    u8 unknown00[0x100];
    s32 binding_count;
    u8 unknown104[0x44];
    PhotonAttachment_801A7638 *bindings;
};

struct PhotonDrawContext_801A7638 { PhotonAttachment_801A7638 *bindings; s32 binding_count; };

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef struct Vec_801A7680 { f32 x, y, z; } Vec_801A7680;

struct Eff_801A7680 {
    void *obj;
    Vec_801A7680 pos;
    s32 flag;
    u8 pad[0x20 - 0x14];
};

struct Self_801A7680 {
    u8 pad0[0x38];
    Vec_801A7680 pos;
    u8 pad1[0x100 - 0x44];
    u32 count;
    u8 pad2[0x148 - 0x104];
    struct Eff_801A7680 *effects;
};

extern "C" {
extern s32 lbl_805D5D10;
extern PhotonDrawContext_801A7638 lbl_8050E578[];
void publish_photon_blast_joint_origins();
int set_global_state__16TObjEneRe7BeruraFi(void*);
void TObjPlayer__sub_801A7638(PhotonDrawOwner_801A7638 *self);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
void update_photon_blast_attachments(struct Self_801A7680 *self);
}

extern "C" {

void apply_all_default__8TFogCtrlFv(void);
int clear_render_context__10TObjPlayerFv(void);
void free_photon__10TObjPlayerFPv(void* p);
int update_all_default__8TFogCtrlFv(void);
int apply_all__8TFogCtrlFii(void*, void*);
int free__11TOBoss4RockFUi(void*);
int set_global_state__16TObjEneRe7BeruraFi(void*);
int update_all__8TFogCtrlFi(void*);

int clear_render_context__10TObjPlayerFv(void) { return set_global_state__16TObjEneRe7BeruraFi((void*)(0)); }

void TObjPlayer__sub_801A7638(PhotonDrawOwner_801A7638 *self) {
    lbl_805D5D10=0;
    lbl_8050E578[0].bindings=self->bindings;
    lbl_8050E578[0].binding_count=self->binding_count;
    set_global_state__16TObjEneRe7BeruraFi((void*)publish_photon_blast_joint_origins);
}

void update_photon_blast_attachments(struct Self_801A7680 *self) {
    u32 i;
    struct Eff_801A7680 *e;
    for (i = 0; i < self->count; i++) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(self->effects[i].obj) == 0) {
            self->effects[i].obj = NULL;
        }
        e = &self->effects[i];
        if (e->obj != NULL) {
            if (e->flag >= 0) {
                copy_pos__11TNowLoadingFPvPv(e->obj, &e->pos);
            } else {
                copy_pos__11TNowLoadingFPvPv(e->obj, &self->pos);
            }
        }
    }
}

void free_photon__10TObjPlayerFPv(void* p) { void* m = *(void**)((char*)p + 0x148); if (m) free__11TOBoss4RockFUi(m); }

int update_all_default__8TFogCtrlFv(void) { return update_all__8TFogCtrlFi((void*)(0)); }
void apply_all_default__8TFogCtrlFv(void) { apply_all__8TFogCtrlFii((void*)63, (void*)0); }

}
