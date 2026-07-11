#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TContainerAncient01__sub_8018BE68(void);
int TContainerAncient01__sub_8018BE6C(void);
int TContainerAncient01__sub_8018BE74(void);
int get_table_entry__19TContainerAncient01Fi(int a0);
s32 TContainerAncient01__sub_8018BE90(void);

void TContainerAncient01__sub_8018BE68(void) {  }
int TContainerAncient01__sub_8018BE6C(void) { return 1; }
int TContainerAncient01__sub_8018BE74(void) { return 1; }

    extern int lbl_8050DC68[];
int get_table_entry__19TContainerAncient01Fi(int a0) {  return lbl_8050DC68[a0]; }

extern s32 TContainerAncient01__data_805D5B90;

s32 TContainerAncient01__sub_8018BE90(void) {
    return TContainerAncient01__data_805D5B90;
}

}
