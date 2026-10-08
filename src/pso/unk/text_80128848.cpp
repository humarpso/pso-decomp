#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual s32 m49(void *, M2C_UNK, M2C_UNK, M2C_UNK);
};

extern "C" {
M2C_UNK TObjPlayer__sub_80128A70();
void apply_m49_state_a__10TObjPlayerFPv(u8 *arg0);
void draw_status_icons__10TObjPlayerFPvPvPv(void *, void *, void *);
void TObjPlayer__sub_80128944(u8 *arg0);
u8 * init_shot_state__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_shot_state__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

u8 *create_shot_state__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x208));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(init_shot_state__10TObjPlayerFPv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

void apply_m49_state_a__10TObjPlayerFPv(u8 *arg0) {
    TObjPlayer__sub_80128A70();
    if (((VObj_18 *)(arg0))->m49(arg0 + 0x1FC, 0, 0, 1) != 0) {
        ((VObj_18 *)(arg0))->m49(arg0 + 0x208, 0, 0, 0);
        return;
    }
    ((VObj_18 *)(arg0))->m49(arg0 + 0x208, 0, 0, 1);
}
void TObjPlayer__sub_80128944(u8 *arg0) {
    draw_status_icons__10TObjPlayerFPvPvPv(arg0, arg0 + 0x1FC, arg0 + 0x208);
}

}
