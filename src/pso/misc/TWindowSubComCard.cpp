#include "types.h"
#include "pso/misc/TQuestListOnline.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8021845C_802183B4 { char pad[0x18]; };
struct VObj_8021845C_802183B4 : Base_8021845C_802183B4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8();
};
struct Base_802184C8_802183B4 { char pad[0x18]; };
struct VObj_802184C8_802183B4 : Base_802184C8_802183B4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};
struct Base_80218500_802183B4 { char pad[0x18]; };
struct VObj_80218500_802183B4 : Base_80218500_802183B4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_80218538_802183B4 { char pad[0x18]; };
struct VObj_80218538_802183B4 : Base_80218538_802183B4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};

extern "C" {

void TQuestListVM__vt4(void *arg0);
void TQuestListVM__vt5(void *arg0);
void TQuestListVM__vt7(void *arg0);
s32 TQuestListVM__vt8(void *arg0);
void clear_flag_and_release__17TWindowSubComCardFPv(void *arg0);

void poll_download__12TQuestListVMFv(void);
void set_selected_entry__12TQuestListVMFPvPv(void* p, void* a1);
s32 TShopWindowBase__sub_80223A48(void *);
u32 get_serial_access__22TQuestVmDownLoadServerFPv();
s32 poll_serial_access__22TQuestVmDownLoadServerFPv();
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
int set_field_20__12TQuestListVMFPvi(void*, void*);

}
s32 TQuestListOnline::get_selection_stage() { return selection_stage; }
extern "C" {
void clear_flag_and_release__17TWindowSubComCardFPv(void *arg0) {
    u32 temp;
    M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) & 0xFFFFFFFD);
    temp = (u32) M2C_FIELD(arg0, u32 *, 0x88);
    if (temp != 0U) {
        set_entry_state__20TWindowSubStatusDispFPvc(temp, 1);
    }
}
void set_selected_entry__12TQuestListVMFPvPv(void* p, void* a1) { set_field_20__12TQuestListVMFPvi(p, (void*)20); *(void**)((char*)p + 0x23b4) = a1; }
void poll_download__12TQuestListVMFv(void) {
    if (get_serial_access__22TQuestVmDownLoadServerFPv() == 0U) {
        poll_serial_access__22TQuestVmDownLoadServerFPv();
    }
}

s32 TQuestListVM__vt8(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x23A0);
    if (temp_r3 != NULL) {
        if (((VObj_8021845C_802183B4 *)temp_r3)->m8() == 0) {
            return 0;
        }
        return TShopWindowBase__sub_80223A48(arg0) ? 1 : 0;
    }
    return 1;
}

void TQuestListVM__vt7(void *arg0) {
    struct VObj_802184C8_802183B4 *o = (struct VObj_802184C8_802183B4 *)M2C_FIELD(arg0, void **, 0x23A0);
    if (o != NULL) {
        o->m7();
    }
}

void TQuestListVM__vt5(void *arg0) {
    struct VObj_80218500_802183B4 *o = (struct VObj_80218500_802183B4 *)M2C_FIELD(arg0, void **, 0x23A0);
    if (o != NULL) {
        o->m5();
    }
}

void TQuestListVM__vt4(void *arg0) {
    struct VObj_80218538_802183B4 *o = (struct VObj_80218538_802183B4 *)M2C_FIELD(arg0, void **, 0x23A0);
    if (o != NULL) {
        o->m4();
    }
}

}
