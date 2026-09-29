#include "types.h"

struct PhotonAttachment_801A7638;
struct PhotonDrawOwner_801A7638 {
    u8 unknown00[0x100];
    s32 binding_count;
    u8 unknown104[0x44];
    PhotonAttachment_801A7638 *bindings;
};

struct PhotonDrawContext_801A7638 { PhotonAttachment_801A7638 *bindings; s32 binding_count; };

extern "C" {
extern s32 lbl_805D5D10;
extern PhotonDrawContext_801A7638 lbl_8050E578[];
void fn_801A7578();
int set_global_state__16TObjEneRe7BeruraFi(void*);
void TObjPlayer__sub_801A7638(PhotonDrawOwner_801A7638 *self);
}

extern "C" {

int TObjPlayer__sub_801A7680(void);
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
    set_global_state__16TObjEneRe7BeruraFi((void*)fn_801A7578);
}

int TObjPlayer__sub_801A7680(void) { return 0; }

void free_photon__10TObjPlayerFPv(void* p) { void* m = *(void**)((char*)p + 0x148); if (m) free__11TOBoss4RockFUi(m); }

int update_all_default__8TFogCtrlFv(void) { return update_all__8TFogCtrlFi((void*)(0)); }
void apply_all_default__8TFogCtrlFv(void) { apply_all__8TFogCtrlFii((void*)63, (void*)0); }

}
