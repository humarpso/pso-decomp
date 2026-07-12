#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_boss2tunnel_move__10TObjPlayerFPv(void *arg0);
int TObjPlayer__sub_8012EF40(void* p);
void *init_effect_state__10TObjPlayerFPv(void *arg0);
s32 TObjBoss2Tunnel__sub_803D929C(s32, s32);
s32 play_particle_effect_once__10TObjPlayerFv();
int TObjPlayer__sub_80115BFC(void*, int);
void TObjPlayer__sub_80120D50(void *);
s32 TObjPlayer__sub_80121200();

void update_boss2tunnel_move__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = TObjPlayer__sub_80121200();
    switch (temp_r3) {
    case 1:
        play_particle_effect_once__10TObjPlayerFv();
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 2:
        play_particle_effect_once__10TObjPlayerFv();
        TObjBoss2Tunnel__sub_803D929C(0, -M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 3:
        play_particle_effect_once__10TObjPlayerFv();
        return;
    }
}
int TObjPlayer__sub_8012EF40(void* p) { return TObjPlayer__sub_80115BFC((char*)p + 0x1f8, 3276); }

extern M2C_UNK lbl_804A6108[];

void *init_effect_state__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6108;
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    return arg0;
}

}
