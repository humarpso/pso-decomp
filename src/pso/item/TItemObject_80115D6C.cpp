#include "pso/item/TItemObject.h"

#include "types.h"
struct Msg_80116004 { u8 hdr[4]; s16 ids[4]; };

struct Obj_80116004 { u8 pad0[0x38]; f32 pos[3]; };

struct VBase_80115F28 { char pad[0x18]; };

struct VObj_80115F28 : VBase_80115F28 {
    virtual s32 m0(); virtual s32 m1(); virtual s32 m2();
    virtual s32 m3(); virtual s32 m4(); virtual s32 m5();
    virtual s32 m6(); virtual s32 m7(); virtual s32 m8();
    virtual s32 m9(); virtual s32 m10(); virtual s32 m11();
    virtual s32 m12(); virtual s32 m13(); virtual s32 m14();
    virtual s32 m15(); virtual s32 m16(); virtual s32 m17();
    virtual s32 m18(); virtual s32 m19(); virtual s32 m20();
    virtual s32 m21(); virtual s32 m22(); virtual s32 m23();
    virtual s32 m24(); virtual s32 m25(); virtual s32 m26();
    virtual s32 m27(); virtual s32 m28(); virtual s32 m29();
    virtual s32 m30(); virtual s32 m31(); virtual s32 m32();
    virtual s32 m33();
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
s32 set_hp_clamped__10TObjPlayerFPvs(void *, s32);
s32 get_field_3e4__10TObjPlayerFPv(void *);
s32 get_field_2b8__14TItemProShieldFPv(void *);
s32 spawn_particle_effect(void *, s32);
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
s32 copy_and_register_item_data__11TItemObjectFPv(void *);
s32 refresh_if_current_player__20TWindowSubStatusDispFPv(void *);

void *__dt__11TItemObjectFv(void *arg0, s16 arg1);
void TItemObject__vt16(u8 *arg0, u8 *arg1);
void TItemObject__vt29(void *arg0);
s32 TItemObject__vt35(void *arg0, s32 arg1);
s32 TItemObject__vt36(void *arg0, s32 arg1);
void TItemObject__vt42(void *arg0);
s32 load_encoded_value__11TItemObjectFv(void);
void run_task__5TItemFPv(); void dispatch_state__5TItemFPv(); void render__5TItemFPv();
void TLobby__sub_801A1FD8(); void apply_object_set_data(); void release_member_90__10TObjPlayerFPv();
void TItem__sub_80100B8C(); void classify_actor_view_detail(); void register_attack__5TItemFPv();
void try_pick_up_item__5TItemFPvi(); void TItem__sub_801005E0(); void TItem__sub_801005DC();
void TItem__sub_80100678(); void TItem__sub_8010067C(); void TItem__sub_801007B0();
void TItem__sub_801007AC(); void TItem__sub_8010075C(); void TItem__sub_80100758();
void TItem__sub_80100698(); void TItem__sub_80100694(); void TItem__sub_80100690();
void TItem__sub_8010068C(); void TItem__sub_80100688(); void destroy__5TItemFPv();
void TItem__sub_801007A8(); void TItem__sub_80100680(); void TObjPlayer__sub_80102BD0();
void TItem__sub_80100674(); void ret_8010066C(); void ret_8010064C(); void TItem__sub_80100648();
void TItem__sub_801005E4(); void TItem__sub_801005D8(); void TObjPlayer__sub_80102BD8();
void *__vt__11TItemObject[] = {
    0, 0,
    (void *)__dt__11TItemObjectFv, (void *)run_task__5TItemFPv, (void *)dispatch_state__5TItemFPv,
    (void *)render__5TItemFPv, (void *)TLobby__sub_801A1FD8, (void *)apply_object_set_data,
    (void *)release_member_90__10TObjPlayerFPv, (void *)TItemObject__vt7, (void *)TItem__sub_80100B8C,
    (void *)classify_actor_view_detail, (void *)register_attack__5TItemFPv, (void *)try_pick_up_item__5TItemFPvi,
    (void *)TItemObject__vt12, (void *)TItem__sub_801005E0, (void *)TItem__sub_801005DC,
    (void *)TItem__sub_80100678, (void *)TItemObject__vt16, (void *)TItem__sub_8010067C,
    (void *)TItem__sub_801007B0, (void *)TItem__sub_801007AC, (void *)TItem__sub_8010075C,
    (void *)TItem__sub_80100758, (void *)TItem__sub_80100698, (void *)TItem__sub_80100694,
    (void *)TItem__sub_80100690, (void *)TItem__sub_8010068C, (void *)TItem__sub_80100688,
    (void *)destroy__5TItemFPv, (void *)TItem__sub_801007A8, (void *)TItemObject__vt29,
    (void *)TItem__sub_80100680, (void *)TObjPlayer__sub_80102BD0, (void *)TItem__sub_80100674,
    (void *)ret_8010066C, (void *)load_encoded_value__11TItemObjectFv, (void *)TItemObject__vt35,
    (void *)TItemObject__vt36, (void *)ret_8010064C, (void *)TItem__sub_80100648,
    (void *)TItem__sub_801005E4, (void *)TItem__sub_801005D8, (void *)TObjPlayer__sub_80102BD8,
    (void *)TItemObject__vt42,
};

u8 TItemObject__sub_80115D7C(void* p) { return *(u8*)((char*)p + 0x100); }

u8 get_tool_pmt_amount_byte(u8 *arg0) {
    return (u8) *(u16 *)((s8 *)(*(void **)((s8 *)arg0 + 0xF8)) + 8);
}

void TItemObject__vt12(void *arg0) {
    s32 temp_r31;

    temp_r31 = ((s32 (*)())copy_and_register_item_data__11TItemObjectFPv)();
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
    temp_r3 = (u8 *)get_player_by_client_id(*(s16 *)((s8 *)arg0 + 4));
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

    temp_r4 = *(u32 *)((s8 *)arg0 + 0xF0);
    if (temp_r4 != 0U) {
        return (unsigned char *) (temp_r4 + 0x38);
    }
    return arg0 + 0x38;
}

}

