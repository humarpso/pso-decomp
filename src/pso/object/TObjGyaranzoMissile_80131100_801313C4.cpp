#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void* init_effect__19TObjGyaranzoMissileFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjGyaranzoMissile__sub_80131430(u8 *arg0);
}

extern "C" {

f32 scale_velocity__19TObjGyaranzoMissileFPvf(void *arg0, f32 farg0);
f32 TCameraCtrl__sub_803D8D00();
f32 TObjPlayer__sub_8001978C();
int TObjPlayer__sub_80120D50(void);

    extern unsigned char TObjPlayer__sub_80109440[];
    extern unsigned char lbl_804A6DC0[];
    extern const float lbl_805DB054;
    extern const float lbl_805DB060;
void* init_effect__19TObjGyaranzoMissileFPv(void* a0, M2C_UNK _w1, void * _w2) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A6DC0; *(int*)((char*)a0 + 0x1f0) = 0; *(int*)((char*)a0 + 0x1ec) = (int)TObjPlayer__sub_80109440; *(float*)((char*)a0 + 0x1e4) = lbl_805DB060; *(int*)((char*)a0 + 0x1f8) = 0; *(float*)((char*)a0 + 0x204) = lbl_805DB054; *(float*)((char*)a0 + 0x200) = lbl_805DB054; *(float*)((char*)a0 + 0x1fc) = lbl_805DB054; return a0; }

extern f32 lbl_805DB068;
extern f32 lbl_805DB06C;

u8 *TObjGyaranzoMissile__sub_80131430(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x208));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init_effect__19TObjGyaranzoMissileFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

f32 scale_velocity__19TObjGyaranzoMissileFPvf(void *arg0, f32 farg0) {
    f32 temp_f1;
    f32 temp_f2;

    if (TCameraCtrl__sub_803D8D00() > lbl_805DB068) {
        temp_f1 = TObjPlayer__sub_8001978C();
        temp_f2 = farg0 / temp_f1;
        M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) * temp_f2);
        M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) * temp_f2);
        M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) * temp_f2);
        return temp_f1;
    }
    return lbl_805DB06C;
}

}
