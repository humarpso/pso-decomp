#include "types.h"
#include "pso/misc/TOHangceilingCave01.h"

extern "C" {

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_80167878_lbl_804B1F80 {
    s32 value;
    u8 remaining[0x15C];
};

struct RecoveredGlobal_80167878___vt__16TOFenceAncient04 {
    s32 value;
    u8 remaining[0x44];
};

struct Inner_8016775C { u8 pad[0xC]; s32 f0C; };

struct Big_8016775C { u8 pad[0x42C]; Inner_8016775C *p; };

struct Buf_8016775C { s32 a; s32 b; s32 c; s32 d; };

struct VBase_18_f90cfc { char pad[0x18]; };

struct VObj_18_f90cfc : VBase_18_f90cfc {
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
    virtual s32 m77();
};

typedef char RecoveredGlobal_80167878_lbl_804B1F80_size[sizeof(RecoveredGlobal_80167878_lbl_804B1F80) == 0x160 ? 1 : -1];

typedef char RecoveredGlobal_80167878___vt__16TOFenceAncient04_size[sizeof(RecoveredGlobal_80167878___vt__16TOFenceAncient04) == 0x48 ? 1 : -1];

struct RecoveredGlobal_80167C78___vt__27TOHangceilingCave01KeyQuick {
    s32 value;
    u8 remaining[0x144];
};

typedef char RecoveredGlobal_80167C78___vt__27TOHangceilingCave01KeyQuick_size[sizeof(RecoveredGlobal_80167C78___vt__27TOHangceilingCave01KeyQuick) == 0x148 ? 1 : -1];

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
    virtual s32 m77();
};

struct Obj_80168010 : VObj_18 {
    u8 pad1C[0xA4 - 0x1C];
    u8 *fA4;
    u8 padA8[0xC0 - 0xA8];
    f32 fC0;
    f32 fC4;
    u8 padC8[0x326 - 0xC8];
    s16 state;
    u8 pad328[0x354 - 0x328];
    f32 f354;
};

struct Q_801681D0 { f32 w[4]; };

struct Obj_80168244 { u8 pad[0x33c]; u32 arr[4]; s32 count; };

struct Obj_80168280 { u8 pad[0x33c]; u32 arr[4]; s32 count; };

struct VB_80168488 { char pad[0x18]; };

struct VO_80168488 : VB_80168488 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void m21(void *, void *, s32, s32, s32);
    virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54();
    virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74();
    virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78();
    virtual f32 m79(f32);
};

struct Pair_80168488 { s32 a; f32 b; };

struct Fish_801682E4 { u32 pad0; u32 f4; };

struct Obj_801682E4 { u8 pad0[0xC0]; f32 f0C0; f32 f0C4; f32 f0C8; u8 pad1[0x2C]; Fish_801682E4 *fish; u8 pad2[0x22A]; s16 mode; };

s32 memset(void *, int, int);
s32 obj_setFlags30(void *, s32);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFv(void *);
void * get_bml_motion(s32, s32);
void TLobby__sub_8001FE7C(void*, int);
Big_8016775C * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void * alloc__23TAdSinglePlyChrSelectGCFv(s32);
s32 mem_free(void*);
Buf_8016775C * mem_alloc(s32);
int clear_player_status_flag__10TObjPlayerFlUl(void*, void*, void*);
int set_indexed_flags(void*, void*, void*);
s32 unregister_object_by_id(s32 *);
s32 reset_photon_effect__10TObjPlayerFv(void *);
s32 refresh_collision_body_centers(void *);
u32 check_actor_body_contact(void *, void *, f32);
s32 free_collision_body_parts(void *);
s32 init_collision_body_parts(void *, void *, int, int, f32);
s32 access_object_saved_state(void *, int);
s32 destroy__16TOFenceAncient01Fs(void *, s32);
s32 init_fields__16TOFenceAncient01Fv();
s32 fn_80166E64(void *);
s32 fn_80166EA8(void *, int);
void TOFenceAncient04__vt14(void);
void TOFenceAncient04__vt13(void* p);
void TOFenceAncient04__vt12(void* p);
void * create__16TOFenceAncient04FPv(void *arg0);
void destroy__16TOFenceAncient04Fv(void);
void load_resources__16TOFenceAncient04Fv(void);
void * __dt__16TOFenceAncient04Fv(void *arg0, s16 arg1);
u8 * TOFenceAncient04__ct(u8 *arg0, s32 arg1, s32 arg2);
void TOHangceilingCave01KeyQuick__vt78(u8 *arg0);
void * __dt__27TOHangceilingCave01KeyQuickFv(void *arg0, s16 arg1);
u8 * TOHangceilingCave01KeyQuick__ct(u8 *arg0, s32 arg1);
void TOHangceilingCave01Key__vt78(u8 *arg0);
void * __dt__22TOHangceilingCave01KeyFv(void *arg0, s16 arg1);
void * TOHangceilingCave01Key__ct(void *arg0);
void TOHangceilingCave01Normal__vt77(void *arg0);
void TOHangceilingCave01Normal__vt78(Obj_80168010 *arg0);
void * __dt__25TOHangceilingCave01NormalFv(void *arg0, s16 arg1);
void * TOHangceilingCave01Normal__ct(void *arg0);
f32 TOHangceilingCave01Normal__sub_801681D0(f32 farg0);
void advance_wrap_offset__25TOHangceilingCave01NormalFPv(void *arg0);
s32 fn_80168244(Obj_80168244 *self, u32 v);
void fn_80168280(Obj_80168280 *self, u32 v);
void reset_state(u8 *arg0);
void fn_801682E4(Obj_801682E4 *o, s32 arg1);
void fn_80168398(u8 *arg0);
void fn_80168488(VO_80168488 *arg0);
void destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(void *, int);
void init_base__27TOHangceilingCave01KeyQuickFPvii(void *);
void set_scale__27TOHangceilingCave01KeyQuickFPvf(void *, f32);
void * get_player_by_client_id(s32);
s32 free_if_valid__10TObjPlayerFl(s32);
s32 load_gvm_texture_file(void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 play_persistent_sound(s32, void *, void *, s32, s32);
u8 is_current_floor_switch_set(int);
s32 clear_current_floor_switch(int);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);

