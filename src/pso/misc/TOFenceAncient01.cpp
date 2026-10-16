#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TOFenceAncient01__vt12(void* p);
void TOFenceAncient01__vt13(void* p);
void TOFenceAncient01__vt14(void);
void TOFenceAncient01__sub_80166AF4(void);
void TOFenceAncient01__sub_80166AF8(void);
void TOFenceAncient01__sub_80166AFC(void);

int set_indexed_flags(void*, void*, void*);

void TOFenceAncient01__sub_80166AF4(void) {  }
void TOFenceAncient01__sub_80166AF8(void) {  }
void TOFenceAncient01__sub_80166AFC(void) {  }
void TOFenceAncient01__vt14(void) {  }
void TOFenceAncient01__vt13(void* p) { *(int*)((char*)p + 0xac) = 0; *(int*)((char*)p + 0xd0) = 0; ((TObjPlayer *)p)->clear_player_status_flag((s32)((void*)0), (u32)((void*)8)); }
void TOFenceAncient01__vt12(void* p) { *(int*)((char*)p + 0xac) = 1; *(int*)((char*)p + 0xd0) = 1; set_indexed_flags(p, (void*)0, (void*)8); }

}
