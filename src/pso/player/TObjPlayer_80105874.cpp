#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
u8 TWindowSubComCard__sub_801058F8(u8 *arg0);
}

extern "C" {

int activate_d04_slot__10TObjPlayerFPv(void* p);
void fn_801058E8(void* p);
void free_item_globals__10TObjPlayerFv(void);
int TItemDrop__sub_8010F168(void*, void*);
int TItemMagSub__sub_80114524(void*);
void clear_fields__20TWindowSubStatusDispFPv(void* p);
int free_all__9TItemLoadFv(void);
int free_all_and_init__9TItemBuffFv(void);
int get_item_field_2__9TItemDataFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*, int);
int test_flag3__9TItemDataFPv(void* p);

    extern int lbl_805D5444;
void free_item_globals__10TObjPlayerFv(void) { TItemDrop__sub_8010F168((void*)(lbl_805D5444), (void*)1); lbl_805D5444 = 0; free_all__9TItemLoadFv(); free_all_and_init__9TItemBuffFv(); }

void fn_801058E8(void* p) { *(u8*)((char*)p + 0x7) |= 0x1; }

u8 TWindowSubComCard__sub_801058F8(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s16 *, 0x324) == 6);
}

int activate_d04_slot__10TObjPlayerFPv(void* p) { return get_slot_value__10TObjPlayerFPvi((char*)p + 0xd04, 1); }

}
