#include "types.h"
#include "pso/boss/TBoss1DragonColli.h"
#include "pso/boss/TBoss7Crawfish_8030908C.h"
#include "pso/misc/obj_band.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/boss/TBoss7Crawfish.h"
#include "pso/enemy/TObjEneLappy.h"
#include "pso/misc/TShopEquipmentSellWindow.h"
#include "pso/misc/TWindowDD.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct RecoveredGlobal_8030946C_lbl_804E7370 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8030946C_lbl_804E7370_size[sizeof(RecoveredGlobal_8030946C_lbl_804E7370) == 0x10 ? 1 : -1];

struct VBase_18_aa4667 { char pad[0x18]; };

struct VObj_18_aa4667 : VBase_18_aa4667 {
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
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual s32 m79(s32);
};

struct Vec_8030920C { f32 x, y, z; };

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
extern RecoveredGlobal_8030946C_lbl_804E7370 bm_boss7_crawfish_resource_descriptor;
extern u32 TBoss7Crawfish__shared_resource;
s32 dispatch_shared_handler_a__6TLobbyFl(int);
s32 register_object__6TLobbyFl(int);
s32 dispatch_shared_handler_b__6TLobbyFl(int);
s32 register_boss__6TLobbyFl(int);
s32 TObjFish__sub_8001EDB0(int, int);
s32 get_bml_model(int, int);
s32 set_field_b8__10TObjMotionFs(void *, int);
s32 bind_enemy_combat_stats(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3);
s32 initialize__9TObjEnemyFPv();
s32 TBoss7Crawfish__sub_80308ED8(void *, void *);
extern s32 crawfish_collision_body_desc[];
extern s32 lbl_804E7380[];
extern s32 __vt__14TBoss7Crawfish[];
extern s32 TBoss7Crawfish__class_name;
extern const f32 TBoss7Crawfish__data_805DF0D8;
extern const f32 TBoss7Crawfish__data_805DF0DC;
extern const f32 lbl_805DF100;
s32 advance_animation_playback(void *);
int TBoss7Crawfish__sub_80308BEC(void *p);
void TLobby__sub_8001FE7C(void*, int);
s32 submit_cursor_candidate(void *, int);
s32 add_radar_scaled_marker(void *, int, int, int, f32);
s32 __dl__7TObjectFPv(void *);
void *__dt__9TObjEnemyFv(void *arg0, s16 arg1);
s32 obj_testFlags30(void *, int);

extern const f32 lbl_805DF0FC;

