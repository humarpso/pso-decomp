#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK append_string__9TWindowDDFiiPv(s32, s32, void *);
M2C_UNK TWindowDD__sub_80348B70();
void TWindowDD__sub_8034886C(s32 arg0, s32 arg1, void *arg2);
}

extern "C" {

void maybe_scroll__9TWindowDDFPvPv(void* p, void* a1);
int TWindowDD__sub_803487DC(void*);
int TWindowDD__sub_80348818(void*, void*, void*);

void maybe_scroll__9TWindowDDFPvPv(void* p, void* a1) { if (TWindowDD__sub_803487DC(p) > 15) { TWindowDD__sub_80348818((void*)10, p, a1); } }
void TWindowDD__sub_8034886C(s32 arg0, s32 arg1, void *arg2) {
    append_string__9TWindowDDFiiPv(TWindowDD__sub_80348B70(), arg1, arg2);
}

}
