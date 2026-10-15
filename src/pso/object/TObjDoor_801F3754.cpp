#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjDoor__sub_801F3754(void);
void TObjDoor__sub_801F3760(void);
void set_main_warp_id__8TObjDoorFi(int a0);

extern s32 TObjDoor__data_805D5BC8;

void TObjDoor__sub_801F3754(void) {
    TObjDoor__data_805D5BC8 = 1;
}

    extern int switch_doors_force_closed;
void TObjDoor__sub_801F3760(void) { switch_doors_force_closed = 1; }

    extern int city_main_warp_destination_id;
void set_main_warp_id__8TObjDoorFi(int a0) { city_main_warp_destination_id = a0; }

}
