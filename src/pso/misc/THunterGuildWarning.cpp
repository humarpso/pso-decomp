#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *THunterGuildWarning__ct(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);
void THunterGuildWarning__sub_80211774(void *, void *);
void THunterGuildWarning__sub_802119CC(void *);

extern M2C_UNK __vt__19THunterGuildWarning[];
extern void *lbl_805D3648;
extern void * THunterGuildWarning__data_805D6178;

void *THunterGuildWarning__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19THunterGuildWarning;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3648;
    M2C_FIELD(arg0, void **, 0x1C) = arg2;
    M2C_FIELD(arg0, u32 *, 0x20) = 90;
    THunterGuildWarning__sub_802119CC(arg0);
    THunterGuildWarning__sub_80211774(arg0, M2C_FIELD(arg0, void **, 0x1C));
    THunterGuildWarning__data_805D6178 = arg0;
    return arg0;
}

}
