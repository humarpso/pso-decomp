#include "types.h"

extern "C" {

void update_load__9TItemLoadFPv(u8 *arg0);
s32 start_load_with_id__9TItemLoadFPvii(u32, s32, s32);
s32 begin_load_if_pending__9TItemLoadFPvii(u32, u32, s32);
s32 TItemLoad__sub_80110740(u32);
u32 TItemLoad__sub_80110748(u32);
s32 TItemLoad__sub_80110750(u32, s32);
s32 update_item__9TItemLoadFPv(u32);

extern u32 item_texture_archive_loader;
extern u32 item_model_chunk_loader;
extern s32 item_load_model_buffer;

void update_load__9TItemLoadFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 var_r31;
    s32 var_r30;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x20);
    switch (temp_r0) {
    case 1:
        if (((u32) item_model_chunk_loader != 0U) && ((u32) item_texture_archive_loader != 0U)) {
            start_load_with_id__9TItemLoadFPvii(item_model_chunk_loader, item_load_model_buffer + (*(s32 *)((s8 *)arg0 + 0x1C) * 0x2C00), *(s32 *)((s8 *)arg0 + 0x24));
            *(s32 *)((s8 *)arg0 + 0x20) = 2;
        }
        return;
    case 2:
        if (update_item__9TItemLoadFPv(item_model_chunk_loader) == 1) {
            var_r30 = 0;
            var_r31 = 0;
            do {
                temp_r3 = TItemLoad__sub_80110750(item_model_chunk_loader, var_r30);
                var_r30 += 1;
                *(s32 *)(arg0 + var_r31 + 0x2C) = temp_r3;
                var_r31 += 4;
            } while (var_r30 != 4);
            *(u32 *)((s8 *)arg0 + 0x3C) = TItemLoad__sub_80110748(item_model_chunk_loader);
            *(s32 *)((s8 *)arg0 + 0x40) = TItemLoad__sub_80110740(item_model_chunk_loader);
            if ((u32) *(u32 *)((s8 *)arg0 + 0x3C) != 0U) {
                *(s32 *)((s8 *)arg0 + 0x20) = 3;
                begin_load_if_pending__9TItemLoadFPvii(item_texture_archive_loader, *(u32 *)((s8 *)arg0 + 0x3C), *(s32 *)((s8 *)arg0 + 0x28));
                return;
            }
            *(s32 *)((s8 *)arg0 + 0x20) = 0;
            return;
        }
        break;
    case 3:
        if (update_item__9TItemLoadFPv(item_texture_archive_loader) == 1) {
            *(s32 *)((s8 *)arg0 + 0x20) = 0;
        }
        break;
    }
}

}
