#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8003DC34_lbl_80436318 { char value[0xD]; };
typedef char RecoveredGlobal_8003DC34_lbl_80436318_size[sizeof(RecoveredGlobal_8003DC34_lbl_80436318) == 0xD ? 1 : -1];

struct RecoveredGlobal_8003DC34_lbl_804FEE68 { M2C_UNK value; u8 remaining[0x8]; };
typedef char RecoveredGlobal_8003DC34_lbl_804FEE68_size[sizeof(RecoveredGlobal_8003DC34_lbl_804FEE68) == 0xC ? 1 : -1];

struct VBase_18_c99286 { char pad[0x18]; };

struct VObj_18_c99286 : VBase_18_c99286 {
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
    virtual M2C_UNK m80();
};

struct RecoveredGlobal_8003EFF0___vt__12TBoss3Volopt { M2C_UNK value; u8 remaining[0x148]; };

struct RecoveredGlobal_8003EFF0_lbl_804FEE68 { M2C_UNK value; u8 remaining[0x8]; };

struct S_8003EF38 { u8 pad0[0x18]; void *vt; };

extern "C" {
M2C_UNK TObjPlayer__sub_800192DC(void *);
s32 TObjPlayer__sub_800194AC(void *, int, int);
s32 obj_testFlags30(void *, int);
M2C_UNK obj_clearFlags30(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TBoss3Volopt__sub_8003EB34(void *);
void run_task__12TBoss3VoloptFv(u8 *arg0);
u8 * TPhotonMylla__sub_80154CB4(u16);
M2C_UNK *VecCopy__FP3VecPC3Vec(void *, M2C_UNK *);
int TBoss3Volopt__sub_8003EA2C(void*);
M2C_UNK fn_8003F3BC();
M2C_UNK TObjEnemyCustom__sub_800C7860();
int TObjBgmColCtrl__sub_802274B8(void*);
extern RecoveredGlobal_8003DC34_lbl_80436318 lbl_80436318;
extern RecoveredGlobal_8003DC34_lbl_804FEE68 lbl_804FEE68;
extern u16 lbl_805D2718;
void TBoss3Volopt__sub_8003DC34(u8 *arg0);
M2C_UNK *VecCopy__FP3VecPC3Vec(void *, M2C_UNK *);
int TBoss3Volopt__sub_8003EA2C(void*);
int reset_photon_effect__12TBoss3VoloptFPv(void* p);
s32 get_adjusted_angle__11TCameraCtrlFPvi(void *, int);
u16 get_param_offset__11TCameraCtrlFPvi(void *, int);
s32 TObjEnemyCustom__ct(void *, int);
s32 dispatch_by_main_phase__14TBoss4DarkFalzFUs(int);
extern RecoveredGlobal_8003EFF0___vt__12TBoss3Volopt __vt__12TBoss3Volopt;
extern RecoveredGlobal_8003DC34_lbl_804FEE68 lbl_804FEE68;
extern u16 TBoss3Volopt__data_805D2710;
extern s32 lbl_805D2714;
extern s32 lbl_805D2720;
extern s32 lbl_805D4C20;
extern s32 lbl_805D4C44;
extern s32 tl_04;
u8 *TBoss3Volopt__ct(u8 *arg0, s32 arg1);
s32 TBoss3Volopt__sub_8003CB94();
void __dt__15TObjEnemyCustomFv(void *, s32);
void send_entity_set_flags__6TLobbyFPv(void *);
void __dl__7TObjectFPv(void *);
extern u16 lbl_80483770[];
extern RecoveredGlobal_8003EFF0___vt__12TBoss3Volopt __vt__12TBoss3Volopt;
extern u16 TBoss3Volopt__data_805D2710;
extern s32 lbl_805D2714;
extern u16 lbl_805D2718;
extern u16 lbl_805D271A;
extern u16 lbl_805D271C;
extern int lbl_805D4C14;
S_8003EF38 *__dt__12TBoss3VoloptFv(S_8003EF38 *o, s16 flag);
s32 dispatch_shared_handler_a__6TLobbyFPv(s32);
void *TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
void cache_volopt_resource_ptrs(void);
void init_models__20TBoss3VoloptHiraisinFv(void);
void TBoss3VoloptMonitor__sub_80042408(void);
void init_breakup_effect__15TBoss3VoloptP01Fv(void);
void TBoss3Volopt__sub_80047A60(void);
void init_break_model__14TObjVoloptCageFv(void);
void cache_target_values__16TObjVoloptPillarFv(void);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
s32 check_v2_mode__9TObjEneDDFv();
extern u8 lbl_804836A0[];
extern u8 lbl_80483760[];
extern u16 lbl_805D2718;
extern u32 lbl_805D4C10;
extern int lbl_805D4C2C;
extern s32 lbl_805D4C30;
extern s32 lbl_805D4C34;
extern s32 lbl_805D4C38;
extern int lbl_805D4C40;
extern s32 lbl_805D4D48;
extern s32 lbl_805D4D4C;
extern s32 lbl_805D4D50;
void TBoss3Volopt__sub_8003EE10(void);
}

extern "C" {

void TBoss3Volopt__sub_8003F22C(void* p);
void TBoss3Volopt__sub_8003F33C(void* p);
void TBoss3Volopt__sub_8003F384(void* p);
int TBoss3Volopt__sub_8003F398(void);
void bswap_actions__12TBoss3VoloptFPv(void* p);
void bswap_position__12TBoss3VoloptFPv(void* p);
void *create__12TBoss3VoloptFPv(void *arg0);
void finalize_and_send_60__12TBoss3VoloptFPv(void* p);
void free_parts__12TBoss3VoloptFv(void);
s32 get_field_3e0__12TBoss3VoloptFPv(void* p);
void render__12TBoss3VoloptFv(void);
int reset_photon_effect__12TBoss3VoloptFPv(void* p);
void reset_vol_opt_state(void* a0);
void send_6x16__12TBoss3VoloptFPv(void* p);
void send_state__12TBoss3VoloptFPv(void* p);
void send_update_60__12TBoss3VoloptFPv(void* p);
void set_type__12TBoss3VoloptFPv(void* p);
void swap_6x15_fields__12TBoss3VoloptFPv(void* p);
void swap_6x16_fields__12TBoss3VoloptFPv(void* p);
void swap_6x85_fields__12TBoss3VoloptFPv(void* p);
M2C_UNK TBoss3VoloptCore__sub_80040788();
int TBoss3Volopt__sub_8003EA2C(void*);
M2C_UNK TBoss3Volopt__sub_800479D0();
int TLobby__send_and_handle_60(void*);
void TLobby__sub_8001FE7C(void*, int);
int TObjBgmColCtrl__sub_802274B8(void*);
void *__nw__7TObjectFUl(int);
int bswap_16__FPUs(void* a0 = 0);
int bswap_32__FPUl(void*);
M2C_UNK destroy__14TObjVoloptCageFv();
M2C_UNK destroy__15TBoss3VoloptP01Fv();
M2C_UNK destroy__20TBoss3VoloptHiraisinFv();
int read_be16_field2__10TObjPlayerFPv(void* a0 = 0);
M2C_UNK release__19TBoss3VoloptMonitorFv();
int reset_photon_effect__10TObjPlayerFPv(void*);

    extern unsigned char lbl_80436328[];
    extern int lbl_805D4C14;
    extern int lbl_805D4C1C;
    extern int lbl_805D4C24;
    extern int lbl_805D4C2C;

void TBoss3Volopt__sub_8003DC34(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A8) = 1;
    if (TPhotonMylla__sub_80154CB4(lbl_805D2718) != NULL) {
        TObjEnemyCustom__sub_800C7860();
    }
    TBoss3Volopt__sub_8003EA2C((void*)((int) (1)));
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, &lbl_804FEE68.value));
    M2C_FIELD(arg0, s16 *, 0x3F0) = 0;
    M2C_FIELD(arg0, s16 *, 0x3F2) = 0;
    fn_8003F3BC();
    TObjBgmColCtrl__sub_802274B8((void*)((void *) (&lbl_80436318.value)));
    M2C_FIELD(arg0, s32 *, 0x404) = 0;
}

