#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80167878_lbl_804B1F80 {
    M2C_UNK value;
    u8 remaining[0x15C];
};

struct RecoveredGlobal_80167878___vt__16TOFenceAncient04 {
    M2C_UNK value;
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
    virtual M2C_UNK m77();
};

typedef char RecoveredGlobal_80167878_lbl_804B1F80_size[sizeof(RecoveredGlobal_80167878_lbl_804B1F80) == 0x160 ? 1 : -1];

typedef char RecoveredGlobal_80167878___vt__16TOFenceAncient04_size[sizeof(RecoveredGlobal_80167878___vt__16TOFenceAncient04) == 0x48 ? 1 : -1];

struct RecoveredGlobal_80167C78___vt__27TOHangceilingCave01KeyQuick {
    M2C_UNK value;
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
    virtual M2C_UNK m77();
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

M2C_UNK memset(void *, int, int);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(void *);
void * get_bml_motion(s32, s32);
void TLobby__sub_8001FE7C(void*, int);
Big_8016775C * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void * alloc__23TAdSinglePlyChrSelectGCFPv(s32);
M2C_UNK free__11TOBoss4RockFUi(void*);
Buf_8016775C * alloc_buffer__11TOBoss4RockFPv(s32);
int clear_player_status_flag__10TObjPlayerFPviUi(void*, void*, void*);
int set_indexed_flags(void*, void*, void*);
M2C_UNK unregister_object_by_id(M2C_UNK *);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK refresh_collision_body_centers(void *);
u32 check_actor_body_contact(void *, void *, f32);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK init_collision_body_parts(void *, void *, int, int, f32);
s32 access_object_saved_state(void *, int);
M2C_UNK destroy__16TOFenceAncient01FPvs(void *, M2C_UNK);
M2C_UNK init_fields__16TOFenceAncient01FPv();
M2C_UNK fn_80166E64(void *);
s32 fn_80166EA8(void *, int);
void TOFenceAncient04__vt14(void);
void TOFenceAncient04__vt13(void* p);
void TOFenceAncient04__vt12(void* p);
void * create__16TOFenceAncient04FPv(void *arg0);
void destroy__16TOFenceAncient04Fv(void);
void TOFenceAncient04__sub_8016775C(void);
void * __dt__16TOFenceAncient04Fv(void *arg0, s16 arg1);
u8 * TOFenceAncient04__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
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
void init_geometry__19TOHangceilingCave01FPv(void *);
void destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(void *, int);
void TOHangceilingCave01KeyQuick__sub_80168C6C(void *);
void set_scale__27TOHangceilingCave01KeyQuickFPvf(void *, f32);
void * get_player_by_client_id(s32);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);
s32 load_gvm_texture_file(void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 play_persistent_sound(s32, void *, void *, s32, s32);
u8 is_current_floor_switch_set(int);
M2C_UNK clear_current_floor_switch(int);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);

extern M2C_UNK __vt__16TOFenceAncient04[];
extern M2C_UNK __vt__22TOHangceilingCave01Key[];
extern M2C_UNK __vt__25TOHangceilingCave01Normal[];
extern M2C_UNK __vt__27TOHangceilingCave01KeyQuick[];
extern u8 lbl_804416A8[];
extern u8 lbl_804416C0[];
extern u8 lbl_804416D8[];
extern Q_801681D0 lbl_804417EC;
extern u8 lbl_804B1F70[];
extern RecoveredGlobal_80167878_lbl_804B1F80 lbl_804B1F80;
extern s32 lbl_805D2FE0;
extern void *lbl_805D2FE8;
extern void *lbl_805D2FEC;
extern s32 lbl_805D2FF0;
extern s32 lbl_805D5550;
extern u32 lbl_805D59C8;
extern void *lbl_805D59CC;
extern s32 lbl_805D59D0;
extern s32 *lbl_805D59D4;
extern s32 lbl_805D59E4;
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

void TOFenceAncient04__vt14(void) {  }

void TOFenceAncient04__vt13(void* p) { *(int*)((char*)p + 0xac) = 0; *(int*)((char*)p + 0xd0) = 0; { int i; for (i = 0; i < 4; i++) { clear_player_status_flag__10TObjPlayerFPviUi(p, (void*)i, (void*)8); } } }

void TOFenceAncient04__vt12(void* p) { *(int*)((char*)p + 0xac) = 1; *(int*)((char*)p + 0xd0) = 1; { int i; for (i = 0; i < 4; i++) { set_indexed_flags(p, (void*)i, (void*)8); } } }

void *create__16TOFenceAncient04FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TOFenceAncient04__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

