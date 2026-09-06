#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_2f517b { char pad[0x18]; };

struct VObj_18_2f517b : VBase_18_2f517b {
    virtual void m0();
    virtual void m1();
    virtual M2C_UNK m2();
};

extern "C" {
s32 obj_testFlags30(void *, s32);
void clear_shadow_flag__10TObjPlayerFPv(void *);
void set_shadow_flag__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801415BC(void);
void set_global_pair__10TObjPlayerFii(s32, s32);
extern s32 some_id_805c6f74;
void TObjPlayer__sub_800F5E08(u8 *arg0);
}

extern "C" {

int initialize_enemy_photon_effect(void* p);
void set_param__12TObjEneLappyFPvi(void* p, s32 v);
s32 get_target_id__13TWindowLockOnFPv(void* p);
int reset_photon_effect__12TBoss3VoloptFPv(void*);

void set_param__12TObjEneLappyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x370) = v; }

int initialize_enemy_photon_effect(void* p) { return reset_photon_effect__12TBoss3VoloptFPv(p); }
void TObjPlayer__sub_800F5E08(u8 *arg0) {
    if (obj_testFlags30(arg0, 0x800) == 0) {
        set_shadow_flag__10TObjPlayerFPv(arg0);
        some_id_805c6f74 |= 0xC10;
        set_global_pair__10TObjPlayerFii(-1, 0x800);
        TObjPlayer__sub_801415BC();
        ((VObj_18_2f517b *)(arg0))->m2();
        clear_shadow_flag__10TObjPlayerFPv(arg0);
        some_id_805c6f74 &= ~0xC10;
    }
}

}
