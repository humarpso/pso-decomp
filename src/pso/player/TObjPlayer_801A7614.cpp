#include "types.h"

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

int TObjPlayer__sub_801A7680(void) { return 0; }

void free_photon__10TObjPlayerFPv(void* p) { void* m = *(void**)((char*)p + 0x148); if (m) free__11TOBoss4RockFUi(m); }

int update_all_default__8TFogCtrlFv(void) { return update_all__8TFogCtrlFi((void*)(0)); }
void apply_all_default__8TFogCtrlFv(void) { apply_all__8TFogCtrlFii((void*)63, (void*)0); }

}