extern s32 __vt__16TOFenceAncient04[];
extern s32 __vt__22TOHangceilingCave01Key[];
extern s32 __vt__25TOHangceilingCave01Normal[];
extern s32 __vt__27TOHangceilingCave01KeyQuick[];
extern u8 lbl_804416A8[];
extern u8 lbl_804416C0[];
extern u8 lbl_804416D8[];
extern u8 TOFenceAncient04_resource_descriptor[];
extern RecoveredGlobal_80167878_lbl_804B1F80 ofence_ancient04_collision_parts;
extern s32 TOFenceAncient04__class_name;
extern void *TOHangceilingCave01Normal__class_name;
extern void *TOHangceilingCave01Key__class_name;
extern s32 TOHangceilingCave01KeyQuick__class_name;
extern s32 game_difficulty_selection;
extern u32 TOFenceAncient04__model_archive;
extern void *TOFenceAncient04__resource_bundle;
extern s32 TOHangceilingCave01__model_archive;
extern s32 *turiten_singo_texture_lists;
extern s32 hanging_ceiling_motion_index;
extern const f32 lbl_805DB640;
extern const f32 lbl_805DB644;
extern const f32 lbl_805DB648;
extern const f32 lbl_805DB650;
extern const f32 lbl_805DB654;
extern s32 lbl_805DB658;
extern const f32 lbl_805DB65C;
extern const f32 lbl_805DB660;
extern const f32 lbl_805DB664;
extern const f32 lbl_805DB668;
extern const f32 lbl_805DB66C;
extern const f32 lbl_805DB670;
extern const f32 lbl_805DB674;
extern const f32 lbl_805DB678;
extern const f32 lbl_805DB67C;
extern const f32 lbl_805DB680;
extern const f32 lbl_805DB684;
extern const f32 lbl_805DB688;
extern const f32 lbl_805DB68C;
extern void *tl_05;

extern const char lbl_804416F8[] = "fe_obj_turiten_kuro.gj";
extern const char lbl_80441710[] = "fe_obj_turiten_moto_taiki.gj";
extern const char lbl_80441730[] = "fs_obj_turiten_singo.gj";
extern const char lbl_80441748[] = "fe_obj_turiten_moto.njm";
extern const char lbl_80441760[] = "fe_obj_turiten_moto_taiki.njm";
extern const char lbl_80441780[] = "fe_obj_turiten_moto.bml";
extern const char lbl_80441798[] = "fe_obj_gc_turiten_moto.gj";
extern const char lbl_804417B4[] = "fe_obj_gc_turiten_moto.njm";
extern const char lbl_804417D0[] = "bm_obj_ruins_turiten.bml";
__declspec(section ".rodata") extern Q_801681D0 hang_ceiling_cave_scale_params = { 1.0f, 2.0f, 3.0f, 6.0f };
extern const char lbl_804417FC[] = "TOHangceilingCave01Normal";
extern const char lbl_80441818[] = "TOHangceilingCave01Key";
extern const char TOHangceilingCave01KeyQuick__class_name_string[] = "TOHangceilingCave01KeyQuick";

