#include "types.h"

extern "C" {

void* TLobby__sub_8011B074(void* a0);
int TLobby__sub_8011AFB8(void);
int TOBoss4Rock__sub_80147AA8(void*);

    extern int lbl_805D54E0;
    extern int lbl_805D54E4;
    extern int lbl_805D54E8;
    extern int lbl_805D54EC;
void* TLobby__sub_8011B074(void* a0) { lbl_805D54EC = TOBoss4Rock__sub_80147AA8((void*)48); lbl_805D54E8 = TOBoss4Rock__sub_80147AA8((void*)48); TLobby__sub_8011AFB8(); lbl_805D54E0 = 0; lbl_805D54E4 = 0; return a0; }

}
