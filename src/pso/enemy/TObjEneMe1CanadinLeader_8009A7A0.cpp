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
    virtual void m103();
    virtual void m104();
    virtual void m105();
    virtual void m106();
    virtual void m107();
    virtual void m108();
    virtual void m109();
    virtual void m110();
    virtual void m111();
    virtual M2C_UNK m112();
};

#include <stddef.h>
struct Stack_8009AA64 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_8009AA64_lbl_8048FE94 { M2C_UNK value; u8 remaining[0x18]; };
typedef char RecoveredGlobal_8009AA64_lbl_8048FE94_size[sizeof(RecoveredGlobal_8009AA64_lbl_8048FE94) == 0x1C ? 1 : -1];

struct Obj_8009B3C0 {
    u8 pad[0x3c8]; u32 flags;
    u8 pad2[0x4d0 - 0x3cc]; s32 count; void *members[1];
};

struct Obj_8009B638 { u8 pad[0x46c]; s32 step; };

struct Obj_8009B1CC { u8 pad0[0x390]; void *key; u8 pad1[0x13C]; s32 count; u8 *items[8]; };

struct LeaderBase_8009AB4C { char pad[0x18]; };

struct Leader_8009AB4C : LeaderBase_8009AB4C {
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
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual void m104();
    virtual void m105();
    virtual void m106();
    virtual s32 m107();
};

struct Fields_8009AB4C {
    u8 pad0[0x24];
    s32 field24;
    u8 pad28[0x30 - 0x28];
    u32 flags30;
    u8 pad34[0x60 - 0x34];
    s32 angle;
    u8 pad64[0x2FC - 0x64];
    u8 pos2FC[0x3C8 - 0x2FC];
    u32 flags3C8;
    u8 pad3CC[0x4D0 - 0x3CC];
    s32 count;
    void *members[1];
};

typedef s32 M2C_UNK;
struct Info_8009B274 { u8 pad0[0x2C]; s32 f2C; };

struct Leader_8009B274 {
    u8 pad0[0x3C0];
    s32 f3C0;
    u8 pad3C4[0x3C8 - 0x3C4];
    u32 flags;
    u8 pad3CC[0x468 - 0x3CC];
    Info_8009B274 *info;
    u8 pad46C[0x4C8 - 0x46C];
    u16 f4C8;
    u8 pad4CA[0x4CC - 0x4CA];
    s32 max;
    s32 count;
    u32 ids[8];
    s32 mode;
};

struct Vec_8009B43C { f32 x, y, z; };

struct Info_8009B43C { u8 pad0[0x2C]; s32 f2C; };

struct Leader_8009B43C {
    u8 pad0[0x1C];
    u16 f1C;
    u8 pad1E[0x2C - 0x1E];
    s16 f2C;
    u8 pad2E[0x38 - 0x2E];
    Vec_8009B43C pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0x468 - 0x64];
    Info_8009B43C *info;
    u8 pad46C[0x4CC - 0x46C];
    s32 max;
    s32 count;
    void *ids[8];
};

struct Obj_8009AF54 {
    u8 pad0[0x2FC];
    u8 pos[0x3C8 - 0x2FC];
    u32 flags3C8;
    u8 pad3CC[0x4A4 - 0x3CC];
    u8 v4A4[0x4B8 - 0x4A4];
    s32 f4B8;
    u8 pad4BC[0x4D0 - 0x4BC];
    s32 count;
    void *members[8];
    s32 state;
};

