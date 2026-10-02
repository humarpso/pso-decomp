#include "types.h"
struct VBase_80169334 { char pad[0x18]; };

struct Actor_80169334 : VBase_80169334 {
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
};

typedef struct Ring_80169334 {
    u8 pad0[0x38];
    u8 pos[0xAC - 0x38];
    s32 fAC;
    u8 padB0[0xCC - 0xB0];
    u32 fCC;
    u8 padD0[0xF4 - 0xD0];
    u16 fF4;
} Ring_80169334;

extern "C" {
void *get_player_data__10TObjPlayerFi(s32);
s32 obj_getField1c(void *obj);
f32 TObjPlayer__sub_801547E0(void *, s32);
f32 TObjPlayer__sub_80141CF8(void *, void *);
s16 get_field_2b8__14TItemProShieldFPv(void *);
s16 obj_getS16_32C(void *);
s16 obj_getS16_2BA(void *);
s16 obj_getS16_32E(void *);
u32 TObjPlayer__sub_801B4684(void *);
s32 is_alive_and_ready__10TObjPlayerFi(void *);
s32 TObjPlayer__sub_801AF734(void *);
s32 is_valid_slot__17TOHangerMachine01FiUs(void *, u16);
void TObjPlayer__sub_801B5328(void *, void *, s32, s32, f32);
void TObjPlayer__sub_801AF7E0(void *);
void *TOSwitchAttack__sub_80087278(void *, s32, s32);
void TObjPlayer__sub_80087638(void *, u16);
s32 TBoss3Volopt__sub_8022675C(s32, void *, s32, s32);
extern s32 lbl_805D586C;
extern const f32 lbl_805DB6C8;
void TObjPlayer__sub_80169334(Ring_80169334 *self);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
void TObjPlayer__sub_80169334(Ring_80169334 *self) {
    Actor_80169334 *actor;
    s32 i;
    s32 id;
    f32 r;
    self->fCC += 0x147;
    self->fF4 = 0xFFFF;
    for (i = 0; i < lbl_805D586C; i++) {
        actor = (Actor_80169334 *)get_player_data__10TObjPlayerFi(i);
        id = obj_getField1c(actor);
        if (actor == 0) {
            continue;
        }
        if ((u16)id >= 0x1000) {
            continue;
        }
        r = lbl_805DB6C8 - TObjPlayer__sub_801547E0(actor, 0);
        if (!(TObjPlayer__sub_80141CF8((u8 *)actor + 0x38, self->pos) < r * r)) {
            continue;
        }
        self->fF4 = id;
        if (obj_getS16_32C(actor) < get_field_2b8__14TItemProShieldFPv(actor) ||
            obj_getS16_32E(actor) < obj_getS16_2BA(actor) ||
            TObjPlayer__sub_801B4684(actor) != 0 ||
            (is_alive_and_ready__10TObjPlayerFi(actor) != 0 && TObjPlayer__sub_801AF734(actor) == 0)) {
            void *e;
            self->fAC = 1;
            if (is_valid_slot__17TOHangerMachine01FiUs(self, self->fF4) != 0) {
                TObjPlayer__sub_801B5328(actor, self->pos, 0x3C, 0, r);
                actor->m48();
            }
            if (is_alive_and_ready__10TObjPlayerFi(actor) != 0) {
                TObjPlayer__sub_801AF7E0(actor);
            }
            e = TOSwitchAttack__sub_80087278((u8 *)actor + 0x2FC, 0x1F6, 0x10);
            if (e != 0) {
                TObjPlayer__sub_80087638(e, self->fF4);
            }
            e = TOSwitchAttack__sub_80087278((u8 *)actor + 0x2FC, 0x1F7, 0x10);
            if (e != 0) {
                TObjPlayer__sub_80087638(e, self->fF4);
            }
            TBoss3Volopt__sub_8022675C(0x4002AB0E, self->pos, 0, 0);
            break;
        }
    }
}
#pragma pop

}
