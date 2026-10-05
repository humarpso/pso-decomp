#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

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

struct RecoveredGlobal_8031B170_lbl_804E8880
{
  M2C_UNK value;
  u8 remaining[0xCC];
};

struct VBase_14_fa0828 { char pad[0x14]; };
struct VObj_14_fa0828 : VBase_14_fa0828 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual M2C_UNK m3();
};
struct VBase_18_be4a70 { char pad[0x18]; };
struct VObj_18_be4a70 : VBase_18_be4a70 {
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
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual M2C_UNK m85(s16, M2C_UNK);
};

extern "C" {
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjEneDf2Bringer__sub_80099500(void *);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
void run_task__17TObjEneDf2BringerFv(u8 *arg0);
extern const f32 lbl_805D9844;
void TObjEneDf2Bringer__sub_80099AEC(s32 arg0, f32 farg0);
}

extern "C" {

void *TObjEneDf2Bringer__ct(void *arg0, void *arg1, void *arg2);
void TObjEneDf2Bringer__vt26(void);
void TObjEneDf2Bringer__vt61(void* p);
void *create__17TObjEneDf2BringerFPv(void *arg0);
void free_resources__17TObjEneDf2BringerFv(void);
void TLobby__sub_8001FE7C(void*, int);
int transition_enemy_state(void*, void*);
void TObjEneDf2Bringer__sub_800994F8(void *);
void TObjEneDf2Bringer__sub_80099800(u8 *);
void TObjEneDf2Bringer__vt59(void);
M2C_UNK TObjEneMe1CanadinLeader__sub_8009A7A0();
void __construct_array(void *, void *, void *, int, int);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
void destroy_buffer_pair(void*, int);
void init_object__9TObjEneDDFPv(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);

extern "C" u8 lbl_80439F70[];
extern "C" u8 lbl_80439F84[];
extern "C" u8 lbl_80439F9C[];
extern "C" u8 lbl_80439FB4[];
extern "C" u8 lbl_80439FD0[];
extern "C" u8 lbl_80439FE8[];
extern "C" u8 lbl_8043A000[];
extern "C" u8 lbl_8043A018[];
extern "C" u8 lbl_8043A030[];
extern "C" u8 lbl_8043A048[];
extern "C" u8 lbl_8043A060[];
extern "C" u8 lbl_8043A078[];
extern "C" u8 lbl_8043A090[];
extern void *lbl_8048FAB0[2];
extern void *lbl_8048FAB8[12];
void *lbl_8048FA10[7] = {
    (void *)0x43610000, (void *)0x0, (void *)0x600, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_8048FA2C[33] = {
    (void *)0x0, (void *)0x41a00000, (void *)0x41000000, (void *)0x40e00000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x40400000, (void *)0x0,
    (void *)0x0, (void *)0x9d03, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x40400000, (void *)0x0, (void *)0x0,
    (void *)0x9d03, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0,
};
__declspec(section ".data") void *lbl_8048FAB0[2] = {
    (void *)&lbl_80439F70, (void *)0x0,
};
void *lbl_8048FAB8[12] = {
    (void *)&lbl_80439F84, (void *)&lbl_80439F9C, (void *)&lbl_80439FB4, (void *)&lbl_80439FD0,
    (void *)&lbl_80439FE8, (void *)&lbl_8043A000, (void *)&lbl_8043A018, (void *)&lbl_8043A030,
    (void *)&lbl_8043A048, (void *)&lbl_8043A060, (void *)&lbl_8043A078, (void *)0x0,
};
void *lbl_8048FAE8[4] = {
    (void *)&lbl_8043A090, (void *)&lbl_8048FAB0, (void *)&lbl_8048FAB8, (void *)0x1000b,
};
void *lbl_8048FAF8[44] = {
    (void *)0x10000, (void *)0x9, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x10000, (void *)0xa, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0x7, (void *)0x3f800000, (void *)0x0,
    (void *)0x30000, (void *)0x4, (void *)0x3f19999a, (void *)0x0,
    (void *)0x30000, (void *)0x6, (void *)0x3f19999a, (void *)0x0,
    (void *)0x30000, (void *)0x0, (void *)0x3f19999a, (void *)0x0,
    (void *)0x30000, (void *)0x2, (void *)0x3f333333, (void *)0x0,
    (void *)0x30000, (void *)0x5, (void *)0x3f19999a, (void *)0x0,
    (void *)0x10000, (void *)0x1, (void *)0x3f19999a, (void *)0x0,
    (void *)0x30000, (void *)0x8, (void *)0x3ecccccd, (void *)0x0,
    (void *)0x30000, (void *)0x3, (void *)0x3f19999a, (void *)0x0,
};
#define lbl_8048FAF8 (*(RecoveredGlobal_8031B170_lbl_804E8880 *)lbl_8048FAF8)

void TObjEneDf2Bringer__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 10) { transition_enemy_state(p, (void*)10); } }
void TObjEneDf2Bringer__vt26(void) {  }

