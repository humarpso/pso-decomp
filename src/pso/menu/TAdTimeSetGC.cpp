#include "pso/TAdTimeSetGC.h"

void TAdTimeSetGC::run_task() {}

TAdTimeSetGC::~TAdTimeSetGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdTimeSetGC__ct(void *arg0);
void TAdTimeSetGC__sub_802E34A4(void);
void TAdTimeSetGC__sub_802E34A8(void);
void TLobby__sub_8022743C(void);
void __ct__7TObjectFP7TObject(void *);
void init__23TAdSinglePlyChrSelectGCFPv(void *);

extern M2C_UNK __vt__12TAdTimeSetGC[];
extern void *lbl_805D3F80;

void *TAdTimeSetGC__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TAdTimeSetGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3F80;
    init__23TAdSinglePlyChrSelectGCFPv(arg0);
    TLobby__sub_8022743C();
    return arg0;
}

void TAdTimeSetGC__sub_802E34A4(void) {  }
void TAdTimeSetGC__sub_802E34A8(void) {  }

}
