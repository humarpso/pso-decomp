#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemData__sub_8010B7F8(s16 *arg0, s32 arg1);
void TItemData__sub_8010B818(void *arg0, s32 arg1);
void add_stat__9TItemDataFPvi(void *arg0, s32 arg1);
void add_s16__9TItemDataFPvi(s16 *arg0, s32 arg1);
int check_flag_32__14TItemEquipBaseFPv(void* p);
int clear_flag_c_bit5__14TItemEquipBaseFPv(void* p);
s32 TItemData__sub_8010B808(void* p);
s32 TItemData__sub_8010B810(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);

int check_flag_32__14TItemEquipBaseFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0xc, 32); }
int clear_flag_c_bit5__14TItemEquipBaseFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0xc, 32); }

}
