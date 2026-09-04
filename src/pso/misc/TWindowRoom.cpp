#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__11TWindowRoomFv(void *arg0, s16 arg1);
void draw_status__11TWindowRoomFi(s32 arg0);
int fn_8026D504(void* p);
void fn_8026D564(void *arg0, s32 arg1);
void run_task__11TWindowRoomFv(void* p);
void set_entry_display_value__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
s32 TWindowSubStatusDisp__sub_80257BC0(s32, s32, s32);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);
s32 TWindowSubStatusDisp__sub_8025AC50(s32, s32, s32);
M2C_UNK TWindowSubStatusDisp__sub_80287580(s32, s32, M2C_UNK, f32);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 draw_default_entry__9TWindowDDFi();
int get_array_entry__20TWindowSubStatusDispFPvi(void*, int);
int initialize_subwindow__9TWindowDDFPv(void*);

int fn_8026D504(void* p) { return get_array_entry__20TWindowSubStatusDispFPvi(p, 0); }
void set_entry_display_value__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    TWindowSubStatusDisp__sub_8025AC50(get_array_entry__20TWindowSubStatusDispFPvi((void*)(arg0), 0), arg1, 0x60);
}
void fn_8026D564(void *arg0, s32 arg1) {
    TWindowSubStatusDisp__sub_80287580(arg1, arg1 + 0x10, 3, M2C_FIELD(arg0, f32 *, 0x60));
}
void draw_status__11TWindowRoomFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFi();
    fn_8026D564((void *)((void *)(arg0)), (s32)(temp_r3));
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
}
void run_task__11TWindowRoomFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); TWindowSubStatusDisp__sub_80257C28(p, (char*)p + 0x24); }

extern M2C_UNK __vt__11TWindowRoom[];

void *__dt__11TWindowRoomFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TWindowRoom;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