void TOHangceilingCave01KeyQuick__vt77(void *arg0) {
    u8 *p;

    *(s32 *)((s8 *)arg0 + 0x24) = turiten_singo_texture_lists[1];
    *(void **)((s8 *)arg0 + 0xF8) = get_bml_motion(TOHangceilingCave01__model_archive, 1);
    *(f32 *)((s8 *)arg0 + 0x354) = lbl_805DB650;
    ((s32 (*)(void *, int))fn_801682E4)(arg0, 3);
    p = *(u8 **)((s8 *)arg0 + 0xA4);
    *(s32 *)((s8 *)p + 0x18) &= ~8;
    *(f32 *)((s8 *)arg0 + 0xC0) = lbl_805DB650;
    *(f32 *)((s8 *)arg0 + 0xC8) = lbl_805DB654;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xF8)) + 4) - lbl_805DB654;
    ((s32 (*)(void *))reset_state)(arg0);
}

void TOHangceilingCave01KeyQuick__vt78(u8 *arg0) {
    f32 temp_f1;
    s16 temp_r0;
    u8 *temp_r3;
    u8 *temp_r4;
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x326);
    switch (temp_r0) {
    case 3:
        if ((is_current_floor_switch_set((int) ((u16) *(s32 *)((s8 *)arg0 + 0x35C))) == 1) && (*(f32 *)((s8 *)arg0 + 0xC0) <= *(f32 *)((s8 *)arg0 + 0xC4))) {
            ((s32 (*)(void *, int))fn_801682E4)((void *) (arg0), (int) (2));
        }
        ((s32 (*)(void *))advance_wrap_offset__25TOHangceilingCave01NormalFPv)((void *) (arg0));
        return;
    case 1:
        ((s32 (*)(void *))advance_wrap_offset__25TOHangceilingCave01NormalFPv)((void *) (arg0));
        ((s32 (*)(void *))fn_80168488)((void *) (arg0));
        if (lbl_805DB65C < *(f32 *)((s8 *)arg0 + 0xC0)) {
            temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0xA4));
            *(s32 *)((s8 *)temp_r3 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r3 + 0x18) & 0xFFFFFFF7);
        }
        if (lbl_805DB660 == *(f32 *)((s8 *)arg0 + 0xC0)) {
            ((VObj_18_f90cfc *)(arg0))->m77();
        }
        break;
    case 2:
        if (is_current_floor_switch_set((int) ((u16) *(s32 *)((s8 *)arg0 + 0x35C))) == 1) {
            if (lbl_805DB650 != *(f32 *)((s8 *)arg0 + 0xC0)) {
                ((s32 (*)(void *))advance_wrap_offset__25TOHangceilingCave01NormalFPv)((void *) (arg0));
            }
            if (lbl_805DB664 == *(f32 *)((s8 *)arg0 + 0xC0)) {
                temp_r4 = (u8 *)(*(u8 **)((s8 *)arg0 + 0xA4));
                *(s32 *)((s8 *)temp_r4 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r4 + 0x18) | lbl_805DB658);
                return;
            }
        } else {
            if ((lbl_805DB668 <= *(f32 *)((s8 *)arg0 + 0xC0)) && (*(f32 *)((s8 *)arg0 + 0xC0) <= *(f32 *)((s8 *)arg0 + 0xC4))) {
                *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DB650;
            } else if (lbl_805DB66C <= *(f32 *)((s8 *)arg0 + 0xC0)) {
                *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DB654;
            } else if (lbl_805DB670 <= *(f32 *)((s8 *)arg0 + 0xC0)) {
                *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DB674;
            } else if (lbl_805DB678 <= *(f32 *)((s8 *)arg0 + 0xC0)) {
                *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DB67C;
            } else if (lbl_805DB680 <= *(f32 *)((s8 *)arg0 + 0xC0)) {
                *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DB65C;
            } else {
                *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DB684;
            }
            ((s32 (*)(void *, int))fn_801682E4)((void *) (arg0), (int) (1));
        }
        break;
    }
}

void *__dt__27TOHangceilingCave01KeyQuickFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__27TOHangceilingCave01KeyQuick;
        destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TOHangceilingCave01KeyQuick__ct(u8 *arg0, s32 arg1) {
    ((u8 * (*)(void *, s32))init_base__27TOHangceilingCave01KeyQuickFPvii)(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80167C78___vt__27TOHangceilingCave01KeyQuick *)&__vt__27TOHangceilingCave01KeyQuick).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOHangceilingCave01KeyQuick__class_name;
    ((TOHangceilingCave01 *)arg0)->init_geometry();
    set_scale__27TOHangceilingCave01KeyQuickFPvf(arg0, lbl_805DB688 + *(f32 *)((s8 *)arg0 + 0x70));
    return arg0;
}

