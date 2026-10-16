#include "types.h"
#include "pso/misc/TOFenceAncient01.h"
#include "pso/player/TUnk_804B1B80.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int set_indexed_flags(void*, void*, void*);

void TUnk_804B1B80::vfunc_14() {  }
void TUnk_804B1B80::vfunc_15() {  }
void TUnk_804B1B80::vfunc_16() {  }
void TOFenceAncient01::vfunc_16() {  }
void TOFenceAncient01::vfunc_15() { *(int*)((char*)this + 0xac) = 0; *(int*)((char*)this + 0xd0) = 0; ((TObjPlayer *)this)->clear_player_status_flag((s32)((void*)0), (u32)((void*)8)); }
void TOFenceAncient01::vfunc_14() { *(int*)((char*)this + 0xac) = 1; *(int*)((char*)this + 0xd0) = 1; set_indexed_flags(this, (void*)0, (void*)8); }

}
