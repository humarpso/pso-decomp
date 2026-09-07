#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8023CD48___vt__9TTecZonde { M2C_UNK value; u8 remaining[0x24]; };
typedef char RecoveredGlobal_8023CD48___vt__9TTecZonde_size[sizeof(RecoveredGlobal_8023CD48___vt__9TTecZonde) == 0x28 ? 1 : -1];

extern "C" {
u16 obj_getField1c(void *);
s32 TObjPlayer__sub_8004433C(s32);
void TTecAnti__sub_8022B3E8(void *, void *);
u8 * TObjPlayer__sub_8023AA4C(void *, s32, void *, s32, s16);
void fn_8023C558(void *);
extern M2C_UNK __vt__9TTecZonde[];
extern s32 lbl_805D3838;
u8 *TTecZonde__ct(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, s16 arg4);
}

extern "C" {

void *__dt__9TTecZondeFv(void *arg0, s16 arg1);
void render__9TTecZondeFv(void);
void __dl__7TObjectFPv(void *);
void destroy_technique_effect_resources__10TObjPlayerFPvs(void *, int);

extern M2C_UNK __vt__9TTecZonde[];

void *__dt__9TTecZondeFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TTecZonde;
        destroy_technique_effect_resources__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void render__9TTecZondeFv(void) {  }
u8 *TTecZonde__ct(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, s16 arg4) {
    u8 *temp_r3;
    TObjPlayer__sub_8023AA4C(arg0, arg1, arg2, 0, arg4);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8023CD48___vt__9TTecZonde *)&__vt__9TTecZonde).value;
    TObjPlayer__sub_8004433C((s32) (arg0 + 0x130));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3838;
    fn_8023C558(arg0);
    TTecAnti__sub_8022B3E8(arg0 + 0x130, arg3);
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x1C));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, u16 *, 0xC8) = obj_getField1c(temp_r3);
    }
    return arg0;
}

}
