#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80194988___vt__10TObjMapCsn { M2C_UNK value; u8 remaining[0x38]; };
typedef char RecoveredGlobal_80194988___vt__10TObjMapCsn_size[sizeof(RecoveredGlobal_80194988___vt__10TObjMapCsn) == 0x3C ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_801949FC___vt__10TObjMapCsn { M2C_UNK value; u8 remaining[0x38]; };

extern "C" {
s32 get_map_count__10TObjMapCsnFv();
s32 fn_80140DFC(int, void *);
s32 destroy_particle_controller__10TObjPlayerFPvs(void *, int);
s32 __dl__7TObjectFPv(void *);
extern RecoveredGlobal_80194988___vt__10TObjMapCsn __vt__10TObjMapCsn;
u8 *__dt__10TObjMapCsnFv(u8 *arg0, s16 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_map_count__10TObjMapCsnFv();
s32 fn_80140EA8(int, void *);
s32 TObjPlayer__sub_801569F4(void *);
void update_state__10TObjMapCsnFPv(void *arg0);
s32 TObjMapCsn__sub_801946D0(void *);
extern RecoveredGlobal_80194988___vt__10TObjMapCsn __vt__10TObjMapCsn;
extern s32 lbl_805D2CD0;
extern const f32 lbl_805DBEC0;
u8 *TObjMapCsn__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

s32 create__10TObjMapCsnFi(s32 arg0);
void render__10TObjMapCsnFv(void);
void update_state__10TObjMapCsnFPv(void *arg0);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 get_map_count__10TObjMapCsnFv();

void render__10TObjMapCsnFv(void) {  }

extern M2C_UNK lbl_804B84C0[];

void update_state__10TObjMapCsnFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x84);
    if (temp_r0 == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x88) == 0) {
            M2C_FIELD(arg0, s32 *, 0x88) = 1;
        }
    } else {
        if ((u32) temp_r0 > 5U) {
            M2C_FIELD(arg0, s32 *, 0x84) = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x88) = (s32) lbl_804B84C0[M2C_FIELD(arg0, s32 *, 0x84)];
    }
    M2C_FIELD(arg0, s32 *, 0x88) = (s32) (M2C_FIELD(arg0, s32 *, 0x88) | 0x40000000);
}

s32 create__10TObjMapCsnFi(s32 arg0) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x254);
    if (var_r31 != 0) {
        var_r31 = ((s32)TObjMapCsn__ct((u8 *)(var_r31), (M2C_UNK)(get_map_count__10TObjMapCsnFv()), (s32)(arg0)));
    }
    return var_r31;
}
u8 *__dt__10TObjMapCsnFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__10TObjMapCsn.value;
        if (((u32)get_map_count__10TObjMapCsnFv()) != 0U) {
            fn_80140DFC((int) (((u32)get_map_count__10TObjMapCsnFv())), (void *) (arg0));
        }
        destroy_particle_controller__10TObjPlayerFPvs((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}
u8 *TObjMapCsn__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    f32 temp_f0;
    f32 temp_f1;
    TObjPlayer__sub_801569F4((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801949FC___vt__10TObjMapCsn *)&__vt__10TObjMapCsn).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2CD0;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000000);
    update_state__10TObjMapCsnFPv((void *) (arg0));
    TObjMapCsn__sub_801946D0((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0xC4) = 8;
    M2C_FIELD(arg0, u8 **, 0xC8) = (unsigned char *) ((void *) (arg0 + 0x1F4));
    M2C_FIELD(arg0, s32 *, 0xCC) = 8;
    M2C_FIELD(arg0, u8 **, 0xD0) = (unsigned char *) ((void *) (arg0 + 0xD4));
    M2C_FIELD(arg0, u8 **, 0xAC) = (unsigned char *) ((void *) (arg0 + 0xC4));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xB0), (void *) (arg0 + 0x38));
    temp_f1 = lbl_805DBEC0 * M2C_FIELD(arg0, f32 *, 0x68);
    temp_f0 = lbl_805DBEC0 * M2C_FIELD(arg0, f32 *, 0x70);
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) ((temp_f1 * temp_f1) + (temp_f0 * temp_f0));
    M2C_FIELD(arg0, s32 *, 0xC0) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    if (((u32)get_map_count__10TObjMapCsnFv()) != 0U) {
        fn_80140EA8((int) (((u32)get_map_count__10TObjMapCsnFv())), (void *) (arg0));
    }
    return arg0;
}

}
