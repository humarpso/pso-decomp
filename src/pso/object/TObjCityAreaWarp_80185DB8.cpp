#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjCityAreaWarp__ct(void *arg0);
void TObjAreaWarp__ct(void *);

extern const f32 lbl_805DBC8C;
extern M2C_UNK __vt__16TObjCityAreaWarp[];
extern const f32 lbl_805DBC90;
extern void *lbl_805D32AC;

void *TObjCityAreaWarp__ct(void *arg0) {
    TObjAreaWarp__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCityAreaWarp;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D32AC;
    M2C_FIELD(arg0, f32 *, 0xAC) = lbl_805DBC8C;
    M2C_FIELD(arg0, f32 *, 0xC4) = lbl_805DBC90;
    M2C_FIELD(arg0, u32 *, 0xBC) = 15;
    return arg0;
}

}
