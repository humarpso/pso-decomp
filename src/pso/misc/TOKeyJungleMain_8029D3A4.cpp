#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8029D3A4 { char pad[0x18]; };
struct VObj_8029D3A4 : Base_8029D3A4 {
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
};

extern "C" {

void TOKeyJungleMain__vt15(void *arg0);
void *__dt__15TOKeyJungleMainFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);

void TOKeyJungleMain__vt15(void *arg0) {
    struct VObj_8029D3A4 *o = (struct VObj_8029D3A4 *)arg0;
    o->m18();
}

extern M2C_UNK __vt__15TOKeyJungleMain[];

void *__dt__15TOKeyJungleMainFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TOKeyJungleMain;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
