#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef struct Unit { u8 pad[0x2C]; } Unit;

typedef struct Boss2 { u8 pad[0x20]; Unit units[0x1C]; } Boss2;

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 TObjPlayer__sub_8002EDCC(void *);
M2C_UNK create_particle__17TObjBoss2CeilJunkFv(void *, M2C_UNK);
void TObjPlayer__sub_8002E53C(u8 *arg0);
}

extern "C" {

void TObjBoss1Rock__sub_8002E3CC(void);
void TObjBoss1Rock__sub_8002E3D0(void);
void *TObjPlayer__sub_8002E5D4(void *arg0, s16 arg1);
void *construct__13TObjBoss1RockFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void TObjBoss1Rock__ct(void *, void *, void *, void *);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void deleting_dtor__10TObjPlayerFPvs(void *, int);

extern M2C_UNK lbl_80482078[];

void *construct__13TObjBoss1RockFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482078;
    TObjBoss1Rock__ct(arg0, arg2, arg3, arg4);
    return arg0;
}

void TObjBoss1Rock__sub_8002E3CC(void) {  }
void TObjBoss1Rock__sub_8002E3D0(void) {  }

extern M2C_UNK lbl_80482090[];

struct Ctr;
typedef struct Ctr Ctr;
void TObjPlayer__sub_8002E53C(u8 *arg0) {
    u8 *temp_r30;
    s32 var_r29;
    Boss2 *self;
    self = (Boss2 *)arg0;
    {
        s32 *ctr = (s32 *)(arg0 + 0x1C);
        *ctr += 1;
        if (*ctr >= 0xA0) {
            queue_destruction__7TObjectFv((void *)(arg0));
            return;
        }
    }
    var_r29 = 0;
    do {
        temp_r30 = (u8 *)&self->units[var_r29];
        if (TObjPlayer__sub_8002EDCC(temp_r30) != 0) {
            if ((var_r29 % 2) == 0) {
                create_particle__17TObjBoss2CeilJunkFv(temp_r30, 0x170);
            }
        }
        var_r29 += 1;
    } while (var_r29 < 0x1C);
}

void *TObjPlayer__sub_8002E5D4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482090;
        deleting_dtor__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
