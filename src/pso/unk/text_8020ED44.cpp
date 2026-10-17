#include "types.h"
#include "pso/unk/text_8020E700.h"
#include "pso/unk/text_8020ED44.h"

struct RecoveredGlobal_8020ED44_lbl_80513D58 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8020ED44_lbl_80513D68 {
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
void generate_shop_unit_pool(s32);
void generate_shop_armor_pool(s32);
extern RecoveredGlobal_8020ED44_lbl_80513D58 shop_armor_stock_generated_flags;
extern RecoveredGlobal_8020ED44_lbl_80513D68 lbl_80513D68;
extern u32 lbl_805D6158;
typedef char RecoveredGlobal_8020ED44_lbl_80513D58_size[sizeof(RecoveredGlobal_8020ED44_lbl_80513D58) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8020ED44_lbl_80513D68_size[sizeof(RecoveredGlobal_8020ED44_lbl_80513D68) == 0x10 ? 1 : -1];
void generate_armor_shop_stock(s32 arg0) {
    s32 temp_r7;
    if ((u32) lbl_805D6158 != 0U) {
        temp_r7 = arg0 * 4;
        if ((s32) *(s32 *)((s8 *)&shop_armor_stock_generated_flags.value + temp_r7) == 0) {
            *(s32 *)((s8 *)&shop_armor_stock_generated_flags.value + temp_r7) = 1;
            *(s32 *)((s8 *)&lbl_80513D68.value + temp_r7) = 0;
            generate_shop_armor_pool(arg0);
            generate_shop_shield_pool(arg0);
            generate_shop_unit_pool(arg0);
        }
    }
}

}
