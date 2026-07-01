#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TShopEquipmentListWindow__sub_8021C01C(void* p);
void TShopEquipmentListWindow__sub_8021BF40(void *arg0);
s32 TObjCityMainWarp__sub_80266354(u32, s32, s32, s32);
int fn_80073DC4(void*, int);
s32 fn_8013AD28(u32);
s32 fn_80222CFC(s32);
f32 TShopWindowBase__sub_8022393C(void *);
s32 fn_8024422C(u32, f32, f32);
s32 fn_80265C30(u32);
s32 fn_80265F60(u32);
u32 fn_802664A8(s32, s32, u16);
s32 fn_8026CBB8(s32);

s32 obj_getField1c(s32);

void TShopEquipmentListWindow__sub_8021BF40(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
        temp_r31 = obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, u32 *, 0x2C) = fn_802664A8(fn_8026CBB8(0x2B), 2, temp_r31);
        TObjCityMainWarp__sub_80266354(M2C_FIELD(arg0, u32 *, 0x2C), fn_80222CFC(4), 6, 0);
        TObjCityMainWarp__sub_80266354(M2C_FIELD(arg0, u32 *, 0x2C), fn_80222CFC(5), 6, 1);
        fn_80265F60(M2C_FIELD(arg0, u32 *, 0x2C));
        fn_80265C30(M2C_FIELD(arg0, u32 *, 0x2C));
        fn_8013AD28(M2C_FIELD(arg0, u32 *, 0x2C));
        temp_f31 = TShopWindowBase__sub_8022393C(arg0);
        fn_8024422C(M2C_FIELD(arg0, u32 *, 0x2C), TShopWindowBase__sub_8022393C(arg0), temp_f31);
    }
    fn_80073DC4((void*)(arg0), 2);
}
int TShopEquipmentListWindow__sub_8021C01C(void* p) { return fn_80073DC4(p, 8); }

}
