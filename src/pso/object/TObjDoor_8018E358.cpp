#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TObjDoor__sub_8018E8BC(void);
f32 TBoss8Dragon__sub_803D64C0(s32);
extern f32 lbl_805DBDD0;
extern f32 lbl_805DBDD4;
void update_anim__8TObjDoorFPv(void *arg0);
f32 fn_801315A0(void *, void *);
M2C_UNK TParticleCtrl__sub_803D8D1C(int, void *, void *);
extern s32 lbl_805D4DF0;
extern const f32 lbl_805DBDDC;
s32 TObjDoor__sub_8018EA2C(s32 arg0, f32 farg0, f32 farg1);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
extern M2C_UNK __vt__8TObjDoor[];
void *__dt__8TObjDoorFv(void *arg0, s16 arg1);
void *TObjDoor__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
extern void *tl_05;
void *TObjDoor__create(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);
extern s32 TObjDoor__data_805D5BC0;
extern u32 lbl_805D5BC4;
void free_resources__8TObjDoorFv(void);
void *TObjDoorJung__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
extern void *tl_05;
void *TObjDoorJung__create(void *arg0);
}

extern "C" {

void TObjDoor__sub_8018E890(void);
void update_timer__8TObjDoorFPv(void *arg0);
M2C_UNK TObjDoor__sub_8018E5F4();
M2C_UNK TObjDoor__sub_8018E74C();

void update_timer__8TObjDoorFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC0) < 0x3C) {
        TObjDoor__sub_8018E5F4();
        return;
    }
    TObjDoor__sub_8018E74C();
}

void TObjDoor__sub_8018E890(void) {  }
void TObjDoor__sub_8018E8BC(void) {  }
#pragma push
#pragma fp_contract on
void update_anim__8TObjDoorFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) (M2C_FIELD(arg0, s32 *, 0xC8) + 0x300);
    M2C_FIELD(arg0, f32 *, 0xC4) = lbl_805DBDD4 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0xC8)) + lbl_805DBDD0;
}
#pragma push
#pragma fp_contract on
s32 TObjDoor__sub_8018EA2C(s32 arg0, f32 farg0, f32 farg1) {
    f32 sp8;
    f32 temp_f1;
    temp_f1 = fn_801315A0((void *) (arg0 + 0x38), (void *) (lbl_805D4DF0 + 0x178));
    if (temp_f1 > (farg0 * farg0)) {
        return 0;
    }
    if (temp_f1 < (farg1 * farg1)) {
        return 1;
    }
    TParticleCtrl__sub_803D8D1C((int) (0), (void *) (arg0 + 0x38), (void *) (&sp8));
    if ((-farg1 <= sp8) && (sp8 <= (lbl_805DBDDC + farg1))) {
        return 1;
    }
    return 0;
}
#pragma pop

void *__dt__8TObjDoorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TObjDoor;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TObjDoor__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TObjDoor__ct(o, tl_05, arg0);
    }
    return o;
}
void free_resources__8TObjDoorFv(void) {
    free_if_valid__10TObjPlayerFi(TObjDoor__data_805D5BC0);
    TObjDoor__data_805D5BC0 = 0;
    if ((u32) lbl_805D5BC4 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5BC4, 1);
        lbl_805D5BC4 = 0U;
    }
}
void *TObjDoorJung__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TObjDoorJung__ct(o, tl_05, arg0);
    }
    return o;
}

#pragma pop

}
