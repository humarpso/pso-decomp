#include "types.h"
extern "C" {
u32 alloc_buffer__11TOBoss4RockFPv(s32 size);
extern u32 lbl_805D5410;
extern u32 lbl_805D5414;
extern u32 item_nj_chunk_buffer_table[];
void fn_80103674(void);
}

extern "C" {

void fn_80103674(void) {
    s32 i;
    lbl_805D5410 = 0;
    lbl_805D5414 = 0;
    for (i = 0; i != 2; i++) {
        item_nj_chunk_buffer_table[i] = alloc_buffer__11TOBoss4RockFPv(0x200);
    }
}

}