extern M2C_UNK __vt__17TObjEneDf2Bringer[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern void *lbl_805D29A0;

void run_task__17TObjEneDf2BringerFv(u8 *arg0) {
    s32 temp_r0;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m103();
        return;
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        ((VObj_18 *)(arg0))->m83();
        M2C_FIELD(arg0, s32 *, 0x4A8) = (s32) (M2C_FIELD(arg0, s32 *, 0x4A8) + 0xC);
        M2C_FIELD(arg0, s32 *, 0x4A8) = (s32) (u8) M2C_FIELD(arg0, s32 *, 0x4A8);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x494);
        if (temp_r0 <= 2) {
            M2C_FIELD(arg0, s32 *, 0x488) = 1;
        } else if (temp_r0 <= 4) {
            M2C_FIELD(arg0, s32 *, 0x488) = 5;
        } else if (temp_r0 <= 5) {
            M2C_FIELD(arg0, s32 *, 0x488) = 6;
        }
    }
    TObjEneDf2Bringer__sub_80099500((void *) (arg0));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18 *)(arg0))->m98();
}

struct Vec_80099800 { f32 x, y, z; };
struct Slot_80099800 { u8 pad[0x1C]; };
struct Tbl_80099800 { u8 pad0[0x1C]; u8 model[0x2C]; u8 sub[0xBC - 0x2C]; u8 padE8[0x10]; };

void VecCopy__FP3VecPC3Vec(void *, void *);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void set_field_dc__10TObjPlayerFPvi(void *, s32);
void set_field_d8__10TObjPlayerFPvi(void *, void *);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void *init__17TObjEneDf2BringerFPviii(void *a0, int a1, int a2, int a3);
void enemy_init_validate_period(void *, s32);
void enemy_init_acquire_period(void *, s32);
s32 reset_hp__9TObjEneDDFPv(void *, int, int, int);
void initialize_enemy_state__9TObjEneDDFPv(void *, s32);
void set_state_8__9TObjEneDDFPv(void *);
void init_model__9TObjEneDDFPv(void *, void *, s32);
void init_position_vectors__9TObjEneDDFPv(void *);
void *init_instance__16TObjEneDellBiterFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void *TBoss8Dragon__sub_800BC5EC(void *, s32);
void activate_and_dispatch__10TObjPlayerFPv(void *);
s32 create__12TObjEneSaverFPvPv(s32, s32);
void set_animation__10TObjPlayerFPvs(void *, s16);
extern s32 lbl_805D4FA8;
extern s32 lbl_805D4FAC;
extern s32 lbl_805D4FB0;
extern u32 TObjEneDf2Bringer__data_805D4FB8;
extern const f32 TObjEneDf2Bringer__data_805D97E0;
extern const f32 lbl_805D9840;
struct Arr_80099800 { u8 pad[0x3E0]; Slot_80099800 slot[4]; Vec_80099800 v[4]; };

