#include "types.h"

extern "C" {

int TOMineTrap__sub_80171350(void);
u16 TOMineTrap__sub_80171358(void* p);
int get_trap_count__10TOMineTrapFv(void);

    extern int lbl_805D3078;
int TOMineTrap__sub_80171350(void) {  return lbl_805D3078; }

u16 TOMineTrap__sub_80171358(void* p) { return *(u16*)((char*)p + 0x37e); }

    extern int lbl_805D5A54;
int get_trap_count__10TOMineTrapFv(void) {  return lbl_805D5A54; }

}