void destroy__16TOFenceAncient04Fv(void) {
    if ((void *) lbl_805D59CC != NULL) {
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D59CC, s32 *, 4));
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D59CC, s32 *, 8));
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D59CC, s32 *, 0xC));
        if ((void *) lbl_805D59CC != NULL) {
            free__11TOBoss4RockFUi((void*)lbl_805D59CC);
            lbl_805D59CC = NULL;
        }
    }
    if ((u32) lbl_805D59C8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D59C8, 1);
        lbl_805D59C8 = 0U;
    }
}

void TOFenceAncient04__sub_8016775C(void) {
    Big_8016775C *v = (Big_8016775C *)alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (v != NULL) {
        v = load_resource_from_descriptor(v, 1, lbl_804B1F70, 0, 0, 0);
    }
    (*(Big_8016775C * *)&lbl_805D59C8) = v;
    (*(Buf_8016775C * *)&lbl_805D59CC) = alloc_buffer__11TOBoss4RockFPv(0x10);
    (*(Buf_8016775C * *)&lbl_805D59CC)->a = (*(Big_8016775C * *)&lbl_805D59C8)->p->f0C;
    (*(Buf_8016775C * *)&lbl_805D59CC)->b = load_gvm_texture_file(lbl_804416A8);
    (*(Buf_8016775C * *)&lbl_805D59CC)->c = load_gvm_texture_file(lbl_804416C0);
    (*(Buf_8016775C * *)&lbl_805D59CC)->d = load_gvm_texture_file(lbl_804416D8);
}

void *__dt__16TOFenceAncient04Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOFenceAncient04;
        unregister_object_by_id((M2C_UNK *)arg0);
        free_collision_body_parts(arg0);
        destroy__16TOFenceAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            ((M2C_UNK (*)(void *))__dl__7TObjectFPv)(arg0);
        }
    }
    return arg0;
}

u8 *TOFenceAncient04__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    f32 temp_f1;
    u8 *temp_r4;
    u8 *temp_r6;
    init_fields__16TOFenceAncient01FPv();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80167878___vt__16TOFenceAncient04 *)&__vt__16TOFenceAncient04).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2FE0;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    temp_r4 = (u8 *)(M2C_FIELD((*(u8 * *)&lbl_805D59C8), u8 **, 0x42C));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(temp_r4, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(((*(s32 *)&lbl_805D59CC) + (fn_80166EA8((void *) (arg0), (int) (temp_r4)) * 4)), s32 *, 0);
    M2C_FIELD(arg0, u8 **, 0xBC) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D59C8), u8 **, 0x430), void **, 4));
    temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xBC));
    temp_f1 = (f32) M2C_FIELD(temp_r6, u32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) (temp_f1 - lbl_805DB640);
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804B1F80.value), (int) (8), (int) (temp_r6), (f32) (temp_f1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    fn_80166E64((void *) (arg0));
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB644;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB648;
    return arg0;
}

void TOHangceilingCave01KeyQuick__vt77(void *arg0) {
    u8 *p;

    M2C_FIELD(arg0, s32 *, 0x24) = lbl_805D59D4[1];
    M2C_FIELD(arg0, void **, 0xF8) = get_bml_motion(lbl_805D59D0, 1);
    M2C_FIELD(arg0, f32 *, 0x354) = lbl_805DB650;
    ((M2C_UNK (*)(void *, int))fn_801682E4)(arg0, 3);
    p = M2C_FIELD(arg0, u8 **, 0xA4);
    M2C_FIELD(p, s32 *, 0x18) &= ~8;
    M2C_FIELD(arg0, f32 *, 0xC0) = lbl_805DB650;
    M2C_FIELD(arg0, f32 *, 0xC8) = lbl_805DB654;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF8), u32 *, 4) - lbl_805DB654;
    ((M2C_UNK (*)(void *))reset_state)(arg0);
}

