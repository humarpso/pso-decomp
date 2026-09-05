#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 set_global_param__8TObjFishFi(s32);
extern u32 TRaderMapCore__data_805D5F4C;
s32 TRaderMapCore__sub_801FB874(void);
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
s32 TRaderMapCore__sub_801FB874(void) {
    if ((u32) TRaderMapCore__data_805D5F4C != 0U) {
        set_global_param__8TObjFishFi((s32) TRaderMapCore__data_805D5F4C);
        return 1;
    }
    return -1;
}

}
