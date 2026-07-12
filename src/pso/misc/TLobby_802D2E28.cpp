#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObj_802D2E28_0x30 {
    char pad[0x18];
    virtual void vm0();
    virtual void vm1();
    virtual void vm2();
    virtual void vm3();
    virtual void vm4();
    virtual void vm5();
    virtual void vm6();
    virtual void vm7();
    virtual void vm8();
    virtual void vm9();
    virtual void vma();
};

extern "C" {

s32 show_event_message__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
s32 TLobby__sub_8001DC24();
void *TLobby__sub_80101AB0(s32);
M2C_UNK refresh_player_status__6TLobbyFv(s32);
M2C_UNK TWindowSubStatusDisp__sub_80229080();

extern s32 lbl_805D53A0;

s32 show_event_message__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r3;

    switch (arg1) {
    case 0:
        return 0;
    case 1:
        if (arg0 == (s32) lbl_805D53A0) {
            return get_message_10__20TWindowSubStatusDispFPv(0xF4);
        }
        TWindowSubStatusDisp__sub_802290E0();
        refresh_player_status__6TLobbyFv(arg0);
        get_message_10__20TWindowSubStatusDispFPv(0xEA);
        TWindowSubStatusDisp__sub_80229080();
        return TLobby__sub_8001DC24();
    case 2:
        temp_r3 = TLobby__sub_80101AB0(arg2);
        if (temp_r3 == NULL) {
            return 0;
        }
        TWindowSubStatusDisp__sub_802290E0();
        if (arg0 == (s32) lbl_805D53A0) {
            get_message_10__20TWindowSubStatusDispFPv(0xF3);
            TWindowSubStatusDisp__sub_80229080();
        } else {
            refresh_player_status__6TLobbyFv(arg0);
            get_message_10__20TWindowSubStatusDispFPv(0xE8);
            TWindowSubStatusDisp__sub_80229080();
        }
        ((VObj_802D2E28_0x30 *)temp_r3)->vma();
        TWindowSubStatusDisp__sub_80229080();
        get_message_10__20TWindowSubStatusDispFPv(0xE9);
        TWindowSubStatusDisp__sub_80229080();
        return TLobby__sub_8001DC24();
    case 3:
        if (arg0 == (s32) lbl_805D53A0) {
            return get_message_10__20TWindowSubStatusDispFPv(0xF2);
        }
        TWindowSubStatusDisp__sub_802290E0();
        refresh_player_status__6TLobbyFv(arg0);
        get_message_10__20TWindowSubStatusDispFPv(0xE7);
        TWindowSubStatusDisp__sub_80229080();
        return TLobby__sub_8001DC24();
    case 4:
        return get_message_10__20TWindowSubStatusDispFPv(0xEE);
    default:
        return 0;
    }
}

}
