#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define PADV virtual void CAT(f,__LINE__)();

extern "C" {

M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 update_linked_position__14TObjEneEpsilonFPv(f32);
M2C_UNK advance_animation_playback(void *, s32);

extern const f32 TObjEneMe3Stelth__data_805DA848;
}

struct Base_A { char pad[0x18]; };
struct V_A : Base_A {
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m87();
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m93();
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m100();
};

extern "C" void handle_message__16TObjEneMe3StelthFPvi(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 9;
        set_field_378__9TObjEneDDFPvi(arg0, 0xD);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFF8);
        ((V_A *) arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x3EC) = 0;
        M2C_FIELD(arg0, s32 *, 0x424) = 0;
        break;
    case 3:
        if (update_linked_position__14TObjEneEpsilonFPv(TObjEneMe3Stelth__data_805DA848) != 0) {
            transition_enemy_state(arg0, 6);
        } else if ((s32) M2C_FIELD(arg0, s32 *, 0x424) >= 0x5A) {
            transition_enemy_state(arg0, 0xA);
        }
        break;
    case 5:
        break;
    case 0:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x424);
        M2C_FIELD(arg0, s32 *, 0x424) = (s32) (temp_r4 + 1);
        advance_animation_playback(arg0, temp_r4);
        ((V_A *) arg0)->m100();
        ((V_A *) arg0)->m87();
        break;
    }

}
