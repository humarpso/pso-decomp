#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_field_EE__8TItemMagFPvUc(void* p, u8 v);
u8 fn_80100CC8(void);
int is_flag_400__10TObjPlayerFPv(void* p);
s32 is_mag_active__10TObjPlayerFPv(void *arg0);
void fn_80100D68(void *arg0);
void fn_80100D9C(void* p, u8 v);
void lookup_item_data__20TWindowSubStatusDispFPv(void *arg0);
s32 get_flag_40__8TItemMagFPv();
s32 get_main_phase();
void copy_to_item_data__5TItemFPvPv(void *, void *);
void get_item_data__6TLobbyFUi(void *);
void TItemData__sub_8010C738(void *);
s32 get_camera_no__11TCameraCtrlFv();

u8 fn_80100CC8(void) {
    int var_r31;

    var_r31 = 0;
    if ((get_main_phase() != 0xE) || (get_camera_no__11TCameraCtrlFv() == 0)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}
int is_flag_400__10TObjPlayerFPv(void* p) { return *(u16*)((char*)p + 0x4) & 0x400; }
s32 is_mag_active__10TObjPlayerFPv(void *arg0) {
    if ((get_flag_40__8TItemMagFPv() == 0) && ((u32) M2C_FIELD(arg0, u32 *, 0xF4) != 0U)) {
        return 1;
    }
    return 0;
}
void fn_80100D68(void *arg0) {
    M2C_UNK sp8[4];

    copy_to_item_data__5TItemFPvPv(arg0, &sp8);
    TItemData__sub_8010C738(&sp8);
}
void set_field_EE__8TItemMagFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0xee) = v; }
void fn_80100D9C(void* p, u8 v) { *(u8*)((char*)p + 0xed) = v; }
void lookup_item_data__20TWindowSubStatusDispFPv(void *arg0) {
    M2C_UNK sp8[4];

    copy_to_item_data__5TItemFPvPv(arg0, &sp8);
    get_item_data__6TLobbyFUi(&sp8);
}

}
