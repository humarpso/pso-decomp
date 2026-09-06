#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void* init__17TItemEffectWeaponFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TItemEffectWeapon__sub_8036335C(u8 *arg0);
}

extern "C" {

int set_status_flags__10TObjPlayerFPvUi(void*, void*);
int TObjPlayer__sub_8012A884(void);

    extern unsigned char lbl_804F28E0[];
    extern const float lbl_805E0268;
void* init__17TItemEffectWeaponFPv(void* a0, M2C_UNK _w1, void * _w2) { TObjPlayer__sub_8012A884(); *(int*)((char*)a0 + 0x18) = (int)lbl_804F28E0; set_status_flags__10TObjPlayerFPvUi(a0, (void*)2); *(float*)((char*)a0 + 0x1fc) = lbl_805E0268; return a0; }
u8 *TItemEffectWeapon__sub_8036335C(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x200));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init__17TItemEffectWeaponFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

}
