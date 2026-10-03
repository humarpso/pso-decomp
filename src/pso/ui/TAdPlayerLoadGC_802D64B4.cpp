#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void* init_object__15TAdPlayerLoadGCFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TAdPlayerLoadGC__sub_802D6504(u8 *arg0);
}

extern "C" {

int TItemWeapon__ct(void);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

    extern unsigned char lbl_804E24F0[];
    extern const float lbl_805DE7A8;
void* init_object__15TAdPlayerLoadGCFPv(void* a0, M2C_UNK _w1, void * _w2) { TItemWeapon__ct(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E24F0; set_status_flags__10TObjPlayerFPvUi(a0, (void*)2); *(float*)((char*)a0 + 0x1f8) = lbl_805DE7A8; return a0; }
u8 *TAdPlayerLoadGC__sub_802D6504(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init_object__15TAdPlayerLoadGCFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

}
