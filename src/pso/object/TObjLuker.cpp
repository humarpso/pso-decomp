#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void allow_rendering__7TObjectFv(void *);
void clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
void TObjLuker__sub_801A0C7C(s32 arg0, s32 arg1);
}

extern "C" {

void *TObjLuker__create(void *arg0);
void render__9TObjLukerFv(void);
void *TObjLuker__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

#pragma push
#pragma opt_common_subs off
void TObjLuker__sub_801A0C7C(s32 arg0, s32 arg1) {
    u8 *temp_r31;
    u8 *temp_r3;
    temp_r31 = (u8 *)(arg0 + ((arg1 * 4) & 0x3FFFC));
    temp_r3 = (u8 *)(M2C_FIELD(temp_r31, u8 **, 0x90));
    if (temp_r3 != NULL) {
        if (M2C_FIELD(temp_r3, u16 *, 4) & 4) {
            TBoss3Volopt__sub_8022675C(0x53703, 0U, 0, 0);
        }
        clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(temp_r31, u8 **, 0x90));
        allow_rendering__7TObjectFv(M2C_FIELD(temp_r31, u8 **, 0x90));
    }
}
#pragma pop

void render__9TObjLukerFv(void) {  }

extern void *tl_05;

void *TObjLuker__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjLuker__ct(o, tl_05, arg0);
    }
    return o;
}

}
