#include "types.h"
#include "pso/misc/TQuestListVM.h"

struct Base_8021B2E8 { char pad[0x18]; };
struct VObj_8021B2E8 : Base_8021B2E8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int a, int b);
};
struct Base_8021B338 { char pad[0x18]; };
struct VObj_8021B338 : Base_8021B338 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32  m8();
};
struct Base_8021B3C0 { char pad[0x18]; };
struct VObj_8021B3C0 : Base_8021B3C0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual int m8();
};

extern "C" {

void enter_quest_list__26TShopEquipmentGearSequenceFPv(void *arg0);
void handle_confirm__26TShopEquipmentGearSequenceFPv(void *arg0);
void open_gear_shop__26TShopEquipmentGearSequenceFPv(struct VObj_8021B288 *arg0);
void try_close__26TShopEquipmentGearSequenceFPv(void *arg0);
s32 close_if_single_screen__13TShopSequenceFv(void *);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 close_window__13TShopSequenceFPv(void *);
s32 queue_destruction__7TObjectFv(void *);

extern s32 lbl_805D6218;
extern s32 lbl_805D621C;

struct Base_8021B288 { char pad[0x18]; };
struct VObj_8021B288 : Base_8021B288 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
};

void open_gear_shop__26TShopEquipmentGearSequenceFPv(struct VObj_8021B288 *arg0) {
    if (arg0 != NULL) {
        arg0->m4(0x1B, 1);
        ((TQuestListVM *)arg0)->set_field_20((s32)(7));
        lbl_805D6218 = 0x1A;
        lbl_805D621C = 2;
    }
}

void enter_quest_list__26TShopEquipmentGearSequenceFPv(void *arg0) {
    struct VObj_8021B2E8 *o = (struct VObj_8021B2E8 *)arg0;
    if (o != NULL) {
        o->m4(0x1A, 1);
        ((TQuestListVM *)arg0)->set_field_20((s32)(2));
    }
}

extern s32 lbl_805D6218;
extern s32 lbl_805D621C;

void handle_confirm__26TShopEquipmentGearSequenceFPv(void *arg0) {
    if ((((VObj_8021B338*)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        ((VObj_8021B338*)arg0)->m4(lbl_805D6218, 1);
        ((TQuestListVM *)arg0)->set_field_20((s32)(lbl_805D621C));
    }
}

void try_close__26TShopEquipmentGearSequenceFPv(void *arg0) {
    if ((((VObj_8021B3C0 *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        close_if_single_screen__13TShopSequenceFv(arg0);
        close_window__13TShopSequenceFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
