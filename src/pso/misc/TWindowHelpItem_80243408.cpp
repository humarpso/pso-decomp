#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80243464 { char pad[0x18]; };
struct VObj_80243464 : Base_80243464 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();   virtual void m7();
    virtual void m8();   virtual void m9();   virtual void m10();  virtual void m11();
    virtual void m12();  virtual void m13();  virtual void m14();  virtual void m15();
    virtual void m16();  virtual void m17();  virtual void m18();  virtual void m19();
    virtual void m20();  virtual void m21();  virtual void m22();  virtual void m23();
    virtual void m24();  virtual void m25();  virtual void m26();  virtual void m27();
    virtual void m28();  virtual void m29();  virtual void m30();  virtual void m31();
    virtual void m32();  virtual void m33();  virtual s32 m34();
};

extern "C" {

void set_help_text__15TWindowHelpItemFii(s32 arg0, s32 arg1);
s32 get_help_value__15TWindowHelpItemFv(void);
void *TLobby__sub_80101AB0();
s32 TWindowHelpItem__sub_802434B8();
M2C_UNK TWindowHelpItem__sub_8025B08C(s32, f32, f32);
s32 fn_8002AE38(s32);

extern f32 lbl_805DCA1C;
extern f32 lbl_805DCA20;
extern f32 lbl_805DCA24;

void set_help_text__15TWindowHelpItemFii(s32 arg0, s32 arg1) {
    if (fn_8002AE38(arg1) != 0) {
        TWindowHelpItem__sub_8025B08C(arg0, lbl_805DCA1C, lbl_805DCA20);
        return;
    }
    TWindowHelpItem__sub_8025B08C(arg0, lbl_805DCA1C, lbl_805DCA24);
}

s32 get_help_value__15TWindowHelpItemFv(void) {
    struct VObj_80243464 *o;

    if (TWindowHelpItem__sub_802434B8() == -1) {
        return 0;
    }
    o = (struct VObj_80243464 *)TLobby__sub_80101AB0();
    if (o == NULL) {
        return 0;
    }
    return o->m34();
}

}
