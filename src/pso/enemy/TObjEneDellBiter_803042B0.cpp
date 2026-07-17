#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_attack_event__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK reset_timer__11TBoss4Type3FPv(int);
s32 TObjBoss2Tunnel__sub_8007E5A0(int, int, int, int, int);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
s32 TObjEneDellBiter__sub_803054FC(void *);
M2C_UNK TObjEneDellBiter__sub_80305B60(void *);
M2C_UNK TObjEneDellBiter__sub_80305E1C(void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, void *);
M2C_UNK fn_8002B094(int);
s32 objInBand__FP7GameObjf(void *, f32);

extern u8 *TObjEneDellBiter__data_805D6A2C;
extern const f32 TObjEneDellBiter__data_805DEFE4;
extern const f32 lbl_805DEFF0;

struct VObjBase_803042b0 { char pad_[0x18]; };
struct VObj_803042b0 : VObjBase_803042b0 {
#define VS8(n) virtual M2C_UNK m##n##0(); virtual M2C_UNK m##n##1(); virtual M2C_UNK m##n##2(); virtual M2C_UNK m##n##3(); virtual M2C_UNK m##n##4(); virtual M2C_UNK m##n##5(); virtual M2C_UNK m##n##6(); virtual M2C_UNK m##n##7(); virtual M2C_UNK m##n##8(); virtual M2C_UNK m##n##9();
    VS8(0) VS8(1) VS8(2) VS8(3) VS8(4) VS8(5) VS8(6) VS8(7) VS8(8) VS8(9)
    virtual M2C_UNK m100();
};

void handle_attack_event__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 4;
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (5));
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 4);
        fn_8002B094((int) (M2C_FIELD(arg0, s32 *, 0x4A0)));
        reset_timer__11TBoss4Type3FPv((int) (M2C_FIELD(arg0, s32 *, 0x4A4)));
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
        M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
        M2C_FIELD(arg0, s32 *, 0x48C) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4D0) == 2) {
            M2C_FIELD(arg0, s32 *, 0x488) = (s32) (M2C_FIELD(arg0, s32 *, 0x488) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x488) >= 2) {
                M2C_FIELD(arg0, s32 *, 0x488) = 0;
                M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF7);
            }
            if (TObjEneDellBiter__sub_803054FC((void *) (arg0)) == 0) {
                TObjEneDD__sub_800BBA18((void *) (arg0), (int) (5));
            }
        }
        break;
    case 0:
        TBoss1Dragon__sub_80143504();
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x60);
        M2C_FIELD(arg0, s32 *, 0x484) = TObjBoss2Tunnel__sub_8007E5A0((int) (temp_r3), (int) (M2C_FIELD(arg0, s32 *, 0x484)), (int) (temp_r3), (int) (0x200), (int) (0x2000));
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4D0);
        switch (temp_r0) {
        case 0:
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneDellBiter__data_805DEFE4)) != 0) {
                TObjEneDellBiter__sub_80305B60((void *) (arg0));
            }
            TObjEneDellBiter__sub_80305E1C((void *) (arg0));
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DEFF0)) != 0) {
                TBoss3Volopt__sub_8022675C((int) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (void *) (0x40039E16))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            }
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 0;
                M2C_FIELD(arg0, s32 *, 0x4D0) = 1;
                M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x4CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4CC) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4CC) >= (s32) M2C_FIELD(TObjEneDellBiter__data_805D6A2C, s32 *, 0x18)) {
                M2C_FIELD(arg0, s32 *, 0x4D0) = 2;
            }
            break;
        }
        ((VObj_803042b0 *) arg0)->m100();
        ((VObj_803042b0 *) arg0)->m87();
        break;
    case 5:
        break;
    }
}

}
