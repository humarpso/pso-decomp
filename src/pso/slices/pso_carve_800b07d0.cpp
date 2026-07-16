#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBaseB0 { char pad[0x18]; };
struct VObjB0 : VBaseB0 {
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual s32 v18(void *, f32);
    virtual void v19(); virtual void v20(void *, f32);
    virtual void v21(); virtual void v22(); virtual void v23(void *, f32);
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67();
    virtual void v68(); virtual void v69(); virtual void v70(); virtual void v71();
    virtual void v72(); virtual void v73(); virtual void v74(); virtual void v75();
    virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
    virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83();
    virtual void v84(); virtual void v85(); virtual void v86(); virtual void v87();
    virtual void v88(); virtual void v89(); virtual void v90(); virtual void v91();
    virtual void v92(); virtual void v93(); virtual void v94();
};

extern "C" {

f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 TObjEneMe3ShinowaReal__sub_8002ADD8(void *);
M2C_UNK TObjEneBm3Fly__sub_800B15C4(void *);
s32 TObjEneBm3Fly__sub_800B177C(void *);
f32 approach_value__13TObjEneBm3FlyFff(void *, f32, f32);
M2C_UNK TObjEneBm3Fly__sub_800B1978(void *);
M2C_UNK update_state_flag__13TObjEneBm3FlyFPv(void *);
M2C_UNK update_collide_flag__13TObjEneBm3FlyFPv(void *);
M2C_UNK update_height_offset__13TObjEneBm3FlyFPv(void *);
s32 update_death_check__14TObjEneEpsilonFPv(void *);
M2C_UNK fn_800B98C0(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
s32 check_v2_mode__9TObjEneDDFv();
M2C_UNK TObjEneDD__sub_800BA3D8(void *, void *);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, int, int);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern u8 *lbl_805D50EC;
extern const f32 TObjEneBm3Fly__data_805D9C88;
extern const f32 lbl_805D9CAC;
extern const f32 lbl_805D9CB0;
extern const f32 lbl_805D9CB4;
extern const f32 lbl_805D9CB8;

void TObjEneBm3Fly__sub_800B07D0(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((VObjB0 *)arg0)->v94();
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 2);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFEFFFFFF);
        M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
        M2C_FIELD(arg0, s32 *, 0x454) = 1;
        return;
    case 3:
        if (M2C_FIELD(arg0, f32 *, 0x3AC) > lbl_805D9CAC) {
            TObjEneDD__sub_800BBA18((void *) (arg0), (int) (5));
            return;
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x3C0);
        switch (temp_r0) {
        case 0:
        case 1:
            if ((void *) M2C_FIELD(arg0, void **, 0x390) == NULL) {
                TObjEneDD__sub_800BBA18((void *) (arg0), (int) (5));
            }
        case 2:
            return;
        case 3:
            TObjEneDD__sub_800BBA18((void *) (arg0), (int) (4));
            return;
        }
        break;
    case 0:
        TBoss1Dragon__sub_80143504();
        if (update_death_check__14TObjEneEpsilonFPv((void *) (arg0)) == 0) {
            fn_800B98C0((void *) (arg0));
        }
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3C0);
        switch (temp_r0_2) {
        case 0:
            if ((void *) M2C_FIELD(arg0, void **, 0x390) != NULL) {
                update_height_offset__13TObjEneBm3FlyFPv((void *) (arg0));
            }
            update_velocity__9TObjEneDDFPv((void *) (arg0));
            M2C_FIELD(arg0, f32 *, 0x430) = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)));
            M2C_FIELD(arg0, f32 *, 0x438) = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
            update_state_flag__13TObjEneBm3FlyFPv((void *) (arg0));
            M2C_FIELD(arg0, f32 *, 0x42C) = approach_value__13TObjEneBm3FlyFff((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x42C)), (f32) (M2C_FIELD(arg0, f32 *, 0x398)));
            TObjEneBm3Fly__sub_800B1978((void *) (arg0));
            if (TObjEneBm3Fly__sub_800B177C((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 0;
                M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) >= (s32) M2C_FIELD(lbl_805D50EC, s32 *, 0x1C)) {
                M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
                M2C_FIELD(arg0, s32 *, 0x3C0) = 2;
                M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            }
            update_collide_flag__13TObjEneBm3FlyFPv((void *) (arg0));
            break;
        case 2:
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D9CB0)) != 0) {
                M2C_FIELD(arg0, s32 *, 0x440) = (s32) (M2C_FIELD(arg0, s32 *, 0x440) + 1);
                temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
                if ((temp_r3 != NULL) && (((VObjB0 *)temp_r3)->v18(arg0, TObjEneBm3Fly__data_805D9C88) != 0)) {
                    temp_r3_2 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
                    ((VObjB0 *)temp_r3_2)->v20(arg0, TObjEneBm3Fly__data_805D9C88);
                    temp_r3_3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x390));
                    ((VObjB0 *)temp_r3_3)->v23(arg0, lbl_805D9CB4);
                    if ((check_v2_mode__9TObjEneDDFv() != 0) && (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) < lbl_805D9CB8)) {
                        TObjEneDD__sub_800BA3D8((void *) (arg0), (void *) (M2C_FIELD(arg0, void **, 0x390)));
                    }
                }
                TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003A524)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                play_effect_if_v2__10TObjPlayerFi((int) (-0x400));
            }
            if (TObjEneMe3ShinowaReal__sub_8002ADD8((void *) (arg0)) != 0) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x440) >= 4) {
                    M2C_FIELD(arg0, s32 *, 0x440) = 0;
                    M2C_FIELD(arg0, s32 *, 0x3C0) = 3;
                } else {
                    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
                    M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
                }
            }
            update_collide_flag__13TObjEneBm3FlyFPv((void *) (arg0));
            break;
        }
        ((VObjB0 *)arg0)->v87();
        TObjEneBm3Fly__sub_800B15C4((void *) (arg0));
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x454) = 0;
        break;
    }
}

}
