#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_97738d { char pad[0x18]; };

struct VObj_18_97738d : VBase_18_97738d {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual M2C_UNK m7(M2C_UNK, M2C_UNK);
};

struct RecoveredGlobal_80214254_THunterGuildSeqOffline__data_80513DC8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
void set_field_20__12TQuestListVMFPvi(void *, s32);
s32 TQuestThread__sub_801F5C50(s32);
void TWindow__close(void *);
s32 TWindowSubComCard__sub_80265BF8(void *);
extern RecoveredGlobal_80214254_THunterGuildSeqOffline__data_80513DC8 THunterGuildSeqOffline__data_80513DC8;
void fn_80214254(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_80214254_THunterGuildSeqOffline__data_80513DC8_size[sizeof(RecoveredGlobal_80214254_THunterGuildSeqOffline__data_80513DC8) == 0x10 ? 1 : -1];
void fn_80214254(u8 *arg0) {
    s32 temp_r3_2;
    u8 *temp_r3;
    u8 *temp_r3_3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x38));
    if ((temp_r3 != NULL) && (is_visible__17TWindowSubComCardFPv(temp_r3) != 0)) {
        temp_r3_2 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u8 **, 0x38));
        switch (temp_r3_2) {
        case 0:
            TWindow__close(M2C_FIELD(arg0, u8 **, 0x38));
            M2C_FIELD(arg0, u8 **, 0x38) = NULL;
            ((VObj_18_97738d *)(arg0))->m7(9, 1);
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
            if ((s32) M2C_FIELD(&THunterGuildSeqOffline__data_80513DC8.value, s32 *, 8) != -1) {
                M2C_FIELD(arg0, s32 *, 0x3C) = TQuestThread__sub_801F5C50(M2C_FIELD(&THunterGuildSeqOffline__data_80513DC8.value, s32 *, 8));
            }
            set_field_20__12TQuestListVMFPvi(arg0, 0xC);
            break;
        case 1:
            TWindow__close(M2C_FIELD(arg0, u8 **, 0x38));
            M2C_FIELD(arg0, u8 **, 0x38) = NULL;
            ((VObj_18_97738d *)(arg0))->m7(0xA, 1);
            M2C_FIELD(arg0, s32 *, 0x34) = 0;
            set_field_20__12TQuestListVMFPvi(arg0, 0xC);
            break;
        }
    }
    temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x38));
    if ((temp_r3_3 != NULL) && (get_status_flag__17TWindowSubComCardFPv(temp_r3_3) != 0)) {
        TWindow__close(M2C_FIELD(arg0, u8 **, 0x38));
        M2C_FIELD(arg0, u8 **, 0x38) = NULL;
        ((VObj_18_97738d *)(arg0))->m7(0xA, 1);
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        set_field_20__12TQuestListVMFPvi(arg0, 0xC);
    }
}

}
