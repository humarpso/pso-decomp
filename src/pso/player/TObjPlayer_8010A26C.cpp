#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8010A26C { char pad[0x18]; };
struct VObj_8010A26C : Base_8010A26C {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual M2C_UNK m63(M2C_UNK, M2C_UNK *);
};

extern "C" {

void TObjPlayer__sub_8010A26C(void *arg0);
u32 TBoss4Type2__sub_800874F4(M2C_UNK *, M2C_UNK);
s32 TObjPlayer__sub_800196EC();
s32 TObjPlayer__sub_800196F4(void *);
u32 TObjPlayer__sub_80019704(void *);
u8 TObjPlayer__sub_8001972C();
u32 TObjPlayer__sub_80102AA8();
s32 TObjPlayer__sub_802034EC();
M2C_UNK TParticleCtrl__sub_80088000(u32);
M2C_UNK TParticleCtrl__sub_80088010(u32);
VObj_8010A26C *TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK copy_pos__11TNowLoadingFPvPv(u32, M2C_UNK *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void TObjPlayer__sub_8010A26C(void *arg0) {
    M2C_UNK sp8[6];
    s32 temp_r3_2;
    u32 temp_r3_3;
    VObj_8010A26C *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != TObjPlayer__sub_80102AA8()) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x24));
    if (temp_r3 != NULL) {
        temp_r3->m63(0x24, sp8);
        temp_r3_2 = TObjPlayer__sub_800196EC();
        if (temp_r3_2 != (s32) M2C_FIELD(arg0, s32 *, 0x20)) {
            M2C_FIELD(arg0, s32 *, 0x20) = temp_r3_2;
            if ((TObjPlayer__sub_802034EC() != 0) && (temp_r3_2 == TObjPlayer__sub_800196F4(temp_r3))) {
                M2C_FIELD(arg0, u32 *, 0x1C) = TBoss4Type2__sub_800874F4(sp8, 0x101);
            } else {
                M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
            }
        }
        temp_r3_3 = TObjPlayer__sub_80019704(temp_r3);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
            s32 var_r30 = 0;
            if ((temp_r3_3 != 0U) && (TObjPlayer__sub_8001972C() == 0x1A)) {
                var_r30 = 1;
            }
            if (var_r30 != 0) {
                TParticleCtrl__sub_80088000(M2C_FIELD(arg0, u32 *, 0x1C));
            } else {
                TParticleCtrl__sub_80088010(M2C_FIELD(arg0, u32 *, 0x1C));
            }
            copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, u32 *, 0x1C), sp8);
        }
    } else {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
