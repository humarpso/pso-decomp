#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_800F0054 { u8 pad[0x3E4]; u16 handles[2]; };

typedef struct { f32 x, y, z; } Vec_800F0464;
struct Params_800F0464 { s32 a, b, c, d; };

struct Map_800F06B4 { s32 base; s32 start; };

struct VBase_18_6eb1ad { char pad[0x18]; };

struct VObj_18_6eb1ad : VBase_18_6eb1ad {
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
    virtual void m79();
    virtual void m80();
    virtual s32 m81();
    virtual void m82();
    virtual M2C_UNK m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual M2C_UNK m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual M2C_UNK m103();
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
M2C_UNK TObjPlayer__sub_800A05B8(void *, int);
M2C_UNK __dt__9TObjEneDDFv(void *, int);
void *TPhotonMylla__sub_80154CB4(u16);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, u32, u32);
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern M2C_UNK __vt__18TObjEneRe4Sorcerer[];
Obj_800F0054 *__dt__18TObjEneRe4SorcererFv(Obj_800F0054 *arg0, s16 arg1);
s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 check_v2_mode__9TObjEneDDFv();
u32 TObjEneDD__sub_800BB940(void *, void *);
u32 TObjEneDD__sub_800BB9AC(void *);
void TObjEneRe4Bit__sub_800EDAB4();
u8 *alloc_tables__6TLobbyFPvii(void *, s32, s32);
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
extern Params_800F0464 lbl_8043D3F8;
extern u8 lbl_8043D418[];
extern f32 lbl_80496EFC[];
extern u8 lbl_80496F58[];
extern Vec_800F0464 lbl_80501070;
extern s32 lbl_805D52D0;
extern s32 lbl_805D52D4;
extern s32 lbl_805D52D8;
extern s32 lbl_805D52DC;
extern u32 lbl_805D52E0;
extern s32 TObjEneRe4Sorcerer__data_805D52E4;
extern s32 TObjEneRe4Sorcerer__data_805D52E8;
extern f32 TObjEneRe4Sorcerer__data_805D52EC;
extern s32 lbl_805D52F0;
extern u32 TObjEneRe4Sorcerer__data_805D52F4;
extern const f32 TObjEneRe4Sorcerer__data_805DA78C;
extern const f32 TObjEneRe4Sorcerer__data_805DA790;
void TObjEneRe4Sorcerer__sub_800F0464(void);
s32 get_instance__6TLobbyFv();
s32 get_global_state__14TOKeyMachine01Fv();
s32 TBoss3Volopt__sub_800F05A0(s32 arg0);
s32 get_instance__6TLobbyFv();
s32 get_global_state__14TOKeyMachine01Fv();
extern Map_800F06B4 lbl_804971C0[];
extern Map_800F06B4 lbl_80497438[];
s32 TObjPlayer__sub_800F06B4(s32 arg0, s32 arg1);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK fn_800B98C0(void *);
s32 TObjEneDD__sub_800BA804(int);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
M2C_UNK set_flag3cc_bit2000__18TObjEneRe4SorcererFPv(void *);
M2C_UNK calc_orb_positions__18TObjEneRe4SorcererFPv(void *);
M2C_UNK update_collision_center__18TObjEneRe4SorcererFPv(void *);
void *TPhotonMylla__sub_80154CB4(u16);
void run_task__18TObjEneRe4SorcererFv(u8 *arg0);
}

extern "C" {

void TBoss3Volopt__sub_800F059C(void);
void *TObjEneRe4Sorcerer__ct(void *arg0, void *arg1, void *arg2);
void TObjEneRe4Sorcerer__vt26(void);
void TObjEneRe4Sorcerer__vt61(void* p);
void *create__18TObjEneRe4SorcererFPv(void *arg0);
void free_bits__18TObjEneRe4SorcererFv(void);
void TLobby__sub_8001FE7C(void*, int);
int TObjEneDD__sub_800BBA18(void*, void*);
M2C_UNK TObjEneRe4Bit__sub_800EDAB0();
void TObjEneRe4Sorcerer__sub_800EFE30(void *);
void TObjEneRe4Sorcerer__sub_800F0118(void *);
void TObjEneRe4Sorcerer__vt59(void);
void TObjPlayer__sub_8004433C(void *);
void __construct_array(void *, void *, void *, int, int);
void *__nw__7TObjectFUl(int);
void destroy_buffer_pair(void*, int);
void init_object__9TObjEneDDFPv(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);

void TObjEneRe4Sorcerer__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 9) { TObjEneDD__sub_800BBA18(p, (void*)9); } }
void TObjEneRe4Sorcerer__vt26(void) {  }