struct Base_8011620C_80115D6C { char pad[0x18]; };
struct VObj_8011620C_80115D6C : Base_8011620C_80115D6C {
    virtual void m0();
    virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8();
    virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20();
    virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28();
    virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32();
    virtual void m35();
    virtual s32 m36();
};
struct Base_8011626C_80115D6C { char pad[0x18]; };
struct VObj_8011626C_80115D6C : Base_8011626C_80115D6C {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42();
};

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
    virtual u8 m34();
};

extern "C" {
s32 set_stack_count__24TShopEquipmentListWindowFPvc(void *, void *);
void TItemObject__vt16(u8 *arg0, u8 *arg1);
void *TItemObject__ct(void *arg0, void *arg1, void *arg2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create__11TItemObjectFPv(u8 *arg0);
}

extern "C" {

struct Base_801161A4_80115D6C { char pad[0x18]; };
struct VObj_801161A4_80115D6C : Base_801161A4_80115D6C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual int m34();
};

void *TItemObject__ct(void *arg0, void *arg1, void *arg2);
void TItemObject__vt29(void *arg0);
s32 TItemObject__vt35(void *arg0, s32 arg1);
s32 TItemObject__vt36(void *arg0, s32 arg1);
void TItemObject__vt42(void *arg0);
void *lookup_item_pmt_record(void *);
s32 TItem__ct();
s32 consume_item_by_id();
s32 TObjPlayer__sub_8010043C(void *, u8);
s32 add_item_flags__10TObjPlayerFPvUi(void *, s32);
s32 apply_switch_attack__5TItemFPvi(void *, s32);
s32 check_flag_400__20TWindowSubStatusDispFv();
s32 clear_item_flags__10TObjPlayerFPvUi(void *, s32);
s32 copy_and_register_item_data__11TItemObjectFPv(void *);
s32 get_field_d8__10TObjPlayerFPv(void *);
s32 get_item_flags__10TObjPlayerFPv(void *);
s32 get_item_type_or_default__9TItemListFPv(void *);
s32 notify_owner__5TItemFPvi(void *, s32);
s32 set_flag_1024__11TItemObjectFPv(void *);
s32 update_pickup_flag__5TItemFi();

s32 TItemObject__vt36(void *arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = arg1 + ((VObj_801161A4_80115D6C *)arg0)->m34();
    if (temp_r31 <= copy_and_register_item_data__11TItemObjectFPv(arg0)) {
        ((TItemObject *)arg0)->store_encoded_value(temp_r31);
        return 1;
    }
    return 0;
}

s32 TItemObject__vt35(void *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = ((VObj_8011620C_80115D6C *)arg0)->m36();
    if (arg1 <= temp_r3) {
        ((TItemObject *)arg0)->store_encoded_value(temp_r3 - arg1);
        return 1;
    }
    return 0;
}

void TItemObject__vt29(void *arg0) {
    struct VObj_8011626C_80115D6C *o = (struct VObj_8011626C_80115D6C *)arg0;
    if (check_flag_400__20TWindowSubStatusDispFv() != 0) {
        set_flag_1024__11TItemObjectFPv(arg0);
        return;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0xF0) != 0U) {
        *(u8 *)((s8 *)arg0 + 0x101) = 0U;
        o->m42();
        if ((u8) *(u8 *)((s8 *)arg0 + 0x101) == 0) {
            apply_switch_attack__5TItemFPvi(arg0, 0x1AF);
            notify_owner__5TItemFPvi(arg0, 0x5B211);
        }
        if (get_item_flags__10TObjPlayerFPv(arg0) & 0x10) {
            get_field_d8__10TObjPlayerFPv(arg0);
            consume_item_by_id();
        }
    }
}