void TOHangceilingCave01Key__vt77(void *arg0) {
    u8 *p;

    *(s32 *)((s8 *)arg0 + 0x24) = turiten_singo_texture_lists[1];
    *(void **)((s8 *)arg0 + 0xF8) = get_bml_motion(TOHangceilingCave01__model_archive, 1);
    *(f32 *)((s8 *)arg0 + 0x354) = lbl_805DB650;
    ((s32 (*)(void *, int))fn_801682E4)(arg0, 3);
    p = *(u8 **)((s8 *)arg0 + 0xA4);
    *(s32 *)((s8 *)p + 0x18) &= ~8;
    *(f32 *)((s8 *)arg0 + 0xC0) = lbl_805DB650;
    *(f32 *)((s8 *)arg0 + 0xC8) = lbl_805DB654;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xF8)) + 4) - lbl_805DB654;
    ((s32 (*)(void *))reset_state)(arg0);
}

void TOHangceilingCave01Key__vt78(u8 *arg0) {
    switch (*(s16 *)(arg0 + 0x326)) {
    case 3:
        if (is_current_floor_switch_set((u16)*(s32 *)(arg0 + 0x35C)) == 1 && *(f32 *)(arg0 + 0xC0) <= *(f32 *)(arg0 + 0xC4)) {
            ((s32 (*)(void *, int))fn_801682E4)(arg0, 2);
        }
        ((s32 (*)(void *))advance_wrap_offset__25TOHangceilingCave01NormalFPv)(arg0);
        break;
    case 1:
        ((s32 (*)(void *))advance_wrap_offset__25TOHangceilingCave01NormalFPv)(arg0);
        ((s32 (*)(void *))fn_80168488)(arg0);
        if (lbl_805DB65C == *(f32 *)(arg0 + 0xC0)) {
            *(s32 *)(*(u8 **)(arg0 + 0xA4) + 0x18) &= ~8;
        } else if (lbl_805DB660 == *(f32 *)(arg0 + 0xC0)) {
            ((VObj_18_f90cfc *)(arg0))->m77();
            clear_current_floor_switch((u16)*(s32 *)(arg0 + 0x35C));
        }
        break;
    case 2:
        ((s32 (*)(void *))advance_wrap_offset__25TOHangceilingCave01NormalFPv)(arg0);
        if (lbl_805DB664 == *(f32 *)(arg0 + 0xC0)) {
            *(s32 *)(*(u8 **)(arg0 + 0xA4) + 0x18) |= lbl_805DB658;
        } else if (*(f32 *)(arg0 + 0xC0) == *(f32 *)(arg0 + 0xC4)) {
            ((s32 (*)(void *, int))fn_801682E4)(arg0, 1);
        }
        break;
    }
}

void *__dt__22TOHangceilingCave01KeyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__22TOHangceilingCave01Key;
        destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TOHangceilingCave01Key__ct(void *arg0) {
    init_base__27TOHangceilingCave01KeyQuickFPvii(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__22TOHangceilingCave01Key;
    *(void **)((s8 *)arg0 + 0x0) = TOHangceilingCave01Key__class_name;
    ((TOHangceilingCave01 *)arg0)->init_geometry();
    return arg0;
}

void TOHangceilingCave01Normal__vt77(void *arg0) {
    void *temp_r6;
    union { f64 d; u32 i[2]; } cvt;

    s32 *p;
    *(void **)((s8 *)arg0 + 0xF8) = get_bml_motion(TOHangceilingCave01__model_archive, hanging_ceiling_motion_index);
    p = turiten_singo_texture_lists;
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *p;
    *(f32 *)((s8 *)arg0 + 0x354) = (f32) (lbl_805DB65C * *(f32 *)((s8 *)arg0 + 0x350));
    ((s32 (*)(void *, s32, s32 *, f32))fn_801682E4)(arg0, 0, p, lbl_805DB65C);
    temp_r6 = *(void **)((s8 *)arg0 + 0xA4);
    *(s32 *)((s8 *)temp_r6 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r6 + 0x18) | lbl_805DB658);
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DB650;
    *(f32 *)((s8 *)arg0 + 0xC8) = (f32) lbl_805DB654;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) *(u32 *)((s8 *)(*(void **)((s8 *)arg0 + 0xF8)) + 4) - lbl_805DB654;
}

void TOHangceilingCave01Normal__vt78(Obj_80168010 *arg0) {
    switch (arg0->state) {
    case 0:
        if (lbl_805DB650 < arg0->f354) {
            arg0->f354 = arg0->f354 - lbl_805DB654;
            return;
        }
        ((s32 (*)(void *, int)) fn_801682E4)(arg0, 1);
        ((s32 (*)(void *))reset_state)(arg0);
        return;
    case 1:
        ((s32 (*)(void))advance_wrap_offset__25TOHangceilingCave01NormalFPv)();
        ((s32 (*)(void *))fn_80168488)(arg0);
        if (lbl_805DB65C == arg0->fC0) {
            *(s32 *)((s8 *)arg0->fA4 + 0x18) &= ~8;
            return;
        }
        if (lbl_805DB660 == arg0->fC0) {
            ((s32 (*)(void *, int)) fn_801682E4)(arg0, 2);
        }
        return;
    case 2:
        ((s32 (*)(void))advance_wrap_offset__25TOHangceilingCave01NormalFPv)();
        if (lbl_805DB664 == arg0->fC0) {
            *(s32 *)((s8 *)arg0->fA4 + 0x18) |= lbl_805DB658;
            return;
        }
        if (arg0->fC0 == arg0->fC4) {
            arg0->m77();
        }
        break;
    }
}

