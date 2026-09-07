#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802E0784_lbl_804E2F78 {
    M2C_UNK value;
    u8 remaining[0x8C];
};

extern "C" {
s32 set_field_dc__10TObjPlayerFPvi(void *, int);
s32 set_field_d8__10TObjPlayerFPvi(void *, void *);
s32 set_animation__10TObjPlayerFPvs(void *, int);
s32 set_cursor_index__17TAdMultiConfirmGCFPvi(void *, int);
extern RecoveredGlobal_802E0784_lbl_804E2F78 lbl_804E2F78;
extern u8 *lbl_805D68D8;
void fn_802E0784(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_802E0784_lbl_804E2F78_size[sizeof(RecoveredGlobal_802E0784_lbl_804E2F78) == 0x90 ? 1 : -1];
void fn_802E0784(u8 *arg0) {
    set_field_d8__10TObjPlayerFPvi((void *) (arg0), (void *) (&lbl_804E2F78.value));
    set_field_dc__10TObjPlayerFPvi((void *) (arg0), (int) (M2C_FIELD(lbl_805D68D8, s32 *, 0x430)));
    set_cursor_index__17TAdMultiConfirmGCFPvi((void *) (arg0), (int) (0));
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
}

}
