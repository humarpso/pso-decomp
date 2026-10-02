#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_8b050c { char pad[0x18]; };

struct VObj_18_8b050c : VBase_18_8b050c {
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
    virtual M2C_UNK m44();
    virtual M2C_UNK m45();
};

struct Self_801124C4
{
  u8 pad[0x198];
  u8 data[1];
};

extern "C" {
u8 get_field_ed__10TObjPlayerFPv(s32);
s8 TObjPlayer__sub_80102C30(void *);
int get_flag_40__8TItemMagFPv(void *);
void copy_owner_data__8TItemMagFPv(void *);
u8 * get_pmt_record__10TObjPlayerFi(int);
M2C_UNK register_photon_blasts__8TItemMagFPv(void *);
M2C_UNK TItemMag__sub_80113F64(void *, int);
M2C_UNK play_sound_effect(int, int, int, int);
void apply_form_change__8TItemMagFPv(u8 *arg0);
s32 check_class_equip_permission(void *, M2C_UNK);
M2C_UNK try_add_action__8TItemMagFii(void *, M2C_UNK);
void TItemMag__sub_80112360(u8 *arg0);
u8 get_field_ed__10TObjPlayerFPv(s32);
s8 TItemMag__sub_801117C0(void *);
s32 TItemMag__sub_80111978(void *);
void update_feed_anim__8TItemMagFPv(void *arg0);
void do_action_by_class__8TItemMagFi(s32 arg0);
void TItemMag__sub_80112360(u8 *arg0);
void apply_form_change__8TItemMagFPv(u8 *arg0);
s16 TItemMagSub__sub_8011455C(void *);
extern s32 lbl_8043E534[];
void apply_natural_evolution__8TItemMagFPv(Self_801124C4 *self);
}

