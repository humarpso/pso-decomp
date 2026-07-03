#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80029724 { char pad[0x18]; };
struct VObj_80029724 : Base_80029724 {
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
    virtual M2C_UNK vcall(s16 a, int b);
};

extern "C" {

void TBoss1Dragon__sub_80029724(void *arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 fn_80028194(void *);
s32 fn_800281F0(void *);
M2C_UNK fn_800284B4(void *, M2C_UNK);
s32 fn_800291D4();

extern s32 enable_v2_features;
extern s32 lbl_805D4B34;

void TBoss1Dragon__sub_80029724(void *arg0) {
    if (fn_800291D4() != 0) {
        if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 0x400)) {
            if (fn_800281F0(arg0) == 0) {
                if (fn_80028194(arg0) != 0) {
                    return;
                }
                goto block_12;
            }
        } else {
            goto block_12;
        }
    } else {
        if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 0x800) && (M2C_FIELD(arg0, s16 *, 0x32C) <= 0)) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3E4) == 1) {
                if ((s32) enable_v2_features != 0) {
                    fn_800284B4(arg0, 0xC);
                    return;
                }
                TObjEneDD__sub_800BBA18(arg0, 0xC);
                return;
            }
            fn_800284B4(arg0, 0x15);
            return;
        }
block_12:
        if ((s32) lbl_805D4B34 != 0) {
            ((VObj_80029724 *) arg0)->vcall(M2C_FIELD(arg0, s16 *, 0x326), 2);
            return;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x760) != 0) {
            ((VObj_80029724 *) arg0)->vcall(M2C_FIELD(arg0, s16 *, 0x326), 0xB);
            return;
        }
        ((VObj_80029724 *) arg0)->vcall(M2C_FIELD(arg0, s16 *, 0x326), 9);
    }
}

}
