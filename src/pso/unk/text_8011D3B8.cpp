#include "types.h"
extern "C" {
void *alloc_buffer__11TOBoss4RockFPv(u32 size);
char *strncpy(char *dst, const char *src, u32 n);
void TLobby__sub_801E3E9C(s32 a, char *b, void *c, s32 d);
extern void *item_tex_load_buffer_a;
extern char *TItemTexLoad__name_buffer;
extern char lbl_8043E7D8[];
void load_item_kt_afs(void);
}

extern "C" {

void load_item_kt_afs(void) {
    item_tex_load_buffer_a = alloc_buffer__11TOBoss4RockFPv(0x40c);
    TItemTexLoad__name_buffer = (char *)alloc_buffer__11TOBoss4RockFPv(0x1c);
    strncpy(TItemTexLoad__name_buffer, lbl_8043E7D8, 0x1c);
    TLobby__sub_801E3E9C(0xb8, lbl_8043E7D8, item_tex_load_buffer_a, 0);
}

}
