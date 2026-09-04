#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

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

}
