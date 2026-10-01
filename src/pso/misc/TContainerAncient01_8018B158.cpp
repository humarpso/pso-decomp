#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8018B5D0_TContainerAncient01__data_804B6DC0 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct Obj_8018B510 { u8 pad0[0x38]; u8 pos[0x7C]; s16 fB4[3]; u8 pad1[0x1FA]; f32 f2B4; u8 pad2[0x6E]; s16 state; u8 pad3[0x10]; f32 f338; };

struct Obj_8018B700 { u8 pad0[0x38]; u8 pos[0x324]; s32 f35C; };

struct Atk_8018B180 { s32 type; f32 power; s32 kind; f32 base; };

struct VBase_8018B180 { u8 pad[0x18]; };

struct Player_8018B180 : VBase_8018B180 {
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
    virtual void m21(void *, Atk_8018B180 *, s32, s32, s32);
    u8 pad1c[0x38 - 0x1C];
    f32 pos[3];
};

struct Obj_8018B180 { u8 pad[0x38]; f32 pos[3]; };

typedef s32 M2C_UNK;
struct Obj_8018B180;
struct Obj_8018B284 {
    u8 pad0[0x38];
    u8 pos[0x2B4 - 0x38];
    f32 f2B4;
    u8 pad2B8[0x33C - 0x2B8];
    f32 f33C;
    f32 f340;
    u8 f344[0xC];
    u8 f350[0x36C - 0x350];
    u32 f36C;
};

extern "C" {
void TContainerAncient01__sub_8018B158(void* p, void* a1, void* a2);
int TObjEneDellBiter__sub_80087350(void*, void*);
void TContainerAncient01__sub_8018B158(void* p, void* a1, void* a2);
void TBoss1Dragon__sub_80143504(void *);
void TContainerAncient01__sub_8018B158(void* p, void* a1, void* a2);
s32 __cvt_fp2unsigned(f32);
extern const float TContainerAncient01__data_805DBD1C;
extern const f32 TContainerAncient01__data_805DBD34;
void TContainerAncient01__sub_8018B48C(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
extern RecoveredGlobal_8018B5D0_TContainerAncient01__data_804B6DC0 TContainerAncient01__data_804B6DC0;
extern const f32 TContainerAncient01__data_805DBD10;
extern const f32 TContainerAncient01__data_805DBD3C;
extern const f32 lbl_805DBD40;
extern const f32 TContainerAncient01__data_805DBD44;
extern const f32 lbl_805DBD48;
void TContainerAncient01__sub_8018B5D0(u8 *arg0);
f32 TObjPlayer__sub_80141CF8(void *, void *);
void TBoss1Dragon__sub_80143504(void *);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(int);
extern const float TContainerAncient01__data_805DBD1C;
extern const f32 lbl_805DBD38;
void TContainerAncient01__sub_8018B510(Obj_8018B510 *arg0);
void TLobby__sub_8010567C(void *, void *, int);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, int, u32);
void TContainerAncient01__sub_8018B158(void* p, void* a1, void* a2);
s32 TContainerAncient01__sub_8020335C();
void set_flag8__6TLobbyFPv(void *);
extern s32 lbl_8050DC68[];
void TContainerAncient01__sub_8018B700(Obj_8018B700 *arg0);
s32 obj_testFlags30(void *, s32);
s32 TObjPlayer__sub_800196EC();
s32 get_field_3e4__10TObjPlayerFPv(void *);
f32 TObjPlayer__sub_80141CF8(void *, void *);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(int);
extern const f32 lbl_805DBD18;
void TContainerAncient01__sub_8018B180(Obj_8018B180 *self, f32 range);
void TBoss1Dragon__sub_80143504(void *);
void TContainerAncient01__sub_8018B158(void* p, void* a1, void* a2);
void TContainerAncient01__sub_8018B180(Obj_8018B180 *self, f32 range);
void reset_state__19TContainerAncient01FPv(void* a0);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
extern const f32 TContainerAncient01__data_805DBD20;
extern const f32 lbl_805DBD24;
extern const f32 lbl_805DBD28;
extern const f32 lbl_805DBD2C;
extern const f32 lbl_805DBD30;
extern const f32 TContainerAncient01__data_805DBD34;
void TContainerAncient01__sub_8018B284(Obj_8018B284 *self);
}

