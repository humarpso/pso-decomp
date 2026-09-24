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

extern "C" {
void TBoss3Volopt__sub_8022675C(u32, void *, s32, s32);
void TItemEffArmor__ct(void *, Player_80108164 *, f32, f32);
f32 TObjPlayer__sub_803E1A58(Vec_80108164 *, Vec_80108164 *);
Player_80108164 *TPlayerBattleCtrl4P__sub_801BA74C(u16);
void *__nw__7TObjectFUl(u32);
Quest_80108164 *get_quest_id__12TQuestListVMFPv(Player_80108164 *);
extern const f32 lbl_805DAB04;
extern const f32 lbl_805DAB08;
void TObjPlayer__sub_80108164(s32 idx);
}

extern "C" {

void TObjPlayer__sub_80108164(s32 idx) {
    Player_80108164 *p = TPlayerBattleCtrl4P__sub_801BA74C(idx);
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
            s = lbl_805DAB04 * (TObjPlayer__sub_803E1A58(&a, &b) / lbl_805DAB08);
            o = __nw__7TObjectFUl(0x7C);
            if (o != 0) {
                TItemEffArmor__ct(o, p, s, v);
            }
            TBoss3Volopt__sub_8022675C(0x4000B20A, (u8 *)p + 0x38, 0, 0);
        }
    }
}

}
