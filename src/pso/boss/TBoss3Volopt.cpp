#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__12TBoss3VoloptFv(void);

void render__12TBoss3VoloptFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8003CAD0
#include "types.h"

extern "C" {

void update_phase__12TBoss3VoloptFv(void);
int TBoss3Volopt__sub_8003CB48(void);
void alloc_idle_event__12TBoss3VoloptFv(void);
s32 dispatch_state__16TBoss3VoloptCtrlFi(s32);
s32 dispatch_by_main_phase__14TBoss4DarkFalzFUs(s32);
s32 TODoorVoShip__sub_801F44BC(s32);
int update_if_active__12TBoss3VoloptFv(void*);
int alloc_event__12TBoss3VoloptFsi(void*, void*);
s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();

void update_phase__12TBoss3VoloptFv(void) {
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x2A);
    if (get_main_phase() == 0xF) {
        dispatch_state__16TBoss3VoloptCtrlFi(0);
        return;
    }
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        dispatch_state__16TBoss3VoloptCtrlFi(5);
        return;
    }
    if (TODoorVoShip__sub_801F44BC(0x2F) != 0) {
        dispatch_state__16TBoss3VoloptCtrlFi(2);
        return;
    }
    dispatch_state__16TBoss3VoloptCtrlFi(1);
}
int TBoss3Volopt__sub_8003CB48(void) { return update_if_active__12TBoss3VoloptFv((void*)(0)); }
void alloc_idle_event__12TBoss3VoloptFv(void) { alloc_event__12TBoss3VoloptFsi((void*)160, (void*)0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003ED78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__12TBoss3VoloptFPv(void *arg0);
void *TBoss3Volopt__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__12TBoss3VoloptFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x408);
    if (o != NULL) {
        o = TBoss3Volopt__ct(o, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003EDC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_parts__12TBoss3VoloptFv(void);
M2C_UNK destroy__20TBoss3VoloptHiraisinFv();
M2C_UNK release__19TBoss3VoloptMonitorFv();
M2C_UNK destroy__15TBoss3VoloptP01Fv();
M2C_UNK destroy__14TObjVoloptCageFv();
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TBoss3VoloptCore__sub_80040788();
M2C_UNK TBoss3Volopt__sub_800479D0();

extern u32 lbl_805D4C10;

void free_parts__12TBoss3VoloptFv(void) {
    destroy__14TObjVoloptCageFv();
    if ((u32) lbl_805D4C10 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D4C10, 1);
        lbl_805D4C10 = 0U;
    }
    destroy__15TBoss3VoloptP01Fv();
    TBoss3VoloptCore__sub_80040788();
    TBoss3Volopt__sub_800479D0();
    destroy__20TBoss3VoloptHiraisinFv();
    release__19TBoss3VoloptMonitorFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003F0E8
#include "types.h"

extern "C" {

int reset_photon_effect__12TBoss3VoloptFPv(void* p);
s32 get_field_3e0__12TBoss3VoloptFPv(void* p);
void swap_6x85_fields__12TBoss3VoloptFPv(void* p);
void bswap_actions__12TBoss3VoloptFPv(void* p);
void bswap_position__12TBoss3VoloptFPv(void* p);
void send_state__12TBoss3VoloptFPv(void* p);
void TBoss3Volopt__sub_8003F22C(void* p);
void swap_6x16_fields__12TBoss3VoloptFPv(void* p);
void swap_6x15_fields__12TBoss3VoloptFPv(void* p);
void finalize_and_send_60__12TBoss3VoloptFPv(void* p);
void set_type__12TBoss3VoloptFPv(void* p);
void send_6x16__12TBoss3VoloptFPv(void* p);
void TBoss3Volopt__sub_8003F33C(void* p);
void send_update_60__12TBoss3VoloptFPv(void* p);
void TBoss3Volopt__sub_8003F384(void* p);
int TBoss3Volopt__sub_8003F398(void);
int TLobby__send_and_handle_60(void*);
int read_be16_field2__10TObjPlayerFPv(void* a0 = 0);
int reset_photon_effect__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void* a0 = 0);
int bswap_32__FPUl(void*);

int reset_photon_effect__12TBoss3VoloptFPv(void* p) { return reset_photon_effect__10TObjPlayerFPv(p); }
s32 get_field_3e0__12TBoss3VoloptFPv(void* p) { return *(s32*)((char*)p + 0x3e0); }
void swap_6x85_fields__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); { int i; for (i = 0; i < 7; i++) { bswap_16__FPUs((char*)p + 0x6 + i * 2); } } }
void bswap_actions__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xa); bswap_16__FPUs((char*)p + 0xe); }
void bswap_position__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }
void send_state__12TBoss3VoloptFPv(void* p) { bswap_position__12TBoss3VoloptFPv(p); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8003F22C(void* p) { *(u8*)((char*)p + 0x0) = 23; *(u8*)((char*)p + 0x1) = 5; }
void swap_6x16_fields__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0xa); }
void swap_6x15_fields__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); }
void finalize_and_send_60__12TBoss3VoloptFPv(void* p) { swap_6x15_fields__12TBoss3VoloptFPv(p); TLobby__send_and_handle_60(p); }
void set_type__12TBoss3VoloptFPv(void* p) { *(u8*)((char*)p + 0x0) = 21; *(u8*)((char*)p + 0x1) = 3; }
void send_6x16__12TBoss3VoloptFPv(void* p) { swap_6x16_fields__12TBoss3VoloptFPv(p); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8003F33C(void* p) { *(u8*)((char*)p + 0x0) = 22; *(u8*)((char*)p + 0x1) = 3; }
void send_update_60__12TBoss3VoloptFPv(void* p) { bswap_actions__12TBoss3VoloptFPv(p); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8003F384(void* p) { *(u8*)((char*)p + 0x0) = 132; *(u8*)((char*)p + 0x1) = 4; }

    extern int lbl_805D4C40;
int TBoss3Volopt__sub_8003F398(void) {  return lbl_805D4C40; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003F458
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 fn_8003F3F8(void *arg0);
u8 TBoss3Volopt__sub_8003F458(void *arg0);
int is_photon_blast_active__11TCameraCtrlFPv(void* p);

u8 TBoss3Volopt__sub_8003F458(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s16 *, 0x326) == 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80040F7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flag_08000000__12TBoss3VoloptFPv(void *arg0);
void set_player_flag_08000000__12TBoss3VoloptFPv(void *arg0);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

void set_player_flag_08000000__12TBoss3VoloptFPv(void *arg0) {
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x08000000);
}

void set_flag_08000000__12TBoss3VoloptFPv(void *arg0) {
    set_indexed_flags(arg0, 0, 0x08000000);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80040FCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss3Volopt__sub_80040FCC(void *arg0);

s32 TBoss3Volopt__sub_80040FCC(void *arg0) {
    return ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), u32 *, 0x18) >> 1U) & 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80044C28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_hit_reaction__12TBoss3VoloptFPvf(void *arg0, f32 farg0);
M2C_UNK check_and_notify__12TBoss3VoloptFv(void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);

s32 obj_testFlags30(void*, M2C_UNK);
extern f32 lbl_805D87B8;

void apply_hit_reaction__12TBoss3VoloptFPvf(void *arg0, f32 farg0) {
    if ((obj_testFlags30(arg0, 0x800) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x20000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xC)) {
        check_and_notify__12TBoss3VoloptFv(arg0);
        M2C_FIELD(arg0, f32 *, 0x508) = (f32) (lbl_805D87B8 + farg0);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xC);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80044EA8
#include "types.h"

extern "C" {

s32 count_dead_parts__12TBoss3VoloptFPv(void *arg0);

s32 count_dead_parts__12TBoss3VoloptFPv(void *arg0) {
    s32 count = 0;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (*(s16 *)((u8 *)arg0 + 1196 + i * 2) <= 0) {
            count++;
        }
    }
    return count;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80045234
#include "types.h"

extern "C" {

void TBoss3Volopt__sub_80045234(void);

void TBoss3Volopt__sub_80045234(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004598C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_cage__12TBoss3VoloptFPvUs(void *arg0, u16 arg1);
M2C_UNK TObjVoloptCage__ct(void *, void *, u16, u16, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
void *__nw__7TObjectFUl(M2C_UNK);

extern u16 TBoss3Volopt__data_805D2710;
extern s32 lbl_805D2714;

void create_cage__12TBoss3VoloptFPvUs(void *arg0, u16 arg1) {
    void *temp_r3;
    M2C_FIELD(arg0, u16 *, 0x338) = arg1;
    M2C_FIELD(arg0, u32 *, 0x2A8) = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x338));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2A8) != 0U) {
        temp_r3 = __nw__7TObjectFUl(0x394);
        if (temp_r3 != 0) {
            TObjVoloptCage__ct(temp_r3, arg0, arg1, TBoss3Volopt__data_805D2710, lbl_805D2714);
        }
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x200000);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80046580
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_and_notify__12TBoss3VoloptFv(void);
u32 TPhotonMylla__sub_80154CB4(u16);
M2C_UNK fn_80048C04();

extern u16 TBoss3Volopt__data_805D2710;

void check_and_notify__12TBoss3VoloptFv(void) {
    if (TPhotonMylla__sub_80154CB4(TBoss3Volopt__data_805D2710) != 0U) {
        fn_80048C04();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80047344
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__12TBoss3VoloptFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_80044498();
f32 TBoss8Dragon__sub_803D64C0(s32);

extern const f32 TBoss3Volopt__data_805D87E4;
extern const f32 lbl_805D8818;

void update_state__12TBoss3VoloptFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x46C) = 6;
        TBoss3Volopt__sub_80044498();
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805D8818 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x46C) * 0x3000));
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x46C) - 1;
        M2C_FIELD(arg0, s32 *, 0x46C) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x380);
            M2C_FIELD(arg0, s32 *, 0x374) = temp_r0_3;
            M2C_FIELD(arg0, s16 *, 0x326) = (s16) temp_r0_3;
            M2C_FIELD(arg0, s32 *, 0x37C) = (s32) M2C_FIELD(arg0, s32 *, 0x470);
        }
        break;
    case -1:
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TBoss3Volopt__data_805D87E4;
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80047448
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800475A0 { char pad[0x18]; };
struct VObj_800475A0 : Base_800475A0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
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
    virtual void m56(); virtual void m57(); virtual void m58();
};
struct BaseA { char pad[0x18]; };
struct VObjA : BaseA {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8(f32, f32);
};
struct BaseB { char pad[0x14]; };
struct VObjB : BaseB {
    virtual M2C_UNK n0();
    virtual M2C_UNK n1();
    virtual M2C_UNK n2();
    virtual M2C_UNK n3();
    virtual M2C_UNK n4();
    virtual M2C_UNK n5();
    virtual M2C_UNK n6();
    virtual M2C_UNK n7();
};