void TOHangceilingCave01KeyQuick__vt78(u8 *arg0) {
    f32 temp_f1;
    s16 temp_r0;
    u8 *temp_r3;
    u8 *temp_r4;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 3:
        if ((is_current_floor_switch_set((int) ((u16) M2C_FIELD(arg0, s32 *, 0x35C))) == 1) && (M2C_FIELD(arg0, f32 *, 0xC0) <= M2C_FIELD(arg0, f32 *, 0xC4))) {
            ((M2C_UNK (*)(void *, int))fn_801682E4)((void *) (arg0), (int) (2));
        }
        ((M2C_UNK (*)(void *))advance_wrap_offset__25TOHangceilingCave01NormalFPv)((void *) (arg0));
        return;
    case 1:
        ((M2C_UNK (*)(void *))advance_wrap_offset__25TOHangceilingCave01NormalFPv)((void *) (arg0));
        ((M2C_UNK (*)(void *))fn_80168488)((void *) (arg0));
        if (lbl_805DB65C < M2C_FIELD(arg0, f32 *, 0xC0)) {
            temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
            M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFF7);
        }
        if (lbl_805DB660 == M2C_FIELD(arg0, f32 *, 0xC0)) {
            ((VObj_18_f90cfc *)(arg0))->m77();
        }
        break;
    case 2:
        if (is_current_floor_switch_set((int) ((u16) M2C_FIELD(arg0, s32 *, 0x35C))) == 1) {
            if (lbl_805DB650 != M2C_FIELD(arg0, f32 *, 0xC0)) {
                ((M2C_UNK (*)(void *))advance_wrap_offset__25TOHangceilingCave01NormalFPv)((void *) (arg0));
            }
            if (lbl_805DB664 == M2C_FIELD(arg0, f32 *, 0xC0)) {
                temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
                M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) | lbl_805DB658);
                return;
            }
        } else {
            if ((lbl_805DB668 <= M2C_FIELD(arg0, f32 *, 0xC0)) && (M2C_FIELD(arg0, f32 *, 0xC0) <= M2C_FIELD(arg0, f32 *, 0xC4))) {
                M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB650;
            } else if (lbl_805DB66C <= M2C_FIELD(arg0, f32 *, 0xC0)) {
                M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB654;
            } else if (lbl_805DB670 <= M2C_FIELD(arg0, f32 *, 0xC0)) {
                M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB674;
            } else if (lbl_805DB678 <= M2C_FIELD(arg0, f32 *, 0xC0)) {
                M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB67C;
            } else if (lbl_805DB680 <= M2C_FIELD(arg0, f32 *, 0xC0)) {
                M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB65C;
            } else {
                M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB684;
            }
            ((M2C_UNK (*)(void *, int))fn_801682E4)((void *) (arg0), (int) (1));
        }
        break;
    }
}

void *__dt__27TOHangceilingCave01KeyQuickFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__27TOHangceilingCave01KeyQuick;
        destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TOHangceilingCave01KeyQuick__ct(u8 *arg0, s32 arg1) {
    ((u8 * (*)(void *, s32))TOHangceilingCave01KeyQuick__sub_80168C6C)(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80167C78___vt__27TOHangceilingCave01KeyQuick *)&__vt__27TOHangceilingCave01KeyQuick).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2FF0;
    init_geometry__19TOHangceilingCave01FPv(arg0);
    set_scale__27TOHangceilingCave01KeyQuickFPvf(arg0, lbl_805DB688 + M2C_FIELD(arg0, f32 *, 0x70));
    return arg0;
}

void TOHangceilingCave01Key__vt77(void *arg0) {
    u8 *p;

    M2C_FIELD(arg0, s32 *, 0x24) = lbl_805D59D4[1];
    M2C_FIELD(arg0, void **, 0xF8) = get_bml_motion(lbl_805D59D0, 1);
    M2C_FIELD(arg0, f32 *, 0x354) = lbl_805DB650;
    ((M2C_UNK (*)(void *, int))fn_801682E4)(arg0, 3);
    p = M2C_FIELD(arg0, u8 **, 0xA4);
    M2C_FIELD(p, s32 *, 0x18) &= ~8;
    M2C_FIELD(arg0, f32 *, 0xC0) = lbl_805DB650;
    M2C_FIELD(arg0, f32 *, 0xC8) = lbl_805DB654;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF8), u32 *, 4) - lbl_805DB654;
    ((M2C_UNK (*)(void *))reset_state)(arg0);
}

void TOHangceilingCave01Key__vt78(u8 *arg0) {
    switch (*(s16 *)(arg0 + 0x326)) {
    case 3:
        if (is_current_floor_switch_set((u16)*(s32 *)(arg0 + 0x35C)) == 1 && *(f32 *)(arg0 + 0xC0) <= *(f32 *)(arg0 + 0xC4)) {
            ((M2C_UNK (*)(void *, int))fn_801682E4)(arg0, 2);
        }
        ((M2C_UNK (*)(void *))advance_wrap_offset__25TOHangceilingCave01NormalFPv)(arg0);
        break;
    case 1:
        ((M2C_UNK (*)(void *))advance_wrap_offset__25TOHangceilingCave01NormalFPv)(arg0);
        ((M2C_UNK (*)(void *))fn_80168488)(arg0);
        if (lbl_805DB65C == *(f32 *)(arg0 + 0xC0)) {
            *(s32 *)(*(u8 **)(arg0 + 0xA4) + 0x18) &= ~8;
        } else if (lbl_805DB660 == *(f32 *)(arg0 + 0xC0)) {
            ((VObj_18_f90cfc *)(arg0))->m77();
            clear_current_floor_switch((u16)*(s32 *)(arg0 + 0x35C));
        }
        break;
    case 2:
        ((M2C_UNK (*)(void *))advance_wrap_offset__25TOHangceilingCave01NormalFPv)(arg0);
        if (lbl_805DB664 == *(f32 *)(arg0 + 0xC0)) {
            *(s32 *)(*(u8 **)(arg0 + 0xA4) + 0x18) |= lbl_805DB658;
        } else if (*(f32 *)(arg0 + 0xC0) == *(f32 *)(arg0 + 0xC4)) {
            ((M2C_UNK (*)(void *, int))fn_801682E4)(arg0, 1);
        }
        break;
    }
}