void reset_vol_opt_state(void* a0) {
    *(int*)((char*)a0 + 0x3a8) = 0;
    lbl_805D4C14 = -1;
    TBoss3Volopt__sub_8003EA2C((void*)0);
    *(int*)((char*)a0 + 0x3a4) = 4;
    *(short*)((char*)a0 + 0x3f0) = 0;
    *(short*)((char*)a0 + 0x3f2) = 0;
    *(short*)((char*)a0 + 0x3f4) = 0;
    *(short*)((char*)a0 + 0x3f8) = 0;
    *(short*)((char*)a0 + 0x3fa) = 0;
    lbl_805D4C1C = 0;
    *(int*)((char*)a0 + 0x400) = 1;
    *(short*)((char*)a0 + 0x3fc) = 2;
    lbl_805D4C24 = 0;
    TObjBgmColCtrl__sub_802274B8(lbl_80436328);
    lbl_805D4C2C = 1;
}

void render__12TBoss3VoloptFv(void) {  }

void run_task__12TBoss3VoloptFv(u8 *arg0) {
    if (obj_testFlags30((void *) (arg0), (int) (0x800)) != 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (obj_testFlags30((void *) (arg0), (int) (0x4000)) != 0) {
        if (TObjPlayer__sub_800194AC((void *) (arg0), (int) (4), (int) (-1)) <= 0) {
            TObjPlayer__sub_800192DC((void *) (arg0 + 0x284));
            obj_clearFlags30((void *) (arg0), (int) (0x4000));
        }
    } else {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x374) != (s16) M2C_FIELD(arg0, s16 *, 0x326)) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
                M2C_FIELD(arg0, s32 *, 0x37C) = -1;
                TBoss3Volopt__sub_8003EB34((void *) (arg0));
            }
            M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
            M2C_FIELD(arg0, s32 *, 0x37C) = 0;
        }
        TBoss3Volopt__sub_8003EB34((void *) (arg0));
    }
}

