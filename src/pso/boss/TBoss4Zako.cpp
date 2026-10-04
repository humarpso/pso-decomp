#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_8005D6B0 { u8 pad[0x374]; s32 f374; };

struct VBase_18_fe72f9 { char pad[0x18]; };

struct VObj_18_fe72f9 : VBase_18_fe72f9 {
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
    virtual M2C_UNK m79(void *);
    virtual M2C_UNK m80();
};

extern "C" {
u8 TBoss4Uro__sub_8005D698(u8 *arg0);
void TBoss4Uro__sub_8005D6D4(u8 *arg0);
void fn_8005D6E4(u8 *arg0);
u8 TBoss4Zako__sub_8005D6B0(O_8005D6B0 *self);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
u8 *VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK add_flags_2e4__10TObjPlayerFPvUi(void *, int);
f32 *dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
M2C_UNK reset_photon_effect__12TBoss3VoloptFPv(void *);
s32 get_instance_count__9TBoss4UroFv();
void fn_8005D6E4(u8 *arg0);
u32 create_particle_emitter(void *, int);
M2C_UNK set_flags__11TBoss4Type2FPvUi(u32, int);
M2C_UNK set_param__12TObjEneLappyFPvi(void *, int);
M2C_UNK bind_enemy_combat_stats(void *, int, int, int);
M2C_UNK initialize__9TObjEnemyFPv(s32, s32);
s32 init_collision_body_parts(void *, void *, int);
extern u8 __vt__10TBoss4Zako[];
extern M2C_UNK lbl_804876F8[];
extern s32 lbl_805D27E8;
extern const f32 lbl_805D8CBC;
extern const f32 TBoss4Zako__data_805D8CD4;
extern const f32 lbl_805D8CF8;
extern const f32 TBoss4Zako__data_805D8D24;
extern const f32 lbl_805D8D30;
extern const f32 lbl_805D8D34;
extern const f32 lbl_805D8D38;
extern const f32 lbl_805D8D3C;
extern const f32 lbl_805D8D40;
extern const f32 lbl_805D8D44;
s32 TBoss4Zako__ct(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *__dt__10TBoss4ZakoFPvs(void *arg0, s16 arg1);
s32 create__10TBoss4ZakoFi(s32 arg0);
void update_state3__10TBoss4ZakoFPv(void* p);
int TBoss8Dragon__sub_8005D700(void);
s32 TObjControl__ct(s32, s32);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__9TObjEnemyFv(void *, M2C_UNK);
s32 __nw__7TObjectFUl(M2C_UNK);
int get_flag_bit6__12TBoss8DragonFPv(void* p);
M2C_UNK request_destroy__11TBoss4Type2FUi(void *);
int set_state3__10TBoss4ZakoFPv(void*);

void update_state3__10TBoss4ZakoFPv(void* p) { if (*(int*)((char*)p + 0x374) != 3) { set_state3__10TBoss4ZakoFPv(p); } }

extern M2C_UNK lbl_804876F8[];

void *__dt__10TBoss4ZakoFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804876F8;
        free_collision_body_parts(arg0);
        M2C_FIELD(arg0, s32 *, 0x384) = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3B4) != 0U) {
            request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x3B4));
            M2C_FIELD(arg0, u32 *, 0x3B4) = 0U;
        }
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 tl_04;

