#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18 { char pad[0x18]; };
struct VObj18 : VBase18 {
    virtual void vpad0();
    virtual void vpad1();
    virtual void vpad2();
    virtual void vpad3();
    virtual void vpad4();
    virtual void vpad5();
    virtual void vpad6();
    virtual void vf24(int, int);
};

extern "C" {

void update_close__12TQuestListVMFPv(void *arg0);
M2C_UNK TWindow__close(void *);
M2C_UNK close_windows__12TQuestListVMFPv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
s32 get_status_flag__6TLobbyFPv(void *);
s32 get_flag_bit2__6TLobbyFPv(void *);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
M2C_UNK TQuestVmDownLoadServer__sub_80219EC4(void *);

void update_close__12TQuestListVMFPv(void *arg0) {
    void *p;

    p = M2C_FIELD(arg0, void **, 0x2374);
    if ((p != NULL) && (get_flag_bit2__6TLobbyFPv(p) != 0)) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2380) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2380));
            M2C_FIELD(arg0, u32 *, 0x2380) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2374) != 0U) {
            clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x2374));
            TQuestVmDownLoadServer__sub_80219EC4(M2C_FIELD(arg0, void **, 0x2374));
        }
        ((VObj18 *) arg0)->vf24(0x19, 1);
        close_windows__12TQuestListVMFPv(arg0);
        set_field_20__12TQuestListVMFPvi(arg0, 5);
        return;
    }
    p = M2C_FIELD(arg0, void **, 0x2374);
    if ((p != NULL) && (get_status_flag__6TLobbyFPv(p) != 0)) {
        set_field_20__12TQuestListVMFPvi(arg0, 0x11);
    }
}

}
