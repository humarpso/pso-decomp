#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801E9C7C(s32 arg0);
int TLobby__sub_801E9CD0(void* p);
void TLobby__sub_801E9CF0(void);
void TLobby__sub_801E9D2C(void);
void TLobby__sub_801E9D60(void);
s32 TAdStorySelectGC__sub_80207D64(s32);
int TLobby__sub_801EA5FC(void*);
M2C_UNK fn_80070AFC();
M2C_UNK fn_80070CDC();
void *fn_8007B7E4();
M2C_UNK fn_80291D94();
M2C_UNK fn_80291DC0();

void TLobby__sub_801E9C7C(s32 arg0) {
    switch (arg0) {
    case 0:
        TAdStorySelectGC__sub_80207D64(0);
        return;
    case 1:
        TAdStorySelectGC__sub_80207D64(1);
        return;
    default:
        TAdStorySelectGC__sub_80207D64(0);
        return;
    }
}
int TLobby__sub_801E9CD0(void* p) { return TLobby__sub_801EA5FC(p); }

extern s32 TLobby__data_805D5EC4;

void TLobby__sub_801E9CF0(void) {
    s32 var_r0;
    void *temp_r3;

    temp_r3 = fn_8007B7E4();
    if (temp_r3 != NULL) {
        var_r0 = M2C_FIELD(temp_r3, s32 *, 0xE284);
    } else {
        var_r0 = 0;
    }
    TLobby__data_805D5EC4 = var_r0;
}

s32 is_split_screen();

void TLobby__sub_801E9D2C(void) {
    if (is_split_screen() == 1) {
        fn_80291D94();
        return;
    }
    fn_80070CDC();
}

s32 is_split_screen();

void TLobby__sub_801E9D60(void) {
    if (is_split_screen() == 1) {
        fn_80291DC0();
        return;
    }
    fn_80070AFC();
}

}