extern "C" {

void do_action_by_class__8TItemMagFi(s32 arg0);
void feed_by_item_flags__8TItemMagFPvc(void *arg0, s8 arg1);
void update_feed_anim__8TItemMagFPv(void *arg0);
s32 check_class_equip_permission(void *, M2C_UNK);
M2C_UNK request_support_action__8TItemMagFPvi(void *, u8);
s32 check_action_probability__8TItemMagFPvi(void *, M2C_UNK);
u8 get_field_ed__10TObjPlayerFPv(s32);
s16 get_mag_item_data(void *);
s16 get_mag_item_percent(void *, void *);
s16 get_mag_item_stat_percent(void *);
s16 get_mag_level(void *);
s32 get_max_stat_flags__8TItemMagFi();
M2C_UNK rand();
M2C_UNK try_add_action__8TItemMagFii(void *, M2C_UNK);

void update_feed_anim__8TItemMagFPv(void *arg0) {
    s16 temp_r26;
    s16 temp_r29;
    s16 temp_r30;
    s16 temp_r31;
    s32 temp_r25;
    s8 temp_r28;
    void *temp_r4;

    if ((void *) M2C_FIELD(arg0, void **, 0xF0) != NULL) {
        temp_r25 = get_max_stat_flags__8TItemMagFi();
        temp_r4 = M2C_FIELD(arg0, void **, 0xF0);
        temp_r28 = (s8) M2C_FIELD(temp_r4, u8 *, 0x88C);
        temp_r29 = get_mag_item_percent(arg0, temp_r4);
        temp_r30 = get_mag_level(arg0);
        temp_r31 = get_mag_item_data(arg0);
        temp_r26 = get_mag_item_stat_percent(arg0);
        if (check_class_equip_permission(M2C_FIELD(arg0, void **, 0xF0), 0xF9) != 0) {
            if (temp_r25 & 0x108) {
                if (!(temp_r28 & 1)) {
                    if (temp_r31 <= temp_r30) {
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(5));
                        return;
                    }
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0xC));
                    return;
                }
                if (temp_r31 <= temp_r30) {
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(6));
                    return;
                }
                try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(8));
                return;
            }
            if (temp_r25 & 0x10) {
                if (!(temp_r28 & 1)) {
                    if (temp_r29 <= temp_r31) {
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x13));
                        return;
                    }
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x17));
                    return;
                }
                if (temp_r29 <= temp_r31) {
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x10));
                    return;
                }
                try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x12));
                return;
            }
            if (temp_r25 & 0x20) {
                if (!(temp_r28 & 1)) {
                    if (temp_r30 <= temp_r29) {
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x1E));
                        return;
                    }
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(7));
                    return;
                }
                if (temp_r30 <= temp_r29) {
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x24));
                    return;
                }
                try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x16));
            }
        } else if (check_class_equip_permission(M2C_FIELD(arg0, void **, 0xF0), 0xFA) != 0) {
            if (temp_r25 & 0x110) {
                if (!(temp_r28 & 1)) {
                    if (temp_r29 <= temp_r31) {
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(6));
                        return;
                    }
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0xC));
                    return;
                }
                if (temp_r29 <= temp_r31) {
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(5));
                    return;
                }
                try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0xA));
                return;
            }
            if (temp_r25 & 8) {
                if (!(temp_r28 & 1)) {
                    if (temp_r31 <= temp_r30) {
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(6));
                        return;
                    }
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0xC));
                    return;
                }
                if (temp_r31 <= temp_r30) {
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x26));
                    return;
                }
                try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0xA));
                return;
            }
            if (temp_r25 & 0x20) {
                if (!(temp_r28 & 1)) {
                    if (temp_r30 <= temp_r29) {
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(5));
                        return;
                    }
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(8));
                    return;
                }
                if (temp_r30 <= temp_r29) {
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x1E));
                    return;
                }
                try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x18));
            }
        } else if (check_class_equip_permission(M2C_FIELD(arg0, void **, 0xF0), 0xFC) != 0) {
            if (temp_r25 & 0x120) {
                if (temp_r26 <= 0x2C) {
                    if (!(temp_r28 & 1)) {
                        if (temp_r30 <= temp_r29) {
                            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x1C));
                            return;
                        }
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x1E));
                        return;
                    }
                    if (temp_r30 <= temp_r29) {
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(9));
                        return;
                    }
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x17));
                    return;
                }
                try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x24));
                return;
            }
            if (temp_r25 & 8) {
                if (temp_r26 <= 0x2C) {
                    if (!(temp_r28 & 1)) {
                        if (temp_r31 <= temp_r30) {
                            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x25));
                            return;
                        }
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x1F));
                        return;
                    }
                    if (temp_r31 <= temp_r30) {
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x20));
                        return;
                    }
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x1C));
                    return;
                }
                try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x23));
                return;
            }
            if (temp_r25 & 0x10) {
                if (temp_r26 <= 0x2C) {
                    if (!(temp_r28 & 1)) {
                        if (temp_r29 <= temp_r31) {
                            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x11));
                            return;
                        }
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x15));
                        return;
                    }
                    if (temp_r29 <= temp_r31) {
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0xC));
                        return;
                    }
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x12));
                    return;
                }
                try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x24));
            }
        }
    }
}

void do_action_by_class__8TItemMagFi(s32 arg0) {
    s32 temp_r31;
    u8 temp_r3;

    temp_r31 = get_max_stat_flags__8TItemMagFi();
    temp_r3 = get_field_ed__10TObjPlayerFPv(arg0);
    switch ((s32) temp_r3) {
    case 1:
        if (temp_r31 & 0x108) {
            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0xE));
            return;
        }
        if (temp_r31 & 0x10) {
            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0xF));
            return;
        }
        if (temp_r31 & 0x20) {
            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(4));
        }
        break;
    case 13:
        if (temp_r31 & 0x110) {
            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(2));
            return;
        }
        if (temp_r31 & 8) {
            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(3));
            return;
        }
        if (temp_r31 & 0x20) {
            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0xB));
            return;
        }
        break;
    case 25:
        if (temp_r31 & 0x120) {
            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x1A));
            return;
        }
        if (temp_r31 & 8) {
            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x1B));
            return;
        }
        if (temp_r31 & 0x10) {
            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x14));
        }
        break;
    }
}

void TItemMag__sub_80112360(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xF0));
    if (temp_r3 != NULL) {
        if (check_class_equip_permission((void *)(temp_r3), (M2C_UNK)(0xF9)) != 0) {
            try_add_action__8TItemMagFii((void *)((s32) arg0), (M2C_UNK)(1));
            return;
        }
        if (check_class_equip_permission((void *)(M2C_FIELD(arg0, u8 **, 0xF0)), (M2C_UNK)(0xFA)) != 0) {
            try_add_action__8TItemMagFii((void *)((s32) arg0), (M2C_UNK)(0xD));
            return;
        }
        if (check_class_equip_permission((void *)(M2C_FIELD(arg0, u8 **, 0xF0)), (M2C_UNK)(0xFC)) != 0) {
            try_add_action__8TItemMagFii((void *)((s32) arg0), (M2C_UNK)(0x19));
        }
    }
}