void TItemObject__vt42(void *arg0) {
    update_pickup_flag__5TItemFi();
    *(s8 *)((s8 *)arg0 + 0x101) = 1;
}

extern s32 lbl_805D2C28;

void TItemObject__vt16(u8 *arg0, u8 *arg1) {
    if (((u8 (*)())get_field_ed__10TObjPlayerFPv)() == 2) {
        *(u8 *)((s8 *)arg1 + 4) = (u8) *(u8 *)((s8 *)arg0 + 0x100);
    }
    set_stack_count__24TShopEquipmentListWindowFPvc((void *) (arg1), (void *) (((VObj_18 *)(arg0))->m34()));
}

void *TItemObject__ct(void *arg0, void *arg1, void *arg2) {
    s16 temp_r3;

    TItem__ct();
    *(void **)((s8 *)arg0 + 0x18) = (void *) __vt__11TItemObject;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2C28;
    *(void **)((s8 *)arg0 + 0xF8) = lookup_item_pmt_record(arg2);
    *(u8 *)((s8 *)arg0 + 0x100) = (u8) *(u8 *)((s8 *)arg2 + 4);
    ((TItemObject *)arg0)->store_encoded_value(get_item_type_or_default__9TItemListFPv(arg2));
    if (*(s32 *)((s8 *)(*(void **)((s8 *)arg0 + 0xF8)) + 0x10) & 1) {
        add_item_flags__10TObjPlayerFPvUi(arg0, 0x10);
    } else {
        clear_item_flags__10TObjPlayerFPvUi(arg0, 0x10);
    }
    temp_r3 = *(s16 *)((s8 *)(*(void **)((s8 *)arg0 + 0xF8)) + 4);
    if (temp_r3 != 0) {
        TObjPlayer__sub_8010043C(arg0, (u8) (temp_r3 + 4));
    }
    return arg0;
}
u8 *create__11TItemObjectFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)TItemObject__ct((void *)(temp_r3), (void *)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

}

extern "C" {

void *__dt__11TItemObjectFv(void *arg0, s16 arg1);
s32 call_dispatch__11TItemObjectFi(s32 arg0);
void __dt__5TItemFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

s32 (*TLobby__sub_8010440C())(s32);

s32 call_dispatch__11TItemObjectFi(s32 arg0) {
    if (arg0 != 0) {
        s32 (*fp)(s32) = TLobby__sub_8010440C();
        return fp(arg0);
    }
    return 0;
}

void *__dt__11TItemObjectFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void ***)((s8 *)arg0 + 0x18) = __vt__11TItemObject;
        __dt__5TItemFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}
}

s32 TItemObject::load_encoded_value() {
    return encoded_value ^ (s32)&encoded_value;
}
