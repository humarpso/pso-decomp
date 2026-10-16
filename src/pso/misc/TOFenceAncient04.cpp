#include "types.h"
#include "pso/system/BmlResourceDescriptor.h"
#include "pso/misc/TOFenceAncient04.h"
#include "pso/misc/TOFenceAncient01.h"
#include "pso/misc/TOHangceilingCave01.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {
extern const char lbl_80441648[];
extern const char lbl_80441660[];
extern const char lbl_80441678[];
extern const char *bm_fd_obj_n_saku_6x4_model_names[2];
extern const char *bm_fd_obj_n_saku_6x4_motion_names[2];
extern BmlResourceDescriptor TOFenceAncient04_resource_descriptor;
}

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
void * get_bml_motion(s32, s32);
void TLobby__sub_8001FE7C(void*, int);
Big_8016775C * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
s32 mem_free(void*);
Buf_8016775C * mem_alloc(s32);
int set_indexed_flags(void*, void*, void*);
s32 unregister_object_by_id(s32 *);
s32 refresh_collision_body_centers(void *);
u32 check_actor_body_contact(void *, void *, f32);
s32 free_collision_body_parts(void *);
s32 init_collision_body_parts(void *, void *, int, int, f32);
s32 access_object_saved_state(void *, int);
s32 init_fields__16TOFenceAncient01Fv();
s32 sub_80166E64__13TUnk_804B1B80Fv(void *);
s32 sub_80166EA8__13TUnk_804B1B80Fi(void *, int);
void TOFenceAncient04__vt14(void);
void TOFenceAncient04__vt13(void* p);
void TOFenceAncient04__vt12(void* p);
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
void set_scale__13TUnk_804B2578Ff(void *, f32);
void * get_player_by_client_id(s32);
s32 load_gvm_texture_file(void *);
s32 play_persistent_sound(s32, void *, void *, s32, s32);
u8 is_current_floor_switch_set(int);
s32 clear_current_floor_switch(int);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);

extern s32 __vt__16TOFenceAncient04[];
extern s32 __vt__22TOHangceilingCave01Key[];
extern s32 __vt__25TOHangceilingCave01Normal[];
extern s32 __vt__27TOHangceilingCave01KeyQuick[];
extern Q_801681D0 hang_ceiling_cave_scale_params;
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

extern const char lbl_80441648[] = "fd_obj_n_saku_6x4.gj";
extern const char lbl_80441660[] = "fd_obj_n_saku_6x4.njm";
extern const char lbl_80441678[] = "bm_fd_obj_n_saku_6x4.bml";
extern const char TOFenceAncient04__class_name_string[] = "TOFenceAncient04";
__declspec(section ".rodata") extern const char lbl_804416A8[];
__declspec(section ".rodata") extern const char lbl_804416C0[];
__declspec(section ".rodata") extern const char lbl_804416D8[];

void TOFenceAncient04__vt14(void) {  }

void TOFenceAncient04__vt13(void* p) { *(int*)((char*)p + 0xac) = 0; *(int*)((char*)p + 0xd0) = 0; { int i; for (i = 0; i < 4; i++) { ((TObjPlayer *)p)->clear_player_status_flag((s32)((void*)i), (u32)((void*)8)); } } }

void TOFenceAncient04__vt12(void* p) { *(int*)((char*)p + 0xac) = 1; *(int*)((char*)p + 0xd0) = 1; { int i; for (i = 0; i < 4; i++) { set_indexed_flags(p, (void*)i, (void*)8); } } }

void *TOFenceAncient04::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TOFenceAncient04__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

void TOFenceAncient04::destroy() {
    if ((void *) TOFenceAncient04__resource_bundle != NULL) {
        TObjPlayer::free_if_valid(*(s32 *)((s8 *)TOFenceAncient04__resource_bundle + 4));
        TObjPlayer::free_if_valid(*(s32 *)((s8 *)TOFenceAncient04__resource_bundle + 8));
        TObjPlayer::free_if_valid(*(s32 *)((s8 *)TOFenceAncient04__resource_bundle + 0xC));
        if ((void *) TOFenceAncient04__resource_bundle != NULL) {
            mem_free((void*)TOFenceAncient04__resource_bundle);
            TOFenceAncient04__resource_bundle = NULL;
        }
    }
    if ((u32) TOFenceAncient04__model_archive != 0U) {
        TLobby__sub_8001FE7C((void*)TOFenceAncient04__model_archive, 1);
        TOFenceAncient04__model_archive = 0U;
    }
}

