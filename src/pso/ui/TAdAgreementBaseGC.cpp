#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_fbe024 { char pad[0x18]; };

struct VObj_18_fbe024 : VBase_18_fbe024 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual u32 m8();
};

struct RecoveredGlobal_80329830_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_80329830_lbl_8050E3B8 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 get_selected_slot__23TAdSinglePlyChrSelectGCFPv(int);
s32 TAdSinglePlyChrSelectGC__sub_801334DC(int);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
M2C_UNK TWindow__close(void *);
extern RecoveredGlobal_80329830_lbl_8050E208 lbl_8050E208;
extern RecoveredGlobal_80329830_lbl_8050E3B8 lbl_8050E3B8;
extern const f32 lbl_805DF710;
void TAdAgreementBaseGC__sub_80329830(u8 *arg0);
}

extern "C" {

void TAdAgreementBaseGC__sub_803297EC(void* p);
void TAdAgreementBaseGC__vt4(void);
void TAdAgreementBaseGC__vt5(void);
void TAdAgreementBaseGC__vt6(void);
void *__dt__18TAdAgreementBaseGCFv(void *arg0, s16 arg1);
void fn_80329BAC(void* p);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

void TAdAgreementBaseGC__sub_803297EC(void* p) { *(s32*)((char*)p + 0x1c) = 4; }

extern M2C_UNK __vt__18TAdAgreementBaseGC[];

typedef char RecoveredGlobal_80329830_lbl_8050E208_size[sizeof(RecoveredGlobal_80329830_lbl_8050E208) == 0x1B0 ? 1 : -1];
typedef char RecoveredGlobal_80329830_lbl_8050E3B8_size[sizeof(RecoveredGlobal_80329830_lbl_8050E3B8) == 0x1B0 ? 1 : -1];
void TAdAgreementBaseGC__sub_80329830(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r4;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, u32 *, 0x2C) = ((VObj_18_fbe024 *)(arg0))->m8();
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        break;
    case 1:
        if (get_selected_slot__23TAdSinglePlyChrSelectGCFPv((int) (M2C_FIELD(arg0, s32 *, 0x30))) == 1) {
            temp_r3 = TAdSinglePlyChrSelectGC__sub_801334DC((int) (M2C_FIELD(arg0, s32 *, 0x30)));
            switch (temp_r3) {
            case 0:
                M2C_FIELD(arg0, s32 *, 0x1C) = 2;
                M2C_FIELD(arg0, s32 *, 0x24) = 3;
                break;
            case 1:
                M2C_FIELD(arg0, s32 *, 0x1C) = 2;
                M2C_FIELD(arg0, s32 *, 0x24) = 4;
                break;
            }
        } else if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&lbl_8050E3B8.value + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (2)) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
            M2C_FIELD(arg0, s32 *, 0x24) = 5;
        }
        break;
    case 2:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        ((VObj_18_fbe024 *)(arg0))->m4();
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x28) + 1;
        M2C_FIELD(arg0, s32 *, 0x28) = temp_r4;
        if ((f32) temp_r4 > lbl_805DF710) {
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
        }
        break;
    case 3:
        ((VObj_18_fbe024 *)(arg0))->m5();
        break;
    case 4:
        ((VObj_18_fbe024 *)(arg0))->m6();
        break;
    case 5:
        ((VObj_18_fbe024 *)(arg0))->m7();
        break;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != (s32) M2C_FIELD(arg0, s32 *, 0x1C)) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
}

void *__dt__18TAdAgreementBaseGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TAdAgreementBaseGC;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TAdAgreementBaseGC__vt4(void) {  }
void TAdAgreementBaseGC__vt5(void) {  }
void TAdAgreementBaseGC__vt6(void) {  }
void fn_80329BAC(void* p) { *(s32*)((char*)p + 0xb8) = 1; }

}
