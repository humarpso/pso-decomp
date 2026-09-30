#include "pso/item/TItemObject.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "types.h"
struct Msg_80116004 { u8 hdr[4]; s16 ids[4]; };

struct Obj_80116004 { u8 pad0[0x38]; f32 pos[3]; };

extern "C" {
u8 TItemObject__sub_80115D84(u8 *arg0);
s16 obj_getField1c(Obj_80116004 *);
void bswap_and_send_item__10TObjPlayerFPv(void *);
void set_type_bytes__10TObjPlayerFPv(void *);
f32 TObjPlayer__sub_80141CF8(void *, void *);
s32 is_current_room__10TObjRoomIdFPv(void *);
Obj_80116004 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
void TItemObject__sub_80116004(Obj_80116004 *self, f32 range);
u8 get_field_ed__10TObjPlayerFPv(void *);
u8 get_slot_count__14TItemProShieldFPv(void *);
s32 TItemObject__sub_80115DE8(void *item);
}

void TItemObject::store_encoded_value(s32 value) {
    encoded_value = value ^ (s32)&encoded_value;
}

extern "C" {

struct Base_80115D94_80115D6C { char pad[0x18]; };
struct VObj_80115D94_80115D6C : Base_80115D94_80115D6C {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();
    virtual void m7();  virtual void m8();  virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18();
    virtual void m19(); virtual void m20(); virtual void m21();
    virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30();
    virtual void m31(); virtual void m32(); virtual void m33();
    virtual s32 m34();
};

u8 TItemObject__sub_80115D7C(void* p);
void TItemObject__vt12(void *arg0);
u8 *TItemObject__vt7(u8 *arg0);
void TItem__sub_80115D68(void);
s32 copy_and_register_item_data__11TItemObjectFPv();
M2C_UNK refresh_if_current_player__20TWindowSubStatusDispFPv(void *);

u8 TItemObject__sub_80115D7C(void* p) { return *(u8*)((char*)p + 0x100); }

u8 TItemObject__sub_80115D84(u8 *arg0) {
    return (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), u16 *, 8);
}

void TItemObject__vt12(void *arg0) {
    s32 temp_r31;

    temp_r31 = copy_and_register_item_data__11TItemObjectFPv();
    if (((VObj_80115D94_80115D6C *)arg0)->m34() > temp_r31) {
        refresh_if_current_player__20TWindowSubStatusDispFPv(arg0);
    }
}

s32 TItemObject__sub_80115DE8(void *item) {
    if (item != NULL) {
        u8 kind = get_field_ed__10TObjPlayerFPv(item);
        u8 slots = get_slot_count__14TItemProShieldFPv(item);
        switch (kind) {
        case 0:
            switch (slots) {
            case 0: return 0;
            case 1: return 1;
            case 2: return 2;
            }
            break;
        case 1:
            switch (slots) {
            case 0: return 3;
            case 1: return 4;
            case 2: return 5;
            }
            break;
        case 6:
            switch (slots) {
            case 0: return 6;
            case 1: return 7;
            }
            break;
        case 3: return 8;
        case 4: return 9;
        case 5: return 10;
        case 7: return 11;
        case 8: return 12;
        default: return -1;
        }
    }
    return -1;
}

void TItemObject__sub_80116004(Obj_80116004 *self, f32 range) {
    Msg_80116004 msg;
    s32 j;
    u16 i;
    Obj_80116004 *pl;
    if (self != NULL && is_current_room__10TObjRoomIdFPv(self) != 0) {
        set_type_bytes__10TObjPlayerFPv(&msg);
        j = 0;
        for (i = 0; i != 4; i++) {
            pl = TPlayerBattleCtrl4P__sub_801BA74C(i);
            if (pl != NULL) {
                if (TObjPlayer__sub_80141CF8(self->pos, pl->pos) < range) {
                    msg.ids[j++] = obj_getField1c(pl);
                } else {
                    msg.ids[j++] = -1;
                }
            } else {
                msg.ids[j++] = -1;
            }
        }
        bswap_and_send_item__10TObjPlayerFPv(&msg);
    }
}

u8 *TItemObject__vt7(u8 *arg0) {
    u32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u32 *, 0xF0);
    if (temp_r4 != 0U) {
        return (unsigned char *) (temp_r4 + 0x38);
    }
    return arg0 + 0x38;
}

}