void *__dt__25TOHangceilingCave01NormalFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__25TOHangceilingCave01Normal;
        destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TOHangceilingCave01Normal__ct(void *arg0) {
    init_base__27TOHangceilingCave01KeyQuickFPvii(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__25TOHangceilingCave01Normal;
    *(void **)((s8 *)arg0 + 0x0) = TOHangceilingCave01Normal__class_name;
    ((TOHangceilingCave01 *)arg0)->init_geometry();
    return arg0;
}

f32 TOHangceilingCave01Normal__sub_801681D0(f32 farg0) {
    Q_801681D0 q = hang_ceiling_cave_scale_params;
    return farg0 * q.w[game_difficulty_selection];
}

void advance_wrap_offset__25TOHangceilingCave01NormalFPv(void *arg0) {
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) (*(f32 *)((s8 *)arg0 + 0xC0) + *(f32 *)((s8 *)arg0 + 0xC8));
    if (*(f32 *)((s8 *)arg0 + 0xC4) < *(f32 *)((s8 *)arg0 + 0xC0)) {
        *(f32 *)((s8 *)arg0 + 0xC0) = (f32) (*(f32 *)&lbl_805DB650);
    }
}

s32 fn_80168244(Obj_80168244 *self, u32 v) {
    s32 i;
    for (i = 0; i != self->count; i++) {
        if (self->arr[i] == v) {
            return 1;
        }
    }
    return 0;
}

void fn_80168280(Obj_80168280 *self, u32 v) {
    if (self->count < 4) {
        self->arr[self->count++] = v;
    }
}

void reset_state(u8 *arg0) {
    memset(arg0 + 0x33C, 0, 0x10);
    *(s32 *)((s8 *)arg0 + 0x34C) = 0;
}

void fn_801682E4(Obj_801682E4 *o, s32 arg1) {
    s16 sp8;
    if (arg1 != o->mode) {
        o->mode = arg1;
        if (((s32 (*)(void *, void *, int))access_object_saved_state)(o, &sp8, 1) != 0) {
            sp8 = o->mode;
        }
        switch (o->mode) {
        case 0:
        case 1:
            break;
        case 2:
            o->fish = ((Fish_801682E4 * (*)(s32, s32))get_bml_motion)(TOHangceilingCave01__model_archive, hanging_ceiling_motion_index);
            o->f0C0 = lbl_805DB68C;
            o->f0C8 = lbl_805DB654;
            o->f0C4 = (f32)o->fish->f4 - lbl_805DB654;
            break;
        }
    }
}

void fn_80168398(u8 *arg0) {
    s32 state = get_global_state__14TOKeyMachine01Fv();
    s32 id = 0;
    switch (*(s16 *)(arg0 + 0x326)) {
    case 2:
        switch (state) {
        case 0x13:
        case 0x14:
            id = 0x4BC11;
            break;
        case 0x15:
        case 0x16:
            id = 0x4004BC11;
            break;
        default:
            id = 0x43C18;
            break;
        }
        break;
    case 1:
        switch (state) {
        case 0x13:
        case 0x14:
            id = 0x4B212;
            break;
        case 0x15:
        case 0x16:
            id = 0x4004B212;
            break;
        default:
            id = 0x4321A;
            break;
        }
        break;
    }
    if (id != 0) {
        play_persistent_sound(id, arg0, arg0 + 0x38, 0, 0);
    }
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)
static inline void hit_80168488(VO_80168488 *o, VO_80168488 *a, Pair_80168488 p) { o->m21(a, &p, 0, -1, -1); }
#pragma pop

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)
void fn_80168488(VO_80168488 *arg0) {
    s32 var_r30;
    VO_80168488 *temp_r3;
    var_r30 = 0;
    do {
        temp_r3 = (VO_80168488 *)get_player_by_client_id(var_r30);
        if ((temp_r3 != NULL) && (((s32 (*)(void *, void *))fn_80168244)(arg0, temp_r3) == 0)) {
            if ((get_field_3e4__10TObjPlayerFv(temp_r3) == get_current_floor()) && (check_actor_body_contact(arg0, temp_r3, lbl_805DB688) != 0U)) {
                Pair_80168488 t;
                t.a = 0;
                t.b = arg0->m79(*(f32 *)((s8 *)arg0 + 0x338));
                hit_80168488(temp_r3, arg0, t);
                obj_setFlags30(temp_r3, 0x400);
                ((s32 (*)(void *, void *))fn_80168280)(arg0, temp_r3);
            }
        }
        var_r30 += 1;
    } while (var_r30 != 0xC);
}
extern int fold_flush_0;
#pragma pop

}

