#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80263C24 { char pad[0x18]; };
struct VObj_80263C24 : Base_80263C24 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

extern "C" {

s32 close_active_submenu__15TWindowMainMenuFPv(void *arg0);
M2C_UNK TWindowMainMenu__sub_80263D7C(void *);
M2C_UNK TWindowMainMenu__sub_80263DBC(void *);
M2C_UNK destroy_submenu__15TWindowMainMenuFPv();
M2C_UNK close_submenu__15TWindowMainMenuFPvPv(void *, u32);

s32 close_active_submenu__15TWindowMainMenuFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) & 0xFFFFFFFB);
    destroy_submenu__15TWindowMainMenuFPv();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) == 0U) {
        ((VObj_80263C24 *)arg0)->m6();
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x48) = 0x1F;
    TWindowMainMenu__sub_80263D7C(arg0);
    TWindowMainMenu__sub_80263DBC(arg0);
    close_submenu__15TWindowMainMenuFPvPv(arg0, M2C_FIELD(arg0, u32 *, 0x5C));
    return 1;
}

}