void *create__12TBoss3VoloptFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x408);
    if (o != NULL) {
        o = TBoss3Volopt__ct((u8 *)(o), (s32)(arg0));
    }
    return o;
}

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

void TBoss3Volopt__sub_8003EE10(void) {
    s32 v2;
    void *p;
    v2 = check_v2_mode__9TObjEneDDFv();
    if (v2 != 0) {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = TLobby__sub_80020004(p, 5, lbl_80483760, 0, 0, 0);
        }
        lbl_805D4C10 = (u32)p;
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = TLobby__sub_80020004(p, 5, lbl_804836A0, 0, 0, 0);
        }
        lbl_805D4C10 = (u32)p;
    }
    lbl_805D4C40 = v2;
    init_breakup_effect__15TBoss3VoloptP01Fv();
    cache_volopt_resource_ptrs();
    TBoss3Volopt__sub_80047A60();
    init_models__20TBoss3VoloptHiraisinFv();
    TBoss3VoloptMonitor__sub_80042408();
    lbl_805D4D4C = *(s32 *)(*(u8 **)(*(u8 **)(lbl_805D4C10 + 0x42C) + 0xD8) + 4);
    lbl_805D4D48 = *(s32 *)(*(u8 **)(*(u8 **)(*(u8 **)(lbl_805D4C10 + 0x42C) + 0xD8) + 0x2C) + 4);
    lbl_805D4D50 = *(s32 *)(*(u8 **)(lbl_805D4C10 + 0x42C) + 0xDC);
    cache_target_values__16TObjVoloptPillarFv();
    init_break_model__14TObjVoloptCageFv();
    lbl_805D2718 = 0xFFFF;
    lbl_805D4C2C = 0;
    lbl_805D4C30 = dispatch_shared_handler_a__6TLobbyFPv(0x27);
    lbl_805D4C34 = dispatch_shared_handler_a__6TLobbyFPv(0x28);
    lbl_805D4C38 = dispatch_shared_handler_a__6TLobbyFPv(0x29);
}