extern "C" {
s32 TOHangceilingCave01__create(u8 *arg0);
s32 check_demo_mode__10TObjPlayerFv();
bool TOHangceilingCave01__sub_801688C0(u8 *arg0);
s32 push_matrix(void);
s32 pop_matrix(void);
f32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFl(s32);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
u8 is_current_floor_switch_set(int);
s32 rotate_matrix_y(int, int);
s32 draw_ginja_object(void *);
s32 draw_ginja_model(void *);
s32 draw_ginja_model_with_motion(void *, void *, f32);
extern u8 *TOHangceilingCave01__model_root;
extern const f32 lbl_805DB674;
extern const f32 lbl_805DB67C;
}

extern "C" {

struct VBase_80168588 { char pad[0x18]; };
struct VObj_80168588 : VBase_80168588 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67();
    virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71();
    virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75();
    virtual void v76(); virtual void v77();
};
struct VObj_80168834_80168588 {
    char pad[0x18];
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
};

struct VBase_18_26a62c { char pad[0x18]; };
struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

int TOHangceilingCave01__sub_80168624(void);
f32 TOHangceilingCave01__sub_8016862C(void);
f32 TOHangceilingCave01__sub_80168634(void);
void TOHangceilingCave01__sub_8016863C(void);
void TOHangceilingCave01__sub_80168640(void);
void TLobby__sub_8001FE7C(void*, int);
bool TOHangceilingCave01__sub_801688C0(u8 *);
s32 spawn_particle_effect(void *, s32);
s32 check_demo_mode__10TObjPlayerFv();
f32 xz_distance_squared(void *, void *);
s32 transform_point_by_current_matrix(void *, void *);
extern s32 camera_ctrl_instance;
extern const f32 lbl_805DB664;
extern const f32 lbl_805DB698;
extern const f32 lbl_805DB69C;
extern const f32 lbl_805DB6A0;
s32 mem_free(void*);
s32 free_if_valid__10TObjPlayerFl(s32);
s32 objInBand__FP7GameObjf(void *, f32);

extern const f32 lbl_805DB654;
extern const f32 lbl_805DB688;
extern const f32 lbl_805DB690;

void TOHangceilingCave01::init_geometry() {
    f32 temp_f2;
    VObj_80168588 *self = (VObj_80168588 *)this;

    *(s32 *)((s8 *)this + 0x35C) = (s32) *(s32 *)((s8 *)this + 0x84);
    *(u32 *)((s8 *)this + 0x358) = (u32) *(u32 *)((s8 *)this + 0x8C);
    if ((u32) *(u32 *)((s8 *)this + 0x358) >= 3U) {
        *(u32 *)((s8 *)this + 0x358) = 2U;
    }
    temp_f2 = lbl_805DB690 + *(f32 *)((s8 *)this + 0x68);
    *(f32 *)((s8 *)this + 0x350) = (f32) (temp_f2 - lbl_805DB654);
    ((void (*)(void *, f32, f32))set_scale__27TOHangceilingCave01KeyQuickFPvf)(this, lbl_805DB688 + *(f32 *)((s8 *)this + 0x70), temp_f2);
    self->v77();
    *(f32 *)((s8 *)this + 0x354) = (f32) (lbl_805DB654 - *(f32 *)((s8 *)this + 0x6C));
}

int TOHangceilingCave01__sub_80168624(void) { return 1; }

f32 TOHangceilingCave01__sub_8016862C(void) {
    return lbl_805DB650;
}

f32 TOHangceilingCave01__sub_80168634(void) {
    return lbl_805DB650;
}

void TOHangceilingCave01__sub_8016863C(void) {  }
void TOHangceilingCave01__sub_80168640(void) {  }

extern const f32 lbl_805DB694;

