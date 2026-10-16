#include "types.h"
#include "pso/misc/TUnk_804ED7D0.h"

struct Base_80328F7C { char pad[0x8]; };
struct VObj_80328F7C : Base_80328F7C {
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
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual s32 m73();
};
struct Base_80329044 { char pad[0x8]; };
struct VObj_80329044 : Base_80329044 {
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
    virtual void m75(s32);
};

struct RecoveredGlobal_80329088_lbl_805430E8 {
    s32 value;
    u8 remaining[0x1BC];
};

struct RecoveredGlobal_80329088_lbl_805432A8 {
    s32 value;
    u8 remaining[0x1BC];
};

struct Base_802A7328_802A7290 { char pad[0x8]; };

struct VObj_802A7328_802A7290 : Base_802A7328_802A7290 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();   virtual void m7();
    virtual void m8();   virtual void m9();   virtual void m10();  virtual void m11();
    virtual void m12();  virtual void m13();  virtual void m14();  virtual void m15();
    virtual void m16();  virtual void m17();  virtual void m18();  virtual void m19();
    virtual void m20();  virtual void m21();  virtual void m22();  virtual void m23();
    virtual void m24();  virtual void m25();  virtual void m26();  virtual void m27();
    virtual void m28();  virtual void m29();  virtual void m30();  virtual void m31();
    virtual void m32();  virtual void m33();  virtual void m34();  virtual void m35();
    virtual void m36();  virtual void m37();  virtual void m38();  virtual void m39();
    virtual void m40();  virtual void m41();  virtual void m42();  virtual void m43();
    virtual void m44();  virtual void m45();  virtual void m46();  virtual void m47();
    virtual void m48();  virtual void m49();  virtual void m50();  virtual void m51();
    virtual void m52();  virtual void m53();  virtual void m54();  virtual void m55();
    virtual void m56();  virtual void m57();  virtual void m58();  virtual void m59();
    virtual void m60();  virtual void m61();  virtual void m62();  virtual void m63();
    virtual void m64();  virtual void m65();  virtual void m66();  virtual void m67();
    virtual void m68();  virtual void m69();  virtual void m70();  virtual void m71();
    virtual void m72();  virtual s32 m73();
};

struct RecoveredGlobal_802A7444_lbl_804DDBD8 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_802A74B8_lbl_804DD9F8 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 is_valid_state__6TLobbyFPvi(void *unused, s32 arg1);
extern RecoveredGlobal_80329088_lbl_805430E8 lbl_805430E8;
extern RecoveredGlobal_80329088_lbl_805432A8 lbl_805432A8;
s32 *get_state_table__6TLobbyFii(s32 arg0, s32 _w1);
int is_valid_player_motion_variant(void* a0);
int TLobby__sub_802A7278(void* a0);
extern RecoveredGlobal_802A7444_lbl_804DDBD8 town_player_motion_clip_index_tables;
int is_valid_player_motion_variant(void* a0 = 0);
int TLobby__sub_802A7278(void* a0 = 0);
s32 player_motion_provider0_get_clip_indices(s32 arg0, s32 arg1, s32 arg2);
extern RecoveredGlobal_802A7444_lbl_804DDBD8 town_player_motion_clip_index_tables;
s32 TLobby__sub_803290DC(void *self, s32 a, s32 b, s32 c);
}

extern "C" {

s32 get_cell_address__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2);
void check_valid_state__6TLobbyFi(s32 arg0);
void set_player_handle_valid__6TLobbyFPv(void *arg0);
s32 is_handle_valid__10TObjPlayerFv();

extern s32 lbl_805D6C80;

s32 get_cell_address__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2) {
    struct VObj_80328F7C *o = (struct VObj_80328F7C *)arg0;
    return lbl_805D6C80 + ((arg2 + (arg1 * o->m73())) << 0xE);
}

s32 is_valid_state__6TLobbyFPvi(void *unused, s32 arg1) {
    switch (arg1) {
    case 0:
    case 3:
        return 0;
    case 1:
    case 2:
    case 4:
    case 5:
        return 1;
    default:
        return 0;
    }
}

