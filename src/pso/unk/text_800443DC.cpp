#include "types.h"
struct G_800443DC { u8 pad[0x18]; s32 arr[1]; };

struct E_800443F0 { s32 a; s32 b; s32 c; s32 d; };

struct G_800443F0 { u8 pad[0x42c]; E_800443F0 *entries; };

struct O_800443F0 { u8 pad[0x24]; s32 f24; u8 pad2[0xc]; s32 f34; };

extern "C" {
extern G_800443DC *lbl_805D4CBC;
s32 fn_800443DC(void *self, s32 i);
extern G_800443F0 *TBoss3VoloptP01__resource_bundle;
void load_volopt_param_entry(O_800443F0 *self, s32 i);
}

extern "C" {

s32 fn_800443DC(void *self, s32 i) {
    return lbl_805D4CBC->arr[i];
}
void load_volopt_param_entry(O_800443F0 *self, s32 i) {
    self->f34 = TBoss3VoloptP01__resource_bundle->entries[i].c;
    self->f24 = TBoss3VoloptP01__resource_bundle->entries[i].d;
}

}
