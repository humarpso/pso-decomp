#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 set_global_param__8TObjFishFi(s32);
extern u32 TRaderMapCore__data_805D5F4C;
s32 TRaderMapCore__sub_801FB874(void);
s32 TObjPlayer__sub_800196EC();
s32 TLobby__sub_800F957C(int);
s32 TRaderMapCore__sub_801F9418(int, int);
s32 free_statics__13TRaderMapCoreFv();
s32 TLobby__sub_803DA16C(int);
extern u8 *TRaderMapCore__data_805D5F28;
extern s32 TRaderMapCore__data_805D5F44;
void TRaderMapCore__sub_801FB71C(void);
}

extern "C" {

void create__13TRaderMapCoreFv(void);
M2C_UNK TRaderMapCore__ct(void *, s32);
s32 is_not_split_screen__13TRaderMapCoreFv();
u32 __nw__7TObjectFUl(M2C_UNK);
s32 is_ready__6TLobbyFv();

extern s32 tl_radermap;
extern s32 tl_clipout;

void create__13TRaderMapCoreFv(void) {
    void *obj;
    if ((is_not_split_screen__13TRaderMapCoreFv() != 1) || (is_ready__6TLobbyFv() != 1)) {
        if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
            if ((obj = (void *) __nw__7TObjectFUl(0x1A4)) != 0) {
                TRaderMapCore__ct(obj, tl_clipout);
            }
        } else if ((obj = (void *) __nw__7TObjectFUl(0x1A4)) != 0) {
            TRaderMapCore__ct(obj, tl_radermap);
        }
    }
}

void TRaderMapCore__sub_801FB71C(void) {
    u32 temp_r3;
    u8 *temp_r31;
    temp_r31 = (u8 *)(TRaderMapCore__data_805D5F28);
    if (temp_r31 != NULL) {
        TRaderMapCore__sub_801F9418((int) (TObjPlayer__sub_800196EC()), (int) (temp_r31));
    }
    free_statics__13TRaderMapCoreFv();
    if ((void *) TRaderMapCore__data_805D5F28 != NULL) {
        temp_r3 = M2C_FIELD(TRaderMapCore__data_805D5F28, u32 *, 4);
        if (temp_r3 != 0U) {
            TLobby__sub_803DA16C((int) (temp_r3));
        }
    }
    if ((void *) TRaderMapCore__data_805D5F28 != NULL) {
        TLobby__sub_800F957C((int) (TRaderMapCore__data_805D5F28));
        TRaderMapCore__data_805D5F28 = NULL;
    }
    TRaderMapCore__data_805D5F44 = 0;
}

s32 TRaderMapCore__sub_801FB874(void) {
    if ((u32) TRaderMapCore__data_805D5F4C != 0U) {
        set_global_param__8TObjFishFi((s32) TRaderMapCore__data_805D5F4C);
        return 1;
    }
    return -1;
}

}