void TOHangceilingCave01::draw_model() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r31;
    if ((((s32 (*)(u8 *))TOHangceilingCave01__sub_801688C0)(arg0) != 0) || (check_demo_mode__10TObjPlayerFv() == 1)) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
        set_global_param__8TObjFishFl(*(s32 *)((s8 *)turiten_singo_texture_lists + 8));
        if (*(void **)((s8 *)arg0 + 0x34) != NULL && *(void **)((s8 *)arg0 + 0xF8) != NULL) {
            draw_ginja_model_with_motion(*(void **)((s8 *)arg0 + 0x34), *(void **)((s8 *)arg0 + 0xF8), *(f32 *)((s8 *)arg0 + 0xC0));
        }
        if ((void *) TOHangceilingCave01__model_root != NULL) {
            begin_effect_render__13TParticleCtrlFv();
            if ((u32) *(u32 *)((s8 *)arg0 + 0x358) == 0U) {
                temp_f2 = *(f32 *)((s8 *)arg0 + 0x354);
                temp_f1 = *(f32 *)((s8 *)arg0 + 0x350);
                temp_r29 = temp_f2 <= temp_f1;
                temp_r30 = temp_f2 <= (lbl_805DB674 * temp_f1);
                temp_r31 = temp_f2 <= (lbl_805DB67C * temp_f1);
                set_global_param__8TObjFishFl(*(s32 *)((s8 *)turiten_singo_texture_lists + 4));
                if (temp_r29 == 1) {
                    draw_ginja_model((void *) (*(s32 *)((s8 *)(*(u8 **)((s8 *)TOHangceilingCave01__model_root + 0x2C)) + 4)));
                }
                if (temp_r30 == 1) {
                    draw_ginja_model((void *) (*(s32 *)((s8 *)(*(void **)((s8 *)(*(u8 **)((s8 *)TOHangceilingCave01__model_root + 0x2C)) + 0x2C)) + 4)));
                }
                if (temp_r31 == 1) {
                    draw_ginja_model((void *) (*(s32 *)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(u8 **)((s8 *)TOHangceilingCave01__model_root + 0x2C)) + 0x2C)) + 0x2C)) + 4)));
                }
                set_global_param__8TObjFishFl(*(s32 *)((s8 *)turiten_singo_texture_lists + 0));
                if (temp_r29 == 0) {
                    draw_ginja_model((void *) (*(s32 *)((s8 *)(*(u8 **)((s8 *)TOHangceilingCave01__model_root + 0x2C)) + 4)));
                }
                if (temp_r30 == 0) {
                    draw_ginja_model((void *) (*(s32 *)((s8 *)(*(void **)((s8 *)(*(u8 **)((s8 *)TOHangceilingCave01__model_root + 0x2C)) + 0x2C)) + 4)));
                }
                if (temp_r31 == 0) {
                    draw_ginja_model((void *) (*(s32 *)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(u8 **)((s8 *)TOHangceilingCave01__model_root + 0x2C)) + 0x2C)) + 0x2C)) + 4)));
                }
            } else {
                if (is_current_floor_switch_set((int) ((u16) *(s32 *)((s8 *)arg0 + 0x35C))) == 1) {
                    set_global_param__8TObjFishFl(*(s32 *)((s8 *)turiten_singo_texture_lists + 0));
                } else {
                    set_global_param__8TObjFishFl(*(s32 *)((s8 *)turiten_singo_texture_lists + 4));
                }
                draw_ginja_object((void *) (TOHangceilingCave01__model_root));
            }
            end_effect_render__13TParticleCtrlFv();
        }
        pop_matrix();
    }
}

void TOHangceilingCave01::check_player_trigger() {
    u8 *arg0 = (u8 *)this;
    if (check_demo_mode__10TObjPlayerFv() == 0) {
        ((VObj_80168834_80168588*)arg0)->m78();
        fn_80168398(arg0);
        if ((((s32 (*)(void *))TOHangceilingCave01__sub_801688C0)(arg0) != 0) && ((s16) *(s16 *)((s8 *)arg0 + 0x326) != 3) && (objInBand__FP7GameObjf(arg0, lbl_805DB694) != 0)) {
            spawn_particle_effect(arg0 + 0x38, 0x64);
        }
    }
}

bool TOHangceilingCave01__sub_801688C0(u8 *arg0) {
    f32 sp8[3];

    if (xz_distance_squared((void *) (arg0 + 0x38), (void *) (camera_ctrl_instance + 0x178)) < lbl_805DB698) {
        *(s16 *)((s8 *)arg0 + 0x1E) = 1;
        return 1;
    }
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DB69C, lbl_805DB664) == 0) {
        return 0;
    }
    transform_point_by_current_matrix((void *) (arg0 + 0x38), (void *) sp8);
    return (sp8[2] > lbl_805DB6A0) == 0;
}

