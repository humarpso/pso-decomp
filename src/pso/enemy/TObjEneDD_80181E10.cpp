#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 is_split_screen(void);
u8 * TObjCityDoor_Lobby__ct(void *, M2C_UNK, s32);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern s32 tl_05;
u8 *TObjCityDoor_Lobby__create(s32 arg0);
}

extern "C" {

int is_phase_e__9TObjEneDDFPv(void* p);
int is_phase_e__9TObjEneDDFv(void*);

int is_phase_e__9TObjEneDDFPv(void* p) { return is_phase_e__9TObjEneDDFv(p); }
u8 *TObjCityDoor_Lobby__create(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() != 0) {
        return NULL;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x254));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TObjCityDoor_Lobby__ct(temp_r3, tl_05, arg0));
    }
    return var_r0;
}

}
