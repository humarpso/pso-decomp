#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8030946C_lbl_804E7370 { M2C_UNK value; u8 remaining[0xC]; };
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
    virtual M2C_UNK m79(s32);
};

struct Vec_8030920C { f32 x, y, z; };

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8030946C_lbl_804E7370 lbl_804E7370;
extern u32 TBoss7Crawfish__data_805D6A60;
void TBoss7Crawfish__sub_8030946C(void);
M2C_UNK add_flags_2e4__10TObjPlayerFPvUi(void *, int);
s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
s32 TObjFish__sub_8001EDB0(int, int);
s32 get_bml_model(int, int);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, int);
M2C_UNK set_field_dc__10TObjPlayerFPvi(void *, int);
M2C_UNK set_field_d8__10TObjPlayerFPvi(void *, void *);
M2C_UNK fn_8002B630(void *, void *);
M2C_UNK set_param__12TObjEneLappyFPvi(void *, int);
M2C_UNK bind_enemy_combat_stats(void *, int, int, int);
M2C_UNK initialize__9TObjEnemyFPv();
M2C_UNK set_animation__10TObjPlayerFPvs(void *, int);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK initialize_linked_object_reference(void *, void *);
M2C_UNK TLobby__sub_801A1FDC(void *, int);
s32 TBoss7Crawfish__sub_80308AA8(void *);
M2C_UNK TBoss7Crawfish__sub_80308B38(void *);
M2C_UNK TBoss7Crawfish__sub_80308ED8(void *, void *);
M2C_UNK TBoss7Crawfish__sub_80308F8C(void *, int);
void set_anim_timer__14TBoss7CrawfishFPvs(void* p, s16 v);
extern M2C_UNK lbl_80475570[];
extern M2C_UNK lbl_804E7380[];
extern M2C_UNK __vt__14TBoss7Crawfish[];
extern s32 lbl_805D40A0;
extern u32 TBoss7Crawfish__data_805D6A60;
extern const f32 TBoss7Crawfish__data_805DF0D8;
extern const f32 TBoss7Crawfish__data_805DF0DC;
extern const f32 lbl_805DF100;
u8 *TBoss7Crawfish__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void TBoss7Crawfish__vt42(void);
void TBoss7Crawfish__vt43(void);
void TBoss7Crawfish__vt44(void);
void TBoss7Crawfish__vt45(void);
void TBoss7Crawfish__vt46(void);
void TBoss7Crawfish__vt47(void);
void TBoss7Crawfish__vt48(void);
void *__dt__14TBoss7CrawfishFv(void *arg0, s16 arg1);
void destroy_instance__14TBoss7CrawfishFv(void);
f32 get_health__14TBoss7CrawfishFPv(void* p);
void run_task__14TBoss7CrawfishFv(u8 *arg0);
void set_anim_timer__14TBoss7CrawfishFPvs(void* p, s16 v);
M2C_UNK advance_animation_playback(void *);
M2C_UNK TBoss7Crawfish__sub_80308BEC(void *);
M2C_UNK TBoss7Crawfish__sub_80308D1C(void *);
M2C_UNK TBoss7Crawfish__sub_80308F8C(void *, int);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK unregister_object_by_id(void *);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK submit_cursor_candidate(void *, int);
M2C_UNK add_radar_scaled_marker(void *, int, int, int, f32);
int update_window_entry_list(void*, void*);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__9TObjEnemyFv(void *, M2C_UNK);
M2C_UNK check_band_and_destroy__14TBoss7CrawfishFi(void *);
M2C_UNK clear_obj_links(void *);
int fn_80269078(void*);
M2C_UNK free_child__14TBoss7CrawfishFPv(void *);
int get_item_count__24TShopEquipmentSellWindowFPv(void* p);
int initialize_subwindow__9TWindowDDFPv(void*);
s32 obj_testFlags30(void *, int);
M2C_UNK update__14TBoss7CrawfishFi(void *);
M2C_UNK update_attack_state__14TBoss7CrawfishFPv(void *);
M2C_UNK update_motion_and_release__14TBoss7CrawfishFPv(void *);

extern const f32 lbl_805DF0FC;

