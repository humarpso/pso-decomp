#include "types.h"
#include "pso/object/TObjOnlineEnding.h"

struct VBase_18_909b87 { char pad[0x18]; };

struct VObj_18_909b87 : VBase_18_909b87 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4(s32);
};

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 TObjPlayer__sub_8015431C(void *);
s32 reset_global_table();
s32 try_add_hit_target__14TItemAttackColFPvPv(void *, int);
s32 get_attack_entry__16TObjOnlineEndingFi(int);
void check_object_hits__14TItemAttackColFPv(u8 *arg0);
}

extern "C" {

void check_object_hits__14TItemAttackColFPv(u8 *arg0) {
    s32 i;
    s32 e;
    reset_global_table();
    TObjPlayer__sub_8015431C(arg0 + 0x1C);
    for (i = 0; i != TObjOnlineEnding::get_instance(); i++) {
        e = get_attack_entry__16TObjOnlineEndingFi(i);
        if (try_add_hit_target__14TItemAttackColFPvPv(arg0, e) != 0) {
            ((VObj_18_909b87 *)arg0)->m4(e);
            *(s32 *)((s8 *)arg0 + 0xA4) -= 1;
            if (*(s32 *)((s8 *)arg0 + 0xA4) == 0) {
                queue_destruction__7TObjectFv(arg0);
                reset_global_table();
                return;
            }
        }
    }
    reset_global_table();
}

}
