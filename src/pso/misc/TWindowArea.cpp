#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8024470C___vt__11TWindowArea { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8024470C___vt__11TWindowArea_size[sizeof(RecoveredGlobal_8024470C___vt__11TWindowArea) == 0x18 ? 1 : -1];

extern "C" {
u8 * get_window_layout_position(s32);
u8 * __ct__11TWindowRoomFPc(void *, s32);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(int, int);
extern M2C_UNK __vt__11TWindowArea[];
extern s32 lbl_805D3880;
extern const f32 lbl_805DCAC4;
u8 *TWindowArea__ct(u8 *arg0);
}

extern "C" {

void *__dt__11TWindowAreaFv(void *arg0, s16 arg1);
void run_task__11TWindowAreaFv(void* p);
int update_window_entry_list(void*, void*);
void __dl__7TObjectFPv(void *);
void __dt__11TWindowRoomFv(void *, int);
int initialize_subwindow__9TWindowDDFPv(void*);

void run_task__11TWindowAreaFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_window_entry_list(p, (char*)p + 0x24); }

extern M2C_UNK __vt__11TWindowArea[];

void *__dt__11TWindowAreaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TWindowArea;
        __dt__11TWindowRoomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TWindowArea__ct(u8 *arg0) {
    M2C_UNK *var_r4;
    f32 var_f0;
    u8 *var_r31;
    u8 *var_r3;
    var_r4 = (M2C_UNK *)((u8 *)(NULL));
    var_r31 = (u8 *)(arg0);
    __ct__11TWindowRoomFPc(arg0, 0);
    var_r4 = (M2C_UNK *)(&(*(RecoveredGlobal_8024470C___vt__11TWindowArea *)&__vt__11TWindowArea).value);
    var_r3 = (u8 *)((void *)0x25);
    M2C_FIELD(var_r31, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8024470C___vt__11TWindowArea *)&__vt__11TWindowArea).value;
    M2C_FIELD(var_r31, s32 *, 0) = (s32) lbl_805D3880;
    var_r3 = (u8 *)(var_r31 + 0x40);
    var_r4 = (M2C_UNK *)(get_window_layout_position(0x25));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((int) (var_r3), (int) (var_r4));
    var_f0 = lbl_805DCAC4;
    var_r3 = (u8 *)(var_r31);
    M2C_FIELD(var_r31, f32 *, 0x60) = var_f0;
    return var_r3;
}

}
