#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8022B6FC_lbl_804CC510
{
  M2C_UNK value;
  u8 remaining[0x48];
};

struct RecoveredGlobal_8022B6FC_lbl_804CC55C
{
  M2C_UNK value;
  u8 remaining[0x94];
};

#include "pso/misc/TTecBarta.h"

struct HitInfo_8022B8F4 { s32 type; f32 power; };

struct VBase_8022B8F4 { char pad[0x18]; };

struct VObj_8022B8F4 : VBase_8022B8F4 {
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
    virtual void m21(void *, HitInfo_8022B8F4 *, void *, s32, s32);
};

struct Obj_8022B8F4 {
    u8 pad0[0x1C];
    void *source;
    u8 pad20[0xCC - 0x20];
    f32 power;
    u8 padD0[0xF8 - 0xD0];
    void *contact;
    u8 padFC[0x134 - 0xFC];
    u16 ids[32];
    s32 cursor;
};

struct TTecBarta_8022BC10 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vtable;
    void *owner;
    u8 pad20[0xC8 - 0x20];
    s16 fc8;
    u8 padca[0x114 - 0xCA];
    u32 f114;
    u8 pad118[0x134 - 0x118];
    u16 slots[32];
    s32 f174;
};

struct Obj_8022BCB8 {
    u8 pad0[0x18];
    void *vt;
    void *source;
    u8 pad20[0x134 - 0x20];
    u16 ids[32];
};

extern "C" {
s32 TTecCtrl__sub_8022DBC4(int, int, int);
s32 is_technique_ready__8TTecCtrlFv();
s32 TTecAnti__sub_8022B35C(void *, int);
extern RecoveredGlobal_8022B6FC_lbl_804CC510 lbl_804CC510;
extern RecoveredGlobal_8022B6FC_lbl_804CC55C lbl_804CC55C;
void TTecBarta__sub_8022B6FC(u8 *arg0);
extern TechniqueContactVtable __vt__9TTecBarta;
extern TechniqueEmitterSourceTable TTecBarta__data_8044CD98[];
void queue_destruction__7TObjectFv(TechniqueParticleEmitter*);
void free__11TOBoss4RockFUi(TechniqueParticleEmitter**);
void destroy_technique_effect_resources__10TObjPlayerFPvs(TTecBarta*,s16);
void __dl__7TObjectFPv(TTecBarta*);
TTecBarta* __dt__9TTecBartaFv(TTecBarta* self,s16 deleting);
u16 obj_getField1c(void *);
void TTecBarta__vt6(Obj_8022B8F4 *self, VObj_8022B8F4 *target);
u16 obj_getField1c(void *);
void update_technique_by_state__9TTecBartaFPv(u8 *arg0);
void TTecBarta__sub_8022B540(void *);
void TTecBarta__sub_8022B6FC(u8 *arg0);
void TObjPlayer__sub_8023A7B4();
extern TechniqueContactVtable __vt__9TTecBarta;
extern s32 lbl_805D3798;
TTecBarta_8022BC10 *TTecBarta__ct(TTecBarta_8022BC10 *self, void * _w1, void * _w2, void * _w3, void * _w4);
u16 obj_getField1c(void *);
void update_technique_by_state__9TTecBartaFPv(u8 *arg0);
void TTecBarta__sub_8022B540(void *);
void TTecBarta__sub_8022B6FC(u8 *arg0);
void TObjPlayer__sub_8023AA4C();
extern TechniqueContactVtable __vt__9TTecBarta;
extern s32 lbl_805D3798;
extern const f32 lbl_805DC7A8;
u8 *TTecBarta__sub_8022BCB8(u8 *arg0, void * _w1, void * _w2, void * _w3, void * _w4);
}

extern "C" {

void TObjPlayer__sub_8022BD70(void);
void create__9TTecBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void create_ex__9TTecBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__9TTecBartaFv(void);
void update_technique_by_state__9TTecBartaFPv(u8 *arg0);
s32 TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void *__nw__7TObjectFUl(int);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, M2C_UNK, M2C_UNK);

void update_technique_by_state__9TTecBartaFPv(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xC6);
    switch (temp_r0) {
    case 0:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A604, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, 0x100, 0);
        }
        return;
    case 1:
        TBoss3Volopt__sub_8022675C(0x4002A604, (int) (arg0 + 0x20), 0, 0);
        return;
    case 2:
    case 3:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A604, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x180, 0);
        }
        break;
    case 4:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A604, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x250, 0);
        }
        break;
    case 5:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A604, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x100, 0);
        }
        break;
    }
}

