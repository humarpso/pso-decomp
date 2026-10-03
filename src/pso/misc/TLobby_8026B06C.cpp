#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 __nw__7TObjectFUl(int);
s32 TLobby__sub_80269DA4(void *, int);
s32 TWindowMessageQuest__ct(int, void *);
s32 fn_8026B0C4(s32 arg0, s32 arg1);
int append_message_window_line(void *w, int text, int flags, int color);
int send_and_handle__6TLobbyFPvii(void *w, int text, int flags);
int dispatch_message_window_text(void *w, int text, int flags);
}

extern "C" {

void set_field_90__6TLobbyFPvi(void* p, s32 v);

void set_field_90__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x90) = v; }

int dispatch_message_window_text(void *w, int text, int flags) {
    switch (*(s32 *)((u8 *)w + 0x90)) {
    case 0:
        return append_message_window_line(w, text, flags, 0xFF000000);
    case 1:
    case 2:
        return send_and_handle__6TLobbyFPvii(w, text, flags);
    default:
        return 0;
    }
}

s32 fn_8026B0C4(s32 arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r0;
    TLobby__sub_80269DA4((void *) (arg1), (int) (1));
    temp_r3 = __nw__7TObjectFUl((int) (0x94));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = TWindowMessageQuest__ct((int) (temp_r3), (void *) (arg0));
    }
    return var_r0;
}

}
