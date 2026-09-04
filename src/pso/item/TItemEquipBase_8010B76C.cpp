#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_8010B7D8(u8 *arg0, s32 arg1);
void fn_8010B7E8(u8 *arg0, s32 arg1);
}

extern "C" {

int check_flag_32__14TItemEquipBaseFPv(void* p);
int clear_flag_c_bit5__14TItemEquipBaseFPv(void* p);
void init_slot__14TItemEquipBaseFPv(void* a0);
void TItemData__sub_8010B7F8(s16 *arg0, s32 arg1);
s32 TItemData__sub_8010B808(void* p);
s32 TItemData__sub_8010B810(void* p);
void TItemData__sub_8010B818(void *arg0, s32 arg1);
void add_s16__9TItemDataFPvi(s16 *arg0, s32 arg1);
void add_stat__9TItemDataFPvi(void *arg0, s32 arg1);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int set_flags__10TObjPlayerFPvUi(void*, int);

    extern const float lbl_805DAB60;
void init_slot__14TItemEquipBaseFPv(void* a0) { *(short*)((char*)a0 + 0x0) = -1; *(short*)((char*)a0 + 0x2) = 0; *(float*)((char*)a0 + 0x4) = lbl_805DAB60; }

int check_flag_32__14TItemEquipBaseFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0xc, 32); }
int clear_flag_c_bit5__14TItemEquipBaseFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0xc, 32); }

void fn_8010B7D8(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) - arg1);
}

void fn_8010B7E8(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) - arg1);
}

}
