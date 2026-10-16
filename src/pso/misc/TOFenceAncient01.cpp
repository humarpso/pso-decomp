#include "types.h"
#include "pso/misc/TOFenceAncient01.h"
#include "pso/player/TUnk_804B1B80.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void vfunc_14__16TOFenceAncient01Fv(void* p);
void vfunc_15__16TOFenceAncient01Fv(void* p);
void vfunc_16__16TOFenceAncient01Fv(void);
void vfunc_14__13TUnk_804B1B80Fv(void);
void vfunc_15__13TUnk_804B1B80Fv(void);
void vfunc_16__13TUnk_804B1B80Fv(void);

int set_indexed_flags(void*, void*, void*);

void TUnk_804B1B80::vfunc_14() {  }
void TUnk_804B1B80::vfunc_15() {  }
void TUnk_804B1B80::vfunc_16() {  }
void TOFenceAncient01::vfunc_16() {  }
void TOFenceAncient01::vfunc_15() { *(int*)((char*)this + 0xac) = 0; *(int*)((char*)this + 0xd0) = 0; ((TObjPlayer *)this)->clear_player_status_flag((s32)((void*)0), (u32)((void*)8)); }
void TOFenceAncient01::vfunc_14() { *(int*)((char*)this + 0xac) = 1; *(int*)((char*)this + 0xd0) = 1; set_indexed_flags(this, (void*)0, (void*)8); }

}
