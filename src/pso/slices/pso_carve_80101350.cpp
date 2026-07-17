#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_80101350 { char pad[0x18]; };
struct VObj_80101350 : Base_80101350 {
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17(s32);
};

extern "C" {

struct VObj_80101350 *TLobby__sub_80101AB0(s32);
M2C_UNK swap_6x61_fields__10TObjPlayerFPv(void *);
s32 get_global_state__14TOKeyMachine01Fv();

void handle_6x61_activate_mag_effect(void *arg0) {
    struct VObj_80101350 *obj;

    if (get_global_state__14TOKeyMachine01Fv() != 0xF) {
        swap_6x61_fields__10TObjPlayerFPv(arg0);
        obj = TLobby__sub_80101AB0(M2C_FIELD(arg0, s32 *, 4));
        if ((obj != NULL) && ((u32) M2C_FIELD(obj, u32 *, 0xF0) != 0U)) {
            obj->m17(M2C_FIELD(arg0, s32 *, 8));
        }
    }
}

}
