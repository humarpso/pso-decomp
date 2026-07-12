#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubSymbolChat__sub_80077334(void* p);
void TWindowSubSymbolChat__sub_80077358(void);
void TWindowSubSymbolChat__sub_8007737C(void *arg0);
int TWindowSubSymbolChat__sub_80076FE0(void* p);
int TWindowSubSymbolChat__sub_80077098(void);
int TWindowSubSymbolChat__sub_800770D0(void);
void TWindowSubSymbolChat__sub_80077310(void* p);
M2C_UNK TWindowSubSymbolChat__sub_800773BC(s32);
int TWindowSubSymbolChat__sub_80077480(void);
int TWindowSubSymbolChat__sub_80077718(void*);
s32 fn_80077720();

void TWindowSubSymbolChat__sub_80077334(void* p) { TWindowSubSymbolChat__sub_80077718(p); TWindowSubSymbolChat__sub_800770D0(); }

    extern int lbl_805D4E50;
void TWindowSubSymbolChat__sub_80077358(void) { lbl_805D4E50 = TWindowSubSymbolChat__sub_80077480(); }

void TWindowSubSymbolChat__sub_8007737C(void *arg0) {
    if (fn_80077720() != 0) {
        TWindowSubSymbolChat__sub_800773BC(((u32) M2C_FIELD(arg0, u32 *, 0x1C) >> 5U) & 0xF);
    }
}

}
