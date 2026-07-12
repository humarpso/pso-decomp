#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__11TWindowRoomFv(void* p);
int fn_8026D504(void* p);
void fn_8026D528(void *arg0, s32 arg1);
void fn_8026D564(void *arg0, s32 arg1);
void draw_status__11TWindowRoomFi(s32 arg0);
int get_array_entry__20TWindowSubStatusDispFPvi(void*, int);
s32 TWindowSubStatusDisp__sub_8025AC50(s32, s32, s32);
s32 TWindowDD__sub_80244CF4();
int TWindowDD__sub_8024664C(void*);
s32 TWindowSubStatusDisp__sub_80257BC0(s32, s32, s32);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);
M2C_UNK TWindowSubStatusDisp__sub_80287580(s32, s32, M2C_UNK, f32);

int fn_8026D504(void* p) { return get_array_entry__20TWindowSubStatusDispFPvi(p, 0); }
void fn_8026D528(void *arg0, s32 arg1) {
    TWindowSubStatusDisp__sub_8025AC50(get_array_entry__20TWindowSubStatusDispFPvi((void*)(arg0), 0), arg1, 0x60);
}
void fn_8026D564(void *arg0, s32 arg1) {
    TWindowSubStatusDisp__sub_80287580(arg1, arg1 + 0x10, 3, M2C_FIELD(arg0, f32 *, 0x60));
}
void draw_status__11TWindowRoomFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = TWindowDD__sub_80244CF4();
    fn_8026D564((void *)(arg0), temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
}
void run_task__11TWindowRoomFv(void* p) { TWindowDD__sub_8024664C(p); TWindowSubStatusDisp__sub_80257C28(p, (char*)p + 0x24); }

}
