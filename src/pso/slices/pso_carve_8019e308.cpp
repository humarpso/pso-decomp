#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)

struct P_A { char pad[0x18]; };
struct P_V : P_A {
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual s32 m31();
};

extern "C" {

M2C_UNK fn_8001A438(void *);
M2C_UNK allow_rendering__7TObjectFv(u32);
M2C_UNK disallow_rendering__7TObjectFv(u32);
M2C_UNK TQuestVmDownLoadServer__sub_80080788(void *);
s32 check_flag_100__10TObjPlayerFPv(void *);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern s32 lbl_805D53A0;

void fn_8019E308(void *arg0) {
    void *temp_r3;
    s32 var_r30;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    var_r30 = 1;
    if ((temp_r3 != NULL) && (((P_V *) temp_r3)->m31() != 0)) {
        var_r30 = 0;
    }
    if ((temp_r3 != NULL) && (check_flag_100__10TObjPlayerFPv(temp_r3) != 0)) {
        var_r30 = 0;
    }
    if (var_r30 == 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x168) != 0U) {
            fn_8001A438(M2C_FIELD(arg0, void **, 0x168));
            disallow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0x168));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
            fn_8001A438(M2C_FIELD(arg0, void **, 0xB0));
            disallow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0xB0));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x164) != 0U) {
            fn_8001A438(M2C_FIELD(arg0, void **, 0x164));
            disallow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0x164));
        }
    } else {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x168) != 0U) {
            TQuestVmDownLoadServer__sub_80080788(M2C_FIELD(arg0, void **, 0x168));
            allow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0x168));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
            TQuestVmDownLoadServer__sub_80080788(M2C_FIELD(arg0, void **, 0xB0));
            allow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0xB0));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x164) != 0U) {
            TQuestVmDownLoadServer__sub_80080788(M2C_FIELD(arg0, void **, 0x164));
            allow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0x164));
        }
    }
}

}
