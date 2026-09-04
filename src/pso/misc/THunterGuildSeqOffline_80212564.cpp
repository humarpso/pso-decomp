#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802125BC_80212564 { char pad[0x18]; };
struct VObj_802125BC_80212564 : Base_802125BC_80212564 {
    virtual int m0();
    virtual int m1();
    virtual int m2();
    virtual int m3();
    virtual int m4();
    virtual int m5();
    virtual int m6();
    virtual int m7(int, int);
    virtual int m8();
};

extern "C" {

struct Base_80212564 { char pad[0x18]; };
struct VObj_80212564 : Base_80212564 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};

void handle_click__22THunterGuildSeqOfflineFPv(void *arg0);
void set_state_4__22THunterGuildSeqOfflineFv(void);
int TShopWindowBase__sub_802239EC(void *);
int TShopWindowBase__sub_80223A48(void *);
int set_field_20__12TQuestListVMFPvi(void *, int);

extern struct VObj_80212564 *THunterGuildSeqOffline__data_805D6188;

void set_state_4__22THunterGuildSeqOfflineFv(void) {
    if (THunterGuildSeqOffline__data_805D6188 != NULL) {
        THunterGuildSeqOffline__data_805D6188->m7(6, 1);
        M2C_FIELD(THunterGuildSeqOffline__data_805D6188, s32 *, 0x38) = 4;
        set_field_20__12TQuestListVMFPvi((void *)(THunterGuildSeqOffline__data_805D6188), (int)(5));
    }
}

void handle_click__22THunterGuildSeqOfflineFPv(void *arg0) {
    VObj_802125BC_80212564 *o = (VObj_802125BC_80212564 *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m7(0x19, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (int)(4));
    }
}

}
