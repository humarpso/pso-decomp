#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
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
    virtual M2C_UNK m27();
};
extern "C" {
u8 *lookup_inventory_item__10TObjPlayerFPv(s32);
u32 TObjPlayer__sub_801B8E68(int, int);
s32 TPlayerBattleCtrl4P__sub_801BA74C(void *);
void TItem__sub_801007B4(u16 arg0, s32 arg1);
}

extern "C" {

void TItem__sub_80100674(void);
void TItem__sub_80100678(void);
void TItem__sub_8010067C(void);
int TItem__sub_80100680(void);
void TItem__sub_80100688(void);
void TItem__sub_8010068C(void);
void TItem__sub_80100690(void);
void TItem__sub_80100694(void);
void TItem__sub_80100698(void);
void TItem__sub_80100758(void);
void TItem__sub_8010075C(void);
void TItem__sub_801007A8(void);
void TItem__sub_801007AC(void);
void TItem__sub_801007B0(void);
int TItem__sub_80100B8C(void* p);
void update_pickup_flag__5TItemFi(s32 arg0);
s32 TItem__sub_800FFE70(s32);
int TItem__sub_80100A40(void*);
s32 check_flag_400__20TWindowSubStatusDispFv();
s32 set_flag_1024__11TItemObjectFPv(s32);

void TItem__sub_80100674(void) {  }
void TItem__sub_80100678(void) {  }
void TItem__sub_8010067C(void) {  }
int TItem__sub_80100680(void) { return 0; }
void TItem__sub_80100688(void) {  }
void TItem__sub_8010068C(void) {  }
void TItem__sub_80100690(void) {  }
void TItem__sub_80100694(void) {  }
void TItem__sub_80100698(void) {  }

void TItem__sub_80100758(void) {  }
void TItem__sub_8010075C(void) {  }
void update_pickup_flag__5TItemFi(s32 arg0) {
    if (check_flag_400__20TWindowSubStatusDispFv() != 0) {
        set_flag_1024__11TItemObjectFPv(arg0);
        return;
    }
    TItem__sub_800FFE70(arg0);
}
void TItem__sub_801007A8(void) {  }
void TItem__sub_801007AC(void) {  }
void TItem__sub_801007B0(void) {  }

void TItem__sub_801007B4(u16 arg0, s32 arg1) {
    s32 temp_r3;
    u8 *temp_r3_2;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((void *) (arg0));
    if (temp_r3 != 0) {
        temp_r3_2 = lookup_inventory_item__10TObjPlayerFPv(arg1);
        if ((temp_r3_2 != NULL) && (TObjPlayer__sub_801B8E68((int) (temp_r3), (int) (temp_r3_2)) == 0U)) {
            ((VObj_18 *)(temp_r3_2))->m27();
        }
    }
}

int TItem__sub_80100B8C(void* p) { return TItem__sub_80100A40((char*)p + 0x38); }

}
