#include "types.h"

extern "C" {

void close_window__16TObjOnlineEndingFPv(void* p);
void* get_attack_entry__16TObjOnlineEndingFi(int a0);
int get_instance__16TObjOnlineEndingFv(void);
int TWindow__close(void*);

    extern int lbl_805D5878;
int get_instance__16TObjOnlineEndingFv(void) {  return lbl_805D5878; }

    extern unsigned char lbl_8050DAD0[];
void* get_attack_entry__16TObjOnlineEndingFi(int a0) {  return (char*)lbl_8050DAD0 + a0 * 8; }

void close_window__16TObjOnlineEndingFPv(void* p) { if (*(unsigned int*)((char*)p + 0x154) != 0) { TWindow__close(*(void**)((char*)p + 0x154)); *(int*)((char*)p + 0x154) = 0; } }

}
