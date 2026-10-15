#include "types.h"
#include "pso/misc/TLobby.h"

struct RecoveredGlobal_80019E60_lbl_804340D8 { char value[0x13]; };
typedef char RecoveredGlobal_80019E60_lbl_804340D8_size[sizeof(RecoveredGlobal_80019E60_lbl_804340D8) == 0x13 ? 1 : -1];

extern "C" {
s32 get_type__8TItemMagFPv(void *);
int alloc__23TAdSinglePlyChrSelectGCFv(void *);
u8 * load_buffer__9TItemLoadFUll(void *, u32, s32);
extern RecoveredGlobal_80019E60_lbl_804340D8 lbl_804340D8;
extern s32 lbl_805D49D8;
extern u32 item_loader_instance;
}

extern "C" {

void __dt__9TItemLoadFPvs(void*, int);

extern s32 lbl_805D49D8;
extern u32 item_loader_instance;

void TLobby::free_item_loader() {
    if ((u32) item_loader_instance != 0U) {
        __dt__9TItemLoadFPvs((void*)item_loader_instance, 1);
        item_loader_instance = 0U;
        lbl_805D49D8 = 0;
    }
}
void TLobby::load_draw_line_task() {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFv((void *)8);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_buffer__9TItemLoadFUll((void *) temp_r3, (u32) &lbl_804340D8.value, 0x4800));
    }
    (*(u8 * *)&item_loader_instance) = (unsigned char *) ((void *) var_r0);
    if ((u32) var_r0 != 0U) {
        lbl_805D49D8 = get_type__8TItemMagFPv((void *) var_r0);
    }
}

}
