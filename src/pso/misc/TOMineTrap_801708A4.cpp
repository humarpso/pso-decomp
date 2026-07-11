#include "types.h"
struct Base_801708A4 { char pad[0x18]; };
struct VObj_801708A4 : Base_801708A4 {
    virtual int v00();
    virtual int v01();
    virtual int v02();
    virtual int v03();
    virtual int v04();
    virtual int v05();
    virtual int v06();
    virtual int v07();
    virtual int v08();
    virtual int v09();
    virtual int v10();
    virtual int v11();
    virtual int v12();
    virtual int v13();
    virtual int v14();
    virtual int v15();
    virtual int v16();
    virtual int v17();
    virtual int v18();
    virtual int v19();
    virtual void v20(int, f32);
};

extern "C" {

f32 TOMineTrap__sub_801708A4(void *arg0, s32 arg1);
s32 TOMineTrap__sub_801702C8();
s32 TObjPlayer__sub_80019248(s32);

s16 obj_getS16_116(s32);
extern f32 lbl_805DB85C;
extern f32 TOMineTrap__data_805DB868;

f32 TOMineTrap__sub_801708A4(void *arg0, s32 arg1) {
    if (TOMineTrap__sub_801702C8() == 1) {
        return lbl_805DB85C;
    }
    if ((TObjPlayer__sub_80019248(arg1) != 0) && (obj_getS16_116(arg1) != 0)) {
        ((VObj_801708A4 *)arg0)->v20(0, TOMineTrap__data_805DB868);
    }
    return lbl_805DB85C;
}

}
