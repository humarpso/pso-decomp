#include "types.h"
extern "C" {
void *alloc_buffer__11TOBoss4RockFPv(u32 size);
char *strncpy(char *dst, const char *src, u32 n);
void TLobby__sub_801E3E9C(s32 a, char *b, void *c, s32 d);
extern void *lbl_805D5500;
extern char *lbl_805D5504;
extern char lbl_8043E7D8[];
void fn_8011D3B8(void);
}

extern "C" {

void fn_8011D3B8(void) {
    lbl_805D5500 = alloc_buffer__11TOBoss4RockFPv(0x40c);
    lbl_805D5504 = (char *)alloc_buffer__11TOBoss4RockFPv(0x1c);
    strncpy(lbl_805D5504, lbl_8043E7D8, 0x1c);
    TLobby__sub_801E3E9C(0xb8, lbl_8043E7D8, lbl_805D5500, 0);
}

}
