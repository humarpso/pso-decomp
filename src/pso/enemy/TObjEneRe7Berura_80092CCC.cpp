#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct BeruraBase_800931C8_80093180 { char pad[0x14]; };
struct BeruraV_800931C8_80093180 : BeruraBase_800931C8_80093180 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

extern "C" {

void advance_state__16TObjEneRe7BeruraFv(void);
void demo_frame_callback__16TObjEneRe7BeruraFv(void);
M2C_UNK get_camera_ctrl__9TObjEneDDFPv(s32, s32);

extern s32 lbl_805D4F68;
extern s32 lbl_805D4F6C;
extern s32 some_id_805c6f74;

void advance_state__16TObjEneRe7BeruraFv(void) {
    switch ((s32) lbl_805D4F68) {
    case 25:
        lbl_805D4F6C = some_id_805c6f74;
        some_id_805c6f74 &= 0xFFFF7FFF;
        break;
    case 26:
        some_id_805c6f74 = lbl_805D4F6C;
        break;
    }
    lbl_805D4F68 += 1;
}

extern s32 lbl_805D4F68;
extern s32 lbl_805D4F6C;
extern s32 lbl_805D4F70;
extern s32 lbl_805D4F74;
extern s32 lbl_805D4F78;
extern void *lbl_805D4F7C;
extern s32 some_id_805c6f74;

void demo_frame_callback__16TObjEneRe7BeruraFv(void) {
    switch ((s32) lbl_805D4F68) {
    case 0x2:
        lbl_805D4F6C = some_id_805c6f74;
        some_id_805c6f74 &= 0xFFFF7FFF;
        break;
    case 0x3:
        some_id_805c6f74 = lbl_805D4F6C;
        break;
    case 0x4C:
    case 0x50:
        get_camera_ctrl__9TObjEneDDFPv(lbl_805D4F70, lbl_805D4F70);
        lbl_805D4F70 += 0xC;
        break;
    case 0x21:
        if ((s32) lbl_805D4F74 != 0) {
            ((BeruraV_800931C8_80093180 *)lbl_805D4F7C)->m6();
        }
        break;
    case 0x38:
        if ((s32) lbl_805D4F78 != 0) {
            ((BeruraV_800931C8_80093180 *)lbl_805D4F7C)->m6();
        }
        break;
    case 0x32:
        if ((s32) lbl_805D4F74 != 0) {
            ((BeruraV_800931C8_80093180 *)lbl_805D4F7C)->m7();
        }
        break;
    case 0x49:
        if ((s32) lbl_805D4F78 != 0) {
            ((BeruraV_800931C8_80093180 *)lbl_805D4F7C)->m7();
        }
        break;
    }
    lbl_805D4F68 += 1;
}

}
