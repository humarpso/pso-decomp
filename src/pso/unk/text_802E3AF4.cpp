#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_909b87 { char pad[0x18]; };

struct VObj_18_909b87 : VBase_18_909b87 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4(s32);
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TObjPlayer__sub_8015431C(void *);
M2C_UNK reset_global_table();
s32 try_add_hit_target__14TItemAttackColFPvPv(void *, int);
s32 get_instance__16TObjOnlineEndingFv();
s32 get_attack_entry__16TObjOnlineEndingFi(int);
void check_object_hits__14TItemAttackColFPv(u8 *arg0);
}

extern "C" {

void check_object_hits__14TItemAttackColFPv(u8 *arg0) {
    s32 i;
    s32 e;
    reset_global_table();
    TObjPlayer__sub_8015431C(arg0 + 0x1C);
    for (i = 0; i != get_instance__16TObjOnlineEndingFv(); i++) {
        e = get_attack_entry__16TObjOnlineEndingFi(i);
        if (try_add_hit_target__14TItemAttackColFPvPv(arg0, e) != 0) {
            ((VObj_18_909b87 *)arg0)->m4(e);
            M2C_FIELD(arg0, s32 *, 0xA4) -= 1;
            if (M2C_FIELD(arg0, s32 *, 0xA4) == 0) {
                queue_destruction__7TObjectFv(arg0);
                reset_global_table();
                return;
            }
        }
    }
    reset_global_table();
}

}
