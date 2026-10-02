#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct ObjBase_80104DAC { u8 pad[0x18]; };

struct Obj_80104DAC : ObjBase_80104DAC {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual s32 v14();
};

struct ItemData_80104DAC { u8 b[0x14]; };

struct MagData_80104DAC { u8 b[0x10]; };

struct Rec_80104DAC { u8 pad0[6]; u8 b6; u8 b7; u8 b8; u8 b9; u8 bA; u8 bB; u8 bC; };

extern "C" {
s32 get_actor_section_id(void *);
void copy_to_item_data__5TItemFPvPv(void *, void *);
void *find_unique_combination_target(void *, u8 *);
s32 TWindowHelpItem__sub_80104FCC(void *, void *, int);
void initialize_mag_data__9TItemDataFPv(void *);
void TItemData__sub_8010D614(void *, void *);
void init__9TItemDataFv(void *);
s16 TItemMagSub__sub_8011455C(void *);
Rec_80104DAC *TObjPlayer__sub_8011C0B8(u8 *, void *);
s32 TItemData__sub_80104DAC(s32 arg0, u8 *arg1);
}

extern "C" {

u8 is_item_usable__9TItemDataFiPv(s32 arg0, u8 *arg1);
s32 TItemData__sub_8010C52C(u8 *);
void *lookup_item_pmt_record(u8 *);

u8 is_item_usable__9TItemDataFiPv(s32 arg0, u8 *arg1) {
    if (TItemData__sub_8010C52C(arg1) != 0) {
        return 1U;
    }
    if ((u8) *arg1 == 3) {
        if (M2C_FIELD(lookup_item_pmt_record(arg1), s32 *, 0x10) & 1) {
            return 1U;
        }
        return (u8) (TItemData__sub_80104DAC((s32)(arg0), (u8 *)(arg1)) != 0);
    }
    return (u8) (TItemData__sub_80104DAC((s32)(arg0), (u8 *)(arg1)) != 0);
}
#define o ((Obj_80104DAC *)arg0)
s32 TItemData__sub_80104DAC(s32 arg0, u8 *arg1) {
    ItemData_80104DAC d;
    ItemData_80104DAC d2;
    MagData_80104DAC mag;
    s16 m;
    Rec_80104DAC *rec;
    void *it;
    u8 v;
    rec = NULL;
    if (o != NULL && arg1 != NULL) {
        it = find_unique_combination_target(o, arg1);
        if (it != NULL) {
            init__9TItemDataFv(&d);
            copy_to_item_data__5TItemFPvPv(it, &d);
            rec = TObjPlayer__sub_8011C0B8(arg1, it);
        } else {
            return 0;
        }
        if (rec->b9 != 0xFF) {
            if (d.b[0] != 2) {
                return 0;
            }
            initialize_mag_data__9TItemDataFPv(&mag);
            TItemData__sub_8010D614(&d, &mag);
            m = rec->b9;
            if (TItemMagSub__sub_8011455C(&mag) < m) {
                return 0;
            }
        }
        if (rec->bA != 0xFF) {
            if (d.b[0] != 0) {
                return 0;
            }
            if (d.b[3] < rec->bA) {
                return 0;
            }
        }
        v = rec->bB;
        if (v != 0xFF) {
            if (o->v14() < v - 1) {
                return 0;
            }
        }
        v = rec->bC;
        if (v != 0xFF) {
            if (v != get_actor_section_id(o)) {
                return 0;
            }
        }
        init__9TItemDataFv(&d2);
        d2.b[0] = rec->b6;
        d2.b[1] = rec->b7;
        d2.b[2] = rec->b8;
        if (TWindowHelpItem__sub_80104FCC(o, &d2, 0) == 0) {
            return 0;
        }
    }
    return (s32)rec;
}

}
