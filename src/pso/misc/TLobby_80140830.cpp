#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 setup_scene__6TLobbyFv(void);
M2C_UNK create_tasks__6TLobbyFv();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK TLobby__sub_800FD6F8(M2C_UNK *, M2C_UNK);
M2C_UNK reset_settings_to_default__6TLobbyFPv(M2C_UNK *);
M2C_UNK TLobby__sub_80207E44();
M2C_UNK TLobby__sub_8021EF84();
M2C_UNK TLobby__sub_80227FB4();
s32 TOKeyMachine01__sub_802034A8();
M2C_UNK TObjBgmColCtrl__sub_8017E3B8();
M2C_UNK TObjLight__sub_80133D78();
M2C_UNK TQuestBgmCtrl__ct(void *, s32);
void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_8006EBC4(s32);
M2C_UNK fn_801815F8(void *, s32);

extern M2C_UNK lbl_804A7370[];
extern M2C_UNK lbl_8050EA40[];
extern s32 tl_05;
extern s32 tl_07;

s32 setup_scene__6TLobbyFv(void) {
    void *obj;

    TOKeyMachine01__sub_802034A8();
    TLobby__sub_80227FB4();
    TLobby__sub_80207E44();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    TObjLight__sub_80133D78();
    TLobby__sub_8021EF84();
    TLobby__sub_800FD6F8(lbl_804A7370, 0x60);
    reset_settings_to_default__6TLobbyFPv(lbl_8050EA40);
    create_tasks__6TLobbyFv();
    TObjBgmColCtrl__sub_8017E3B8();
    if (TOKeyMachine01__sub_802034A8() == 0) {
        obj = __nw__7TObjectFUl(0x78);
        if (obj != NULL) {
            fn_801815F8(obj, tl_05);
        }
    }
    obj = __nw__7TObjectFUl(0x1C);
    if (obj != NULL) {
        TQuestBgmCtrl__ct(obj, tl_05);
    }
    fn_8006EBC4(tl_07);
    return 1;
}

}
