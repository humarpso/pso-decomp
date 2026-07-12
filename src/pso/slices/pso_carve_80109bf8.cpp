#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_getField1c(void *);
M2C_UNK TLobby__sub_800869A4(void *, M2C_UNK, M2C_UNK, M2C_UNK, void *);
s32 TLobby__sub_80101AB0();
void *__ct__14TItemEffNeedleFv(void *, s32, s32, s32, s32);
s32 TObjPlayer__sub_8010A050(s32);
s32 TObjPlayer__sub_8010A058(s32);
void *__nw__7TObjectFUl(M2C_UNK);
extern s32 tl_05;

typedef struct { u8 pad[0x1C]; u8 f[0x10]; } E80109;

void fn_80109BF8(s32 arg0, void *arg1) {
    void *var_r31;
    void *temp_r30;
    s32 temp_r29;
    void *temp_r7;

    temp_r29 = TLobby__sub_80101AB0();
    var_r31 = __nw__7TObjectFUl(0x64);
    if (var_r31 != NULL) {
        temp_r30 = M2C_FIELD(arg1, void **, 0);
        var_r31 = __ct__14TItemEffNeedleFv(var_r31, tl_05, temp_r29, obj_getField1c(temp_r30), M2C_FIELD(temp_r30, s32 *, 0xA8));
    }
    if (var_r31 != NULL) {
        M2C_FIELD(var_r31, s32 *, 0x3C) = TObjPlayer__sub_8010A058(temp_r29);
        M2C_FIELD(var_r31, s32 *, 0x40) = TObjPlayer__sub_8010A050(temp_r29);
        M2C_FIELD(var_r31, s32 *, 0x44) = (s32) (M2C_FIELD(var_r31, s32 *, 0x44) + 0x8000);
    }
    temp_r7 = M2C_FIELD(arg1, void **, 0);
    TLobby__sub_800869A4(((E80109 *)M2C_FIELD(temp_r7, void **, 0xA4))[M2C_FIELD(arg1, s32 *, 4)].f, 0x180, 0, 0x3C, temp_r7);
}

}
