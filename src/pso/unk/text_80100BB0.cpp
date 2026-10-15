#include "types.h"

struct VObjBase { char pad[0x18]; };

struct VObj : VObjBase {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(int); virtual void m21(int);
};

extern "C" {
s32 set_hp_clamped__10TObjPlayerFPvs(s32, s32);
s32 obj_getS16_32E(s32);
s32 obj_getS16_32C();
u16 get_id__13TItemProArmorFPv();
s32 set_facing__10TObjPlayerFPvs(s32, s32);
void *get_equip_field_d04__10TObjPlayerFPv(s32, s32);
s32 get_player_by_client_id(s32);
s32 set_technique_level_entry(s32, s16, u8);
void set_item_owner_technique_level(void *arg0, s16 arg1, s16 arg2);
}

extern "C" {

#pragma push
#pragma fp_contract on
void set_item_owner_technique_level(void *arg0, s16 arg1, s16 arg2) {
    s32 temp_r31;
    s32 temp_r30;
    s32 temp_r29;
    s32 temp_r28;
    void *temp_r3;
    void *temp_r3_2;
    if ((arg1 >= 0) && (arg1 < 0x13) && (arg2 >= 0) && (arg2 <= 0x1D)) {
        temp_r30 = get_player_by_client_id((u16) get_id__13TItemProArmorFPv());
        if (temp_r30 != 0) {
            temp_r29 = obj_getS16_32C();
            temp_r28 = obj_getS16_32E(temp_r30);
            temp_r31 = 9;
            do {
                temp_r3 = get_equip_field_d04__10TObjPlayerFPv(temp_r30, temp_r31);
                if (temp_r3 != NULL) {
                    ((VObj*)temp_r3)->m21(1);
                }
                temp_r31 += 1;
            } while (temp_r31 != 0xD);
            set_technique_level_entry(temp_r30 + 0x428, arg1, (u8) arg2);
            temp_r31 = 9;
            do {
                temp_r3_2 = get_equip_field_d04__10TObjPlayerFPv(temp_r30, temp_r31);
                if (temp_r3_2 != NULL) {
                    ((VObj*)temp_r3_2)->m20(1);
                }
                temp_r31 += 1;
            } while (temp_r31 != 0xD);
            set_hp_clamped__10TObjPlayerFPvs(temp_r30, temp_r29);
            set_facing__10TObjPlayerFPvs(temp_r30, temp_r28);
        }
    }
}
#pragma pop

}