extern "C" {

void set_action_wait__12TBoss3VoloptFPvUs(void *arg0, u16 arg1);
void set_motion__12TBoss3VoloptFPvs(void *arg0, s16 arg1);
void check_and_trigger__12TBoss3VoloptFPv(void *arg0);
void set_action__12TBoss3VoloptFPvs(void *arg0, s16 arg1);
void render__12TBoss3VoloptFPv(u8 *arg0);
M2C_UNK check_and_notify__12TBoss3VoloptFv(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjLight__sub_80134098();
M2C_UNK TObjLight__sub_80134194(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
s32 check_demo_mode__10TObjPlayerFv();
s32 TObjEneEpsilonGuard__sub_800D7B1C(void *, void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjFish__sub_803E46BC(s32);

s32 obj_testFlags30(void *, M2C_UNK);

void set_action_wait__12TBoss3VoloptFPvUs(void *arg0, u16 arg1) {
    if ((obj_testFlags30(arg0, 0x800) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x80000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xA)) {
        check_and_notify__12TBoss3VoloptFv(arg0);
        if ((u16) arg1 != 0xFFFF) {
            M2C_FIELD(arg0, u16 *, 0x338) = arg1;
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xA);
        }
    }
}

s32 obj_testFlags30(void *, M2C_UNK);

void set_motion__12TBoss3VoloptFPvs(void *arg0, s16 arg1) {
    if ((obj_testFlags30(arg0, 0x800) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x10000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 9)) {
        M2C_FIELD(arg0, s16 *, 0x338) = arg1;
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 9);
    }
}

s32 obj_testFlags30(void *, M2C_UNK);

void check_and_trigger__12TBoss3VoloptFPv(void *arg0) {
    if ((obj_testFlags30(arg0, 0x800) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x40000)) {
        check_and_notify__12TBoss3VoloptFv(arg0);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xB);
    }
}

s32 obj_testFlags30(void *, s32);

void set_action__12TBoss3VoloptFPvs(void *arg0, s16 arg1) {
    if ((obj_testFlags30(arg0, 0x800) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x20000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 2)) {
        check_and_notify__12TBoss3VoloptFv(arg0);
        M2C_FIELD(arg0, s16 *, 0x338) = arg1;
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        ((VObj_800475A0 *)arg0)->m58();
    }
}

extern s32 some_id_805c6f74;
extern const f32 lbl_805D881C;
extern const f32 lbl_805D8820;

void render__12TBoss3VoloptFPv(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000) && (((VObjA *)arg0)->m8(lbl_805D881C, lbl_805D8820) != 0)) {
        if (TObjEneEpsilonGuard__sub_800D7B1C(arg0 + 0x490, arg0 + 0x2FC) != 0) {
            ((VObjB *)(arg0 + 0x490))->n6();
        }
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjLight__sub_80134194(arg0);
        toggle_particle_effect__10TObjPlayerFv();
        TObjPlayer__sub_803D9B2C();
        some_id_805c6f74 &= 0xFFFFFBFF;
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            draw__16TObjEneRe7BeruraFPv(arg0);
        }
        TObjPlayer__sub_803D9B78();
        TObjLight__sub_80134098();
        end_effect_render__13TParticleCtrlFv();
        ((VObjB *)(arg0 + 0x490))->n7();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80047DD4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TBoss3Volopt__sub_80047DD4(void *arg0);
