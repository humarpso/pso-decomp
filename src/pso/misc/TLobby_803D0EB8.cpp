#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_callback__6TLobbyFUii(u32 arg0, s32 arg1);
void notify_dvd_read__6TLobbyFv(void);
void enter_lock__6TLobbyFv(void);
M2C_UNK restore_interrupts_nested__6TLobbyFv();
M2C_UNK lock_enter__6TLobbyFv();

extern u32 lbl_805D7618;
extern s32 lbl_805D761C;

void set_callback__6TLobbyFUii(u32 arg0, s32 arg1) {
    if (arg0 == 0U) {
        lbl_805D7618 = 0U;
        lbl_805D761C = 0;
        return;
    }
    lbl_805D7618 = arg0;
    lbl_805D761C = arg1;
}

void notify_dvd_read__6TLobbyFv(void) {
    restore_interrupts_nested__6TLobbyFv();
}

void enter_lock__6TLobbyFv(void) {
    lock_enter__6TLobbyFv();
}

}
