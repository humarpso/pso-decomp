#include "types.h"

extern "C" {

void TOMineIcon01__vt82(void);
s16 TOMineTrap__sub_80171340(void* p);
void TOMineTrap__sub_80171348(void* p, s16 v);
int TOMineTrap__sub_80171350(void);
u16 TOMineTrap__sub_80171358(void* p);
void TOMineTrap__sub_80171380(void);
void TOMineTrap__sub_8017141C(void* p);
int TOMineTrap__vt18(void);
int TOMineTrap__vt19(void);
void bswap_6x80_trigger_trap__10TOMineTrapFPv(void* p);
void fn_80171314(void* p);
int get_trap_count__10TOMineTrapFv(void);
u16 get_trap_type__10TOMineTrapFPv(void* p);
void send_and_handle_60__10TOMineTrapFPv(void* p);
void set_instance__10TOMineTrapFi(int a0);
void set_trap_count__10TOMineTrapFi(int a0);
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void*);
int check_flag__10TObjPlayerFPvi(void*, void*);
int read_be16_field2__10TObjPlayerFPv(void*);

void fn_80171314(void* p) { check_flag__10TObjPlayerFPvi(p, (void*)65536); }
u16 get_trap_type__10TOMineTrapFPv(void* p) { return *(u16*)((char*)p + 0x2d8); }
s16 TOMineTrap__sub_80171340(void* p) { return *(s16*)((char*)p + 0x326); }
void TOMineTrap__sub_80171348(void* p, s16 v) { *(s16*)((char*)p + 0x2d8) = v; }

    extern int lbl_805D3078;
int TOMineTrap__sub_80171350(void) {  return lbl_805D3078; }

u16 TOMineTrap__sub_80171358(void* p) { return *(u16*)((char*)p + 0x37e); }

    extern int lbl_805D5A54;
int get_trap_count__10TOMineTrapFv(void) {  return lbl_805D5A54; }

    extern int lbl_805D3078;
void set_instance__10TOMineTrapFi(int a0) { lbl_805D3078 = a0; }

    extern int lbl_805D5A54;
void set_trap_count__10TOMineTrapFi(int a0) { lbl_805D5A54 = a0; }

void TOMineTrap__sub_80171380(void) {  }

int TOMineTrap__vt18(void) { return 0; }
int TOMineTrap__vt19(void) { return 0; }

void bswap_6x80_trigger_trap__10TOMineTrapFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void send_and_handle_60__10TOMineTrapFPv(void* p) { bswap_6x80_trigger_trap__10TOMineTrapFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void TOMineTrap__sub_8017141C(void* p) { *(u8*)((char*)p + 0x0) = 128; *(u8*)((char*)p + 0x1) = 2; }

void TOMineIcon01__vt82(void) {  }

}
