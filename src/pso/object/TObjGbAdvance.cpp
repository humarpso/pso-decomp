#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80187F78_lbl_804B6280 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80187F78___vt__13TObjGbAdvance {
    M2C_UNK value;
    u8 remaining[0x40];
};

extern "C" {
void reset_photon_effect__10TObjPlayerFPv(s32);
u32 TObjEneGibbles__sub_80156780(void *, s32, s32);
void set_type__14TOKeyAncient01FPv(void *);
u8 * TObjMesBase__ct(void *, s32);
extern RecoveredGlobal_80187F78_lbl_804B6280 lbl_804B6280;
extern M2C_UNK __vt__13TObjGbAdvance[];
extern s32 lbl_805D32D0;
u8 *TObjGbAdvance__ct(u8 *arg0, s32 arg1);
s32 get_bml_model(void *, s32);
void TObjMesBase__sub_80194AEC(void *);
void set_global_count__12TObjNpcEnemyFi(int);
void TObjEneBm5GibonU__sub_803D853C(s32 id, const char *fmt, ...);
extern char lbl_80444B48[];
extern u32 TObjComputer__data_805D5B68;
extern s16 TObjComputer__data_805DBCD8[2];
void TObjComputer__vt14(void *arg0);
}

extern "C" {

void TObjGbAdvance__vt12(void *arg0);
void *__dt__13TObjGbAdvanceFv(void *arg0, s16 arg1);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjMesBase__vt12();
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__11TObjMesBaseFv(void *, M2C_UNK);

void TObjGbAdvance__vt12(void *arg0) {
    TObjMesBase__vt12();
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) != 0) {
        submit_cursor_candidate(arg0, -1);
    }
}

extern M2C_UNK __vt__13TObjGbAdvance[];

void *__dt__13TObjGbAdvanceFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjGbAdvance;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__11TObjMesBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80187F78_lbl_804B6280_size[sizeof(RecoveredGlobal_80187F78_lbl_804B6280) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80187F78___vt__13TObjGbAdvance_size[sizeof(RecoveredGlobal_80187F78___vt__13TObjGbAdvance) == 0x44 ? 1 : -1];
u8 *TObjGbAdvance__ct(u8 *arg0, s32 arg1) {
    TObjMesBase__ct(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80187F78___vt__13TObjGbAdvance *)&__vt__13TObjGbAdvance).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D32D0;
    TObjEneGibbles__sub_80156780(arg0, (s32) &lbl_804B6280.value, 1);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000000);
    reset_photon_effect__10TObjPlayerFPv((s32) arg0);
    set_type__14TOKeyAncient01FPv(arg0 + 0x98);
    return arg0;
}
void TObjComputer__vt14(void *arg0) {
    TObjMesBase__sub_80194AEC(arg0);
    M2C_FIELD(arg0, s32 *, 0x88) = M2C_FIELD(arg0, s32 *, 0x88) % 2;
    M2C_FIELD(arg0, s32 *, 0xBC) = get_bml_model((void *)TObjComputer__data_805D5B68, TObjComputer__data_805DBCD8[M2C_FIELD(arg0, s32 *, 0x88)]);
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    TObjEneBm5GibonU__sub_803D853C(0x130021, lbl_80444B48);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

}
