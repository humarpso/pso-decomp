#include "types.h"

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
    virtual s32 m71();
};

extern "C" {
s32 obj_getField1c(void *);
s16 calc_stat_bonus_sum__10TObjPlayerFUs();
s16 calc_equip_bonus__10TObjPlayerFUs();
s32 check_class_equip_permission(void *, int);
u8 get_slot_count__14TItemProShieldFPv();
s32 apply_luck_reward__10TObjPlayerFiUc(void *, int);
s32 add_dfp_material__10TObjPlayerFiUc(void *, int);
s32 add_evp_material__10TObjPlayerFiUc(void *, int);
s32 add_mst_and_item__10TObjPlayerFiUc(void *, int);
s32 add_stat_and_item__10TObjPlayerFiUc(void *, int);
s32 set_speed_scaled_by_camera__10TObjPlayerFiUc(void *, int);
s32 apply_speed_with_camera_scale__10TObjPlayerFiUc(void *, int);
void apply_material_item(u8 *arg0);
}

extern "C" {

void __dt__11TItemObjectFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);
void *item_object_variant_deleting_dtor_80116F10(void *arg0, s16 arg1);
void run_task__5TItemFPv();
void dispatch_state__5TItemFPv();
void render__5TItemFPv();
void TLobby__sub_801A1FD8();
void apply_object_set_data();
void release_member_90__10TObjPlayerFPv();
void TItemObject__vt7();
void TItem__sub_80100B8C();
void classify_actor_view_detail();
void register_attack__5TItemFPv();
void try_pick_up_item__5TItemFPvi();
void TItemObject__vt12();
void TItem__sub_801005E0();
void TItem__sub_801005DC();
void TItem__sub_80100678();
void TItemObject__vt16();
void TItem__sub_8010067C();
void TItem__sub_801007B0();
void TItem__sub_801007AC();
void TItem__sub_8010075C();
void TItem__sub_80100758();
void TItem__sub_80100698();
void TItem__sub_80100694();
void TItem__sub_80100690();
void TItem__sub_8010068C();
void TItem__sub_80100688();
void destroy__5TItemFPv();
void TItem__sub_801007A8();
void TItemObject__vt29();
void TItem__sub_80100680();
void TObjPlayer__sub_80102BD0();
void TItem__sub_80100674();
void ret_8010066C();
void load_encoded_value__11TItemObjectFv();
void TItemObject__vt35();
void TItemObject__vt36();
void ret_8010064C();
void TItem__sub_80100648();
void TItem__sub_801005E4();
void TItem__sub_801005D8();
void TObjPlayer__sub_80102BD8();
void *lbl_8049FBC0[45] = {
    0, 0, (void *)item_object_variant_deleting_dtor_80116F10, (void *)run_task__5TItemFPv, (void *)dispatch_state__5TItemFPv, (void *)render__5TItemFPv, (void *)TLobby__sub_801A1FD8, (void *)apply_object_set_data, (void *)release_member_90__10TObjPlayerFPv, (void *)TItemObject__vt7, (void *)TItem__sub_80100B8C, (void *)classify_actor_view_detail, (void *)register_attack__5TItemFPv, (void *)try_pick_up_item__5TItemFPvi, (void *)TItemObject__vt12, (void *)TItem__sub_801005E0, (void *)TItem__sub_801005DC, (void *)TItem__sub_80100678, (void *)TItemObject__vt16, (void *)TItem__sub_8010067C, (void *)TItem__sub_801007B0, (void *)TItem__sub_801007AC, (void *)TItem__sub_8010075C, (void *)TItem__sub_80100758, (void *)TItem__sub_80100698, (void *)TItem__sub_80100694, (void *)TItem__sub_80100690, (void *)TItem__sub_8010068C, (void *)TItem__sub_80100688, (void *)destroy__5TItemFPv, (void *)TItem__sub_801007A8, (void *)TItemObject__vt29, (void *)TItem__sub_80100680, (void *)TObjPlayer__sub_80102BD0, (void *)TItem__sub_80100674, (void *)ret_8010066C, (void *)load_encoded_value__11TItemObjectFv, (void *)TItemObject__vt35, (void *)TItemObject__vt36, (void *)ret_8010064C, (void *)TItem__sub_80100648, (void *)TItem__sub_801005E4, (void *)TItem__sub_801005D8, (void *)TObjPlayer__sub_80102BD8, (void *)apply_material_item
};

void apply_material_item(u8 *arg0) {
    u8 temp_r3;
    u8 *temp_r3_2;
    temp_r3 = get_slot_count__14TItemProShieldFPv();
    switch (temp_r3) {
    case 0:
        add_stat_and_item__10TObjPlayerFiUc((void *) (*(u8 **)((s8 *)arg0 + 0xF0)), (int) (2));
        break;
    case 1:
        if (check_class_equip_permission((void *) (*(u8 **)((s8 *)arg0 + 0xF0)), (int) (0xD7)) == 0) {
            add_mst_and_item__10TObjPlayerFiUc((void *) (*(u8 **)((s8 *)arg0 + 0xF0)), (int) (2));
        }
        break;
    case 2:
        add_evp_material__10TObjPlayerFiUc((void *) (*(u8 **)((s8 *)arg0 + 0xF0)), (int) (2));
        break;
    case 3:
        obj_getField1c((void *) (*(u8 **)((s8 *)arg0 + 0xF0)));
        if (calc_equip_bonus__10TObjPlayerFUs() < 0xFA) {
            apply_speed_with_camera_scale__10TObjPlayerFiUc((void *) (*(u8 **)((s8 *)arg0 + 0xF0)), (int) (2));
        }
        break;
    case 4:
        obj_getField1c((void *) (*(u8 **)((s8 *)arg0 + 0xF0)));
        if ((calc_stat_bonus_sum__10TObjPlayerFUs() < 0xFA) && (check_class_equip_permission((void *) (*(u8 **)((s8 *)arg0 + 0xF0)), (int) (0xD7)) == 0)) {
            set_speed_scaled_by_camera__10TObjPlayerFiUc((void *) (*(u8 **)((s8 *)arg0 + 0xF0)), (int) (2));
        }
        break;
    case 5:
        add_dfp_material__10TObjPlayerFiUc((void *) (*(u8 **)((s8 *)arg0 + 0xF0)), (int) (2));
        break;
    case 6:
        apply_luck_reward__10TObjPlayerFiUc((void *) (*(u8 **)((s8 *)arg0 + 0xF0)), (int) (2));
        break;
    }
    temp_r3_2 = (u8 *)(*(u8 **)((s8 *)arg0 + 0xF0));
    ((VObj_18_ddf499 *)(temp_r3_2))->m71();
}
void *item_object_variant_deleting_dtor_80116F10(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)lbl_8049FBC0;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