void check_valid_state__6TLobbyFi(s32 arg0) {
    is_valid_state__6TLobbyFPvi((void *)((void *)(arg0)), (s32)((s32)(is_handle_valid__10TObjPlayerFv())));
}

void set_player_handle_valid__6TLobbyFPv(void *arg0) {
    struct VObj_80329044 *o = (struct VObj_80329044 *)arg0;
    o->m75(is_handle_valid__10TObjPlayerFv());
}
typedef char RecoveredGlobal_80329088_lbl_805430E8_size[sizeof(RecoveredGlobal_80329088_lbl_805430E8) == 0x1C0 ? 1 : -1];
typedef char RecoveredGlobal_80329088_lbl_805432A8_size[sizeof(RecoveredGlobal_80329088_lbl_805432A8) == 0x1C0 ? 1 : -1];
s32 *get_state_table__6TLobbyFii(s32 arg0, s32 _w1) {
    s32 *var_r3;
    s32 temp_r3;
    temp_r3 = is_valid_state__6TLobbyFPvi((void *)(arg0), (s32)(_w1));
    switch (temp_r3) {
    case 0:
        var_r3 = (s32 *)(&lbl_805430E8.value);
        var_r3 = (s32 *)(&lbl_805430E8.value);
        return &lbl_805430E8.value;
    case 1:
        var_r3 = (s32 *)(&lbl_805432A8.value);
        var_r3 = (s32 *)(&lbl_805432A8.value);
        return &lbl_805432A8.value;
    default:
        var_r3 = (s32 *)((u8 *)(NULL));
        return NULL;
    }
}
typedef char RecoveredGlobal_802A7444_lbl_804DDBD8_size[sizeof(RecoveredGlobal_802A7444_lbl_804DDBD8) == 0x18 ? 1 : -1];

s32 TLobby__sub_803290DC(void *self, s32 a, s32 b, s32 c) {
    return ((s32 ** *)&town_player_motion_clip_index_tables)[a][b][c];
}

s32 player_motion_provider0_get_clip_indices(s32 arg0, s32 arg1, s32 arg2) {
    if (((s32)TLobby__sub_802A7278((void*)((void *) (arg1)))) == 0) {
        return 0;
    }
    if (((s32)is_valid_player_motion_variant((void*)((void *) (arg2)))) != 0) {
        return *(s32 *)((s8 *)(*(s32 *)((s8 *)(&town_player_motion_clip_index_tables.value) + (arg1 * 4))) + (arg2 * 4));
    }
    return 0;
}
extern s32 *lbl_804ED728[];
s32 player_motion_provider0_get_actions(void);
s32 player_motion_provider0_get_actions(void) {
    s32 i = ((s32 (*)(void))is_valid_state__6TLobbyFPvi)();
    if (((s32 (*)(void))TLobby__sub_802A7278)() != 0) {
        return *lbl_804ED728[i];
    }
    return 0;
}
typedef char RecoveredGlobal_802A74B8_lbl_804DD9F8_size[sizeof(RecoveredGlobal_802A74B8_lbl_804DD9F8) == 0x18 ? 1 : -1];

}

#include "types.h"

extern "C" {

int TLobby__sub_803291C8(void);
void free_singleton_805D6C80__6TLobbyFv(void);
s32 update_state_6c84__6TLobbyFi(s32 arg0);
s32 load_action_motion_pairs(s32, s32, s32, s32);
s32 apply_player_flag_2__6TLobbyFv();
s32 apply_state_6c84__6TLobbyFv();
void mem_free(void*);
s32 init_object_flag__6TLobbyFv();
s32 set_flag_1_at_6c84__6TLobbyFv();

int TLobby__sub_803291C8(void) { return 1; }
s32 update_state_6c84__6TLobbyFi(s32 arg0) {
    if (set_flag_1_at_6c84__6TLobbyFv() == 0) {
        init_object_flag__6TLobbyFv();
        load_action_motion_pairs(arg0, 0, 0, 0);
    }
    if (apply_player_flag_2__6TLobbyFv() == 0) {
        apply_state_6c84__6TLobbyFv();
        load_action_motion_pairs(arg0, 1, 1, 0);
    }
    return 1;
}

#define lbl_805D6C80 (*(u32 *)&lbl_805D6C80)

void free_singleton_805D6C80__6TLobbyFv(void) {
    if ((u32) lbl_805D6C80 != 0U) {
        mem_free((void*)lbl_805D6C80);
        lbl_805D6C80 = 0U;
    }
}

}
#undef lbl_805D6C80

