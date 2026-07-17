#include "types.h"

extern "C" {

int clear_player_status_flag__10TObjPlayerFPviUi(void*, void*, void*);
int set_indexed_flags(void*, void*, void*);
void TOFenceAncient02__vt13(void* p);
void TOFenceAncient02__vt12(void* p);
void TOFenceAncient02__vt14(void);

void TOFenceAncient02__vt14(void) {  }
void TOFenceAncient02__vt13(void* p) { *(int*)((char*)p + 0xac) = 0; *(int*)((char*)p + 0xd0) = 0; clear_player_status_flag__10TObjPlayerFPviUi(p, (void*)0, (void*)8); }
void TOFenceAncient02__vt12(void* p) { *(int*)((char*)p + 0xac) = 1; *(int*)((char*)p + 0xd0) = 1; set_indexed_flags(p, (void*)0, (void*)8); }

}
