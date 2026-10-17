#include "types.h"
#include "pso/item/TItemAttackCol.h"
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
void TItemAttackCol::check_object_hits() {
    s32 i;
    s32 e;
    reset_global_table();
    TObjPlayer__sub_8015431C(((u8 *)this) + 0x1C);
    for (i = 0; i != TObjOnlineEnding::get_instance(); i++) {
        e = get_attack_entry__16TObjOnlineEndingFi(i);
        if (try_add_hit_target__14TItemAttackColFPvPv(((u8 *)this), e) != 0) {
            ((VObj_18_909b87 *)((u8 *)this))->m4(e);
            this->m_a4 -= 1;
            if (this->m_a4 == 0) {
                queue_destruction__7TObjectFv(((u8 *)this));
                reset_global_table();
                return;
            }
        }
    }
    reset_global_table();
}

}