void run_task__14TBoss7CrawfishFv(u8 *arg0) {
    s16 temp_r0;

    if (((s16) M2C_FIELD(arg0, s16 *, 0x326) != 5) && (obj_testFlags30((void *) (arg0), (int) (0x800)) != 0)) {
        TBoss7Crawfish__sub_80308F8C((void *) (arg0), (int) (4));
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        update_attack_state__14TBoss7CrawfishFPv((void *) (arg0));
        break;
    case 1:
        TBoss7Crawfish__sub_80308D1C((void *) (arg0));
        break;
    case 2:
        update_motion_and_release__14TBoss7CrawfishFPv((void *) (arg0));
        break;
    case 3:
        update__14TBoss7CrawfishFi((void *) (arg0));
        break;
    case 4:
        TBoss7Crawfish__sub_80308BEC((void *) (arg0));
        break;
    case 5:
        check_band_and_destroy__14TBoss7CrawfishFi((void *) (arg0));
        break;
    }
    refresh_collision_body_centers((void *) (arg0));
    if (!(M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0x02000000)) {
        submit_cursor_candidate((void *) (arg0), (int) (-1));
    }
    add_radar_scaled_marker((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (1), (f32) (lbl_805DF0FC));
    advance_animation_playback((void *) (arg0));
}

extern M2C_UNK __vt__14TBoss7Crawfish[];

void *__dt__14TBoss7CrawfishFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TBoss7Crawfish;
        unregister_object_by_id(arg0);
        clear_obj_links(arg0);
        free_child__14TBoss7CrawfishFPv(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 TBoss7Crawfish__data_805D6A60;

u8 *TBoss7Crawfish__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    Vec_8030920C v;
    initialize__9TObjEnemyFPv();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TBoss7Crawfish;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D40A0;
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((int) (TBoss7Crawfish__data_805D6A60), (int) (0));
    fn_8002B630((void *) (arg0 + 0x374), (void *) (lbl_80475570));
    initialize_linked_object_reference((void *) (arg0), (void *) (arg0 + 0x374));
    set_field_d8__10TObjPlayerFPvi((void *) (arg0), (void *) (lbl_804E7380));
    set_field_dc__10TObjPlayerFPvi((void *) (arg0), (int) (M2C_FIELD((u8 *)TBoss7Crawfish__data_805D6A60, s32 *, 0x430)));
    set_anim_timer__14TBoss7CrawfishFPvs((void *) (arg0), (int) (2));
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
    set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
    add_flags_2e4__10TObjPlayerFPvUi((void *) (arg0), (int) (2));
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    if (TBoss7Crawfish__sub_80308AA8((void *) (arg0)) != 0) {
        set_param__12TObjEneLappyFPvi((void *) (arg0), (int) (0x4A));
        bind_enemy_combat_stats((void *) (arg0), register_boss__6TLobbyFPv(8), dispatch_shared_handler_b__6TLobbyFPv(8), register_object__6TLobbyFPv(8));
        M2C_FIELD(arg0, s32 *, 0x3A0) = dispatch_shared_handler_a__6TLobbyFPv((int) (8));
        M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((int) (TBoss7Crawfish__data_805D6A60), (int) (0));
    } else {
        set_param__12TObjEneLappyFPvi((void *) (arg0), (int) (0x4B));
        bind_enemy_combat_stats((void *) (arg0), register_boss__6TLobbyFPv(9), dispatch_shared_handler_b__6TLobbyFPv(9), register_object__6TLobbyFPv(9));
        M2C_FIELD(arg0, s32 *, 0x3A0) = dispatch_shared_handler_a__6TLobbyFPv((int) (9));
        M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((int) (TBoss7Crawfish__data_805D6A60), (int) (1));
    }
    TLobby__sub_801A1FDC((void *) (arg0), (int) (0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    TBoss7Crawfish__sub_80308B38((void *) (arg0));
    TBoss7Crawfish__sub_80308F8C((void *) (arg0), (int) (0));
    v.z = TBoss7Crawfish__data_805DF0D8;
    v.y = TBoss7Crawfish__data_805DF0D8;
    v.x = TBoss7Crawfish__data_805DF0D8;
    TBoss7Crawfish__sub_80308ED8((void *) (arg0), (void *) (&v));
    if (TBoss7Crawfish__sub_80308AA8((void *) (arg0)) != 0) {
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) lbl_805DF100;
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_805DF100;
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_805DF100;
    } else {
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) TBoss7Crawfish__data_805DF0DC;
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) TBoss7Crawfish__data_805DF0DC;
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) TBoss7Crawfish__data_805DF0DC;
    }
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    return arg0;
}

void destroy_instance__14TBoss7CrawfishFv(void) {
    if ((u32) TBoss7Crawfish__data_805D6A60 != 0U) {
        TLobby__sub_8001FE7C((void*)TBoss7Crawfish__data_805D6A60, 1);
        TBoss7Crawfish__data_805D6A60 = 0U;
    }
}

void TBoss7Crawfish__sub_8030946C(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lbl_804E7370.value, 0, 0, 0));
    }
    (*(s32 *)&TBoss7Crawfish__data_805D6A60) = var_r0;
}

void TBoss7Crawfish__vt42(void) {  }
void TBoss7Crawfish__vt43(void) {  }
void TBoss7Crawfish__vt44(void) {  }
void TBoss7Crawfish__vt45(void) {  }
void TBoss7Crawfish__vt46(void) {  }
void TBoss7Crawfish__vt47(void) {  }
void TBoss7Crawfish__vt48(void) {  }
f32 get_health__14TBoss7CrawfishFPv(void* p) { return *(f32*)((char*)p + 0xc8); }
void set_anim_timer__14TBoss7CrawfishFPvs(void* p, s16 v) { *(s16*)((char*)p + 0xb8) = v; }

}
