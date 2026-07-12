#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void action__17TObjEneDf2BringerFPvi(u8 *arg0, s32 arg1);
u32 TBoss4Type2__sub_800874F4(void *, M2C_UNK);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TParticleCtrl__sub_80088010(void *);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK TObjEnePanarms__sub_800F5EB4(void *, M2C_UNK);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK queue_destruction__7TObjectFv(void *);

struct TBase { char pad[0x18]; };
struct TObj : TBase {
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
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual M2C_UNK v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual M2C_UNK v100();
};

void action__17TObjEneDf2BringerFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        TObjEneDD__sub_800BBA04(arg0, 7);
        M2C_FIELD(arg0, u32 *, 0x4C4) = 0U;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x484) <= 0) {
            TObjEneDD__sub_800BBA18(arg0, 4);
        }
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        M2C_FIELD(arg0, s32 *, 0x484) = (s32) (M2C_FIELD(arg0, s32 *, 0x484) - 1);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C4) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x4C4) = TBoss4Type2__sub_800874F4(arg0 + 0x450, 0x100);
            if ((u32) M2C_FIELD(arg0, u32 *, 0x4C4) != 0U) {
                TParticleCtrl__sub_80088010(M2C_FIELD(arg0, void **, 0x4C4));
            }
        } else if (M2C_FIELD(arg0, s32 *, 0x484) & 1) {
            copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x4C4), arg0 + 0x450);
        } else {
            copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x4C4), arg0 + 0x45C);
        }
        ((TObj *)arg0)->v100();
        ((TObj *)arg0)->v87();
        TOTrapAncient01__sub_80226578(TObjEnePanarms__sub_800F5EB4(arg0, 0x4003AD0F), arg0, arg0 + 0x38, 0, 0);
        return;
    case 5:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C4) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4C4));
            M2C_FIELD(arg0, u32 *, 0x4C4) = 0U;
        }
        break;
    }
}

}
