#include "types.h"
struct VBase_8011E2AC { char pad[0x18]; };

struct VObj_8011E2AC : VBase_8011E2AC {
    virtual void m0();
    virtual void m1();
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
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual s32 m30();
};

extern "C" {
void set_status_flags__10TObjPlayerFPvUi(void *, u32);
void set_weapon_category_flags(u8 *arg0);
}

extern "C" {

void set_weapon_category_flags(u8 *arg0) {
    s32 r = ((VObj_8011E2AC *)arg0)->m30();
    u32 flags = 0x10000;
    if (r & 1) {
        flags = 0x20000;
    }
    set_status_flags__10TObjPlayerFPvUi(arg0, flags);
}

}