extern "C" {
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjEneMe1CanadinLeader__sub_8009E504(void *);
M2C_UNK copy_pos__17TObjEneMe1CanadinFPv(void *);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
void run_task__23TObjEneMe1CanadinLeaderFv(u8 *arg0);
s32 obj_isState2_324(void *);
M2C_UNK obj_getField1c(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 is_alive__9TObjEneDDFPv(void *);
s32 TObjEneDD__sub_800BA828();
extern const f32 lbl_805D9880;
extern const f32 lbl_805D9884;
void TObjEneMe1CanadinLeader__sub_8009A938(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjBoss2Tunnel__sub_8007E7D8(void *, void *, int);
s32 TObjBoss2Tunnel__sub_8007E84C(void *, void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
f32 TBoss6Type1__sub_803D9370(void *, void *);
extern M2C_UNK lbl_8048FE94[];
extern s32 lbl_805D29A8;
extern const f32 lbl_805D9860;
u8 *TObjEneMe1CanadinLeader__sub_8009AA64(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, f32 farg0);
s32 transition_enemy_state(void *, s16);
void set_flag3c8_bit40__23TObjEneMe1CanadinLeaderFPv(void *);
s32 TObjEneMe1CanadinLeader__vt106(Obj_8009B3C0 *self);
s32 transition_enemy_state(void *, s16);
void TObjEneMe1CanadinLeader__vt103(Obj_8009B638 *self);
s32 fn_8009E300(u8 *);
s32 check_v2_mode__9TObjEneDDFv();
s32 TObjEneMe1CanadinLeader__vt114(Obj_8009B1CC *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
void set_flag3c8_bit20__23TObjEneMe1CanadinLeaderFPv(void *);
void create_breakup_mdl__12TBoss3VoloptFiiiii(void *, int, s32, void *, s32);
void refresh_lobby_state__10TObjPlayerFPv(void *);
void send_entity_set_flags__6TLobbyFPv(void *);
s32 TBoss3Volopt__sub_8022675C(s32, void *, s32, s32);
extern void *lbl_805D4FDC;
void TObjEneMe1CanadinLeader__vt110(Leader_8009AB4C *obj, s32 mode);
f32 get_status_value_f32__23TObjEneMe1CanadinLeaderFv(f32);
M2C_UNK set_flag3c8_bit8__23TObjEneMe1CanadinLeaderFPv(s32);
s32 find_entity_by_id(u16);
void TObjEneMe1CanadinLeader__vt115(Leader_8009B274 *self, u32 id);
f32 get_status_value_f32__23TObjEneMe1CanadinLeaderFv(f32);
M2C_UNK TObjEneMe1CanadinLeader__sub_8009E334(void *);
M2C_UNK TObjEneMe1CanadinLeader__sub_8009E350(void *);
void *create_canadin__23TObjEneMe1CanadinLeaderFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
void TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 lbl_805D9894;
extern const f32 lbl_805D9898;
void TObjEneMe1CanadinLeader__vt105(Leader_8009B43C *self);
M2C_UNK copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
M2C_UNK TObjEneMe1CanadinLeader__sub_8009E258(void *);
M2C_UNK TObjEneMe1CanadinLeader__sub_8009E27C(void *);
s32 TObjEneMe1CanadinLeader__sub_8009E31C(void *, s32);
M2C_UNK TObjEneMe1CanadinLeader__sub_8009E4AC(void *, s32);
s32 TBoss3Volopt__sub_8022675C(s32, void *, s32, s32);
extern M2C_UNK lbl_8043A280[];
void TObjEneMe1CanadinLeader__sub_8009AF54(void *arg0);
}

extern "C" {

void TObjEneMe1CanadinLeader__sub_8009A7A0(void);
void TObjEneMe1CanadinLeader__sub_8009A934(void);
void *TObjEneMe1CanadinLeader__sub_8009AA0C(void *arg0, s16 arg1);
void TObjEneMe1CanadinLeader__vt104(void *arg0);
u8 TObjEneMe1CanadinLeader__vt107(void *arg0);
void TObjEneMe1CanadinLeader__vt111(void *arg0);
void *__dt__23TObjEneMe1CanadinLeaderFv(void *arg0, s16 arg1);
void *create__23TObjEneMe1CanadinLeaderFPv(void *arg0);
void *TObjEneMe1CanadinLeader__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__17TObjEneMe1CanadinFv(void *, int);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);

void TObjEneMe1CanadinLeader__sub_8009A7A0(void) {  }

void TObjEneMe1CanadinLeader__sub_8009A934(void) {  }

extern M2C_UNK lbl_8048FE94[];

void TObjEneMe1CanadinLeader__sub_8009A938(u8 *arg0) {
    f32 temp_f1;
    obj_getField1c((void *) (M2C_FIELD(arg0, u8 **, 0x1C)));
    if (TObjEneDD__sub_800BA828() != 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (is_alive__9TObjEneDDFPv((void *) (M2C_FIELD(arg0, u8 **, 0x1C))) == 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (obj_isState2_324((void *) (M2C_FIELD(arg0, u8 **, 0x1C))) != 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x2C);
    if (temp_f1 <= lbl_805D9880) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x1C), f32 *, 0x308) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) * temp_f1);
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x1C), f32 *, 0x310) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) * M2C_FIELD(arg0, f32 *, 0x2C));
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) * lbl_805D9884);
}

void *TObjEneMe1CanadinLeader__sub_8009AA0C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048FE94;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjEneMe1CanadinLeader__sub_8009AA64(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_8009AA64, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8009AA64, spC) == 0x4) ? 1 : -1];
    Stack_8009AA64 stack;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8009AA64_lbl_8048FE94 *)&lbl_8048FE94).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D29A8;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg3 + 0x38));
    TBoss6Type1__sub_803D9370((void *) (&stack.sp8), (void *) (arg2 + 0x38));
    stack.spC = lbl_805D9860;
    M2C_FIELD(arg0, f32 *, 0x20) = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg2, s32 *, 0x60)));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805D9860;
    M2C_FIELD(arg0, f32 *, 0x28) = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg2, s32 *, 0x60)));
    if (TObjBoss2Tunnel__sub_8007E84C((void *) (arg0 + 0x20), (void *) (&stack.sp8)) != 0) {
        TObjBoss2Tunnel__sub_8007E7D8((void *) (arg0 + 0x20), (void *) (arg0 + 0x28), (int) (-0x1800));
    } else {
        TObjBoss2Tunnel__sub_8007E7D8((void *) (arg0 + 0x20), (void *) (arg0 + 0x28), (int) (0x1800));
    }
    return arg0;
}

