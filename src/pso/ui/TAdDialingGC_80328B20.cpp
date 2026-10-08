#include "types.h"

struct T_80328C10 { u8 pad[0xA4]; u32 flags; };

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void TAdDialingGC__sub_80328B24(void *, void *);
extern char lbl_804767B8[];
extern char lbl_804767C0[];
void TAdDialingGC__sub_80328C10(T_80328C10 *self);
void TAdDialingGC__sub_80328B24(void *, void *);
extern M2C_UNK lbl_804767A8[];
extern M2C_UNK lbl_804767B0[];
void render_if_flag_set__12TAdDialingGCFPv(u8 *arg0);
}

extern "C" {

void TAdDialingGC__sub_80328B20(void);

void TAdDialingGC__sub_80328B20(void) {  }
void TAdDialingGC__sub_80328C10(T_80328C10 *self) {
    if (self->flags & 1) {
        TAdDialingGC__sub_80328B24(lbl_804767B8, lbl_804767C0);
    }
}
void render_if_flag_set__12TAdDialingGCFPv(u8 *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xA4) & 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 0)) {
        TAdDialingGC__sub_80328B24((void *) (lbl_804767A8), (void *) (lbl_804767B0));
    }
}

}
