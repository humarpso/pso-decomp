#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_80146740(void);
s32 query_task_active__6TLobbyFv(void);
int TLobby__sub_8014677C(void);
int get_link_status_value__6TLobbyFv(void);
int TLobby__sub_80145DB4(void*);
s32 TLobby__sub_804245DC();

int TLobby__sub_80146740(void) { return 0; }

extern s32 lbl_805D5710;

s32 query_task_active__6TLobbyFv(void) {
    if ((s32) lbl_805D5710 != 0) {
        return TLobby__sub_804245DC();
    }
    return 0;
}

int TLobby__sub_8014677C(void) { return TLobby__sub_80145DB4((void*)(1)); }
int get_link_status_value__6TLobbyFv(void) { return TLobby__sub_80145DB4((void*)(4)); }

}
