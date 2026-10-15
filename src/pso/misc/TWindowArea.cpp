#include "types.h"
#include "pso/misc/TWindowArea.h"

struct RecoveredGlobal_8024470C___vt__11TWindowArea { s32 value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8024470C___vt__11TWindowArea_size[sizeof(RecoveredGlobal_8024470C___vt__11TWindowArea) == 0x18 ? 1 : -1];

extern "C" {
u8 * get_window_layout_position(s32);
u8 * __ct__11TWindowRoomFPc(void *, s32);
s32 copy_vec2__28TWindowSubSymbolChatPartsSetFPv(int, int);
extern s32 __vt__11TWindowArea[];
extern s32 lbl_805D3880;
extern const f32 lbl_805DCAC4;
u8 *TWindowArea__ct(u8 *arg0);
}

extern "C" {

void *__dt__11TWindowAreaFv(void *arg0, s16 arg1);
int update_window_entry_list(void*, void*);
void __dl__7TObjectFPv(void *);
void __dt__11TWindowRoomFv(void *, int);
int initialize_subwindow__9TWindowDDFv(void*);

void TWindowArea::run_task() { initialize_subwindow__9TWindowDDFv(this); update_window_entry_list(this, (char*)this + 0x24); }

extern s32 __vt__11TWindowArea[];

void *__dt__11TWindowAreaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TWindowArea;
        __dt__11TWindowRoomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TWindowArea__ct(u8 *arg0) {
    s32 *var_r4;
    f32 var_f0;
    u8 *var_r31;
    u8 *var_r3;
    var_r4 = (s32 *)((u8 *)(NULL));
    var_r31 = (u8 *)(arg0);
    __ct__11TWindowRoomFPc(arg0, 0);
    var_r4 = (s32 *)(&(*(RecoveredGlobal_8024470C___vt__11TWindowArea *)&__vt__11TWindowArea).value);
    var_r3 = (u8 *)((void *)0x25);
    *(s32 **)((s8 *)var_r31 + 0x18) = &(*(RecoveredGlobal_8024470C___vt__11TWindowArea *)&__vt__11TWindowArea).value;
    *(s32 *)((s8 *)var_r31 + 0) = (s32) lbl_805D3880;
    var_r3 = (u8 *)(var_r31 + 0x40);
    var_r4 = (s32 *)(get_window_layout_position(0x25));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPv((int) (var_r3), (int) (var_r4));
    var_f0 = lbl_805DCAC4;
    var_r3 = (u8 *)(var_r31);
    *(f32 *)((s8 *)var_r31 + 0x60) = var_f0;
    return var_r3;
}

}
