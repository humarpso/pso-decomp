#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_ddf499 { char pad[0x18]; };

struct VObj_18_ddf499 : VBase_18_ddf499 {
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
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual M2C_UNK m71();
};

extern "C" {
M2C_UNK obj_getField1c(void *);
s16 calc_stat_bonus_sum__10TObjPlayerFUs();
s16 calc_equip_bonus__10TObjPlayerFUs();
s32 check_class_equip_permission(void *, int);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK apply_luck_reward__10TObjPlayerFiUc(void *, int);
M2C_UNK add_dfp_material__10TObjPlayerFiUc(void *, int);
M2C_UNK add_evp_material__10TObjPlayerFiUc(void *, int);
M2C_UNK add_mst_and_item__10TObjPlayerFiUc(void *, int);
M2C_UNK add_stat_and_item__10TObjPlayerFiUc(void *, int);
M2C_UNK set_speed_scaled_by_camera__10TObjPlayerFiUc(void *, int);
M2C_UNK apply_speed_with_camera_scale__10TObjPlayerFiUc(void *, int);
void apply_material_item(u8 *arg0);
}

extern "C" {

void __dt__11TItemObjectFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);
extern M2C_UNK lbl_8049FBC0[];

void apply_material_item(u8 *arg0) {
    u8 temp_r3;
    u8 *temp_r3_2;
    temp_r3 = get_slot_count__14TItemProShieldFPv();
    switch (temp_r3) {
    case 0:
        add_stat_and_item__10TObjPlayerFiUc((void *) (M2C_FIELD(arg0, u8 **, 0xF0)), (int) (2));
        break;
    case 1:
        if (check_class_equip_permission((void *) (M2C_FIELD(arg0, u8 **, 0xF0)), (int) (0xD7)) == 0) {
            add_mst_and_item__10TObjPlayerFiUc((void *) (M2C_FIELD(arg0, u8 **, 0xF0)), (int) (2));
        }
        break;
    case 2:
        add_evp_material__10TObjPlayerFiUc((void *) (M2C_FIELD(arg0, u8 **, 0xF0)), (int) (2));
        break;
    case 3:
        obj_getField1c((void *) (M2C_FIELD(arg0, u8 **, 0xF0)));
        if (calc_equip_bonus__10TObjPlayerFUs() < 0xFA) {
            apply_speed_with_camera_scale__10TObjPlayerFiUc((void *) (M2C_FIELD(arg0, u8 **, 0xF0)), (int) (2));
        }
        break;
    case 4:
        obj_getField1c((void *) (M2C_FIELD(arg0, u8 **, 0xF0)));
        if ((calc_stat_bonus_sum__10TObjPlayerFUs() < 0xFA) && (check_class_equip_permission((void *) (M2C_FIELD(arg0, u8 **, 0xF0)), (int) (0xD7)) == 0)) {
            set_speed_scaled_by_camera__10TObjPlayerFiUc((void *) (M2C_FIELD(arg0, u8 **, 0xF0)), (int) (2));
        }
        break;
    case 5:
        add_dfp_material__10TObjPlayerFiUc((void *) (M2C_FIELD(arg0, u8 **, 0xF0)), (int) (2));
        break;
    case 6:
        apply_luck_reward__10TObjPlayerFiUc((void *) (M2C_FIELD(arg0, u8 **, 0xF0)), (int) (2));
        break;
    }
    temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xF0));
    ((VObj_18_ddf499 *)(temp_r3_2))->m71();
}
void *item_object_variant_deleting_dtor_80116F10(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FBC0;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
