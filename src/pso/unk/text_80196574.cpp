#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_80196574_lbl_804A7428 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80196574_lbl_804A7438 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
M2C_UNK fn_80141CBC(void *, void *, int, f32);
M2C_UNK TObjRoomId__sub_80141CF4(void *, void *, f32);
extern RecoveredGlobal_80196574_lbl_804A7428 lbl_804A7428;
extern RecoveredGlobal_80196574_lbl_804A7438 lbl_804A7438;
extern const f32 lbl_805DBEF8;
extern const f32 lbl_805DBEFC;
extern const f32 lbl_805DBF00;
void TObjQuestColALock__vt12(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_80196574_lbl_804A7428_size[sizeof(RecoveredGlobal_80196574_lbl_804A7428) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_80196574_lbl_804A7438_size[sizeof(RecoveredGlobal_80196574_lbl_804A7438) == 0x10 ? 1 : -1];
void TObjQuestColALock__vt12(u8 *arg0) {
    u8 *temp_r5;
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DBEF8, lbl_805DBEFC) != 0) {
        TObjRoomId__sub_80141CF4((void *) (arg0 + 0x38), (void *) (&lbl_804A7438.value), (f32) (lbl_805DBF00 * M2C_FIELD(arg0, f32 *, 0xAC)));
        temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        fn_80141CBC((void *) (arg0 + 0x38), (void *) (&lbl_804A7428.value), (int) (temp_r5), (f32) (lbl_805DBF00 * M2C_FIELD(temp_r5, f32 *, 0xC)));
    }
}

}
