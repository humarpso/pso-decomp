#include "types.h"
#include "pso/misc/TOMineIcon01.h"
#include "pso/misc/TOMine.h"
#include "pso/misc/TOMineTrap.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
extern f32 lbl_805D307C;
void TOMineTrap__sub_80171368(f32 farg0);
bool TOMineTrap__vt18(u8 *arg0, s32 arg1);
bool TOMineTrap__vt19(u8 *arg0, s32 arg1);
}

extern "C" {

void vfunc_84__12TOMineIcon01Fv(void);
s16 TOMineTrap__sub_80171340(void* p);
void TOMineTrap__sub_80171348(void* p, s16 v);
int TOMineTrap__sub_80171350(void);
u16 TOMineTrap__sub_80171358(void* p);
void vfunc_84__6TOMineFv(void);
void TOMineTrap__sub_8017141C(void* p);
void fn_80171314(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFv(void*);

void fn_80171314(void* p) { ((TObjPlayer *)p)->check_flag((s32)((void*)65536)); }
u16 TOMineTrap::get_trap_type() { return *(u16*)((char*)this + 0x2d8); }
s16 TOMineTrap__sub_80171340(void* p) { return *(s16*)((char*)p + 0x326); }
void TOMineTrap__sub_80171348(void* p, s16 v) { *(s16*)((char*)p + 0x2d8) = v; }

    extern int mine_trap_instance_id;
int TOMineTrap__sub_80171350(void) {  return mine_trap_instance_id; }

u16 TOMineTrap__sub_80171358(void* p) { return *(u16*)((char*)p + 0x37e); }

    extern int mine_trap_count;
int TOMineTrap::get_trap_count() {  return mine_trap_count; }

    extern int mine_trap_instance_id;

void TOMineTrap__sub_80171368(f32 farg0) {
    lbl_805D307C = farg0;
}

void TOMineTrap::set_instance(int a0) { mine_trap_instance_id = a0; }

    extern int mine_trap_count;
void TOMineTrap::set_trap_count(int a0) { mine_trap_count = a0; }

void TOMine::vfunc_84() {  }

bool TOMineTrap__vt18(u8 *arg0, s32 arg1) {
    return arg1 != *(s32 *)((s8 *)arg0 + 0x2A8);
}

bool TOMineTrap__vt19(u8 *arg0, s32 arg1) {
    return arg1 != *(s32 *)((s8 *)arg0 + 0x2A8);
}

void TOMineTrap::bswap_6x80_trigger_trap() { read_be16_field2__10TObjPlayerFv(this); bswap_16__FPUs((char*)this + 0x4); bswap_16__FPUs((char*)this + 0x6); }
void TOMineTrap::send_and_handle_60() { bswap_6x80_trigger_trap(); TLobby__send_and_handle_60(this); }

void TOMineTrap__sub_8017141C(void* p) { *(u8*)((char*)p + 0x0) = 128; *(u8*)((char*)p + 0x1) = 2; }

void TOMineIcon01::vfunc_84() {  }

}
