#include "types.h"

extern "C" {

void set_lock_timer__10TObjPlayerFPvi(void* p, s32 v);
int clear_target_lock_flag__10TObjPlayerFPv(void* p);
int set_lock_flag__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801C6F90(void* p);
void TObjPlayer__sub_801C6FB4(void* p, s32 v);
void TObjPlayer__sub_801C6FBC(void* p, s16 v);
void set_stat_scale__10TObjPlayerFPvf(void* p, f32 v);
void TObjPlayer__sub_801C6FCC(void* p, f32 v);
void set_ring_action__10TObjPlayerFPvi(void* p, s32 v);
void TObjPlayer__sub_801C6FDC(void);
void TObjPlayer__sub_801C6FE0(void* p, f32 a, f32 b, f32 c);
u16 get_obj_type__10TObjPlayerFPv(void* p);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);

int clear_target_lock_flag__10TObjPlayerFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi(p, 1); }
int set_lock_flag__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8001BEF8(p, 1); }
int TObjPlayer__sub_801C6F90(void* p) { return TObjPlayer__sub_8001BEF8(p, 2); }

}
