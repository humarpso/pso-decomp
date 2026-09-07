#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8034EFDC { char pad[0x18]; };
struct VObj_8034EFDC : Base_8034EFDC {
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
    virtual void m63(s32, void *);
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
    virtual s16 m14();
};

struct RecoveredGlobal_8034F754_lbl_804F0A00 {
    M2C_UNK value;
    u8 remaining[0xF4];
};

extern "C" {
void TObjPlayer__sub_8034F470(s32 arg0, s32 arg1);
int fn_80308244(void);
u32 TLobby__sub_80101AB0(void);
s32 TObjPlayer__sub_8034F4FC(u32 a0 = 0, s32 a1 = 0);
int fn_80308244(void);
void TObjPlayer__sub_8034F470(s32 arg0, s32 arg1);
void * enter_timed_state__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_8034F1AC(u8 *arg0);
void * init_photon_state__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_8034F418(u8 *arg0);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_8034F7B8(s32 arg0);
void TObjPlayer__sub_80120D50(void *, void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
extern M2C_UNK lbl_804F0A00[];
u8 *TObjPlayer__sub_8034F754(u8 *arg0, u8 *arg1, s32 _w2);
}

extern "C" {

void *item_equip_variant_deleting_dtor_8034F104(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_8034F36C(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_8034F6FC(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_8034F948(void *arg0, s16 arg1);
int TObjPlayer__sub_8034F020(void);
void TObjPlayer__sub_8034F8B8(void* p);
void TObjPlayer__sub_8034F900(void* p);
int apply_recoil_forward__10TObjPlayerFPv(void* p);
void clamp_angles__10TObjPlayerFPv(void* p);
void dispatch_by_state__10TObjPlayerFPv(void *arg0);
void handle_turn_input__10TObjPlayerFPv(void *arg0);
void reset_aim_angles__10TObjPlayerFPv(void* p);
void reset_animation_flags__10TObjPlayerFPv(void* p);
void reset_shoot_models__10TObjPlayerFPv(void* p);
int shrink_field1f8__10TObjPlayerFPv(void* p);
void spawn_effect__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, M2C_UNK);
int TObjPlayer__sub_80115BC0(void*, void*, void*);
int TObjPlayer__sub_8011E87C(void*, void*);
int TObjPlayer__sub_80120BBC(void*, void*);
void free_obj_heap__10TObjPlayerFPv(void *);
s32 get_player_list__10TObjPlayerFv();
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_8034F104(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_8034F36C(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_8034F6FC(void *arg0, s16 arg1);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

void spawn_effect__10TObjPlayerFPv(void *arg0) {
    u8 sp8[0x18];
    struct VObj_8034EFDC *o = (struct VObj_8034EFDC *)M2C_FIELD(arg0, void **, 0xF0);
    o->m63(0x30, sp8);
    TObjEneDellBiter__sub_80087350(sp8, 0x1D0);
}

int TObjPlayer__sub_8034F020(void) { return 0; }

void reset_shoot_models__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80120BBC(p, (void*)49); TObjPlayer__sub_8011E87C(p, (void*)0); TObjPlayer__sub_8011E87C(p, (void*)1); }
int apply_recoil_forward__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1f8), (void*)(1820), (void*)(13653)); }
int shrink_field1f8__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1f8), (void*)(-4551), (void*)(0)); }

extern M2C_UNK lbl_804F0810[];

void *item_equip_variant_deleting_dtor_8034F104(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0810;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804F0810[];

void *enter_timed_state__10TObjPlayerFPv(void *arg0, M2C_UNK _w1, void * _w2) {
    TObjPlayer__sub_80120D50((void *)(arg0), (void *)(_w1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0810;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1);
    M2C_FIELD(arg0, u32 *, 0x1F8) = 13653;
    return arg0;
}

extern M2C_UNK lbl_804F0908[];

void *item_equip_variant_deleting_dtor_8034F36C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0908;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804F0908[];
extern M2C_UNK TObjPlayer__sub_8034F204[];

u8 *TObjPlayer__sub_8034F1AC(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)enter_timed_state__10TObjPlayerFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

void *init_photon_state__10TObjPlayerFPv(void *arg0, M2C_UNK _w1, void * _w2) {
    TObjPlayer__sub_80120D50((void *)(arg0), (void *)(_w1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0908;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = TObjPlayer__sub_8034F204;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    return arg0;
}

u8 *TObjPlayer__sub_8034F418(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init_photon_state__10TObjPlayerFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

void TObjPlayer__sub_8034F470(s32 arg0, s32 arg1) {
    u32 temp_r3 = TLobby__sub_80101AB0();
    if (temp_r3 != 0U) {
        TObjPlayer__sub_8034F4FC(temp_r3, arg1);
    }
}

void handle_turn_input__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 2:
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 3:
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x1FC));
        return;
    case 5:
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x200));
        return;
    case 4:
        TObjBoss2Tunnel__sub_803D929C(0, -M2C_FIELD(arg0, s32 *, 0x200));
        return;
    }
}

void clamp_angles__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1f8), (void*)((void*)1820), (void*)((void*)7281)); TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1fc), (void*)((void*)-1820), (void*)((void*)-5461)); TObjPlayer__sub_80115BC0((void*)((char*)p + 0x200), (void*)((void*)1820), (void*)((void*)9102)); }

void reset_aim_angles__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1f8), (void*)((void*)-3640), (void*)((void*)0)); TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1fc), (void*)((void*)2730), (void*)((void*)0)); TObjPlayer__sub_80115BC0((void*)((char*)p + 0x200), (void*)((void*)-1820), (void*)((void*)0)); }

extern M2C_UNK lbl_804F0A00[];

void *item_equip_variant_deleting_dtor_8034F6FC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0A00;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8034F754_lbl_804F0A00_size[sizeof(RecoveredGlobal_8034F754_lbl_804F0A00) == 0xF8 ? 1 : -1];
u8 *TObjPlayer__sub_8034F754(u8 *arg0, u8 *arg1, s32 _w2) {
    TObjPlayer__sub_80120D50((void *)(arg0), (void *)(arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8034F754_lbl_804F0A00 *)&lbl_804F0A00).value;
    set_status_flags__10TObjPlayerFPvUi((void *)(arg0), (int)(0x8000));
    M2C_FIELD(arg0, s32 *, 0x1F8) = -0x1C71;
    M2C_FIELD(arg0, s32 *, 0x1FC) = -0x1555;
    M2C_FIELD(arg0, s32 *, 0x200) = 0x238E;
    return arg0;
}

u8 *TObjPlayer__sub_8034F7B8(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x204));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TObjPlayer__sub_8034F754((u8 *)(temp_r3), (u8 *)(tl_05), (s32)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

void dispatch_by_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 2:
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 8:
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x1FC));
        return;
    }
}

void reset_animation_flags__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80120BBC(p, (void*)49); TObjPlayer__sub_8011E87C(p, (void*)0); TObjPlayer__sub_8011E87C(p, (void*)1); }

void TObjPlayer__sub_8034F8B8(void* p) { TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1f8), (void*)((void*)-8192), (void*)((void*)-30947)); TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1fc), (void*)((void*)-1820), (void*)((void*)-7281)); }

void TObjPlayer__sub_8034F900(void* p) { TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1f8), (void*)((void*)16384), (void*)((void*)0)); TObjPlayer__sub_80115BC0((void*)((char*)p + 0x1fc), (void*)((void*)3640), (void*)((void*)0)); }

extern M2C_UNK lbl_804F0AF8[];

void *item_equip_variant_deleting_dtor_8034F948(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0AF8;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