void TOFenceAncient04::load_resources() {
    Big_8016775C *v = (Big_8016775C *)((TAdSinglePlyChrSelectGC *)0x440)->alloc();
    if (v != NULL) {
        v = load_resource_from_descriptor(v, 1, &TOFenceAncient04_resource_descriptor, 0, 0, 0);
    }
    (*(Big_8016775C * *)&TOFenceAncient04__model_archive) = v;
    (*(Buf_8016775C * *)&TOFenceAncient04__resource_bundle) = mem_alloc(0x10);
    (*(Buf_8016775C * *)&TOFenceAncient04__resource_bundle)->a = (*(Big_8016775C * *)&TOFenceAncient04__model_archive)->p->f0C;
    (*(Buf_8016775C * *)&TOFenceAncient04__resource_bundle)->b = load_gvm_texture_file((void *)lbl_804416A8);
    (*(Buf_8016775C * *)&TOFenceAncient04__resource_bundle)->c = load_gvm_texture_file((void *)lbl_804416C0);
    (*(Buf_8016775C * *)&TOFenceAncient04__resource_bundle)->d = load_gvm_texture_file((void *)lbl_804416D8);
}

__declspec(section ".rodata") extern const char lbl_804416A8[] = "o_fence_ancient_b.gvm";
__declspec(section ".rodata") extern const char lbl_804416C0[] = "o_fence_ancient_g.gvm";
__declspec(section ".rodata") extern const char lbl_804416D8[] = "o_fence_ancient_p.gvm";

void *__dt__16TOFenceAncient04Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TOFenceAncient04;
        unregister_object_by_id((s32 *)arg0);
        free_collision_body_parts(arg0);
        ((TOFenceAncient01 *)arg0)->destroy(0);
        if (arg1 > 0) {
            ((s32 (*)(void *))__dl__7TObjectFPv)(arg0);
        }
    }
    return arg0;
}

u8 *TOFenceAncient04__ct(u8 *arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;
    u8 *temp_r4;
    u8 *temp_r6;
    init_fields__16TOFenceAncient01Fv();
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80167878___vt__16TOFenceAncient04 *)&__vt__16TOFenceAncient04).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOFenceAncient04__class_name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    temp_r4 = (u8 *)(*(u8 **)((s8 *)(*(u8 * *)&TOFenceAncient04__model_archive) + 0x42C));
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)temp_r4 + 8);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)((*(s32 *)&TOFenceAncient04__resource_bundle) + (sub_80166EA8__13TUnk_804B1B80Fi((void *) (arg0), (int) (temp_r4)) * 4)) + 0);
    *(u8 **)((s8 *)arg0 + 0xBC) = (unsigned char *) ((void *) *(void **)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TOFenceAncient04__model_archive) + 0x430)) + 4));
    temp_r6 = (u8 *)(*(u8 **)((s8 *)arg0 + 0xBC));
    temp_f1 = (f32) *(u32 *)((s8 *)temp_r6 + 4);
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) (temp_f1 - lbl_805DB640);
    init_collision_body_parts((void *) (arg0), (void *) (&ofence_ancient04_collision_parts.value), (int) (8), (int) (temp_r6), (f32) (temp_f1));
    refresh_collision_body_centers((void *) (arg0));
    ((TObjPlayer *)arg0)->reset_photon_effect();
    sub_80166E64__13TUnk_804B1B80Fv((void *) (arg0));
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DB644;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) lbl_805DB648;
    return arg0;
}

}

extern "C" {
__declspec(section ".data") const char *bm_fd_obj_n_saku_6x4_model_names[2] = { (const char *)lbl_80441648, NULL };
__declspec(section ".data") const char *bm_fd_obj_n_saku_6x4_motion_names[2] = { (const char *)lbl_80441660, NULL };
BmlResourceDescriptor TOFenceAncient04_resource_descriptor = { (const char *)lbl_80441678, bm_fd_obj_n_saku_6x4_model_names, bm_fd_obj_n_saku_6x4_motion_names, 1, 1 };
}
