#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_shake_preset__11TCameraCtrlFi(s32 arg0);
M2C_UNK queue_event_1D__12TBoss3VoloptFss(M2C_UNK, M2C_UNK, void *);

extern void *lbl_805D4DF0;
extern const f32 lbl_805D8FE8;
extern const f32 lbl_805D8FEC;
extern const f32 lbl_805D8FF0;

void set_shake_preset__11TCameraCtrlFi(s32 arg0) {
    void *p;

    if ((void *) lbl_805D4DF0 != NULL) {
        switch (arg0) {
        case 0:
            M2C_FIELD(lbl_805D4DF0, s32 *, 0x1C0) = 0x14;
            p = lbl_805D4DF0;
            M2C_FIELD(p, f32 *, 0x1C4) = (f32) lbl_805D8FE8;
            queue_event_1D__12TBoss3VoloptFss(0x60, 0x14, p);
            return;
        case 1:
            M2C_FIELD(lbl_805D4DF0, s32 *, 0x1C0) = 0x1E;
            p = lbl_805D4DF0;
            M2C_FIELD(p, f32 *, 0x1C4) = (f32) lbl_805D8FEC;
            queue_event_1D__12TBoss3VoloptFss(0xA0, 0x1E, p);
            return;
        case 2:
            M2C_FIELD(lbl_805D4DF0, s32 *, 0x1C0) = 0x1E;
            p = lbl_805D4DF0;
            M2C_FIELD(p, f32 *, 0x1C4) = (f32) lbl_805D8FF0;
            queue_event_1D__12TBoss3VoloptFss(0xE0, 0x1E, p);
            break;
        }
    }
}

}
