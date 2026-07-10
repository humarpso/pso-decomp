#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_objects__6TLobbyFv(void);
M2C_UNK TObjCityMainWarp__sub_80186634();
M2C_UNK TObjDoor__sub_801A3C0C();
M2C_UNK TRaderMapCore__sub_801F9540();
M2C_UNK TSwitch__sub_8022942C();
M2C_UNK TTecLuker__sub_80233DA8();
M2C_UNK fn_80103F68();
M2C_UNK fn_801A3B84();
M2C_UNK fn_801A3BA4();
M2C_UNK fn_801A3BF4();
M2C_UNK fn_801A3C00();
M2C_UNK fn_801A3C18();
M2C_UNK fn_80213430();
void fn_8034E440();
M2C_UNK queue_destruction__7TObjectFv(u32);

extern u32 lbl_805D5EE8;

void free_objects__6TLobbyFv(void) {
    TRaderMapCore__sub_801F9540();
    TSwitch__sub_8022942C();
    TTecLuker__sub_80233DA8();
    fn_80103F68();
    fn_8034E440();
    if ((u32) lbl_805D5EE8 != 0U) {
        queue_destruction__7TObjectFv(lbl_805D5EE8);
    }
    TObjCityMainWarp__sub_80186634();
    fn_80213430();
    fn_801A3B84();
    fn_801A3C18();
    TObjDoor__sub_801A3C0C();
    fn_801A3C00();
    fn_801A3BF4();
    fn_801A3BA4();
}

}
