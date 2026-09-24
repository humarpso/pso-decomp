#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_8005D6B0 { u8 pad[0x374]; s32 f374; };

extern "C" {
u8 TBoss4Uro__sub_8005D698(u8 *arg0);
void TBoss4Uro__sub_8005D6D4(u8 *arg0);
void fn_8005D6E4(u8 *arg0);
u8 TBoss4Zako__sub_8005D6B0(O_8005D6B0 *self);
}

extern "C" {

void *__dt__10TBoss4ZakoFPvs(void *arg0, s16 arg1);
s32 create__10TBoss4ZakoFi(s32 arg0);
void update_state3__10TBoss4ZakoFPv(void* p);
s32 TBoss4Zako__ct(s32, s32, s32);
int TBoss8Dragon__sub_8005D700(void);
s32 TObjControl__ct(s32, s32);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__9TObjEnemyFv(void *, M2C_UNK);
s32 __nw__7TObjectFUl(M2C_UNK);
int get_flag_bit6__12TBoss8DragonFPv(void* p);
M2C_UNK request_destroy__11TBoss4Type2FUi(void *);
int set_state3__10TBoss4ZakoFPv(void*);

void update_state3__10TBoss4ZakoFPv(void* p) { if (*(int*)((char*)p + 0x374) != 3) { set_state3__10TBoss4ZakoFPv(p); } }

extern M2C_UNK lbl_804876F8[];

void *__dt__10TBoss4ZakoFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804876F8;
        TObjEneGibbles__sub_80156720(arg0);
        M2C_FIELD(arg0, s32 *, 0x384) = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3B4) != 0U) {
            request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x3B4));
            M2C_FIELD(arg0, u32 *, 0x3B4) = 0U;
        }
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 tl_04;

s32 create__10TBoss4ZakoFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3C4);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss4Zako__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

u8 TBoss4Uro__sub_8005D698(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x374) != 3);
}

u8 TBoss4Zako__sub_8005D6B0(O_8005D6B0 *self) {
    return self->f374 == 1 || self->f374 == 2;
}

void TBoss4Uro__sub_8005D6D4(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) + 1);
}

void fn_8005D6E4(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) + 1);
}

}