void TObjEneMe1CanadinLeader__vt110(Leader_8009AB4C *obj, s32 mode) {
    s32 i;
    Fields_8009AB4C *self;
    self = (Fields_8009AB4C *)obj;
    switch (mode) {
    case 4:
        create_breakup_mdl__12TBoss3VoloptFiiiii(lbl_805D4FDC, 0, self->field24, self->pos2FC, self->angle);
        for (i = 0; i < self->count; i++) {
            set_flag3c8_bit20__23TObjEneMe1CanadinLeaderFPv(self->members[i]);
        }
        self->flags3C8 |= 0x400000;
        TBoss3Volopt__sub_8022675C(0x4003B71D, self->pos2FC, 0, 0);
        refresh_lobby_state__10TObjPlayerFPv(self);
        break;
    case 0:
        if (obj->m107() != 0) {
            send_entity_set_flags__6TLobbyFPv(self);
            queue_destruction__7TObjectFv(self);
        }
        break;
    case 5:
        self->flags30 &= ~0x200;
        break;
    case 1:
        return;
    case 3:
        return;
    }
}

#define self ((Obj_8009AF54 *)arg0)
void TObjEneMe1CanadinLeader__sub_8009AF54(void *arg0) {
    s32 i;
    s32 j;
    if (self->flags3C8 & 0x10) {
        self->flags3C8 &= ~0x10;
        self->state = 7;
    }
    switch (self->state) {
    case 1:
        TObjEneMe1CanadinLeader__sub_8009E4AC(arg0, 0);
        self->state = 2;
        TBoss3Volopt__sub_8022675C(0x4003AD1B, self->pos, 0, 0);
        break;
    case 2:
        if (self->f4B8 == 0) {
            self->state = 3;
            self->flags3C8 &= ~8;
            copy_vec4__13TRaderMapCoreFPvPv(self->v4A4, lbl_8043A280);
            for (i = 0; i < self->count; i++) {
                if (TObjEneMe1CanadinLeader__sub_8009E31C(self->members[i], 0x200) != 0) {
                    TObjEneMe1CanadinLeader__sub_8009E27C(self->members[i]);
                }
            }
        }
        break;
    case 3:
        if (self->flags3C8 & 8) {
            self->state = 4;
        }
        break;
    case 4:
        TObjEneMe1CanadinLeader__sub_8009E4AC(arg0, 2);
        self->state = 5;
        TBoss3Volopt__sub_8022675C(0x4003AD1C, self->pos, 0, 0);
        break;
    case 5:
        if (self->f4B8 == 0) {
            copy_vec4__13TRaderMapCoreFPvPv(self->v4A4, lbl_8043A280);
            self->state = 6;
            for (i = 0; i < self->count; i++) {
                if (TObjEneMe1CanadinLeader__sub_8009E31C(self->members[i], 0x100) != 0) {
                    TObjEneMe1CanadinLeader__sub_8009E27C(self->members[i]);
                }
            }
        }
        break;
    case 6:
        break;
    case 7:
        TObjEneMe1CanadinLeader__sub_8009E4AC(arg0, 4);
        self->state = 8;
        TBoss3Volopt__sub_8022675C(0x4003AD1B, self->pos, 0, 0);
        break;
    case 8:
        if (self->f4B8 == 0) {
            self->state = 9;
            copy_vec4__13TRaderMapCoreFPvPv(self->v4A4, lbl_8043A280);
            for (j = 0; j < self->count; j++) {
                TObjEneMe1CanadinLeader__sub_8009E258(self->members[j]);
            }
            TObjEneMe1CanadinLeader__sub_8009E258(arg0);
        }
        break;
    case 0:
    case 9:
        break;
    }
}
#undef self

u8 TObjEneMe1CanadinLeader__vt107(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x4D0) <= 0);
}

extern s32 *lbl_805D4FE4;
extern s32 *lbl_805D4FE8;

void TObjEneMe1CanadinLeader__vt111(void *arg0) {
    *lbl_805D4FE4 = M2C_FIELD(arg0, s32 *, 0x4B4);
    *lbl_805D4FE8 = M2C_FIELD(arg0, s32 *, 0x4B4);
}

extern void *lbl_805D4FD0;