extern "C" {

void TContainerAncient01__vt4(void *arg0, s16 *arg1, s32 arg2);
void reset_state__19TContainerAncient01FPv(void* a0);

    extern const float TContainerAncient01__data_805DBD1C;

void TContainerAncient01__sub_8018B158(void* p, void* a1, void* a2) { TObjEneDellBiter__sub_80087350(a1, a2); }

void TContainerAncient01__sub_8018B180(Obj_8018B180 *self, f32 range) {
    u16 i;
    Player_8018B180 *pl;
    for (i = 0; i < 4; i++) {
        pl = (Player_8018B180 *)TPlayerBattleCtrl4P__sub_801BA74C(i);
        if (pl != NULL) {
            if (get_field_3e4__10TObjPlayerFPv(pl) == TObjPlayer__sub_800196EC() && obj_testFlags30(pl, 1) == 0 &&
                TObjPlayer__sub_80141CF8(self->pos, pl->pos) < range) {
                Atk_8018B180 atk;
                atk.type = 0xF;
                atk.base = lbl_805DBD18;
                atk.kind = 0xF;
                *(s32 *)&atk.power = *(s32 *)&atk.base;
                pl->m21(self, &atk, 0, -1, -1);
            }
        }
    }
}

void reset_state__19TContainerAncient01FPv(void* a0) { *(short*)((char*)a0 + 0x326) = 0; *(short*)((char*)a0 + 0xb8) = *(short*)((char*)a0 + 0x326); *(float*)((char*)a0 + 0x2b4) = TContainerAncient01__data_805DBD1C; }

void TContainerAncient01__sub_8018B284(Obj_8018B284 *self) {
    u32 period;
    u32 phase;
    f32 t;
    TBoss1Dragon__sub_80143504(self);
    if (TContainerAncient01__data_805DBD20 == self->f2B4) {
        switch (get_global_state__14TOKeyMachine01Fv()) {
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1B:
            TBoss3Volopt__sub_8022675C(0x4BC1C, self->pos, 0, 0);
            break;
        case 0x22:
            TBoss3Volopt__sub_8022675C(0x4004BC1C, self->pos, 0, 0);
            break;
        case 0x23:
            TBoss3Volopt__sub_8022675C(0x4004BC1C, self->pos, 0, 0);
            break;
        default:
            TBoss3Volopt__sub_8022675C(0x4004BC16, self->pos, 0, 0);
            break;
        }
    }
    if (TContainerAncient01__data_805DBD20 == self->f2B4 || lbl_805DBD24 == self->f2B4 || lbl_805DBD28 == self->f2B4) {
        TContainerAncient01__sub_8018B158(self, self->f350, (void *)0x7D);
    }
    if (lbl_805DBD2C == self->f2B4) {
        TContainerAncient01__sub_8018B158(self, self->f344, (void *)0x7E);
    }
    period = (u32)(lbl_805DBD30 / (f32)self->f36C);
    phase = (u32)(t = self->f2B4) % period;
    if (lbl_805DBD28 < t && t < TContainerAncient01__data_805DBD34 && phase == 0) {
        TContainerAncient01__sub_8018B158(self, self->f350, (void *)0x7E);
    }
    if (TContainerAncient01__data_805DBD34 < self->f2B4 && phase == 0) {
        TContainerAncient01__sub_8018B158(self, self->f344, (void *)0x7E);
    }
    TContainerAncient01__sub_8018B180((Obj_8018B180 *)self, self->f340);
    if (self->f33C <= self->f2B4) {
        reset_state__19TContainerAncient01FPv(self);
    }
}

void TContainerAncient01__sub_8018B48C(u8 *arg0) {
  TBoss1Dragon__sub_80143504(arg0);
  if (((__cvt_fp2unsigned(*((f32 *) (((s8 *) arg0) + 0x2B4))) & 0xFFFFFFFF) % 15) == 0)
  {
    TContainerAncient01__sub_8018B158((void*)(arg0), (void*)(arg0 + 0x344), (void*)((void *) 0x7D));
  }
  if (TContainerAncient01__data_805DBD34 <= (*((f32 *) (((s8 *) arg0) + 0x2B4))))
  {
    *((s16 *) (((s8 *) arg0) + 0x326)) = 2;
    *((s16 *) (((s8 *) arg0) + 0xB8)) = (s16) (*((s16 *) (((s8 *) arg0) + 0x326)));
    *((f32 *) (((s8 *) arg0) + 0x2B4)) = (f32) (*(const f32 *)&TContainerAncient01__data_805DBD1C);
  }
}

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8018B5D0_TContainerAncient01__data_804B6DC0_size[sizeof(RecoveredGlobal_8018B5D0_TContainerAncient01__data_804B6DC0) == 0x2C ? 1 : -1];

void TContainerAncient01__sub_8018B510(Obj_8018B510 *arg0) {
    s32 flag;
    u16 i;
    u8 *p;
    f32 c;
    TBoss1Dragon__sub_80143504(arg0);
    flag = 0;
    if (arg0->f338 <= arg0->f2B4) {
        flag = 1;
    } else {
        c = lbl_805DBD38;
        for (i = 0; i < 4; i++) {
            p = TPlayerBattleCtrl4P__sub_801BA74C(i);
            if (p != 0 && TObjPlayer__sub_80141CF8(arg0->pos, p + 0x38) < c) {
                flag = 1;
            }
        }
    }
    if (flag != 0) {
        arg0->state = 1;
        arg0->fB4[2] = arg0->state;
        arg0->f2B4 = (*(const f32 *)&TContainerAncient01__data_805DBD1C);
    }
}

void TContainerAncient01__sub_8018B5D0(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x338) = (f32) (TContainerAncient01__data_805DBD3C + (M2C_FIELD(arg0, f32 *, 0x68) - TContainerAncient01__data_805DBD10));
    M2C_FIELD(arg0, f32 *, 0x33C) = (f32) (lbl_805DBD40 + (M2C_FIELD(arg0, f32 *, 0x6C) - TContainerAncient01__data_805DBD10));
    M2C_FIELD(arg0, f32 *, 0x340) = (f32) (TContainerAncient01__data_805DBD44 + (M2C_FIELD(arg0, f32 *, 0x70) - TContainerAncient01__data_805DBD10));
    M2C_FIELD(arg0, s32 *, 0x36C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) + 4);
    VecCopy__FP3VecPC3Vec(arg0 + 0x344, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x348) = (f32) (M2C_FIELD(arg0, f32 *, 0x348) + M2C_FIELD(&TContainerAncient01__data_804B6DC0.value, f32 *, 4));
    VecCopy__FP3VecPC3Vec(arg0 + 0x350, arg0 + 0x344);
    M2C_FIELD(arg0, f32 *, 0x354) = (f32) ((lbl_805DBD48 * M2C_FIELD(&TContainerAncient01__data_804B6DC0.value, f32 *, 4)) + M2C_FIELD(arg0, f32 *, 0x354));
    M2C_FIELD(arg0, s32 *, 0x35C) = 0;
    M2C_FIELD(arg0, f32 *, 0x360) = (f32) TContainerAncient01__data_805DBD10;
    M2C_FIELD(arg0, f32 *, 0x364) = (f32) TContainerAncient01__data_805DBD10;
    M2C_FIELD(arg0, f32 *, 0x368) = (f32) TContainerAncient01__data_805DBD10;
}
#pragma pop

void TContainerAncient01__vt4(void *arg0, s16 *arg1, s32 arg2) {
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            TContainerAncient01__sub_8018B700((Obj_8018B700 *)(arg0));
            M2C_FIELD(arg0, s32 *, 0x35C) = 1;
        }
    } else if ((s16) *arg1 == 1) {
        M2C_FIELD(arg0, s32 *, 0x35C) = 1;
    }
}
void TContainerAncient01__sub_8018B700(Obj_8018B700 *arg0) {
    if (arg0->f35C == 0) {
        arg0->f35C = 1;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
        TContainerAncient01__sub_8018B158((void*)(arg0), (void*)(arg0->pos), (void*)(lbl_8050DC68[0]));
        TContainerAncient01__sub_8018B158((void*)(arg0), (void*)(arg0->pos), (void*)(lbl_8050DC68[1]));
        if (TContainerAncient01__sub_8020335C() == 0) {
            TLobby__sub_8010567C(arg0, arg0->pos, 1);
        }
        set_flag8__6TLobbyFPv(arg0);
    }
}

}