void *destroy__12TBoss3VoloptFPvs(void *arg0, s16 arg1);
void TBoss3Volopt__sub_800445A4(void *);
void TBoss3Volopt__sub_800450D0(void *);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void *__nw__7TObjectFUl(int);
void *fn_800480B0(void *, void *, void *);
void TObjPlayer__sub_800D7C58(void *, int);
void queue_destruction__7TObjectFv(void *);

extern void *tl_04;

void *TBoss3Volopt__sub_80047DD4(void *arg0) {
    void *o = __nw__7TObjectFUl(0x510);
    if (o != NULL) {
        o = fn_800480B0(o, tl_04, arg0);
    }
    return o;
}

extern M2C_UNK lbl_80484610[];

void *destroy__12TBoss3VoloptFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80484610;
        TObjEneGibbles__sub_80156720(arg0);
        if (M2C_FIELD(arg0, void **, 0x474) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x474)); }
        if (M2C_FIELD(arg0, void **, 0x478) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x478)); }
        TBoss3Volopt__sub_800450D0(arg0);
        TBoss3Volopt__sub_800445A4(arg0);
        TObjPlayer__sub_800D7C58((s8 *)arg0 + 0x490, -1);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80048180
#include "types.h"

extern "C" {

void update_and_send_60__12TBoss3VoloptFPv(void* p);
void TBoss3Volopt__sub_800481B4(void* p);
void swap_6x18_fields__12TBoss3VoloptFPv(void* p);
void broadcast_state__12TBoss3VoloptFPv(void* p);
void TBoss3Volopt__sub_8004824C(void* p);
int swap_6x85_fields__12TBoss3VoloptFPv(void*);
int TLobby__send_and_handle_60(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void*);

void update_and_send_60__12TBoss3VoloptFPv(void* p) { swap_6x85_fields__12TBoss3VoloptFPv(p); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_800481B4(void* p) { *(u8*)((char*)p + 0x0) = 133; *(u8*)((char*)p + 0x1) = 5; }
void swap_6x18_fields__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); { int i; for (i = 0; i < 4; i++) { bswap_16__FPUs((char*)p + 0x4 + i * 2); } } }
void broadcast_state__12TBoss3VoloptFPv(void* p) { swap_6x18_fields__12TBoss3VoloptFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8004824C(void* p) { *(u8*)((char*)p + 0x0) = 24; *(u8*)((char*)p + 0x1) = 3; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800485C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TBoss3Volopt__sub_800485C8(void);
void *dt__12TBoss3VoloptFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void TBoss3Volopt__sub_800485C8(void) {  }

extern M2C_UNK lbl_80484870[];

void *dt__12TBoss3VoloptFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80484870;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80048624
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *ct__12TBoss3VoloptFPvPvPv(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *, void *);

extern void *tl_05;
extern M2C_UNK lbl_80484870[];

void *ct__12TBoss3VoloptFPvPvPv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0, tl_05);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80484870;
    M2C_FIELD(arg0, void **, 0x1C) = arg1;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80048804
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TBoss3Volopt__sub_80048804(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_80484888[];

void *TBoss3Volopt__sub_80048804(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80484888;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80048988
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TBoss3Volopt__sub_80048988(void *arg0, s16 arg1);
void destroy_task_object__12TBoss3VoloptFPvs(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804848A0[];

void *TBoss3Volopt__sub_80048988(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804848A0;
        destroy_task_object__12TBoss3VoloptFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800489E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy_task_object__12TBoss3VoloptFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804999E8[];

void *destroy_task_object__12TBoss3VoloptFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999E8;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80048A38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_fade_color__12TBoss3VoloptFPvPvPv(void *arg0, void *arg1, void *arg2);
void init_object__12TBoss3VoloptFPvPv(void *, void *);

extern void *tl_fade;
extern const f32 lbl_805D8858;
extern M2C_UNK lbl_804848A0[];
extern u32 lbl_805D4D14;

void *init_fade_color__12TBoss3VoloptFPvPvPv(void *arg0, void *arg1, void *arg2) {
    init_object__12TBoss3VoloptFPvPv(arg0, tl_fade);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804848A0;
    M2C_FIELD(arg0, void **, 0x24) = arg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = lbl_805D8858;
    M2C_FIELD(arg0, u8 *, 0x20) = 255;
    M2C_FIELD(arg0, u8 *, 0x21) = 255;
    M2C_FIELD(arg0, u8 *, 0x22) = 255;
    lbl_805D4D14 = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80048B08
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TBoss3Volopt__sub_80048B08(void *arg0, s16 arg1);
void *init_fade__12TBoss3VoloptFPvPvPv(void *arg0, void *arg1, void *arg2);
void *init_object__12TBoss3VoloptFPvPv(void *arg0, void *);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void destroy_task_object__12TBoss3VoloptFPvs(void *, int);

extern M2C_UNK lbl_804848B8[];

void *TBoss3Volopt__sub_80048B08(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804848B8;
        destroy_task_object__12TBoss3VoloptFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_fade;
extern const f32 lbl_805D8854;
extern M2C_UNK lbl_804848B8[];
extern u32 lbl_805D4D10;

void *init_fade__12TBoss3VoloptFPvPvPv(void *arg0, void *arg1, void *arg2) {
    init_object__12TBoss3VoloptFPvPv((void *)(arg0), (void *)(tl_fade));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804848B8;
    M2C_FIELD(arg0, void **, 0x24) = arg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = lbl_805D8854;
    M2C_FIELD(arg0, u8 *, 0x20) = 255;
    M2C_FIELD(arg0, u8 *, 0x21) = 255;
    M2C_FIELD(arg0, u8 *, 0x22) = 255;
    lbl_805D4D10 = 0;
    return arg0;
}

extern M2C_UNK lbl_804999E8[];

void *init_object__12TBoss3VoloptFPvPv(void *arg0, void *) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999E8;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80049E2C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TBoss3Volopt__sub_80049E2C(void *arg0, s16 arg1);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_80484AFC[];

void *TBoss3Volopt__sub_80049E2C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80484AFC;
        TObjEneGibbles__sub_80156720(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xE0) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xE0));
        }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C74F4
#include "types.h"

extern "C" {

void clear_flag8_all__12TBoss3VoloptFPv(u32 **arg0);

void clear_flag8_all__12TBoss3VoloptFPv(u32 **arg0) {
    while (*arg0 != 0) {
        u32 *p = *arg0++;
        *p &= ~8;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C751C
#include "types.h"

extern "C" {

void set_flag8_list__12TBoss3VoloptFPv(u32 **arg0);

void set_flag8_list__12TBoss3VoloptFPv(u32 **arg0) {
    while (*arg0 != 0) {
        u32 *p = *arg0++;
        *p |= 8;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C7544
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void collect_active_nodes__12TBoss3VoloptFPv(void *arg0);

extern void **lbl_805D5190;
extern s32 lbl_805D5194;

void collect_active_nodes__12TBoss3VoloptFPv(void *arg0) {
    void **temp_r3;
    void *var_r31;

    var_r31 = arg0;
    do {
        if (!(M2C_FIELD(var_r31, s32 *, 0) & 8) && ((u32) M2C_FIELD(var_r31, u32 *, 4) != 0U)) {
            temp_r3 = lbl_805D5190;
            lbl_805D5190 = temp_r3 + 1;
            *temp_r3 = var_r31;
            lbl_805D5194 += 1;
        }
        if ((u32) M2C_FIELD(var_r31, u32 *, 0x2C) != 0U) {
            collect_active_nodes__12TBoss3VoloptFPv(M2C_FIELD(var_r31, void **, 0x2C));
        }
        var_r31 = M2C_FIELD(var_r31, void **, 0x30);
    } while (var_r31 != NULL);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C75BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 query_field_30__12TBoss3VoloptFPvPv(void *arg0, s32 *arg1);
M2C_UNK collect_active_nodes__12TBoss3VoloptFPv();

extern s32 *lbl_805D5190;
extern s32 lbl_805D5194;

s32 query_field_30__12TBoss3VoloptFPvPv(void *arg0, s32 *arg1) {
    s32 temp_r31;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 == NULL) {
        return 0;
    }
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    lbl_805D5190 = arg1;
    lbl_805D5194 = 0;
    collect_active_nodes__12TBoss3VoloptFPv();
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r31;
    *lbl_805D5190 = 0;
    return lbl_805D5194;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D8ACC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_breakup_mdl__12TBoss3VoloptFiiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK TBreakUpMdl__ct(void*, s32, s32, s32, s32, s32, s32);
void* __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_05;

void create_breakup_mdl__12TBoss3VoloptFiiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void* obj = __nw__7TObjectFUl(0x54);
    if (obj != 0) {
        TBreakUpMdl__ct(obj, tl_05, arg0, arg1, arg2, arg3, arg4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F059C
#include "types.h"

extern "C" {

void TBoss3Volopt__sub_800F059C(void);

void TBoss3Volopt__sub_800F059C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FD344
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss3Volopt__sub_800FD344(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4);
M2C_UNK create_font_small_task(s32, s32, s32, int, void *, void *, int);

void TBoss3Volopt__sub_800FD344(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4) {
    create_font_small_task(arg0, arg1, arg2, 0, arg3, arg4, 0xFFFF);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80131700
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 collect_and_count__12TBoss3VoloptFUii(u32 arg0, s32 arg1);
M2C_UNK collect_recursive__23TObjSeabedSuisoBrakableFPv();

extern s32 lbl_805D5520;
extern s32 lbl_805D5524;
extern s32 lbl_805D5528;

s32 collect_and_count__12TBoss3VoloptFUii(u32 arg0, s32 arg1) {
    if (arg0 == 0U) {
        return 0;
    }
    lbl_805D5524 = arg1;
    lbl_805D5520 = 0;
    lbl_805D5528 = 0;
    collect_recursive__23TObjSeabedSuisoBrakableFPv();
    return lbl_805D5528;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016A604
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8016A604 { char pad[0x18]; };
struct VObj_8016A604 : Base_8016A604 {
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
};

extern "C" {

void call_vt21__12TBoss3VoloptFPv(void *arg0);

void call_vt21__12TBoss3VoloptFPv(void *arg0) {
    struct VObj_8016A604 *o = (struct VObj_8016A604 *)arg0;
    o->m21();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80242C48
#include "types.h"

extern "C" {

int is_active__12TBoss3VoloptFPv(void* p);

int is_active__12TBoss3VoloptFPv(void* p) { return *(u8*)((char*)p + 0x0) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80242D74
#include "types.h"

extern "C" {

void update_if_active__12TBoss3VoloptFv(void);
u32 TBoss3Volopt__sub_80242F94();
int reset_state__23TAdSinglePlyChrSelectGCFPv();

void update_if_active__12TBoss3VoloptFv(void) {
    if (TBoss3Volopt__sub_80242F94() != 0U) {
        reset_state__23TAdSinglePlyChrSelectGCFPv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80242DA0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void alloc_event__12TBoss3VoloptFsi(s16 arg0, s32 arg1);
void *TBoss3Volopt__sub_80242F94(s32);
void *TBoss3Volopt__sub_80243010();

void alloc_event__12TBoss3VoloptFsi(s16 arg0, s32 arg1) {
    void *var_r3;

    var_r3 = TBoss3Volopt__sub_80242F94(arg1);
    if ((var_r3 != NULL) || (var_r3 = TBoss3Volopt__sub_80243010(), ((var_r3 == NULL) == 0))) {
        M2C_FIELD(var_r3, u8 *, 0) = 0x99;
        M2C_FIELD(var_r3, s16 *, 0x10) = arg0;
        M2C_FIELD(var_r3, s32 *, 0x14) = arg1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80242DF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void alloc_effect_node__12TBoss3VoloptFUisi(u32 arg0, s16 arg1, s32 arg2);
u8 *TBoss3Volopt__sub_80242F94(s32);
u8 *TBoss3Volopt__sub_80243010();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, u32);

void alloc_effect_node__12TBoss3VoloptFUisi(u32 arg0, s16 arg1, s32 arg2) {
    u8 *var_r31;

    var_r31 = TBoss3Volopt__sub_80242F94(arg2);
    if ((var_r31 != NULL) || (var_r31 = TBoss3Volopt__sub_80243010(), ((var_r31 == NULL) == 0))) {
        M2C_FIELD(var_r31, u8 *, 0) = 0xF9U;
        if (arg0 != 0U) {
            M2C_FIELD(var_r31, u8 *, 0) = (u8) (M2C_FIELD(var_r31, u8 *, 0) | 2);
            VecCopy__FP3VecPC3Vec(var_r31 + 4, arg0);
        }
        M2C_FIELD(var_r31, s16 *, 0x10) = arg1;
        M2C_FIELD(var_r31, s32 *, 0x14) = arg2;
    }
}

}
#endif
#endif