void *__dt__22TOHangceilingCave01KeyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TOHangceilingCave01Key;
        destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TOHangceilingCave01Key__ct(void *arg0) {
    TOHangceilingCave01KeyQuick__sub_80168C6C(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TOHangceilingCave01Key;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2FEC;
    init_geometry__19TOHangceilingCave01FPv(arg0);
    return arg0;
}

void TOHangceilingCave01Normal__vt77(void *arg0) {
    void *temp_r6;
    union { f64 d; u32 i[2]; } cvt;

    s32 *p;
    M2C_FIELD(arg0, void **, 0xF8) = get_bml_motion(lbl_805D59D0, lbl_805D59E4);
    p = lbl_805D59D4;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) *p;
    M2C_FIELD(arg0, f32 *, 0x354) = (f32) (lbl_805DB65C * M2C_FIELD(arg0, f32 *, 0x350));
    ((M2C_UNK (*)(void *, M2C_UNK, s32 *, f32))fn_801682E4)(arg0, 0, p, lbl_805DB65C);
    temp_r6 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6, s32 *, 0x18) | lbl_805DB658);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB650;
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805DB654;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), u32 *, 4) - lbl_805DB654;
}

void TOHangceilingCave01Normal__vt78(Obj_80168010 *arg0) {
    switch (arg0->state) {
    case 0:
        if (lbl_805DB650 < arg0->f354) {
            arg0->f354 = arg0->f354 - lbl_805DB654;
            return;
        }
        ((M2C_UNK (*)(void *, int)) fn_801682E4)(arg0, 1);
        ((M2C_UNK (*)(void *))reset_state)(arg0);
        return;
    case 1:
        ((M2C_UNK (*)(void))advance_wrap_offset__25TOHangceilingCave01NormalFPv)();
        ((M2C_UNK (*)(void *))fn_80168488)(arg0);
        if (lbl_805DB65C == arg0->fC0) {
            M2C_FIELD(arg0->fA4, s32 *, 0x18) &= ~8;
            return;
        }
        if (lbl_805DB660 == arg0->fC0) {
            ((M2C_UNK (*)(void *, int)) fn_801682E4)(arg0, 2);
        }
        return;
    case 2:
        ((M2C_UNK (*)(void))advance_wrap_offset__25TOHangceilingCave01NormalFPv)();
        if (lbl_805DB664 == arg0->fC0) {
            M2C_FIELD(arg0->fA4, s32 *, 0x18) |= lbl_805DB658;
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
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__25TOHangceilingCave01Normal;
        destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TOHangceilingCave01Normal__ct(void *arg0) {
    TOHangceilingCave01KeyQuick__sub_80168C6C(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__25TOHangceilingCave01Normal;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2FE8;
    init_geometry__19TOHangceilingCave01FPv(arg0);
    return arg0;
}

f32 TOHangceilingCave01Normal__sub_801681D0(f32 farg0) {
    Q_801681D0 q = lbl_804417EC;
    return farg0 * q.w[lbl_805D5550];
}

void advance_wrap_offset__25TOHangceilingCave01NormalFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) (M2C_FIELD(arg0, f32 *, 0xC0) + M2C_FIELD(arg0, f32 *, 0xC8));
    if (M2C_FIELD(arg0, f32 *, 0xC4) < M2C_FIELD(arg0, f32 *, 0xC0)) {
        M2C_FIELD(arg0, f32 *, 0xC0) = (f32) (*(f32 *)&lbl_805DB650);
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
    M2C_FIELD(arg0, s32 *, 0x34C) = 0;
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
            o->fish = ((Fish_801682E4 * (*)(s32, s32))get_bml_motion)(lbl_805D59D0, lbl_805D59E4);
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
            if ((get_field_3e4__10TObjPlayerFPv(temp_r3) == get_current_floor()) && (check_actor_body_contact(arg0, temp_r3, lbl_805DB688) != 0U)) {
                Pair_80168488 t;
                t.a = 0;
                t.b = arg0->m79(M2C_FIELD(arg0, f32 *, 0x338));
                hit_80168488(temp_r3, arg0, t);
                obj_setFlags30(temp_r3, 0x400);
                ((M2C_UNK (*)(void *, void *))fn_80168280)(arg0, temp_r3);
            }
        }
        var_r30 += 1;
    } while (var_r30 != 0xC);
}
extern int fold_flush_0;
#pragma pop

}
