#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss7DeRolLeC__sub_802EC994(void* p);
u8 TObjPlayer__sub_802ECB10(void *arg0);
void fn_802EC9A4(void *arg0, void *arg1);
void fn_802EC9F0(void *arg0, void *arg1);
void handle_6xA9_barba_ray_boss_actions(void *arg0);
void handle_6xAA_barba_ray_boss_actions(void *arg0);
s32 TBoss8Dragon__sub_800B9958(void * a0 = 0, u16 a1 = 0);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s16 a1 = 0);
void byteswap_action_packet__11TBoss7JointFPv(void *);
void *get_enemy_entity(int);
void read_state__11TBoss7JointFPv(void *);

void TBoss7DeRolLeC__sub_802EC994(void* p) { *(s32*)((char*)p + 0x6b0) = 0; *(s32*)((char*)p + 0x6b4) = 0; }
void fn_802EC9A4(void *arg0, void *arg1) {
    TBoss8Dragon__sub_800B9958(arg0, (u16) M2C_FIELD(arg1, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x6B4) = (s32) M2C_FIELD(arg1, s16 *, 6);
    TObjEneDD__sub_800BBA18(arg0, M2C_FIELD(arg1, s16 *, 4));
}
void fn_802EC9F0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x6B4) = (s32) M2C_FIELD(arg1, s16 *, 6);
    TObjEneDD__sub_800BBA18(arg0, M2C_FIELD(arg1, s16 *, 4));
}

void handle_6xAA_barba_ray_boss_actions(void *arg0) {
    void *x;
    read_state__11TBoss7JointFPv(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        fn_802EC9A4((void *)(x), (void *)(arg0));
    }
}

void handle_6xA9_barba_ray_boss_actions(void *arg0) {
    void *x;
    byteswap_action_packet__11TBoss7JointFPv(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        fn_802EC9F0((void *)(x), (void *)(arg0));
    }
}

u8 TObjPlayer__sub_802ECB10(void *arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x6FC) <= 0) && !(M2C_FIELD(arg0, s32 *, 0x628) & 4)) {
        var_r4 = 1;
    }
    return (u8)var_r4;
}

}