#include "types.h"

extern "C" {

void alloc_work_buffer__6TLobbyFv(void);
s32 mem_alloc(s32);

extern s32 lbl_805D6C80;

void alloc_work_buffer__6TLobbyFv(void) {
    lbl_805D6C80 = mem_alloc(0x1C0000);
}

}

#include "types.h"

extern "C" {

void *TLobby__sub_80329310(void *arg0, s16 arg1);
void update_photon_chair__6TLobbyFv(void);
void update_photon_chairs__6TLobbyFv(void);
s32 TLobby__sub_802A7AF8(void *, s32);
s32 load_resources__15TPlyPhotonChairFv();

int clear_flag_at_6c84__6TLobbyFv(void);
s32 free__10TObjPlayerFPv(void *);

int free_static_model__15TPlyPhotonChairFv(void);
int set_photon_chair_flag__6TLobbyFi(int);

void update_photon_chairs__6TLobbyFv(void) { free_static_model__15TPlyPhotonChairFv(); free_singleton_805D6C80__6TLobbyFv(); set_photon_chair_flag__6TLobbyFi(0); clear_flag_at_6c84__6TLobbyFv(); }
void update_photon_chair__6TLobbyFv(void) {
    set_photon_chair_flag__6TLobbyFi(0);
    if (((u32 (*)(void))alloc_work_buffer__6TLobbyFv)() == 0U) {
        set_photon_chair_flag__6TLobbyFi(1);
        return;
    }
    load_resources__15TPlyPhotonChairFv();
}

extern s32 lbl_804ED7D0[];

void *TLobby__sub_80329310(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 8) = lbl_804ED7D0;
        TLobby__sub_802A7AF8(arg0, 0);
        if (arg1 > 0) {
            free__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}

#include "types.h"

extern "C" {

void *init_vtable8__13TUnk_804ED7D0Fv(void *arg0);
void init_player_forward__6TLobbyFv(void);
void TLobby__sub_802A7B50(void *);
s32 init_forward__10TObjPlayerFv(s32 *);

extern s32 lbl_804ED7D0[];

void *TUnk_804ED7D0::init_vtable8() {
    TLobby__sub_802A7B50(this);
    *(s32 **)((s8 *)this + 0x8) = lbl_804ED7D0;
    return this;
}

extern s32 lbl_805D6C84;

void init_player_forward__6TLobbyFv(void) {
    init_forward__10TObjPlayerFv(&lbl_805D6C84);
}

}

__declspec(section ".ctors") static void *const __sinit_TLobby_80328F7C_80329368_cpp_ref = (void *)init_player_forward__6TLobbyFv;

#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

}

extern "C" {

int TLobby__sub_803293F0(void* p);
int TLobby__sub_80329470(void);
#define IVS ((int (*)(void*))is_valid_state__6TLobbyFPvi)
#define CVS ((int (*)(void*))check_valid_state__6TLobbyFi)

int TLobby::is_invalid_state() { return (IVS(this)) == 0; }
int TLobby__sub_803293F0(void* p) { return (CVS((void*)(p))) == 0; }

int TLobby::is_state_valid_flag() {
    s32 arg0 = (s32)this;
    return (u8) (((s32)IVS((void*)(arg0))) == 1);
}

int TLobby::is_check_state_valid() {
    return (u8) (((s32)CVS(this)) == 1);
}

int TLobby__sub_80329470(void) {  return lbl_805D6C80; }

}