#pragma push
#pragma fp_contract on
#define THIS self
s32 TBoss4Zako__ct(s32 arg0, s32 arg1, s32 arg2) {
    u8 *self;
    self = (u8 *)arg0;
    initialize__9TObjEnemyFPv(arg0, arg1);
    M2C_FIELD(THIS, M2C_UNK **, 0x18) = lbl_804876F8;
    M2C_FIELD(THIS, s32 *, 0) = lbl_805D27E8;
    add_flags_2e4__10TObjPlayerFPvUi(THIS, 8);
    M2C_FIELD(THIS, s32 *, 0x378) = ((s32 *)arg2)[0];
    fn_8005D6E4((u8 *)M2C_FIELD(THIS, s32 *, 0x378));
    ((VObj_18_fe72f9 *)THIS)->m79((s32 *)arg2 + 1);
    ((VObj_18_fe72f9 *)THIS)->m80();
    M2C_FIELD(THIS, s32 *, 0x380) = get_instance_count__9TBoss4UroFv();
    M2C_FIELD(THIS, s32 *, 0x24) = 0;
    M2C_FIELD(THIS, s32 *, 0x34) = 0;
    VecCopy__FP3VecPC3Vec(THIS + 0x44, VecCopy__FP3VecPC3Vec(THIS + 0x50, VecCopy__FP3VecPC3Vec(THIS + 0x74, THIS + 0x38)));
    M2C_FIELD(THIS, s32 *, 0x384) = init_collision_body_parts(THIS, __vt__10TBoss4Zako, 1);
    VecCopy__FP3VecPC3Vec(THIS + 0x2FC, THIS + 0x38);
    M2C_FIELD(THIS, f32 *, 0x310) = lbl_805D8CBC;
    M2C_FIELD(THIS, f32 *, 0x30C) = lbl_805D8CBC;
    M2C_FIELD(THIS, f32 *, 0x308) = lbl_805D8CBC;
    M2C_FIELD(THIS, s32 *, 0x2A8) = 0;
    bind_enemy_combat_stats(THIS, register_boss__6TLobbyFPv(0x35), dispatch_shared_handler_b__6TLobbyFPv(0x35), register_object__6TLobbyFPv(0x35));
    M2C_FIELD(THIS, s16 *, 0x33E) = M2C_FIELD(THIS, s16 *, 0x32C);
    reset_photon_effect__12TBoss3VoloptFPv(THIS);
    set_param__12TObjEneLappyFPvi(THIS, 0);
    M2C_FIELD(THIS, s32 *, 0x388) = 0;
    if ((M2C_FIELD(THIS, u32 *, 0x3B4) = create_particle_emitter(THIS + 0x38, 0x103)) != 0) {
        set_flags__11TBoss4Type2FPvUi(M2C_FIELD(THIS, u32 *, 0x3B4), 0x40);
    }
    M2C_FIELD(THIS, f32 *, 0x398) = lbl_805D8CBC;
    M2C_FIELD(THIS, f32 *, 0x394) = lbl_805D8CBC;
    M2C_FIELD(THIS, f32 *, 0x390) = lbl_805D8CBC;
    M2C_FIELD(THIS, f32 *, 0x38C) = lbl_805D8CBC;
    M2C_FIELD(THIS, s32 *, 0x3A4) = TBoss4Zako__data_805D8CD4 * (M2C_FIELD(THIS, u16 *, 0x1C) & 3);
    M2C_FIELD(THIS, s32 *, 0x5C) = 0;
    M2C_FIELD(THIS, s32 *, 0x60) = M2C_FIELD(THIS, u16 *, 0x1C) << 14;
    M2C_FIELD(THIS, s32 *, 0x3B8) = 0;
    M2C_FIELD(THIS, s32 *, 0x3A8) = 0;
    M2C_FIELD(THIS, s32 *, 0x3AC) = (M2C_FIELD(THIS, u16 *, 0x1C) % 6 + 1) * 450;
    M2C_FIELD(THIS, f32 *, 0x3B0) = lbl_805D8CBC;
    M2C_FIELD(THIS, s32 *, 0x3BC) = lbl_805D8CF8 * calc_boss4_scale__10TObjPlayerFi(THIS);
    M2C_FIELD(THIS, s32 *, 0x3C0) = lbl_805D8D34 * calc_boss4_scale__10TObjPlayerFi(THIS) + lbl_805D8D30;
    M2C_FIELD(THIS, f32 *, 0x39C) = *dispatch_shared_handler_a__6TLobbyFPv(0x35);
    if (M2C_FIELD(THIS, f32 *, 0x39C) <= TBoss4Zako__data_805D8D24 || M2C_FIELD(THIS, f32 *, 0x39C) > lbl_805D8D38) {
        M2C_FIELD(THIS, f32 *, 0x39C) = lbl_805D8D3C;
    }
    M2C_FIELD(THIS, f32 *, 0x3A0) = *dispatch_shared_handler_a__6TLobbyFPv(0x39);
    if (M2C_FIELD(THIS, f32 *, 0x3A0) <= TBoss4Zako__data_805D8D24 || M2C_FIELD(THIS, f32 *, 0x3A0) > lbl_805D8D40) {
        M2C_FIELD(THIS, f32 *, 0x3A0) = lbl_805D8D44;
    }
    M2C_FIELD(THIS, s32 *, 0x374) = 0;
    return arg0;
}
#pragma pop

s32 create__10TBoss4ZakoFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3C4);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss4Zako__ct((s32)(var_r31), (s32)(var_r4), (s32)(arg0));
    }
    return var_r31;
}

u8 TBoss4Uro__sub_8005D698(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x374) != 3);
}

u8 TBoss4Zako__sub_8005D6B0(O_8005D6B0 *self) {
    return self->f374 == 1 || self->f374 == 2;
}

void TBoss4Uro__sub_8005D6D4(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) + 1);
}

void fn_8005D6E4(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) + 1);
}

}
