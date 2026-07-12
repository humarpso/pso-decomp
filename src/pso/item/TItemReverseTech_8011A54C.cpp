#include "types.h"

extern "C" {

void TItemReverseTech__sub_8011A54C(void* a0);
int TItemReverseTech__sub_8011A55C(void);
int TItemReverseTech__sub_8011A580(void);
void TItemReverseTech__sub_8011A5A4(void);
int TLobby__sub_80336E54(void*);

    extern const float lbl_805DAC4C;
void TItemReverseTech__sub_8011A54C(void* a0) { *(float*)((char*)a0 + 0x20) = lbl_805DAC4C; *(float*)((char*)a0 + 0x24) = lbl_805DAC4C; }

int TItemReverseTech__sub_8011A55C(void) { return TLobby__sub_80336E54((void*)(2)); }
int TItemReverseTech__sub_8011A580(void) { return TLobby__sub_80336E54((void*)(1)); }
void TItemReverseTech__sub_8011A5A4(void) {  }

}
