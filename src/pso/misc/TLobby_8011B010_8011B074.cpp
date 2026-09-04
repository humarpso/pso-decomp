#include "types.h"

extern "C" {

void* init_bosses__6TLobbyFPv(void* a0);
int TLobby__sub_8011AFB8(void);
int alloc_buffer__11TOBoss4RockFPv(void*);

    extern int lbl_805D54E0;
    extern int lbl_805D54E4;
    extern int lbl_805D54E8;
    extern int lbl_805D54EC;
void* init_bosses__6TLobbyFPv(void* a0) { lbl_805D54EC = alloc_buffer__11TOBoss4RockFPv((void*)48); lbl_805D54E8 = alloc_buffer__11TOBoss4RockFPv((void*)48); TLobby__sub_8011AFB8(); lbl_805D54E0 = 0; lbl_805D54E4 = 0; return a0; }

}
