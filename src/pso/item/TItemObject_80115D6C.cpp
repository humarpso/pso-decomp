#include "pso/item/TItemObject.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "types.h"
struct Msg_80116004 { u8 hdr[4]; s16 ids[4]; };

struct Obj_80116004 { u8 pad0[0x38]; f32 pos[3]; };

struct VBase_80115F28 { char pad[0x18]; };

struct VObj_80115F28 : VBase_80115F28 {
    virtual M2C_UNK m0(); virtual M2C_UNK m1(); virtual M2C_UNK m2();
    virtual M2C_UNK m3(); virtual M2C_UNK m4(); virtual M2C_UNK m5();
    virtual M2C_UNK m6(); virtual M2C_UNK m7(); virtual M2C_UNK m8();
    virtual M2C_UNK m9(); virtual M2C_UNK m10(); virtual M2C_UNK m11();
    virtual M2C_UNK m12(); virtual M2C_UNK m13(); virtual M2C_UNK m14();
    virtual M2C_UNK m15(); virtual M2C_UNK m16(); virtual M2C_UNK m17();
    virtual M2C_UNK m18(); virtual M2C_UNK m19(); virtual M2C_UNK m20();
    virtual M2C_UNK m21(); virtual M2C_UNK m22(); virtual M2C_UNK m23();
    virtual M2C_UNK m24(); virtual M2C_UNK m25(); virtual M2C_UNK m26();
    virtual M2C_UNK m27(); virtual M2C_UNK m28(); virtual M2C_UNK m29();
    virtual M2C_UNK m30(); virtual M2C_UNK m31(); virtual M2C_UNK m32();
    virtual M2C_UNK m33();
};

struct Pkt_80115F28 { u8 pad[4]; s16 ids[4]; };

struct Msg_801160E0 { u8 hdr[4]; s16 id; s16 types[3]; u8 pad[0xC]; };

struct Item_801160E0 { u8 pad[0x424]; u32 f424; };

extern "C" {
u8 get_tool_pmt_amount_byte(u8 *arg0);
s16 obj_getField1c(Obj_80116004 *);
void bswap_and_send_item__10TObjPlayerFPv(void *);
void set_type_bytes__10TObjPlayerFPv(void *);
f32 horizontal_distance_squared(void *, void *);
s32 is_current_room__10TObjRoomIdFPv(void *);
Obj_80116004 *get_player_by_client_id(s32);
void send_nearby_player_ids(Obj_80116004 *self, f32 range);
u8 get_field_ed__10TObjPlayerFPv(void *);
u8 get_slot_count__14TItemProShieldFPv(void *);
s32 TItemObject__sub_80115DE8(void *item);
M2C_UNK set_hp_clamped__10TObjPlayerFPvs(void *, s32);
s32 get_field_3e4__10TObjPlayerFPv(void *);
s32 get_field_2b8__14TItemProShieldFPv(void *);
M2C_UNK spawn_particle_effect(void *, M2C_UNK);
void bswap_fields_x4__10TObjPlayerFPv(void *);
Obj_80116004 *get_player_by_client_id(s32);
s32 reset_key_machine_state__10TObjPlayerFv();
void handle_6x66_use_star_atomizer(u8 *arg0);
s16 obj_getField1c(Obj_80116004 *);
void bswap_and_send_item__10TObjPlayerFPv(void *);
void set_type_bytes__10TObjPlayerFPv(void *);
s16 get_type_id__10TObjPlayerFPv(void *);
void *TObjPlayer__sub_80116620(void *, s32);
s32 find_by_pos__11TMainCursorFiss(u32, s32, s32);
s32 is_current_room__10TObjRoomIdFPv(void *);
void send_star_atomizer_targets(void *arg0);
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

u8 get_tool_pmt_amount_byte(u8 *arg0) {
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

void handle_6x66_use_star_atomizer(u8 *arg0) {
    u8 *temp_r3;
    s32 var_r28;
    u8 *temp_r3_2;
    bswap_fields_x4__10TObjPlayerFPv(arg0);
    temp_r3 = (u8 *)get_player_by_client_id(M2C_FIELD(arg0, s16 *, 4));
    if (temp_r3 != NULL) {
        var_r28 = 0;
        do {
            temp_r3_2 = (u8 *)get_player_by_client_id(((Pkt_80115F28 *)arg0)->ids[var_r28]);
            if ((temp_r3_2 != NULL) && (((VObj_80115F28 *)temp_r3_2)->m31() == 0)) {
                if (get_field_3e4__10TObjPlayerFPv(temp_r3) == get_field_3e4__10TObjPlayerFPv(temp_r3_2)) {
                    set_hp_clamped__10TObjPlayerFPvs(temp_r3_2, get_field_2b8__14TItemProShieldFPv(temp_r3_2));
                    if (reset_key_machine_state__10TObjPlayerFv() != 0) {
                        if (var_r28 == 0) {
                            spawn_particle_effect(temp_r3_2 + 0x2FC, 0x19);
                        }
                        spawn_particle_effect(temp_r3_2 + 0x2FC, 0xC2);
                    }
                }
            }
            var_r28 += 1;
        } while (var_r28 != 4);
    }
}

void send_nearby_player_ids(Obj_80116004 *self, f32 range) {
    Msg_80116004 msg;
    s32 j;
    u16 i;
    Obj_80116004 *pl;
    if (self != NULL && is_current_room__10TObjRoomIdFPv(self) != 0) {
        set_type_bytes__10TObjPlayerFPv(&msg);
        j = 0;
        for (i = 0; i != 4; i++) {
            pl = get_player_by_client_id(i);
            if (pl != NULL) {
                if (horizontal_distance_squared(self->pos, pl->pos) < range) {
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

void send_star_atomizer_targets(void *arg0) {
    Msg_801160E0 msg;
    s32 t;
    s32 i;
    if (arg0 != NULL && is_current_room__10TObjRoomIdFPv(arg0) != 0 && ((Item_801160E0 *)arg0)->f424 != 0) {
        t = find_by_pos__11TMainCursorFiss(((Item_801160E0 *)arg0)->f424, 4, 0xA);
        if (t != 0) {
            set_type_bytes__10TObjPlayerFPv(&msg);
            msg.id = obj_getField1c((Obj_80116004 *)arg0);
            for (i = 0; i != 3; i++) {
                msg.types[i] = get_type_id__10TObjPlayerFPv(TObjPlayer__sub_80116620((void *)(t + 0x9C), i));
            }
            bswap_and_send_item__10TObjPlayerFPv(&msg);
        }
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
