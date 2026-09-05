#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
f32 fn_8013157C(void *, void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(int);
M2C_UNK THunterGuildSeqOffline__sub_80248A14(int, int, int);
extern s32 TLobby__data_805D53AC;
extern f32 THunterGuildSeqOffline__data_805DC648;
void THunterGuildSeqOffline__sub_80212230(u8 *arg0);
}

extern "C" {

int THunterGuildSeqOffline__sub_80211FEC(int a0);
int THunterGuildSeqOffline__sub_80212000(int a0);
int THunterGuildSeqOffline__sub_80212060(int a0);
void *create__22THunterGuildSeqOfflineFPv(void *arg0);
void *THunterGuildSeqOffline__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

    extern int lbl_80513E70[];
int THunterGuildSeqOffline__sub_80211FEC(int a0) {  return lbl_80513E70[a0]; }

    extern int lbl_80513E60[];
int THunterGuildSeqOffline__sub_80212000(int a0) {  return lbl_80513E60[a0]; }

extern void *tl_05;

void *create__22THunterGuildSeqOfflineFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        o = THunterGuildSeqOffline__ct(o, tl_05, arg0);
    }
    return o;
}

    extern int THunterGuildSeqOffline__data_80513DD8[];
int THunterGuildSeqOffline__sub_80212060(int a0) {  return THunterGuildSeqOffline__data_80513DD8[a0]; }
void THunterGuildSeqOffline__sub_80212230(u8 *arg0) {
    s32 temp_r31;
    s32 temp_r3;
    s32 var_r30;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        temp_r31 = TPlayerBattleCtrl4P__sub_801BA74C((int) (TLobby__data_805D53AC));
        var_r30 = 0;
        do {
            if (var_r30 != (s32) TLobby__data_805D53AC) {
                temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (var_r30));
                if (temp_r3 != 0) {
                    if (fn_8013157C((void *) (temp_r31 + 0x38), (void *) (temp_r3 + 0x38)) <= THunterGuildSeqOffline__data_805DC648) {
                        THunterGuildSeqOffline__sub_80248A14((int) (M2C_FIELD(arg0, u32 *, 0x1C)), (int) (1), (int) (var_r30));
                    } else {
                        THunterGuildSeqOffline__sub_80248A14((int) (M2C_FIELD(arg0, u32 *, 0x1C)), (int) (0), (int) (var_r30));
                    }
                } else {
                    THunterGuildSeqOffline__sub_80248A14((int) (M2C_FIELD(arg0, u32 *, 0x1C)), (int) (0), (int) (var_r30));
                }
            } else {
                THunterGuildSeqOffline__sub_80248A14((int) (M2C_FIELD(arg0, u32 *, 0x1C)), (int) (1), (int) (var_r30));
            }
            var_r30 += 1;
        } while (var_r30 < 4);
    }
}

}