s32 TObjEneMe1CanadinLeader__vt114(Obj_8009B1CC *arg0) {
    s32 n = 0;
    s32 i;
    for (i = 0; i < arg0->count; i++) {
        if ((void *)fn_8009E300(arg0->items[i]) == arg0->key) {
            n++;
        }
    }
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        return n < 4;
    }
    return n < 2;
}

void TObjEneMe1CanadinLeader__vt115(Leader_8009B274 *self, u32 id) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        if (self->ids[i] == id) {
            self->count--;
            u32 t = self->ids[self->count];
            self->ids[self->count] = id;
            self->ids[i] = t;
            break;
        }
    }
    if (self->mode == 3) {
        s32 k = get_status_value_f32__23TObjEneMe1CanadinLeaderFv((f32)self->max / (f32)self->info->f2C);
        if (self->count <= self->max - k) {
            self->f3C0 = find_entity_by_id(self->f4C8);
            set_flag3c8_bit8__23TObjEneMe1CanadinLeaderFPv(self->f3C0);
        }
    }
    if (!(self->flags & 0x100000) && self->count <= self->max / 2) {
        self->flags |= 0x10;
    }
    if (self->count <= 2) {
        self->flags |= 0x40;
    }
}

s32 TObjEneMe1CanadinLeader__vt106(Obj_8009B3C0 *self) {
    s32 i;
    if (self->flags & 0x40) {
        self->flags &= ~0x40;
        transition_enemy_state(self, 0xb);
        for (i = 0; i < self->count; i++) {
            set_flag3c8_bit40__23TObjEneMe1CanadinLeaderFPv(self->members[i]);
        }
        return 1;
    }
    return 0;
}

void TObjEneMe1CanadinLeader__vt105(Leader_8009B43C *self) {
    s32 id;
    s32 sub;
    s32 angle;
    s32 n;
    s32 i;
    s32 j;
    Vec_8009B43C v;
    n = (s32)get_status_value_f32__23TObjEneMe1CanadinLeaderFv((f32)self->max / (f32)self->info->f2C);
    if (n < 1) {
        n = 1;
    }
    angle = self->angle;
    id = (self->f1C + 1) & 0xFFFF;
    sub = self->f2C + 1;
    for (i = 0; i < n; i++) {
        v.x = lbl_805D9894 * TBoss8Dragon__sub_803D64C0(angle);
        v.y = lbl_805D9898;
        v.z = lbl_805D9894 * TBoss8Dragon__sub_803D64DC(angle);
        TBoss4Zako__sub_803D8910(&v, &self->pos);
        angle += 0x10000 / self->max;
        self->ids[i] = create_canadin__23TObjEneMe1CanadinLeaderFPvPvPvPv(self, &v, (void *)id++, (void *)sub++);
        TObjEneMe1CanadinLeader__sub_8009E334(self->ids[i]);
        self->count++;
    }
    for (j = n; j < self->max; j++) {
        v.x = lbl_805D9894 * TBoss8Dragon__sub_803D64C0(angle);
        v.y = lbl_805D9898;
        v.z = lbl_805D9894 * TBoss8Dragon__sub_803D64DC(angle);
        TBoss4Zako__sub_803D8910(&v, &self->pos);
        angle += 0x10000 / self->max;
        self->ids[j] = create_canadin__23TObjEneMe1CanadinLeaderFPvPvPvPv(self, &v, (void *)id++, (void *)sub++);
        TObjEneMe1CanadinLeader__sub_8009E350(self->ids[j]);
        self->count++;
    }
}

void TObjEneMe1CanadinLeader__vt103(Obj_8009B638 *self) {
    switch (self->step) {
    case 0:
    case 1:
        self->step++;
        transition_enemy_state(self, 6);
        break;
    case 2:
        self->step = 0;
        transition_enemy_state(self, 7);
        break;
    }
}

void TObjEneMe1CanadinLeader__vt104(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4FD0, void **, 0x42C), s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4FD0, void **, 0x42C), s32 *, 0x1C);
}

extern M2C_UNK __vt__23TObjEneMe1CanadinLeader[];

void run_task__23TObjEneMe1CanadinLeaderFv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m112();
        return;
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        ((VObj_18 *)(arg0))->m83();
        TObjEneMe1CanadinLeader__sub_8009E504((void *) (arg0));
        TObjEneMe1CanadinLeader__sub_8009AF54((void *)((void *) (arg0)));
    }
    copy_pos__17TObjEneMe1CanadinFPv((void *) (arg0));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18 *)(arg0))->m98();
}

void *__dt__23TObjEneMe1CanadinLeaderFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TObjEneMe1CanadinLeader;
        __dt__17TObjEneMe1CanadinFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

void *create__23TObjEneMe1CanadinLeaderFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4F8);
    if (o != NULL) {
        o = TObjEneMe1CanadinLeader__ct(o, tl_04, arg0);
    }
    return o;
}

}
