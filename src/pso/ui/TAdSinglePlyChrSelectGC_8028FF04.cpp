#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_if_active__23TAdSinglePlyChrSelectGCFv(void);
void draw_player_model__23TAdSinglePlyChrSelectGCFPv(void* p);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8028FD90();
int draw_model_with_callback__10TObjPlayerFPv(void*);
int TObjPlayer__sub_8014394C(void*);

extern s32 lbl_805D6530;

void close_if_active__23TAdSinglePlyChrSelectGCFv(void) {
    if ((s32) lbl_805D6530 != 0) {
        TAdSinglePlyChrSelectGC__sub_8028FD90();
    }
}

void draw_player_model__23TAdSinglePlyChrSelectGCFPv(void* p) { TObjPlayer__sub_8014394C(p); draw_model_with_callback__10TObjPlayerFPv(p); }

}
