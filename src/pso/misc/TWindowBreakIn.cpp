#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80246C58_lbl_804CE1B8 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80246C58___vt__14TWindowBreakIn {
    M2C_UNK value;
    u8 remaining[0x18];
};

extern "C" {
u8 * get_window_layout_position(s32);
M2C_UNK TWindowDD__sub_802466E0(void *, void *, int, int);
extern RecoveredGlobal_80246C58_lbl_804CE1B8 lbl_804CE1B8;
extern M2C_UNK __vt__14TWindowBreakIn[];
extern s32 lbl_805D3890;
u8 *TWindowBreakIn__ct(u8 *arg0);
}

extern "C" {

void *__dt__14TWindowBreakInFv(void *arg0, s16 arg1);
void render__14TWindowBreakInFv(s32 arg0);
void run_task__14TWindowBreakInFv(void* p);
int TWindowSubStatusDisp__sub_80246980(void*);
M2C_UNK draw_visible_window_entries(s32, s32, s32);
int update_window_entry_list(void*, void*);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 draw_default_entry__9TWindowDDFi();
int initialize_subwindow__9TWindowDDFPv(void*);

void render__14TWindowBreakInFv(s32 arg0) {
    s32 tmp = draw_default_entry__9TWindowDDFi();
    draw_visible_window_entries(arg0, arg0 + 0x24, tmp);
}

void run_task__14TWindowBreakInFv(void* p) { TWindowSubStatusDisp__sub_80246980(p); initialize_subwindow__9TWindowDDFPv(p); update_window_entry_list(p, (char*)p + 0x24); }

extern M2C_UNK __vt__14TWindowBreakIn[];

void *__dt__14TWindowBreakInFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TWindowBreakIn;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80246C58_lbl_804CE1B8_size[sizeof(RecoveredGlobal_80246C58_lbl_804CE1B8) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80246C58___vt__14TWindowBreakIn_size[sizeof(RecoveredGlobal_80246C58___vt__14TWindowBreakIn) == 0x1C ? 1 : -1];
u8 *TWindowBreakIn__ct(u8 *arg0) {
    TWindowDD__sub_802466E0((void *) (arg0), (void *) (&lbl_804CE1B8.value), (int) (4), (int) (get_window_layout_position(0xAA)));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80246C58___vt__14TWindowBreakIn *)&__vt__14TWindowBreakIn).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3890;
    return arg0;
}

}