typedef struct RecoveredGlobal_8022B6FC_lbl_804CC510 RecoveredGlobal_8022B6FC_lbl_804CC510;
typedef struct RecoveredGlobal_8022B6FC_lbl_804CC55C RecoveredGlobal_8022B6FC_lbl_804CC55C;
typedef char RecoveredGlobal_8022B6FC_lbl_804CC510_size[((sizeof(RecoveredGlobal_8022B6FC_lbl_804CC510)) == 0x4C) ? (1) : (-1)];
typedef char RecoveredGlobal_8022B6FC_lbl_804CC55C_size[((sizeof(RecoveredGlobal_8022B6FC_lbl_804CC55C)) == 0x98) ? (1) : (-1)];
void TTecBarta__sub_8022B6FC(u8 *arg0) {
  int new_var;
  new_var = (int) TTecCtrl__sub_8022DBC4((int) 3, (int) (*((s16 *) (((s8 *) arg0) + 0xC4))), (int) 0xFFFF);
  TTecAnti__sub_8022B35C((void *) (arg0 + 0xCC), new_var);
  if ((((s16) (*((s16 *) (((s8 *) arg0) + 0xC4)))) >= 0xF) && (is_technique_ready__8TTecCtrlFv() == 0))
  {
    *((f32 *) (((s8 *) arg0) + 0xCC)) = (f32) ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0xC))) + ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0xE))) * (*((s16 *) (((s8 *) arg0) + 0xC4)))));
  }
  else
  {
    *((f32 *) (((s8 *) arg0) + 0xCC)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xCC))) + ((f32) ((*((s16 *) (((s8 *) arg0) + 0xF0))) * (*((s16 *) (((s8 *) arg0) + 0xC4))))));
    if (is_technique_ready__8TTecCtrlFv() != 0)
    {
      *((f32 *) (((s8 *) arg0) + 0xCC)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xCC))) * (*((f32 *) (((s8 *) (&lbl_804CC55C.value)) + 0x18))));
    }
  }
  *((f32 *) (((s8 *) arg0) + 0x64)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xD0))) + ((f32) ((((s16) (*((s16 *) (((s8 *) arg0) + 0xC4)))) / 5) * 2)));
  *((f32 *) (((s8 *) arg0) + 0x70)) = (f32) (*((f32 *) (((s8 *) arg0) + 0xD4)));
}

void create__9TTecBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x178);
    if (o != NULL) {
        TTecBarta__ct((TTecBarta_8022BC10 *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2), (void *)(arg3));
    }
}

void create_ex__9TTecBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x178);
    if (o != NULL) {
        TTecBarta__sub_8022BCB8((u8 *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2), (void *)(arg3));
    }
}

void TTecBarta__vt6(Obj_8022B8F4 *self, VObj_8022B8F4 *target) {
    s32 found = 0;
    s32 i;
    for (i = 0; i < 32; i++) {
        if (self->ids[i] == obj_getField1c(target)) {
            found = 1;
        }
    }
    if (found == 0) {
        self->ids[self->cursor] = obj_getField1c(target);
        self->cursor += 1;
        if (self->cursor >= 32) {
            self->cursor = 31;
        }
        HitInfo_8022B8F4 tmp;
        tmp.type = 19;
        tmp.power = self->power;
        HitInfo_8022B8F4 info = tmp;
        target->m21(self->source, &info, self->contact, 3, -1);
    }
}

TTecBarta* __dt__9TTecBartaFv(TTecBarta* self,s16 deleting) {
    if(self) {
        self->vtable=&__vt__9TTecBarta;
        for(u32 i=0;i<TTecBarta__data_8044CD98[self->band].count;++i) {
            if(self->emitters[i]) {
                queue_destruction__7TObjectFv(self->emitters[i]);
                self->emitters[i]=0;
            }
        }
        free__11TOBoss4RockFUi(self->emitters);
        destroy_technique_effect_resources__10TObjPlayerFPvs(self,0);
        if(deleting>0)__dl__7TObjectFPv(self);
    }
    return self;
}

void render__9TTecBartaFv(void) {  }

TTecBarta_8022BC10 *TTecBarta__ct(TTecBarta_8022BC10 *self, void * _w1, void * _w2, void * _w3, void * _w4) {
    s32 i;
    TObjPlayer__sub_8023A7B4();
    self->vtable = ((void * *)&__vt__9TTecBarta);
    self->f0 = lbl_805D3798;
    TTecBarta__sub_8022B6FC((u8 *)self);
    self->f114 = 0x40003;
    for (i = 0; i < 32; i++) {
        self->slots[i] = 0xFFFF;
    }
    self->f174 = 0;
    TTecBarta__sub_8022B540(self);
    update_technique_by_state__9TTecBartaFPv((u8 *)self);
    if (self->owner) {
        self->fc8 = ((s16)obj_getField1c(self->owner));
    }
    return self;
}

u8 *TTecBarta__sub_8022BCB8(u8 *arg0, void * _w1, void * _w2, void * _w3, void * _w4) {
    s32 i;
    TObjPlayer__sub_8023AA4C();
    M2C_FIELD(arg0, void **, 0x18) = ((u8 *)&__vt__9TTecBarta);
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3798;
    TTecBarta__sub_8022B6FC((u8 *)(arg0));
    for (i = 0; i < 0x20; i++) {
        ((Obj_8022BCB8 *)arg0)->ids[i] = 0xFFFF;
    }
    M2C_FIELD(arg0, s32 *, 0x174) = 0;
    M2C_FIELD(arg0, s32 *, 0x114) = 0x40003;
    M2C_FIELD(arg0, f32 *, 0x24) = M2C_FIELD(arg0, f32 *, 0x24) + lbl_805DC7A8;
    TTecBarta__sub_8022B540(arg0);
    update_technique_by_state__9TTecBartaFPv((u8 *)(arg0));
    if (M2C_FIELD(arg0, void **, 0x1C) != 0) {
        M2C_FIELD(arg0, s16 *, 0xC8) = obj_getField1c(M2C_FIELD(arg0, void **, 0x1C));
    }
    return arg0;
}

void TObjPlayer__sub_8022BD70(void) {  }

}
