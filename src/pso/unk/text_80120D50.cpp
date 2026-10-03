#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Pad_80120D50 { u8 pad[0x18]; };

struct V_80120D50 : Pad_80120D50 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(s32);
};

extern "C" {
u8 get_field_ed__10TObjPlayerFPv(void *);
M2C_UNK set_flags__10TObjPlayerFPvUi(void *, int);
M2C_UNK clear_id__10TObjPlayerFPv(void *);
M2C_UNK TItemEquipBase__ct(void *, void *, u8 *);
u8 *lookup_item_pmt_record(void *);
s32 check_item_flags__9TItemDataFPv(void *);
s32 get_shield_pmt_entry__10TObjPlayerFUc(u8);
u8 get_weapon_class_motion_type(u8);
M2C_UNK set_weapon_category_flags(void *);
M2C_UNK set_status_flags__10TObjPlayerFPvUi(void *, int);
M2C_UNK set_weapon_trail_joints(void *, int, int, int);
M2C_UNK memcpy(void *, void *, int);
M2C_UNK memset(void *, int, int);
void create_gun_shot(void);
extern void *__vt__11TItemWeapon[];
extern M2C_UNK lbl_805D53EC;
extern const f32 lbl_805DAC98;
extern u8 lbl_805DACA4;
extern const f32 lbl_805DACB0;
u8 *TItemWeapon__ct(u8 *arg0, void *arg1, u8 *arg2);
}

extern "C" {

u8 *TItemWeapon__ct(u8 *arg0, void *arg1, u8 *arg2) {
    s32 temp_r3;
    u8 temp_r0;
    u8 *temp_r4;
    u8 *temp_r6;
    u8 *temp_r6_2;
    TItemEquipBase__ct(arg0, arg1, arg2);
    M2C_FIELD(arg0, void ***, 0x18) = __vt__11TItemWeapon;
    ((V_80120D50 *)arg0)->v17(6);
    M2C_FIELD(arg0, void **, 0x1DC) = lookup_item_pmt_record(arg2);
    M2C_FIELD(arg0, s32 *, 0x1E0) = get_shield_pmt_entry__10TObjPlayerFUc(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1DC), u8 *, 0x26));
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x1DC));
    M2C_FIELD(arg0, s16 *, 0x1E8) = (s16) (s8) M2C_FIELD(temp_r4, u8 *, 0x17);
    M2C_FIELD(arg0, u8 *, 0x1D1) = (u8) M2C_FIELD(arg2, u8 *, 3);
    temp_r3 = check_item_flags__9TItemDataFPv((void *) (arg2));
    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1DC), u8 *, 0x18);
    if (temp_r0 == 0) {
        M2C_FIELD(arg0, u8 *, 0x1D2) = (u8) (M2C_FIELD(arg2, u8 *, 4) & 0xFFFFFFBF);
    } else {
        M2C_FIELD(arg0, u8 *, 0x1D2) = temp_r0;
    }
    if (temp_r3 == 0) {
        M2C_FIELD(arg0, u8 *, 0x1D2) = (u8) (M2C_FIELD(arg0, u8 *, 0x1D2) | lbl_805DACA4);
    }
    memcpy((void *) (arg0 + 0x1A4), (void *) (arg2 + 6), (int) (6));
    M2C_FIELD(arg0, s32 *, 0x1EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1F4) = 0;
    M2C_FIELD(arg0, void **, 0x1F0) = (void *)create_gun_shot;
    M2C_FIELD(arg0, s16 *, 0x1CE) = (s16) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1DC), u8 *, 0x1B);
    temp_r6 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x1DC));
    set_weapon_trail_joints((void *) (arg0), (int) (0), (int) (M2C_FIELD(temp_r6, u8 *, 0x1C)), (int) (M2C_FIELD(temp_r6, u8 *, 0x1D)));
    temp_r6_2 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x1DC));
    set_weapon_trail_joints((void *) (arg0), (int) (1), (int) (M2C_FIELD(temp_r6_2, u8 *, 0x1E)), (int) (M2C_FIELD(temp_r6_2, u8 *, 0x1F)));
    set_weapon_trail_joints((void *) (arg0), (int) (2), (int) (-1U), (int) (-1U));
    set_weapon_trail_joints((void *) (arg0), (int) (3), (int) (-1U), (int) (-1U));
    memset((void *) (arg0 + 0x18C), (int) (0), (int) (0x10));
    M2C_FIELD(arg0, s32 *, 0x1B8) = 0;
    M2C_FIELD(arg0, f32 *, 0x1E4) = (f32) lbl_805DACB0;
    M2C_FIELD(arg0, s32 *, 0x1BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C4) = 0;
    u8 ed = ((u32 (*)(void *))get_field_ed__10TObjPlayerFPv)((void *) (arg0));
    if (ed < 0xAA) {
        M2C_FIELD(arg0, s8 *, 0x1D3) = get_weapon_class_motion_type(ed);
        if ((s16) M2C_FIELD(arg0, s16 *, 0x1E8) != -1) {
            M2C_FIELD(arg0, s16 *, 0x1CC) = (s16) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1DC), u8 *, 0x20);
        } else {
            M2C_FIELD(arg0, s16 *, 0x1CC) = -1;
        }
    } else {
        M2C_FIELD(arg0, s8 *, 0x1D3) = 1;
        M2C_FIELD(arg0, s16 *, 0x1CC) = -1;
    }
    M2C_FIELD(arg0, s32 *, 0x1D4) = -1;
    M2C_FIELD(arg0, f32 *, 0x1D8) = (f32) lbl_805DAC98;
    if (get_field_ed__10TObjPlayerFPv((void *) (arg0)) == 0) {
        M2C_FIELD(arg0, s16 *, 0x1E8) = -1;
    } else {
        clear_id__10TObjPlayerFPv((void *) (&lbl_805D53EC));
        M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) lbl_805DAC98;
    }
    set_weapon_category_flags((void *) (arg0));
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1DC), u8 *, 0x27) & 1) {
        set_flags__10TObjPlayerFPvUi((void *) (arg0 + 0x178), (int) (0x20));
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1DC), u8 *, 0x27) & 2) {
        set_status_flags__10TObjPlayerFPvUi((void *) (arg0), (int) (0x40000));
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1DC), u8 *, 0x27) & 4) {
        set_status_flags__10TObjPlayerFPvUi((void *) (arg0), (int) (0x80000));
    }
    return arg0;
}

}