void TBoss7Crawfish::run_task() {
    u8 *arg0 = (u8 *)this;
    s16 temp_r0;

    if (((s16) this->mode != 5) && (obj_testFlags30((void *) (arg0), (int) (0x800)) != 0)) {
        ((TBoss7Crawfish *)arg0)->change_state((int) (4));
    }
    temp_r0 = this->mode;
    switch (temp_r0) {
    case 0:
        ((TBoss7Crawfish *)arg0)->update_attack_state();
        break;
    case 1:
        ((TBoss7Crawfish *)arg0)->aim_at_nearest_player();
        break;
    case 2:
        ((TBoss7Crawfish *)arg0)->update_motion_and_release();
        break;
    case 3:
        TBoss7Crawfish::update((s32)((void *) (arg0)));
        break;
    case 4:
        TBoss7Crawfish__sub_80308BEC((arg0));
        break;
    case 5:
        ((TBoss7Crawfish *)arg0)->check_band_and_destroy();
        break;
    }
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
    if (!(*(s32 *)((s8 *)(this->m_a4) + 0x18) & 0x02000000)) {
        submit_cursor_candidate((void *) (arg0), (int) (-1));
    }
    add_radar_scaled_marker((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (1), (f32) (lbl_805DF0FC));
    advance_animation_playback((void *) (arg0));
}

void *__dt__14TBoss7CrawfishFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TBoss7Crawfish;
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        ((TUnk_804AF8A0 *)arg0)->clear_obj_links();
        ((TBoss7Crawfish *)arg0)->free_child();
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TBoss7Crawfish__ct(u8 *arg0, s32 arg1, s32 arg2) {
    Vec_8030920C v;
    initialize__9TObjEnemyFPv();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TBoss7Crawfish;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TBoss7Crawfish__class_name;
    ((TBoss7Crawfish *)arg0)->texture_id = TObjFish__sub_8001EDB0((int) (TBoss7Crawfish__shared_resource), (int) (0));
    fn_8002B630((arg0 + 0x374), (u8 *)(crawfish_collision_body_desc));
    ((TUnk_804AF8A0 *)arg0)->initialize_linked_object_reference((void *) (arg0 + 0x374));
    ((TObjPlayer *)arg0)->set_field_d8((s32)((void *) (lbl_804E7380)));
    ((TObjPlayer *)arg0)->set_field_dc((int) (*(s32 *)((s8 *)((u8 *)TBoss7Crawfish__shared_resource) + 0x430)));
    ((TBoss7Crawfish *)arg0)->set_anim_timer((int) (2));
    set_animation__10TObjPlayerFPvs((arg0), (((TBoss7Crawfish *)arg0)->m_b8));
    set_field_b8__10TObjMotionFs((void *) (arg0), (int) (((TBoss7Crawfish *)arg0)->m_b8));
    ((TUnk_804806E8 *)arg0)->add_flags_2e4((int) (2));
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    if (((TBoss7Crawfish *)arg0)->sub_80308AA8() != 0) {
        ((TObjEneLappy *)arg0)->set_param((int) (0x4A));
        bind_enemy_combat_stats((arg0), (u8 *)(register_boss__6TLobbyFl(8)), (u8 *)(dispatch_shared_handler_b__6TLobbyFl(8)), (u8 *)(register_object__6TLobbyFl(8)));
        *(s32 *)&((TBoss7Crawfish *)arg0)->m_3a0 = dispatch_shared_handler_a__6TLobbyFl((int) (8));
        *(s32 *)((s8 *)arg0 + 0x34) = get_bml_model((int) (TBoss7Crawfish__shared_resource), (int) (0));
    } else {
        ((TObjEneLappy *)arg0)->set_param((int) (0x4B));
        bind_enemy_combat_stats((arg0), (u8 *)(register_boss__6TLobbyFl(9)), (u8 *)(dispatch_shared_handler_b__6TLobbyFl(9)), (u8 *)(register_object__6TLobbyFl(9)));
        *(s32 *)&((TBoss7Crawfish *)arg0)->m_3a0 = dispatch_shared_handler_a__6TLobbyFl((int) (9));
        *(s32 *)((s8 *)arg0 + 0x34) = get_bml_model((int) (TBoss7Crawfish__shared_resource), (int) (1));
    }
    ((TUnk_804806E8 *)arg0)->get_or_assign_actor_id((int) (0));
    ((TObjPlayer *)arg0)->reset_photon_effect();
    ((TBoss7Crawfish *)arg0)->clear_object_state_exchange();
    ((TBoss7Crawfish *)arg0)->change_state((int) (0));
    v.z = TBoss7Crawfish__data_805DF0D8;
    v.y = TBoss7Crawfish__data_805DF0D8;
    v.x = TBoss7Crawfish__data_805DF0D8;
    TBoss7Crawfish__sub_80308ED8((void *) (arg0), (void *) (&v));
    if (((TBoss7Crawfish *)arg0)->sub_80308AA8() != 0) {
        *(f32 *)((s8 *)arg0 + 0x70) = (f32) lbl_805DF100;
        ((TBoss7Crawfish *)arg0)->target_scale = (f32) lbl_805DF100;
        ((TBoss7Crawfish *)arg0)->scale = (f32) lbl_805DF100;
    } else {
        *(f32 *)((s8 *)arg0 + 0x70) = (f32) TBoss7Crawfish__data_805DF0DC;
        ((TBoss7Crawfish *)arg0)->target_scale = (f32) TBoss7Crawfish__data_805DF0DC;
        ((TBoss7Crawfish *)arg0)->scale = (f32) TBoss7Crawfish__data_805DF0DC;
    }
    *(s32 *)&((TBoss7Crawfish *)arg0)->m_3cc = 0;
    return arg0;
}

void TBoss7Crawfish::destroy_instance() {
    if ((u32) TBoss7Crawfish__shared_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TBoss7Crawfish__shared_resource, 1);
        TBoss7Crawfish__shared_resource = 0U;
    }
}

void TBoss7Crawfish::load_static_resource() {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = ((TAdSinglePlyChrSelectGC *)((void *)0x440))->alloc();
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &bm_boss7_crawfish_resource_descriptor.value, 0, 0, 0));
    }
    (*(s32 *)&TBoss7Crawfish__shared_resource) = var_r0;
}

void TBoss7Crawfish::apply_poison_status() {  }
void TBoss7Crawfish::apply_paralysis() {  }
void TBoss7Crawfish::apply_slow_status() {  }
void TBoss7Crawfish::apply_confusion_status() {  }
void TBoss7Crawfish::apply_movement_ailment(s32) {  }
void TBoss7Crawfish::apply_shock_status() {  }
void TBoss7Crawfish::clear_harmful_statuses() {  }
f32 TBoss7Crawfish::get_health() { return this->m_c8; }
void TBoss7Crawfish::set_anim_timer(s16 v) { this->m_b8 = v; }

}
