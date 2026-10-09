#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80114950 { char pad[0x18]; };
struct VObj_80114950 : Base_80114950 {
    virtual void m00(); virtual void m01(); virtual void m02(); virtual void m03();
    virtual void m04(); virtual void m05(); virtual void m06(); virtual void m07();
    virtual void m08(); virtual void m09(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62();
    virtual void m63(s32, void *);
};

extern "C" {

void set_mag_type__8TItemMagFPvi(u8 *arg0, s32 arg1);
void set_type__8TItemMagFPvi(u8 *arg0, s32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK reset__11TItemMagSubFPv();
M2C_UNK reset_stats__11TItemMagSubFPv(void *, s32, s32);
M2C_UNK set_flags64__8TItemMagFPvUi(void *, s32);

extern s32 item_mag_param_table;

void set_mag_type__8TItemMagFPvi(u8 *arg0, s32 arg1) {
    u8 *temp_r5;

    reset__11TItemMagSubFPv();
    M2C_FIELD(arg0, s32 *, 0x68) = arg1;
    M2C_FIELD(arg0, s32 **, 0x30) = (s32 *) (item_mag_param_table + (arg1 * 0x64));
    temp_r5 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x20));
    if (temp_r5 != NULL) {
        s32 elem = *M2C_FIELD(arg0, s32 **, 0x30);
        if (elem == -1) {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xA0), (void *) (temp_r5 + 0x2FC));
            return;
        }
        ((VObj_80114950 *)temp_r5)->m63(elem, (void *)(arg0 + 0xA0));
    }
}

extern s32 item_mag_param_table;

void set_type__8TItemMagFPvi(u8 *arg0, s32 arg1) {
    set_flags64__8TItemMagFPvUi(arg0, 0x18);
    reset_stats__11TItemMagSubFPv(arg0, M2C_FIELD(arg0, s32 *, 0x68), arg1);
    M2C_FIELD(arg0, s32 *, 0x68) = arg1;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (item_mag_param_table + (arg1 * 0x64));
}

}
