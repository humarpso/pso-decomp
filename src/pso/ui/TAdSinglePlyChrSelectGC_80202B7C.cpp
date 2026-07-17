#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int get_selection__23TAdSinglePlyChrSelectGCFv(void);
void set_global_flags__23TAdSinglePlyChrSelectGCFi(s32 arg0);
int get_instance__23TAdSinglePlyChrSelectGCFv(void);
void set_player_index__23TAdSinglePlyChrSelectGCFi(int a0);
void set_save_slot__23TAdSinglePlyChrSelectGCFi(int a0);
void clear_flags__23TAdSinglePlyChrSelectGCFi(s32 arg0);
u8 check_flag__23TAdSinglePlyChrSelectGCFi(s32 arg0);

    extern int lbl_805D5F74;
int get_selection__23TAdSinglePlyChrSelectGCFv(void) {  return lbl_805D5F74; }

extern s32 *lbl_805D5F64;

void set_global_flags__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if ((s32 *) lbl_805D5F64 != NULL) {
        *lbl_805D5F64 |= arg0;
    }
}

    extern int lbl_805D5F58;
int get_instance__23TAdSinglePlyChrSelectGCFv(void) {  return lbl_805D5F58; }

    extern int lbl_805D5F78;
void set_player_index__23TAdSinglePlyChrSelectGCFi(int a0) { lbl_805D5F78 = a0; }

    extern int lbl_805D5FAC;
void set_save_slot__23TAdSinglePlyChrSelectGCFi(int a0) { lbl_805D5FAC = a0; }

extern s32 *lbl_805D5F64;

void clear_flags__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if ((s32 *) lbl_805D5F64 != NULL) {
        *lbl_805D5F64 &= ~arg0;
    }
}

extern s32 *lbl_805D5F64;

u8 check_flag__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if ((s32 *) lbl_805D5F64 != NULL) {
        return (u8) ((*lbl_805D5F64 & arg0) != 0);
    }
    return 0U;
}

}
