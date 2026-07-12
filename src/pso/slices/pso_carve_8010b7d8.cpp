#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemData__sub_8010B7F8(s16 *arg0, s32 arg1);
void TItemData__sub_8010B818(void *arg0, s32 arg1);
void TItemData__sub_8010B828(void *arg0, s32 arg1);
void TItemData__sub_8010B838(s16 *arg0, s32 arg1);
int check_flag_32__14TItemEquipBaseFPv(void* p);
int clear_flag_c_bit5__14TItemEquipBaseFPv(void* p);
s32 TItemData__sub_8010B808(void* p);
s32 TItemData__sub_8010B810(void* p);
int TObjPlayer__sub_8001BED8(void*, int);
int TAdRicoRing__sub_8001BEE8(void*, int);

int fn_8010B7D8(void) { return 0; }
int fn_8010B7E8(void) { return 0; }
void TItemData__sub_8010B7F8(s16 *arg0, s32 arg1) {
    *arg0 -= arg1;
}
s32 TItemData__sub_8010B808(void* p) { return *(s32*)((char*)p + 0x31c); }
s32 TItemData__sub_8010B810(void* p) { return *(s32*)((char*)p + 0x318); }

}
