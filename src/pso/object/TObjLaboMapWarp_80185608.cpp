#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjLaboMapWarp__ct(void *arg0);
void TObjLaboMapWarp__sub_80185400(void *);
void TObjMapWarp__ct(void *);

extern M2C_UNK __vt__15TObjLaboMapWarp[];
extern void *lbl_805D32B4;
extern const f32 lbl_805DBC8C;
extern const f32 lbl_805DBC90;

void *TObjLaboMapWarp__ct(void *arg0) {
    TObjMapWarp__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjLaboMapWarp;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D32B4;
    TObjLaboMapWarp__sub_80185400(arg0);
    M2C_FIELD(arg0, f32 *, 0xAC) = lbl_805DBC8C;
    M2C_FIELD(arg0, f32 *, 0xFC) = lbl_805DBC90;
    return arg0;
}

}
