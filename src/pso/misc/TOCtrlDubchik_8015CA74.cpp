#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_65b835 { char pad[0x18]; };

struct VObj_18_65b835 : VBase_18_65b835 {
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
    virtual M2C_UNK m77(s32 *);
};

struct RecoveredGlobal_8015D314_lbl_804B0A10 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8015D314_lbl_804B0A10_size[sizeof(RecoveredGlobal_8015D314_lbl_804B0A10) == 0x10 ? 1 : -1];

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TLobby__sub_800F6510(void *, void *);
M2C_UNK TOCtrlDubchik__sub_8015CA74(void *);
s32 TLobby__sub_8002AFD4(void *, void *, int);
s32 set_flag8__6TLobbyFPv(void *);
void TOCtrlDubchik__sub_8015CB4C(u8 *arg0);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8015D314_lbl_804B0A10 lbl_804B0A10;
extern u32 TOCtrlDubchik__data_805D58F0;
void TOCtrlDubchik__sub_8015D314(void);
M2C_UNK TObjPlayer__sub_80011734(void *, void *, f32);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, s32);
void set_indexed_flags(void *, s32, s32);
f32 TBoss8Dragon__sub_803D64C0(s32);
extern const f32 TOCtrlDubchik__data_805DB3AC;
extern const f32 TOCtrlDubchik__data_805DB3B0;
extern const f32 TOCtrlDubchik__data_805DB3B4;
extern const f32 TOCtrlDubchik__data_805DB3B8;
void TOCtrlDubchik__sub_8015CCF4(u8 *arg0);
s32 try_start_action__10TObjPlayerFPvii(void *, void *, void *);
s32 TOCtrlDubchik__vt24(u8 *arg0, s32 arg1, s32 arg2);
s32 TObjPlayer__sub_800162E0(void *, void *, void *, f32);
s32 TOCtrlDubchik__vt25(u8 *arg0, s32 arg1, s32 arg2, f32 farg0);
}

extern "C" {

s32 TOCtrlDubchik__vt18(void *arg0);
void TOCtrlDubchik__vt23(void);
void *__dt__13TOCtrlDubchikFv(void *arg0, s16 arg1);
void *create__13TOCtrlDubchikFPv(void *arg0);
void destroy_instance__13TOCtrlDubchikFv(void);
void update_spin__13TOCtrlDubchikFPv(u8 *arg0);
void TLobby__sub_8001FE7C(void*, int);
void *TOCtrlDubchik__ct(void *, void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80011734(void *, void *, f32);
s32 TObjPlayer__sub_80016454();
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__9TObjEnemyFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);

extern const f64 TOCtrlDubchik__data_80440990;
extern const f32 TOCtrlDubchik__data_805DB3B4;
extern const f32 TOCtrlDubchik__data_805DB3B8;

void TOCtrlDubchik__sub_8015CB4C(u8 *arg0) {
    s32 sp8;
    if (TLobby__sub_8002AFD4((void *) (arg0), (void *) (&sp8), (int) (1)) != 0) {
        sp8 = 1;
        TLobby__sub_800F6510((void *) (arg0), (void *) (&sp8));
        TLobby__sub_8002AFD4((void *) (arg0), (void *) (&sp8), (int) (0));
        ((VObj_18_65b835 *)(arg0))->m77(&sp8);
        TOCtrlDubchik__sub_8015CA74((void *) (arg0));
        set_flag8__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

void update_spin__13TOCtrlDubchikFPv(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x380);
    temp_f1 = (f32) temp_r4;
    M2C_FIELD(arg0, s32 *, 0x380) = (s32) (temp_f1 + TOCtrlDubchik__data_805DB3B4);
    M2C_FIELD(arg0, f32 *, 0x37C) = (f32) (TOCtrlDubchik__data_805DB3B8 + TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x380)));
    TObjPlayer__sub_80011734(arg0, arg0 + 0x390, M2C_FIELD(arg0, f32 *, 0x37C));
    M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) + 0x147);
}

extern void *tl_05;

#pragma fp_contract on
void TOCtrlDubchik__sub_8015CCF4(u8 *arg0) {
  f32 new_var2;
  f32 new_var4;
  f32 *new_var;
  s8 *new_var3;
  *((s32 *) (((s8 *) arg0) + 0x380)) = (s32) (((f32) (*((s32 *) (((s8 *) arg0) + 0x380)))) + TOCtrlDubchik__data_805DB3B4);
  new_var3 = ((s8 *) arg0) + 0x380;
  *((f32 *) (((s8 *) arg0) + 0x37C)) = (f32) (TOCtrlDubchik__data_805DB3B8 + TBoss8Dragon__sub_803D64C0((s32)(*((s32 *) new_var3))));
  new_var = &(*((f32 *) (((s8 *) arg0) + 0x37C)));
  TObjPlayer__sub_80011734(arg0, arg0 + 0x390, *new_var);
  new_var4 = *((f32 *) (((s8 *) arg0) + 0x388));
  *((f32 *) (((s8 *) arg0) + 0x388)) = (f32) (new_var4 + TOCtrlDubchik__data_805DB3B0);
  if (TOCtrlDubchik__data_805DB3AC < (*((f32 *) (((s8 *) arg0) + 0x388))))
  {
    new_var2 = (f32) TOCtrlDubchik__data_805DB3AC;
    *((f32 *) (((s8 *) arg0) + 0x388)) = new_var2;
    *((s16 *) (((s8 *) arg0) + 0x326)) = 3;
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x08000004);
 do { set_indexed_flags(arg0, 0, 2); } while (0 != 0U);
  }
  new_var4 = new_var4;
}

void *create__13TOCtrlDubchikFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x3A0);
    if (o != NULL) {
        o = TOCtrlDubchik__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TOCtrlDubchik__data_805D58F0;

void destroy_instance__13TOCtrlDubchikFv(void) {
    if ((u32) TOCtrlDubchik__data_805D58F0 != 0U) {
        TLobby__sub_8001FE7C((void*)TOCtrlDubchik__data_805D58F0, 1);
        TOCtrlDubchik__data_805D58F0 = 0U;
    }
}

extern M2C_UNK __vt__13TOCtrlDubchik[];

void TOCtrlDubchik__sub_8015D314(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804B0A10.value, 0, 0, 0));
    }
    (*(s32 *)&TOCtrlDubchik__data_805D58F0) = var_r0;
}

void *__dt__13TOCtrlDubchikFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TOCtrlDubchik;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

s32 TOCtrlDubchik__vt18(void *arg0) {
    if (M2C_FIELD(arg0, s16 *, 0x326) != 0) {
        return TObjPlayer__sub_80016454();
    }
    return 0;
}

s32 TOCtrlDubchik__vt24(u8 *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s16 *, 0x326) != 0) {
        return try_start_action__10TObjPlayerFPvii((void *) (arg0), (void *) (arg1), (void *) (arg2));
    }
    return 0;
}

s32 TOCtrlDubchik__vt25(u8 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    if (M2C_FIELD(arg0, s16 *, 0x326) != 0) {
        return TObjPlayer__sub_800162E0((void *) (arg0), (void *) (arg1), (void *) (arg2), (f32) (farg0));
    }
    return 0;
}

void TOCtrlDubchik__vt23(void) {  }

}
