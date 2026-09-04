#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TWindowSubStatusDisp__sub_8027FD9C(void);
void TWindowSubStatusDisp__vt13(void *arg0);
void TWindowSubStatusDisp__vt14(void);
void TWindowSubStatusDisp__vt15(void);
void TWindowSubStatusDisp__vt16(void);
void TWindowSubStatusDisp__vt18(void);
void fn_8027FD88(void* p, f32 a, f32 b);
void fn_8027FD94(void* p, s16 v);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
s16 get_class_id__10TObjPlayerFPv(s32);
s16 get_field_2F8__20TWindowSubStatusDispFPv(s32);
s16 get_item_index__10TObjPlayerFPv(s32);
s16 get_item_type__20TWindowSubStatusDispFPv(s32);
s16 get_stat__20TWindowSubStatusDispFPv(s32);

void fn_8027FD88(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x6c) = a; *(f32*)((char*)p + 0x70) = b; }
void fn_8027FD94(void* p, s16 v) { *(s16*)((char*)p + 0x62) = v; }
int TWindowSubStatusDisp__sub_8027FD9C(void) { return 0; }

void TWindowSubStatusDisp__vt16(void) {  }

void TWindowSubStatusDisp__vt15(void) {  }

void TWindowSubStatusDisp__vt18(void) {  }

void TWindowSubStatusDisp__vt14(void) {  }

void TWindowSubStatusDisp__vt13(void *arg0) {
    s32 temp_r3;
    void *temp_r31;
    void *temp_r31_2;
    void *temp_r31_3;
    void *temp_r31_4;
    void *temp_r31_5;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 0x20));
    if (temp_r3 != 0) {
        temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 2);
        M2C_FIELD(temp_r31, s32 *, 0x20) = (s32) get_stat__20TWindowSubStatusDispFPv(temp_r3);
        temp_r31_2 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 8);
        M2C_FIELD(temp_r31_2, s32 *, 0x20) = (s32) get_class_id__10TObjPlayerFPv(temp_r3);
        temp_r31_3 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xE);
        M2C_FIELD(temp_r31_3, s32 *, 0x20) = (s32) get_item_index__10TObjPlayerFPv(temp_r3);
        temp_r31_4 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x14);
        M2C_FIELD(temp_r31_4, s32 *, 0x20) = (s32) get_field_2F8__20TWindowSubStatusDispFPv(temp_r3);
        temp_r31_5 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x1A);
        M2C_FIELD(temp_r31_5, s32 *, 0x20) = (s32) get_item_type__20TWindowSubStatusDispFPv(temp_r3);
    }
}

}
