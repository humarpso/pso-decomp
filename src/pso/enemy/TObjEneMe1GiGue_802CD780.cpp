#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjEneMe1GiGue__sub_802CDAB4(void);
void TObjEneMe1GiGue__sub_802CDAB8(void);
void TObjEneMe1GiGue__sub_802CDABC(void);
void TObjEneMe1GiGue__sub_802CDAC0(void);
void TObjEneMe1GiGue__sub_802CDAE8(void);
void *TObjPlayer__sub_802CDE28(void *arg0, s16 arg1);
void *deleting_dtor__15TObjEneMe1GiGueFPvs(void *arg0, s16 arg1);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_800D7C58(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804E135C[];

void *deleting_dtor__15TObjEneMe1GiGueFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E135C;
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_800D7C58((s8 *)arg0 + 0x418, -1);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3FC, -1);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjEneMe1GiGue__sub_802CDAB4(void) {  }
void TObjEneMe1GiGue__sub_802CDAB8(void) {  }
void TObjEneMe1GiGue__sub_802CDABC(void) {  }
void TObjEneMe1GiGue__sub_802CDAC0(void) {  }

void TObjEneMe1GiGue__sub_802CDAE8(void) {  }

extern M2C_UNK lbl_804E14E8[];

void *TObjPlayer__sub_802CDE28(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E14E8;
        if (M2C_FIELD(arg0, void **, 0xF8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF8)); M2C_FIELD(arg0, M2C_UNK *, 0xF8) = 0; }
        if (M2C_FIELD(arg0, void **, 0xFC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xFC)); M2C_FIELD(arg0, M2C_UNK *, 0xFC) = 0; }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
