#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase18 { char pad[0x18]; };

struct VObj18 : VBase18 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77(); };

struct RecoveredGlobal_8019A9B8_lbl_80446184 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A9B8_lbl_804B8F60 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A880_lbl_804B8F70 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8019A880___vt__8TObjTank {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct Base { char pad[0x18]; };

struct VObj : Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Base_80181AE8 { char pad[0x18]; };

struct VObj_80181AE8 : Base_80181AE8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {
extern s32 city_common_model_archive;
extern u32 city_common_texture_list;
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * load_gvm_texture_file(s32);
extern RecoveredGlobal_8019A9B8_lbl_80446184 lbl_80443F04;
extern RecoveredGlobal_8019A9B8_lbl_804B8F60 lbl_804B59EC;
void load_city_common_resources(void);
int is_phase_e__9TObjEneDDFPv(void*);
void run_action_14_if_ready__6TLobbyFPv(void* p);
M2C_UNK get_city_common_model(M2C_UNK);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_object();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
extern u32 city_common_texture_list;
extern const f32 lbl_805DBBE0;
extern const f32 lbl_805DBBE4;
void process_lobby_action_14__6TLobbyFPv(u8 *arg0);
}

extern "C" {

void free_map_resources__6TLobbyFv(void);
M2C_UNK TLobby__sub_8001FE7C(s32, M2C_UNK);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern s32 city_common_model_archive;
extern u32 city_common_texture_list;

void free_map_resources__6TLobbyFv(void) {
    if ((u32) city_common_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)city_common_texture_list);
        safe_free__23TAdSinglePlyChrSelectGCFUi(city_common_texture_list);
        city_common_texture_list = 0U;
    }
    TLobby__sub_8001FE7C(city_common_model_archive, 1);
    city_common_model_archive = 0;
}
typedef char RecoveredGlobal_8019A880_lbl_804B8F70_size[sizeof(RecoveredGlobal_8019A880_lbl_804B8F70) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8019A880___vt__8TObjTank_size[sizeof(RecoveredGlobal_8019A880___vt__8TObjTank) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_80446184_size[sizeof(RecoveredGlobal_8019A9B8_lbl_80446184) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_804B8F60_size[sizeof(RecoveredGlobal_8019A9B8_lbl_804B8F60) == 0x10 ? 1 : -1];
void load_city_common_resources(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lbl_804B59EC.value, 0, 0, 0));
    }
    (*(s32 *)&city_common_model_archive) = var_r0;
    (*(u8 * *)&city_common_texture_list) = load_gvm_texture_file((s32) &lbl_80443F04.value);
}
void run_action_14_if_ready__6TLobbyFPv(void* p) { if (is_phase_e__9TObjEneDDFPv(p) != 0) { process_lobby_action_14__6TLobbyFPv((u8 *)((u8 *)(p))); } }
void process_lobby_action_14__6TLobbyFPv(u8 *arg0) {
    if (((VObj_80181AE8 *)arg0)->m8(lbl_805DBBE0, lbl_805DBBE4) != 0) {
        set_global_param__8TObjFishFi((*(s32 *)&city_common_texture_list));
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        get_city_common_model(0xE);
        draw_ginja_object();
        pop_matrix();
    }
}

}
