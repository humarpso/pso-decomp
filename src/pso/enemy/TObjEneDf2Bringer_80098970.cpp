#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneDf2Bringer__sub_80098970(u8 *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BACE0(void *, f32, f32, f32);
M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjEneDf2Bringer__sub_80098EB4(void *);
M2C_UNK TObjEneDf2Bringer__sub_80099148(void *);
M2C_UNK TObjEneDf2Bringer__sub_80099188(void *);
M2C_UNK TObjEneEpsilon__sub_800B96D4(void *, f32);
s32 TObjEneMe3ShinowaReal__sub_8002ADD8(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK fn_800F5EB4(void *, M2C_UNK);
M2C_UNK fn_80143504();
M2C_UNK fn_8022602C(M2C_UNK);
M2C_UNK fn_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

extern const f32 lbl_805D9820;
extern const f32 lbl_805D9824;

struct TBase { char pad[0x18]; };
struct TObj : TBase {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual M2C_UNK v3();
    virtual void v4();
    virtual M2C_UNK v5();
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
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
};

struct SubBase { char pad[0x14]; };
struct SubObj : SubBase {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual M2C_UNK v3();
    virtual void v4();
    virtual M2C_UNK v5();
};

void TObjEneDf2Bringer__sub_80098970(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        TObjEneDD__sub_800BBA04(arg0, 4);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 2);
        ((TObj *)arg0)->v93();
        ((SubObj *)(arg0 + 0x3C4))->v3();
        M2C_FIELD(arg0, s32 *, 0x4AC) = 0;
        M2C_FIELD(arg0, s32 *, 0x4B0) = 0;
        fn_8022675C(fn_800F5EB4(arg0, 0x3640D), arg0 + 0x38, 0, 0);
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
        VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
        M2C_FIELD(arg0, s32 *, 0x494) = 0;
        M2C_FIELD(arg0, s32 *, 0x48C) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4B0) == 2) {
            TObjEneDD__sub_800BBA18(arg0, 4);
        }
        return;
    case 0:
        fn_80143504();
        TObjEneEpsilon__sub_800B96D4(arg0, lbl_805D9820);
        M2C_FIELD(arg0, s32 *, 0x4AC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4AC) + 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4B0);
        switch (temp_r0) {
        case 0:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4AC) > 0x14) {
                M2C_FIELD(arg0, s32 *, 0x4B0) = 1;
                M2C_FIELD(arg0, s16 *, 0xB8) = 3;
                fn_8022675C(fn_800F5EB4(arg0, 0x4003B40E), arg0 + 0x38, 0, 0);
                fn_8022602C(-0x200);
            }
            TObjEneDf2Bringer__sub_80099188(arg0);
            TObjEneDD__sub_800BACE0(arg0, M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8), lbl_805D9824);
            TObjEneDf2Bringer__sub_80098EB4(arg0);
            break;
        case 1:
            TObjEneDf2Bringer__sub_80099148(arg0);
            if (TObjEneMe3ShinowaReal__sub_8002ADD8(arg0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x4B0) = 2;
            }
            break;
        }
        if (((SubObj *)(arg0 + 0x3C4))->v5() != 0) {
            M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFD);
            ((TObj *)arg0)->v94();
            ((TObj *)arg0)->v87();
            return;
        }
        break;
    case 5:
        ((TObj *)arg0)->v94();
        break;
    }
}

}
