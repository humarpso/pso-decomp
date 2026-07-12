#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_803DEE6C(int);
extern void *lbl_805D6648;
void TObjFish__sub_803DA798(void *);
void fn_803DF160(void *, void *);
extern const f32 lbl_805DDF38;
void fn_803DEECC(void *, f32);
void fn_803DEEAC(void);

void fn_802A35B4(void *arg0) {
    fn_803DEE6C(1);
    TObjFish__sub_803DA798(lbl_805D6648);
    fn_803DF160(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, void **, 0x80));
    fn_803DEECC((void *)((char *)arg0 + 68), lbl_805DDF38);
    fn_803DEEAC();
}

}
