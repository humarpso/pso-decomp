#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjBgmColCtrl__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__14TObjBgmColCtrl[];
extern void *TObjBgmColCtrl__name;
extern u32 TObjBgmColCtrl__current_theme_id;

void *TObjBgmColCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjBgmColCtrl;
    M2C_FIELD(arg0, void **, 0x0) = TObjBgmColCtrl__name;
    M2C_FIELD(arg0, u32 *, 0x1C) = 3;
    TObjBgmColCtrl__current_theme_id = 0;
    return arg0;
}

}