s32 TOHangceilingCave01__create(u8 *arg0) {
  s32 temp_r0;
  s32 temp_r3;
  s32 temp_r3_2;
  s32 temp_r3_3;
  s32 var_r0;
  s32 var_r0_2;
  s32 var_r0_3;
  if (arg0 != 0)
  {
    temp_r0 = *((s32 *) (((s8 *) arg0) + 0x38));
    switch (temp_r0)
    {
      case 0:
        temp_r3 = ((s32 (*)(int))__nw__7TObjectFUl)((int) 0x360);
        var_r0 = temp_r3;
        if (var_r0 != 0)
      {
        var_r0 = ((s32 (*)(int, int, void *))TOHangceilingCave01Normal__ct)((int) temp_r3, (int) tl_05, (void *) arg0);
      }
        return var_r0;
      case 1:
        temp_r3_2 = ((s32 (*)(int))__nw__7TObjectFUl)((int) 0x360);
        var_r0_2 = temp_r3_2;
        if (var_r0_2 != 0)
      {
        var_r0_2 = ((s32 (*)(int, int, void *))TOHangceilingCave01Key__ct)((int) temp_r3_2, (int) tl_05, (void *) arg0);
      }
        return var_r0_2;
      case 2:
        temp_r3_3 = ((s32 (*)(int))__nw__7TObjectFUl)((int) 0x360);
        var_r0_3 = temp_r3_3;
        if (var_r0_3 != 0)
      {
        var_r0_3 = ((s32 (*)(int, int, void *))TOHangceilingCave01KeyQuick__ct)((int) temp_r3_3, (int) tl_05, (void *) arg0);
      }
        return var_r0_3;
    }
  }
  else
  {
  }
  return 0;
}

void TOHangceilingCave01::destroy_instance() {
    if ((void *) turiten_singo_texture_lists != NULL) {
        free_if_valid__10TObjPlayerFl(*(s32 *)((s8 *)turiten_singo_texture_lists + 4));
        free_if_valid__10TObjPlayerFl(*(s32 *)((s8 *)turiten_singo_texture_lists + 0));
        if ((void *) turiten_singo_texture_lists != NULL) {
            mem_free((void*)turiten_singo_texture_lists);
            turiten_singo_texture_lists = NULL;
        }
    }
    if ((u32) TOHangceilingCave01__model_archive != 0U) {
        TLobby__sub_8001FE7C((void*)TOHangceilingCave01__model_archive, 1);
        TOHangceilingCave01__model_archive = 0U;
    }
}

}

extern "C" {
struct Buf_80168AA8 { s32 a; s32 b; s32 c; };
s32 TObjFish__sub_8001EDB0(void *, int);
s32 get_bml_model(void *, int);
extern u8 fe_obj_turiten_moto_resource_descriptor[];
extern u8 turiten_singo_resource_descriptor[];
extern s32 lbl_805D59D8;
extern s32 turiten_singo_key_model_index;

extern const char lbl_80441858[] = "fs_obj_turiten_singo.gvm";
extern const char lbl_80441874[] = "fs_obj_turiten_singo_r.gvm";

void load_turiten_singo_resources(void) {
    void *p;

    (*(void **)&TOHangceilingCave01__model_archive) = 0;
    (*(Buf_80168AA8 **)&turiten_singo_texture_lists) = 0;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 19:
    case 20:
        p = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (p != 0) {
            p = ((void *(*)(void *, int, void *, int, int, int))load_resource_from_descriptor)(p, 5, turiten_singo_resource_descriptor, 0, 0, 0);
        }
        (*(void **)&TOHangceilingCave01__model_archive) = p;
        (*(Buf_80168AA8 **)&turiten_singo_texture_lists) = ((Buf_80168AA8 *(*)(u32))mem_alloc)(0xC);
        (*(Buf_80168AA8 **)&turiten_singo_texture_lists)->b = 0;
        (*(Buf_80168AA8 **)&turiten_singo_texture_lists)->a = 0;
        (*(Buf_80168AA8 **)&turiten_singo_texture_lists)->c = TObjFish__sub_8001EDB0((*(void **)&TOHangceilingCave01__model_archive), 0);
        lbl_805D59D8 = 0;
        (*(s32 *)&TOHangceilingCave01__model_root) = 0;
        turiten_singo_key_model_index = 0;
        hanging_ceiling_motion_index = 0;
        break;
    default:
        p = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (p != 0) {
            p = ((void *(*)(void *, int, void *, int, int, int))load_resource_from_descriptor)(p, 5, fe_obj_turiten_moto_resource_descriptor, 0, 0, 0);
        }
        (*(void **)&TOHangceilingCave01__model_archive) = p;
        (*(Buf_80168AA8 **)&turiten_singo_texture_lists) = ((Buf_80168AA8 *(*)(u32))mem_alloc)(0xC);
        (*(Buf_80168AA8 **)&turiten_singo_texture_lists)->a = load_gvm_texture_file((void *)lbl_80441858);
        (*(Buf_80168AA8 **)&turiten_singo_texture_lists)->b = load_gvm_texture_file((void *)lbl_80441874);
        (*(Buf_80168AA8 **)&turiten_singo_texture_lists)->c = TObjFish__sub_8001EDB0((*(void **)&TOHangceilingCave01__model_archive), 1);
        (*(s32 *)&TOHangceilingCave01__model_root) = get_bml_model((*(void **)&TOHangceilingCave01__model_archive), 2);
        turiten_singo_key_model_index = 1;
        hanging_ceiling_motion_index = 0;
        break;
    }
}

}