void apply_form_change__8TItemMagFPv(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(get_pmt_record__10TObjPlayerFi((s32) get_field_ed__10TObjPlayerFPv((s32)(arg0))));
    if (temp_r3 != NULL) {
        TItemMag__sub_80113F64((void *) (arg0 + 0x198), (int) (M2C_FIELD(temp_r3, u8 *, 0xA)));
    }
    if (TObjPlayer__sub_80102C30(arg0) == 2) {
        ((VObj_18_8b050c *)(arg0))->m45();
        M2C_FIELD(arg0, s32 *, 0x18C) = (s32) (M2C_FIELD(arg0, s32 *, 0x18C) | 0x40);
        ((VObj_18_8b050c *)(arg0))->m44();
        register_photon_blasts__8TItemMagFPv((void *) (arg0));
    }
    if (get_flag_40__8TItemMagFPv(arg0) == 0) {
        play_sound_effect((int) (0x4000B20A), (int) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x38), (int) (0), (int) (0));
    }
    copy_owner_data__8TItemMagFPv(arg0);
}

typedef struct Self_801124C4 Self_801124C4;
void apply_natural_evolution__8TItemMagFPv(Self_801124C4 *self) {
  unsigned int new_var;
  s32 stage;
  s16 level;
  u8 before;
  stage = TItemMag__sub_801117C0(self);
  level = TItemMagSub__sub_8011455C(self->data);
  before = get_field_ed__10TObjPlayerFPv((s32) self);
  {
    new_var = (s32) self;
    if ((lbl_8043E534[0] <= level) && (level < lbl_8043E534[1]))
    {
      if (stage < 1)
      {
        TItemMag__sub_80112360((u8 *) self);
      }
    }
    else
      if ((lbl_8043E534[1] <= level) && (level < lbl_8043E534[2]))
    {
      if (stage < 2)
      {
        do_action_by_class__8TItemMagFi(new_var);
      }
    }
    else
      if ((((lbl_8043E534[2] <= level) && ((level % 5) == 0)) && (stage <= 3)) && (TItemMag__sub_80111978(self) == 0))
    {
      update_feed_anim__8TItemMagFPv(self);
    }
    if (before != get_field_ed__10TObjPlayerFPv(new_var))
    {
      apply_form_change__8TItemMagFPv((u8 *) self);
    }
  }
}

void feed_by_item_flags__8TItemMagFPvc(void *arg0, s8 arg1) {
    rand();
    if (arg1 & 0x40) {
        if (check_action_probability__8TItemMagFPvi(arg0, 0) != 0) {
            request_support_action__8TItemMagFPvi(arg0, M2C_FIELD(arg0, u8 *, 0x1BD));
        }
    } else if (arg1 & 1) {
        if (check_action_probability__8TItemMagFPvi(arg0, 1) != 0) {
            request_support_action__8TItemMagFPvi(arg0, M2C_FIELD(arg0, u8 *, 0x1BE));
        }
    } else if (arg1 & 2) {
        if (check_action_probability__8TItemMagFPvi(arg0, 2) != 0) {
            request_support_action__8TItemMagFPvi(arg0, M2C_FIELD(arg0, u8 *, 0x1BF));
        }
    } else if (arg1 & 0x80) {
        if (check_action_probability__8TItemMagFPvi(arg0, 3) != 0) {
            request_support_action__8TItemMagFPvi(arg0, M2C_FIELD(arg0, u8 *, 0x1C0));
        }
    } else {
        if (arg1 & 0x20) {
            request_support_action__8TItemMagFPvi(arg0, 2U);
            return;
        }
        if (arg1 & 0x10) {
            request_support_action__8TItemMagFPvi(arg0, 3U);
            return;
        }
        if (arg1 & 4) {
            request_support_action__8TItemMagFPvi(arg0, 5U);
            return;
        }
        if (arg1 & 8) {
            request_support_action__8TItemMagFPvi(arg0, 4U);
        }
    }
}

}
