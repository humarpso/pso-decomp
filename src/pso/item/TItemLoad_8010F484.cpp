#include "types.h"

extern "C" {

void *init__9TItemLoadFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void update_all__9TItemLoadFv(void);
void clear_slots__9TItemLoadFPv(void *);
void __ct__7TObjectFP7TObject(void *);
s32 update_state__9TItemLoadFPv(void *);

extern s32 lbl_8049F3F4[];

void *init__9TItemLoadFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_8049F3F4;
    *(void **)((s8 *)arg0 + 0x1C) = arg2;
    *(u32 *)((s8 *)arg0 + 0x20) = 0;
    *(void **)((s8 *)arg0 + 0x24) = arg3;
    *(void **)((s8 *)arg0 + 0x28) = arg4;
    clear_slots__9TItemLoadFPv((void *)((char *)arg0 + 44));
    *(u32 *)((s8 *)arg0 + 0x20) = 1;
    return arg0;
}

extern void *item_texture_archive_loader;
extern void *item_model_chunk_loader;

void update_all__9TItemLoadFv(void) {
    void *temp_r3;
    temp_r3 = item_texture_archive_loader;
    if (temp_r3 != 0) {
        update_state__9TItemLoadFPv(temp_r3);
    }
    temp_r3 = item_model_chunk_loader;
    if (temp_r3 != 0) {
        update_state__9TItemLoadFPv(temp_r3);
    }
}

}
