#include "types.h"
struct Vec_80325F7C { f32 x, y, z; };

struct Ray_80325F7C { Vec_80325F7C o; Vec_80325F7C d; };

struct Ctl_80325F7C { u8 pad[0x38]; Vec_80325F7C pos; };

struct Stk_80325F7C { Vec_80325F7C dir; Vec_80325F7C hit; Vec_80325F7C wing; Vec_80325F7C pos; Ray_80325F7C ray; };

extern "C" {
void TBoss8Dragon__sub_80063FB8(s32, void *, f32);
s32 get_instance_count__12TBoss8DragonFv(void);
void update_scale__15TObjBoss2TunnelFPv(void *);
Ctl_80325F7C *TPlayerBattleCtrl4P__sub_801BA74C(s32);
void get_wing_position__26TBoss5GryphonLightningWingFii(void *, void *);
void copy_position__12TBoss8DragonFii(void *, void *);
void TObjPlayer__sub_80325D58(void *, void *, void *, void *);
void TNpcPlayer__sub_803E18C0(void *, void *, void *);
extern const f32 lbl_805DF630;
extern const f32 lbl_805DF638;
void fn_80325F7C(void *arg0);
}

extern "C" {

void fn_80325F7C(void *arg0) {
    Ray_80325F7C ray;
    Vec_80325F7C pos;
    Vec_80325F7C wing;
    Vec_80325F7C hit;
    Vec_80325F7C dir;
    s32 inst;
    s32 i;
    Ctl_80325F7C *c;
    inst = get_instance_count__12TBoss8DragonFv();
    if (inst != 0) {
        i = 0;
        do {
            c = TPlayerBattleCtrl4P__sub_801BA74C(i);
            if (c != 0) {
                copy_position__12TBoss8DragonFii(arg0, &pos);
                get_wing_position__26TBoss5GryphonLightningWingFii(arg0, &wing);
                ray.o.x = pos.x;
                ray.o.y = c->pos.y;
                ray.o.z = pos.z;
                ray.d.x = wing.x - pos.x;
                ray.d.y = lbl_805DF630;
                ray.d.z = wing.z - pos.z;
                TNpcPlayer__sub_803E18C0(&c->pos, &ray, &hit);
                dir.x = ray.d.x;
                dir.y = ray.d.y;
                dir.z = ray.d.z;
                update_scale__15TObjBoss2TunnelFPv(&dir);
                TObjPlayer__sub_80325D58(arg0, &pos, &dir, &hit);
                TBoss8Dragon__sub_80063FB8(inst, &hit, lbl_805DF638);
            }
            i++;
        } while (i < 4);
    }
}

}
