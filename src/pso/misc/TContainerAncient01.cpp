#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TContainerAncient01__sub_8018BE68(void);
int TContainerAncient01__sub_8018BE6C(void);
int TContainerAncient01__sub_8018BE74(void);
s32 TContainerAncient01__sub_8018BE90(void);
void TContainerAncient01__vt23(void);
int TContainerAncient01__vt24(void);
int TContainerAncient01__vt25(void);
void *__dt__19TContainerAncient01Fv(void *arg0, s16 arg1);
int get_table_entry__19TContainerAncient01Fi(int a0);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_motion_object__10TObjPlayerFPvs(void *, M2C_UNK);

extern M2C_UNK __vt__19TContainerAncient01[];

void *__dt__19TContainerAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TContainerAncient01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TContainerAncient01__sub_8018BE68(void) {  }
int TContainerAncient01__sub_8018BE6C(void) { return 1; }
int TContainerAncient01__sub_8018BE74(void) { return 1; }

    extern int lbl_8050DC68[];
int get_table_entry__19TContainerAncient01Fi(int a0) {  return lbl_8050DC68[a0]; }

extern s32 TContainerAncient01__data_805D5B90;

s32 TContainerAncient01__sub_8018BE90(void) {
    return TContainerAncient01__data_805D5B90;
}

void TContainerAncient01__vt23(void) {  }
int TContainerAncient01__vt24(void) { return 1; }
int TContainerAncient01__vt25(void) { return 1; }

}
