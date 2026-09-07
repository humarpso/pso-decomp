#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80194988___vt__10TObjMapCsn { M2C_UNK value; u8 remaining[0x38]; };
typedef char RecoveredGlobal_80194988___vt__10TObjMapCsn_size[sizeof(RecoveredGlobal_80194988___vt__10TObjMapCsn) == 0x3C ? 1 : -1];

extern "C" {
s32 get_map_count__10TObjMapCsnFv();
s32 fn_80140DFC(int, void *);
s32 destroy_particle_controller__10TObjPlayerFPvs(void *, int);
s32 __dl__7TObjectFPv(void *);
extern RecoveredGlobal_80194988___vt__10TObjMapCsn __vt__10TObjMapCsn;
u8 *__dt__10TObjMapCsnFv(u8 *arg0, s16 arg1);
}

extern "C" {

s32 create__10TObjMapCsnFi(s32 arg0);
void render__10TObjMapCsnFv(void);
void update_state__10TObjMapCsnFPv(void *arg0);
s32 TObjMapCsn__ct(s32, s32, s32);
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
        var_r31 = TObjMapCsn__ct(var_r31, get_map_count__10TObjMapCsnFv(), arg0);
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

}