S_8003EF38 *__dt__12TBoss3VoloptFv(S_8003EF38 *o, s16 flag) {
    s32 i;
    if (o != 0) {
        o->vt = ((u8 *)&__vt__12TBoss3Volopt);
        if (TBoss3Volopt__sub_8003CB94() != 0) {
            send_entity_set_flags__6TLobbyFPv(o);
        }
        (*(s32 *)&lbl_805D4C14) = 0xFFFF;
        TBoss3Volopt__data_805D2710 = 0xFFFF;
        lbl_805D2714 = 0xFFFF;
        lbl_805D2718 = 0xFFFF;
        lbl_805D271A = 0xFFFF;
        for (i = 0; i < 6; i++) {
            lbl_80483770[i] = 0xFFFF;
        }
        lbl_805D271C = 0xFFFF;
        __dt__15TObjEnemyCustomFv(o, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(o);
        }
    }
    return o;
}

u8 *TBoss3Volopt__ct(u8 *arg0, s32 arg1) {
    TObjEnemyCustom__ct((void *) (arg0), (int) (tl_04));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__12TBoss3Volopt.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2720;
    ((VObj_18_c99286 *)(arg0))->m79(arg1);
    reset_photon_effect__12TBoss3VoloptFPv((void*)((void *) (arg0)));
    TBoss3Volopt__sub_8003EA2C((void*)((int) (0)));
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, &(*(RecoveredGlobal_8003EFF0_lbl_804FEE68 *)&lbl_804FEE68).value));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    TBoss3Volopt__data_805D2710 = get_param_offset__11TCameraCtrlFPvi((void *) (arg0), (int) (0x20));
    lbl_805D2714 = get_adjusted_angle__11TCameraCtrlFPvi((void *) (arg0), (int) (0x20));
    M2C_FIELD(arg0, s32 *, 0x374) = 0;
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
    dispatch_by_main_phase__14TBoss4DarkFalzFUs((int) (0x29U));
    lbl_805D4C20 = 0;
    lbl_805D4C44 = -1;
    ((VObj_18_c99286 *)(arg0))->m80();
    return arg0;
}

int reset_photon_effect__12TBoss3VoloptFPv(void* p) { return reset_photon_effect__10TObjPlayerFPv(p); }
s32 get_field_3e0__12TBoss3VoloptFPv(void* p) { return *(s32*)((char*)p + 0x3e0); }
void swap_6x85_fields__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); { int i; for (i = 0; i < 7; i++) { bswap_16__FPUs((char*)p + 0x6 + i * 2); } } }
void bswap_actions__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xa); bswap_16__FPUs((char*)p + 0xe); }
void bswap_position__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }
void send_state__12TBoss3VoloptFPv(void* p) { bswap_position__12TBoss3VoloptFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8003F22C(void* p) { *(u8*)((char*)p + 0x0) = 23; *(u8*)((char*)p + 0x1) = 5; }
void swap_6x16_fields__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0xa); }
void swap_6x15_fields__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); }
void finalize_and_send_60__12TBoss3VoloptFPv(void* p) { swap_6x15_fields__12TBoss3VoloptFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void set_type__12TBoss3VoloptFPv(void* p) { *(u8*)((char*)p + 0x0) = 21; *(u8*)((char*)p + 0x1) = 3; }
void send_6x16__12TBoss3VoloptFPv(void* p) { swap_6x16_fields__12TBoss3VoloptFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8003F33C(void* p) { *(u8*)((char*)p + 0x0) = 22; *(u8*)((char*)p + 0x1) = 3; }
void send_update_60__12TBoss3VoloptFPv(void* p) { bswap_actions__12TBoss3VoloptFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TBoss3Volopt__sub_8003F384(void* p) { *(u8*)((char*)p + 0x0) = 132; *(u8*)((char*)p + 0x1) = 4; }

    extern int lbl_805D4C40;
int TBoss3Volopt__sub_8003F398(void) {  return lbl_805D4C40; }

}