void TObjEneDf2Bringer__sub_80099800(u8 *arg0) {
    s32 i;
    void *p;

    init_position_vectors__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x34) = M2C_FIELD(M2C_FIELD(TObjEneDf2Bringer__data_805D4FB8, u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = M2C_FIELD(M2C_FIELD(TObjEneDf2Bringer__data_805D4FB8, u8 **, 0x42C), s32 *, 0xC);
    init_model__9TObjEneDDFPv(arg0, lbl_8048FA2C, 1);
    set_field_d8__10TObjPlayerFPvi(arg0, &lbl_8048FAF8);
    set_field_dc__10TObjPlayerFPvi(arg0, M2C_FIELD(TObjEneDf2Bringer__data_805D4FB8, s32 *, 0x430));
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    reset_hp__9TObjEneDDFPv(arg0, lbl_805D4FA8, lbl_805D4FAC, lbl_805D4FB0);
    set_state_8__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, void **, 0x350) = lbl_8048FA10;
    initialize_enemy_state__9TObjEneDDFPv(arg0, 0x24);
    M2C_FIELD(arg0, f32 *, 0x37C) = lbl_805D9840;
    enemy_init_acquire_period(arg0, 0x1E);
    enemy_init_validate_period(arg0, 0x1E);
    M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C0) |= 1;
    ((VObj_14_fa0828 *)(arg0 + 0x3C4))->m3();
    for (i = 0; i < 4; i++) {
        activate_and_dispatch__10TObjPlayerFPv(&((Arr_80099800 *)arg0)->slot[i]);
    }
    for (i = 0; i < 4; i++) {
        VecCopy__FP3VecPC3Vec(&((Arr_80099800 *)arg0)->v[i], arg0 + 0x38);
    }
    M2C_FIELD(arg0, s32 *, 0x480) = 0;
    M2C_FIELD(arg0, s32 *, 0x484) = 0;
    M2C_FIELD(arg0, s32 *, 0x488) = 1;
    M2C_FIELD(arg0, s32 *, 0x494) = 0;
    M2C_FIELD(arg0, s32 *, 0x48C) = 0;
    M2C_FIELD(arg0, s32 *, 0x490) = 0;
    p = __nw__7TObjectFUl(0xB0);
    if (p != NULL) {
        p = init_instance__16TObjEneDellBiterFPvPvPvPvPv(p, arg0, arg0, (u8 *)lbl_8048FA2C + 0x2C, (void *)2);
    }
    M2C_FIELD(arg0, void **, 0x498) = p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    if (p != NULL) {
        p = TBoss8Dragon__sub_800BC5EC(p, 8);
    }
    M2C_FIELD(arg0, void **, 0x49C) = p;
    p = __nw__7TObjectFUl(0xD4);
    if (p != NULL) {
        p = init__17TObjEneDf2BringerFPviii(p, (int)arg0, (int)arg0, M2C_FIELD(arg0, s32 *, 0x49C));
    }
    M2C_FIELD(arg0, void **, 0x4A0) = p;
    M2C_FIELD(arg0, s32 *, 0x4A4) = create__12TObjEneSaverFPvPv(0xFF5050FF, 0x80000080);
    M2C_FIELD(arg0, s32 *, 0x4A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x4AC) = 0;
    M2C_FIELD(arg0, s32 *, 0x4B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x4B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4B8) = 0;
    M2C_FIELD(arg0, f32 *, 0x4BC) = TObjEneDf2Bringer__data_805D97E0;
    M2C_FIELD(arg0, f32 *, 0x4C0) = TObjEneDf2Bringer__data_805D97E0;
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s16 *, 0x326) = 1;
    ((VObj_18_be4a70 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 4);
}

void *TObjEneDf2Bringer__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneDf2Bringer;
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 964));
    __construct_array((void *)((char *)arg0 + 992), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D29A0;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    TObjEneDf2Bringer__sub_800994F8(arg0);
    TObjEneDf2Bringer__sub_80099800((u8 *)arg0);
    return arg0;
}

extern u32 TObjEneDf2Bringer__data_805D4FB8;
extern u32 TObjEneDf2Bringer__data_805D4FC8;
extern u32 TObjEneDf2Bringer__data_805D4FCC;

typedef struct RecoveredGlobal_8031B170_lbl_804E8880 RecoveredGlobal_8031B170_lbl_804E8880;
typedef char RecoveredGlobal_8031B170_lbl_804E8880_size[((sizeof(RecoveredGlobal_8031B170_lbl_804E8880)) == 0xD0) ? (1) : (-1)];
void TObjEneDf2Bringer__sub_80099AEC(s32 arg0, f32 farg0) {
  u8 *new_var;
  f32 var_f1;
  var_f1 = farg0;
  if (var_f1 < lbl_805D9844)
  {
    var_f1 = lbl_805D9844;
  }
  new_var = (u8 *) (&lbl_8048FAF8.value);
  new_var = new_var + (arg0 * 0x10);
  *((f32 *) (((s8 *) new_var) + 8)) = var_f1;
}

void free_resources__17TObjEneDf2BringerFv(void) {
    TObjEneMe1CanadinLeader__sub_8009A7A0();
    if ((u32) TObjEneDf2Bringer__data_805D4FCC != 0U) {
        destroy_buffer_pair((void*)TObjEneDf2Bringer__data_805D4FCC, 1);
        TObjEneDf2Bringer__data_805D4FCC = 0U;
    }
    if ((u32) TObjEneDf2Bringer__data_805D4FC8 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)TObjEneDf2Bringer__data_805D4FC8, 1);
        TObjEneDf2Bringer__data_805D4FC8 = 0U;
    }
    if ((u32) TObjEneDf2Bringer__data_805D4FB8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneDf2Bringer__data_805D4FB8, 1);
        TObjEneDf2Bringer__data_805D4FB8 = 0U;
    }
}

extern void *tl_04;

void *create__17TObjEneDf2BringerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4C8);
    if (o != NULL) {
        o = TObjEneDf2Bringer__ct((void *)(o), (void *)(tl_04), (void *)(arg0));
    }
    return o;
}

}
