#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8020ED44_lbl_80513D58 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8020ED44_lbl_80513D68 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
void generate_shop_unit_pool(s32);
void TLobby__sub_8020E934(s32);
void generate_shop_armor_pool(s32);
extern RecoveredGlobal_8020ED44_lbl_80513D58 lbl_80513D58;
extern RecoveredGlobal_8020ED44_lbl_80513D68 lbl_80513D68;
extern u32 lbl_805D6158;
void generate_armor_shop_stock(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_8020ED44_lbl_80513D58_size[sizeof(RecoveredGlobal_8020ED44_lbl_80513D58) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8020ED44_lbl_80513D68_size[sizeof(RecoveredGlobal_8020ED44_lbl_80513D68) == 0x10 ? 1 : -1];
void generate_armor_shop_stock(s32 arg0) {
    s32 temp_r7;
    if ((u32) lbl_805D6158 != 0U) {
        temp_r7 = arg0 * 4;
        if ((s32) M2C_FIELD(&lbl_80513D58.value, M2C_UNK *, temp_r7) == 0) {
            M2C_FIELD(&lbl_80513D58.value, M2C_UNK *, temp_r7) = 1;
            M2C_FIELD(&lbl_80513D68.value, M2C_UNK *, temp_r7) = 0;
            generate_shop_armor_pool(arg0);
            TLobby__sub_8020E934(arg0);
            generate_shop_unit_pool(arg0);
        }
    }
}

}
