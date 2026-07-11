#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801E76E4(void);
void TLobby__sub_801E7758(void);
s32 TWindowHelpItem__ct(s32, s32, s32);
s32 TWindowShortListCtrl__sub_80278E48(s32, M2C_UNK *, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_801F3274();
M2C_UNK fn_801F32A0(void);
s32 fn_8026CBB8(M2C_UNK);
M2C_UNK fn_802787AC();
M2C_UNK TLobby__sub_8032C854(s32);
M2C_UNK TLobby__sub_8032CD7C(s32, s32);

extern M2C_UNK lbl_80449B2C[];
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D5EBC;
extern s32 TLobby__data_805D5EC0;

void TLobby__sub_801E76E4(void) {
    s32 var_r31;

    TLobby__data_805D5EBC = TWindowShortListCtrl__sub_80278E48(fn_8026CBB8(3), lbl_80449B2C, lbl_805D53A0);
    fn_802787AC();
    var_r31 = __nw__7TObjectFUl(0xBC);
    if (var_r31 != 0) {
        var_r31 = TWindowHelpItem__ct(var_r31, fn_8026CBB8(2), lbl_805D53A0);
    }
    TLobby__data_805D5EC0 = var_r31;
}

struct Glob_80512220 { s32 field0; char pad[0x100]; };
extern struct Glob_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D6CC0;
extern s32 TLobby__data_805D6CC8;

void TLobby__sub_801E7758(void) {
    s32 temp_r31;

    temp_r31 = TLobby__data_80512220.field0;
    fn_801F32A0();
    TLobby__sub_8032C854(temp_r31);
    TLobby__sub_8032CD7C(TLobby__data_805D6CC0, TLobby__data_805D6CC8);
    fn_801F3274();
}

}
