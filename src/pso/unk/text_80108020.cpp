#include "types.h"
struct Vec_80108164 { f32 x, y, z; };

struct Base_80108164 { u8 pad[0x18]; };

struct Player_80108164 : Base_80108164 {
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
    virtual void get_pos(s32 id, Vec_80108164 *out);
};

struct Quest_80108164 { u8 pad[0x10]; f32 f10; };

struct Vec_80108020 { f32 x, y, z; };

struct Parm_80108020 { u8 pad[0x1c]; f32 f1C; f32 f20; };

struct Self_80108020 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    s32 f1C;
    u8 pad20[4];
    f32 f24;
    f32 f28;
    u8 pad2c[0x38 - 0x2c];
    u8 v38[0x58 - 0x38];
    f32 f58;
    f32 f5C;
    f32 f60;
    f32 f64;
    s32 f68;
    u8 *f6C;
    u8 f70[4];
    u8 f74[4];
    u8 f78[4];
};

extern "C" {
void TBoss3Volopt__sub_8022675C(u32, void *, s32, s32);
f32 xyz_distance(Vec_80108164 *, Vec_80108164 *);
Player_80108164 *get_player_by_client_id(u16);
void *__nw__7TObjectFUl(u32);
Quest_80108164 *get_quest_id__12TQuestListVMFPv(Player_80108164 *);
extern const f32 lbl_805DAB04;
extern const f32 lbl_805DAB08;
void TObjPlayer__sub_80108164(s32 idx);
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 create_particle_emitter(void *, s32);
void get_item_params__9TItemLoadFPvPvPv(void *, void *, void *);
void *__nw__7TObjectFUl(u32);
void __ct__7TObjectFP7TObject(void *, s32);
void TObjPlayer__sub_80235F60(void *, void *, void *, s32, u8 *, f32, s32);
extern u8 lbl_8043E140[];
extern Vec_80108020 lbl_8043E160[];
extern void *__vt__13TItemEffArmor[];
extern Parm_80108020 lbl_804A6F34;
extern s32 lbl_805D2B88;
extern s32 tl_07;
extern const f32 TItemEffArmor__data_805DAAEC;
extern const f32 lbl_805DAAF8;
extern const f32 lbl_805DAAFC;
extern const f32 lbl_805DAB00;
Self_80108020 *TItemEffArmor__ct(Self_80108020 *self, u8 *obj, f32 a, f32 b);
}

extern "C" {

Self_80108020 *TItemEffArmor__ct(Self_80108020 *self, u8 *obj, f32 a, f32 b) {
    void *p;
    __ct__7TObjectFP7TObject(self, tl_07);
    self->vt = __vt__13TItemEffArmor;
    self->f0 = lbl_805D2B88;
    self->f24 = lbl_805DAAF8;
    get_item_params__9TItemLoadFPvPvPv(self->f70, self->f78, self->f74);
    self->f28 = a;
    self->f58 = b;
    self->f6C = obj;
    self->f68 = 0;
    self->f5C = lbl_804A6F34.f20;
    self->f60 = lbl_804A6F34.f1C;
    self->f64 = (TItemEffArmor__data_805DAAEC - self->f5C) / lbl_805DAAFC;
    self->f1C = create_particle_emitter(self->f6C + 0x38, 0x1BA);
    copy_vec4__13TRaderMapCoreFPvPv(self->v38, lbl_8043E140);
    {
        Vec_80108020 v = lbl_8043E160[0];
        p = __nw__7TObjectFUl(0x64);
        if (p != NULL) {
            TObjPlayer__sub_80235F60(p, lbl_8043E140, &v, 0x3A, obj, lbl_805DAB00, tl_07);
        }
    }
    return self;
}

void TObjPlayer__sub_80108164(s32 idx) {
    Player_80108164 *p = get_player_by_client_id(idx);
    if (p != 0) {
        Quest_80108164 *q = get_quest_id__12TQuestListVMFPv(p);
        if (q != 0) {
            f32 v = q->f10;
            Vec_80108164 a;
            Vec_80108164 b;
            f32 s;
            void *o;
            p->get_pos(0x28, &a);
            p->get_pos(0x1B, &b);
            s = lbl_805DAB04 * (xyz_distance(&a, &b) / lbl_805DAB08);
            o = __nw__7TObjectFUl(0x7C);
            if (o != 0) {
                TItemEffArmor__ct((Self_80108020 *)(o), (u8 *)(p), s, v);
            }
            TBoss3Volopt__sub_8022675C(0x4000B20A, (u8 *)p + 0x38, 0, 0);
        }
    }
}

}
