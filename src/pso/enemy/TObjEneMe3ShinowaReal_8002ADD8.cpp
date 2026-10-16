#include "types.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/enemy/TObjEneMe3ShinowaReal.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/misc/TWindowKeyBoardHard.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
s32 fn_8002AE08(void *p);
}

extern "C" {

int TLobby__send_and_handle_60(void*);
f64 floor();
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

int TObjEneDD::get_flag_b4() { return (*(u32*)((char*)this + 0xb0) >> 4) & 0x1; }

f32 TObjEneMe3ShinowaReal::get_random_float() {
    return (f32) floor();
}
s32 fn_8002AE08(void *p) {
    return ((TBoss8Dragon *)p)->test_card_flag_2() ? 0x20000 : 0x10000;
}

}