extern M2C_UNK __vt__18TObjEneRe4Sorcerer[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern void *lbl_805D2AF0;

void run_task__18TObjEneRe4SorcererFv(u8 *arg0) {
    s32 i;
    void *p;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18_6eb1ad *)(arg0))->m103();
        return;
    }
    if (((VObj_18_6eb1ad *)(arg0))->m81() != 4) {
        if (TObjEneDD__sub_800BA804(M2C_FIELD(arg0, u16 *, 0x38C)) != 0 && TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x38C)) == NULL) {
            fn_800B98C0(arg0);
        }
        ((VObj_18_6eb1ad *)(arg0))->m83();
        calc_orb_positions__18TObjEneRe4SorcererFPv(arg0);
        M2C_FIELD(arg0, s16 *, 0x3C0) += 5;
        M2C_FIELD(arg0, s16 *, 0x3C0) = (u8) M2C_FIELD(arg0, s16 *, 0x3C0);
        M2C_FIELD(arg0, f32 *, 0x3C4) += 0.01f;
        if (M2C_FIELD(arg0, f32 *, 0x3C4) >= 1.0f) {
            M2C_FIELD(arg0, f32 *, 0x3C4) -= 1.0f;
        }
    } else {
        for (i = 0; i < 2; i++) {
            if ((p = TPhotonMylla__sub_80154CB4(((Obj_800F0054 *)arg0)->handles[i])) != NULL) {
                set_flag3cc_bit2000__18TObjEneRe4SorcererFPv(p);
            }
        }
    }
    update_collision_center__18TObjEneRe4SorcererFPv(arg0);
    set_player_state_default__12TBoss8DragonFPv(arg0);
    ((VObj_18_6eb1ad *)(arg0))->m98();
}

Obj_800F0054 *__dt__18TObjEneRe4SorcererFv(Obj_800F0054 *arg0, s16 arg1) {
    s32 i;
    void *p;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjEneRe4Sorcerer;
        for (i = 0; i < 2; i++) {
            if ((p = TPhotonMylla__sub_80154CB4(arg0->handles[i])) != NULL) {
                queue_destruction__7TObjectFv(p);
            }
            arg0->handles[i] = 0xFFFF;
        }
        TObjEneGibbles__sub_80156720(arg0);
        __destroy_arr((u8 *) arg0 + 0x474, TObjPlayer__sub_800D7C58, 0x1C, 4);
        TObjPlayer__sub_800A05B8((u8 *) arg0 + 0x3FC, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TObjEneRe4Sorcerer__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjEneRe4Sorcerer;
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 1020));
    TObjPlayer__sub_8004433C((void *)((char *)arg0 + 1048));
    __construct_array((void *)((char *)arg0 + 1140), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2AF0;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    TObjEneRe4Sorcerer__sub_800EFE30(arg0);
    TObjEneRe4Sorcerer__sub_800F0118(arg0);
    return arg0;
}

extern u32 lbl_805D52E0;
extern u32 TObjEneRe4Sorcerer__data_805D52F4;

void free_bits__18TObjEneRe4SorcererFv(void) {
    if ((u32) TObjEneRe4Sorcerer__data_805D52F4 != 0U) {
        destroy_buffer_pair((void*)TObjEneRe4Sorcerer__data_805D52F4, 1);
        TObjEneRe4Sorcerer__data_805D52F4 = 0U;
    }
    TObjEneRe4Bit__sub_800EDAB0();
    if ((u32) lbl_805D52E0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D52E0, 1);
        lbl_805D52E0 = 0U;
    }
}

extern void *tl_04;

void *create__18TObjEneRe4SorcererFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4F0);
    if (o != NULL) {
        o = TObjEneRe4Sorcerer__ct((void *)(o), (void *)(tl_04), (void *)(arg0));
    }
    return o;
}

