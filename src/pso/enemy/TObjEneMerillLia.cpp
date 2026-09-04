#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TObjEneMerillLiaFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjPlayer__sub_800C68FC(void *, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void TObjPlayer__sub_800F6EB0(void *);
void TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK lbl_80494728[];

void *__dt__16TObjEneMerillLiaFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80494728;
        TObjPlayer__sub_800F6EB0(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3A8, -1);
        TObjPlayer__sub_800C68FC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800D4D70
#include "types.h"

extern "C" {

void TObjEneMerillLia__sub_800D4D70(void);

void TObjEneMerillLia__sub_800D4D70(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D50FC
#include "types.h"

extern "C" {

void TObjEneMerillLia__sub_800D50FC(void);

void TObjEneMerillLia__sub_800D50FC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D53E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_motion_state__16TObjEneMerillLiaFPv(void *arg0);

M2C_UNK obj_setFlags30(void *, M2C_UNK);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

void update_motion_state__16TObjEneMerillLiaFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 != 4) {
        if (temp_r0 < 4) {
            if (temp_r0 < 3) {
                if (temp_r0 >= 0) {
                    goto block_end;
                }
                goto block_7;
            } else {
                goto block_7;
            }
        } else if ((temp_r0 >= 0xE) || (temp_r0 < 0xB)) {
block_7:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 0) {
                M2C_FIELD(arg0, s16 *, 0x326) = 0;
            } else {
                M2C_FIELD(arg0, s16 *, 0x326) = 1;
            }
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            obj_setFlags30(arg0, 0x04040000);
            set_indexed_flags(arg0, 0, 0x0A000000);
        }
    }
block_end:
    ;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D54BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_attack_state__16TObjEneMerillLiaFPv(void *arg0);
void reset_action_state__16TObjEneMerillLiaFPv(void *arg0);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);

M2C_UNK obj_clearFlags30(void *, M2C_UNK);

void init_attack_state__16TObjEneMerillLiaFPv(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x326) = 4;
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    M2C_FIELD(arg0, s16 *, 0x374) = (s16) M2C_FIELD(arg0, s16 *, 0x3D8);
    obj_clearFlags30(arg0, 0x04240000);
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x0A000000);
}

M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK obj_setFlags30(void *, M2C_UNK);

void reset_action_state__16TObjEneMerillLiaFPv(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x326) = 0xA;
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    obj_setFlags30(arg0, 0x200000);
    obj_clearFlags30(arg0, 0x04040000);
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x0A000000);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D6C64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TObjEneMerillLia__create(void *arg0);
void *TObjControl__ct(void *, void *);
void *TObjEneMerillLia__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * TObjEneMerillLia__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3DC);
    if (o2 != NULL) {
        o2 = TObjEneMerillLia__ct(o2, o, arg0);
    }
    return o2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D6CCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_rocks__16TObjEneMerillLiaFv(void);
void free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);

extern u32 lbl_805D5210;
extern u32 lbl_805D5214;
extern u32 lbl_805D5218;
extern u32 TObjEneMerillLia__data_805D521C;
extern u32 TObjEneMerillLia__data_805D5220;

void destroy_rocks__16TObjEneMerillLiaFv(void) {
    if ((u32) lbl_805D5210 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5210);
        lbl_805D5210 = 0U;
    }
    if ((u32) lbl_805D5214 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5214);
        lbl_805D5214 = 0U;
    }
    if ((u32) lbl_805D5218 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5218);
        lbl_805D5218 = 0U;
    }
    if ((u32) TObjEneMerillLia__data_805D521C != 0U) {
        free__11TOBoss4RockFUi((void*)TObjEneMerillLia__data_805D521C);
        TObjEneMerillLia__data_805D521C = 0U;
    }
    if ((u32) TObjEneMerillLia__data_805D5220 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneMerillLia__data_805D5220, 1);
        TObjEneMerillLia__data_805D5220 = 0U;
    }
}

}
#endif
#endif
