#include "types.h"

struct RecoveredGlobal_802FE9E0_lbl_804E6218 {
    s32 value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_802FEA0C_lbl_804E6218 {
    s32 value;
    u8 remaining[0x24];
};

extern "C" {
void call_funcs_reverse__6TLobbyFPvUi(s32, u32);
extern RecoveredGlobal_802FE9E0_lbl_804E6218 static_resource_callback_table;
void fn_802FE9E0(void);
s32 run_load_callback_table(void *, int);
void fn_802FEA0C(void);
typedef char RecoveredGlobal_802FE9E0_lbl_804E6218_size[sizeof(RecoveredGlobal_802FE9E0_lbl_804E6218) == 0x28 ? 1 : -1];
void fn_802FE9E0(void) {
    call_funcs_reverse__6TLobbyFPvUi((s32) &static_resource_callback_table.value, 0x28U);
}
typedef char RecoveredGlobal_802FEA0C_lbl_804E6218_size[sizeof(RecoveredGlobal_802FEA0C_lbl_804E6218) == 0x28 ? 1 : -1];
void fn_802FEA0C(void) {
    run_load_callback_table((void *) (&(*(RecoveredGlobal_802FEA0C_lbl_804E6218 *)&static_resource_callback_table).value), (int) (0x28));
}

}