void TObjEneRe4Sorcerer__sub_800F0464(void) {
    u32 r;
    lbl_80501070.x = TObjEneRe4Sorcerer__data_805DA790;
    lbl_80501070.y = TObjEneRe4Sorcerer__data_805DA790;
    lbl_80501070.z = TObjEneRe4Sorcerer__data_805DA790;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        lbl_805D52E0 = TObjEneDD__sub_800BB940(lbl_80496F58, lbl_8043D418);
    } else {
        lbl_805D52E0 = TObjEneDD__sub_800BB9AC(lbl_80496F58);
    }
    lbl_805D52D0 = register_boss__6TLobbyFPv(0xA);
    lbl_805D52D4 = dispatch_shared_handler_b__6TLobbyFPv(0xA);
    lbl_805D52D8 = register_object__6TLobbyFPv(0xA);
    lbl_805D52DC = dispatch_shared_handler_a__6TLobbyFPv(0xA);
    TObjEneRe4Sorcerer__data_805D52E4 = 0;
    TObjEneRe4Sorcerer__data_805D52E8 = 0;
    TObjEneRe4Sorcerer__data_805D52EC = TObjEneRe4Sorcerer__data_805DA790;
    lbl_805D52F0 = 0;
    TObjEneRe4Bit__sub_800EDAB4();
    r = (u32) alloc__23TAdSinglePlyChrSelectGCFPv(0x14);
    if (r != 0) {
        r = (u32) alloc_tables__6TLobbyFPvii((void *) r, M2C_FIELD(M2C_FIELD(lbl_805D52E0, u8 **, 0x42C), s32 *, 8), 2);
    }
    TObjEneRe4Sorcerer__data_805D52F4 = r;
    Params_800F0464 p = lbl_8043D3F8;
    p.a = M2C_FIELD(lbl_805D52E0, s32 *, 0x430);
    spawn_npc_enemy__6TLobbyFsiiiff(0x2A, M2C_FIELD(M2C_FIELD(lbl_805D52E0, u8 **, 0x42C), s32 *, 8), M2C_FIELD(M2C_FIELD(lbl_805D52E0, u8 **, 0x42C), s32 *, 0xC), &p, lbl_80496EFC[3], TObjEneRe4Sorcerer__data_805DA78C);
}

void TBoss3Volopt__sub_800F059C(void) {  }
s32 TBoss3Volopt__sub_800F05A0(s32 arg0) {
    s32 masked;
    s32 result;
    s32 state;
    state = get_global_state__14TOKeyMachine01Fv();
    if (get_instance__6TLobbyFv() != 0) {
        if (state != 0x13 && state != 0x14 && state != 0x15 && state != 0x16 && state != 0x22 && state != 0x23) {
            return arg0;
        }
    } else if (state != 0x10 && state != 0x11) {
        return arg0;
    }
    masked = arg0 & 0x8FFFFF00;
    if (get_instance__6TLobbyFv() != 0) {
        if (state == 0x13 || state == 0x14) {
            result = 0x3AB42;
        } else if (state == 0x15 || state == 0x16) {
            result = 0x4003AB3D;
        } else if (state == 0x22) {
            result = 0x4003B22A;
        } else if (state == 0x23) {
            result = 0x4003A359;
        }
    } else {
        result = 0x30043;
        result |= masked;
    }
    return result;
}
s32 TObjPlayer__sub_800F06B4(s32 arg0, s32 arg1) {
    s32 st;
    s32 base;
    s32 start;
    st = get_global_state__14TOKeyMachine01Fv();
    if (get_instance__6TLobbyFv() != 0) {
        if (st != 0x13 && st != 0x14 && st != 0x15 && st != 0x16 && st != 0x22 && st != 0x23) {
            return arg0;
        }
    } else {
        if (st != 0x10 && st != 0x11) {
            return arg0;
        }
    }
    if ((u32) arg0 == 0x4003B241U) {
        return 0x4003B23E;
    }
    if (((u32) (arg0 & 0xBFFF00FF) >> 16 << 16) != 0x30000) {
        return arg0;
    }
    if (get_instance__6TLobbyFv() != 0) {
        base = lbl_80497438[arg1].base;
    } else {
        base = lbl_804971C0[arg1].base;
    }
    if (base < 0) {
        return arg0;
    }
    if (get_instance__6TLobbyFv() != 0) {
        start = lbl_80497438[arg1].start;
    } else {
        start = lbl_804971C0[arg1].start;
    }
    {
        s32 r = base + (arg0 - start);
        return r | (arg0 & 0x8FFFFF00);
    }
}

}
