#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80271C6C___vt__21TWindowSubAreaMapDisp { M2C_UNK value; u8 remaining[0x18]; };
typedef char RecoveredGlobal_80271C6C___vt__21TWindowSubAreaMapDisp_size[sizeof(RecoveredGlobal_80271C6C___vt__21TWindowSubAreaMapDisp) == 0x1C ? 1 : -1];

extern "C" {
int initialize_subwindow__9TWindowDDFPv(void *);
void TCameraCtrl__sub_802715F0(void *);
void update_visibility__21TWindowSubAreaMapDispFPv(void *);
int update_subwindow__20TWindowSubStatusDispFPv(void *);
extern const f32 lbl_805DD4F0;
void run_task__21TWindowSubAreaMapDispFv(u8 *arg0);
u8 * destroy_window_base__9TWindowDDFPvs(void *, s16);
s32 destroy_status_display__20TWindowSubStatusDispFis(s32, s16);
M2C_UNK free__11TOBoss4RockFUi(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK clear_active_flag__11TWindowCtrlFv();
M2C_UNK clear__13TRaderMapCoreFv();
extern RecoveredGlobal_80271C6C___vt__21TWindowSubAreaMapDisp __vt__21TWindowSubAreaMapDisp;
u8 *__dt__21TWindowSubAreaMapDispFv(u8 *arg0, s16 arg1);
}

extern "C" {

void run_task__21TWindowSubAreaMapDispFv(u8 *arg0) {
    initialize_subwindow__9TWindowDDFPv(arg0);
    update_visibility__21TWindowSubAreaMapDispFPv(arg0);
    TCameraCtrl__sub_802715F0(arg0);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DD4F0) {
        update_subwindow__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u8 **, 0x70));
    }
}
u8 *__dt__21TWindowSubAreaMapDispFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__21TWindowSubAreaMapDisp.value;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
            free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x74));
            M2C_FIELD(arg0, u32 *, 0x74) = 0U;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x6C) != 0) {
            clear_active_flag__11TWindowCtrlFv();
            clear__13TRaderMapCoreFv();
        }
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, s32 *, 0x70), 1);
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

}
