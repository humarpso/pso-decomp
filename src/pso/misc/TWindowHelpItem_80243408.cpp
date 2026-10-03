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
u32 get_player_by_client_id(s32);
s8 clamp_char_at__10TObjPlayerFPvi(u32, s32);
s32 get_help_value__15TWindowHelpItemFv(void);
void clear_visible_flag__20TWindowSubStatusDispFPv(void *);
void set_flag0_bit2__15TWindowHelpItemFPv(void *);
void draw_right_aligned_number(void *);
extern const f32 lbl_805DCA28;
extern const f32 lbl_805DCA2C;
extern const f32 lbl_805DCA30;
void TWindowHelpItem__sub_80243544(u8 *arg0, u8 *arg1, u16 arg2, u16 arg3, s32 arg4);
}

extern "C" {

void set_help_text__15TWindowHelpItemFii(s32 arg0, s32 arg1);
s32 get_help_value__15TWindowHelpItemFv(void);
void *find_item_by_id();
s32 get_palette_consumable_count();
M2C_UNK TWindowHelpItem__sub_8025B08C(s32, f32, f32);
s32 test_card_flag_2__12TBoss8DragonFPv(s32);

extern f32 lbl_805DCA1C;
extern f32 lbl_805DCA20;
extern f32 lbl_805DCA24;

void set_help_text__15TWindowHelpItemFii(s32 arg0, s32 arg1) {
    if (test_card_flag_2__12TBoss8DragonFPv(arg1) != 0) {
        TWindowHelpItem__sub_8025B08C(arg0, lbl_805DCA1C, lbl_805DCA20);
        return;
    }
    TWindowHelpItem__sub_8025B08C(arg0, lbl_805DCA1C, lbl_805DCA24);
}

s32 get_help_value__15TWindowHelpItemFv(void) {
    struct VObj_80243464 *o;

    if (get_palette_consumable_count() == -1) {
        return 0;
    }
    o = (struct VObj_80243464 *)find_item_by_id();
    if (o == NULL) {
        return 0;
    }
    return o->m34();
}
#pragma push
#pragma fp_contract on
void TWindowHelpItem__sub_80243544(u8 *arg0, u8 *arg1, u16 arg2, u16 arg3, s32 arg4) {
    s32 v;
    u32 p;
    if (arg2 != 4) {
        set_flag0_bit2__15TWindowHelpItemFPv(arg0);
        return;
    }
    if (arg3 >= 0xD) {
        p = get_player_by_client_id(arg4);
        if (p == 0) {
            v = 0;
        } else {
            v = clamp_char_at__10TObjPlayerFPvi(p + 0x7C4, arg3 - 0xD);
        }
    } else {
        v = ((s32 (*)(u16, s32))get_help_value__15TWindowHelpItemFv)(arg3, arg4);
    }
    if (v <= 0) {
        set_flag0_bit2__15TWindowHelpItemFPv(arg0);
        return;
    }
    clear_visible_flag__20TWindowSubStatusDispFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x1C) = M2C_FIELD(arg1, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x20) = v;
    draw_right_aligned_number(arg0);
    M2C_FIELD(arg0, f32 *, 8) = lbl_805DCA2C * M2C_FIELD(arg0, f32 *, 0x10) + (M2C_FIELD(arg1, f32 *, 8) - lbl_805DCA28);
    M2C_FIELD(arg0, f32 *, 0xC) = M2C_FIELD(arg1, f32 *, 0xC) - lbl_805DCA30;
}
#pragma pop

}
