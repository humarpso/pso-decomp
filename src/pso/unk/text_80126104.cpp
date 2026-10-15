#include "types.h"

struct VBase_18_f15a7b { char pad[0x18]; };

struct VObj_18_f15a7b : VBase_18_f15a7b {
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
    virtual s32 m46(s32);
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
    virtual s32 m72(s32);
};

struct Obj_80126180 { u8 pad[0x1f8]; s32 a; s32 b; s32 c; };

struct Out_80126180 { u8 pad0[0x10]; s32 f10; u8 pad1[0x4c - 0x14]; f32 f4c; s32 f50; u8 pad2[0x74 - 0x54]; void *f74; s32 f78; };

struct PlB_801261BC { char pad[0x18]; };

struct Pl_801261BC : PlB_801261BC {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void m49(void *, s32, s32, s32);
    u8 pad2[0x188-0x1C];
    s32 f188;
    u8 pad3[0x1FC-0x18C];
    s32 f1fc;
};

extern "C" {
s32 obj_is_hit_receivable(void *);
void frozen_shooter_freeze_hit(int arg0, u8 *arg1);
extern const f32 lbl_805DAD70;
void frozen_shooter_collider_block(Obj_80126180 *self, Out_80126180 *o);
u8 get_slot_count__14TItemProShieldFPv(void *);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *);
void fire_shot_at_target__11TItemWeaponFv(void *, void *, s32, s32);
void draw_status_icon__10TObjPlayerFPvi(void *, void *);
void frozen_shooter_marker(Pl_801261BC *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void frozen_shooter_freeze_hit(int arg0, u8 *arg1) {
    u8 *temp_r31;
    if ((arg1 != NULL) && (obj_is_hit_receivable((void *) (*(u8 **)((s8 *)arg1 + 0))) != 0)) {
        temp_r31 = (u8 *)(*(u8 **)((s8 *)arg1 + 0));
        ((VObj_18_f15a7b *)(temp_r31))->m46(*(s32 *)((s8 *)temp_r31 + 0xA4) + (*(s32 *)((s8 *)arg1 + 4) * 0x2C));
        ((VObj_18_f15a7b *)(temp_r31))->m72(0);
    }
}
#pragma pop

void frozen_shooter_collider_block(Obj_80126180 *self, Out_80126180 *o) {
    if (self->b == 0) {
        o->f74 = (void *)frozen_shooter_freeze_hit;
    }
    o->f10 = self->a;
    o->f50 = 0x4000;
    o->f4c = lbl_805DAD70;
    o->f78 = self->c;
}
void frozen_shooter_marker(Pl_801261BC *arg0) {
    u8 buf[16];
    void *p;
    draw_status_icon__10TObjPlayerFPvi(arg0, buf);
    arg0->f1fc = 0;
    p = buf;
    if (is_mode_two_and_ready__10TObjPlayerFPv(arg0) != 0) {
        fire_shot_at_target__11TItemWeaponFv(arg0, p, arg0->f188, 0);
    } else if (get_slot_count__14TItemProShieldFPv(arg0) == 1) {
        arg0->f1fc = 1;
        fire_shot_at_target__11TItemWeaponFv(arg0, p, arg0->f188, 0);
    } else {
        arg0->m49(p, 0, 0, 1);
    }
}

}
