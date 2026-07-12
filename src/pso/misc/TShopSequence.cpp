#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObj_802235A0 {
    virtual void m0(int);
};

extern "C" {

s32 update_download_server__13TShopSequenceFPv(void *arg0);
void close_message_window__13TShopSequenceFPv(void *arg0);
M2C_UNK close__17TMedicalCenterMesFPv(void *);
s32 poll_field_20c__22TQuestVmDownLoadServerFPv(void *);

s32 update_download_server__13TShopSequenceFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x28);
    if (temp_r3 != NULL) {
        return poll_field_20c__22TQuestVmDownLoadServerFPv(temp_r3);
    }
    return 1;
}

void close_message_window__13TShopSequenceFPv(void *arg0) {
    VObj_802235A0 *temp_r3;

    if (M2C_FIELD(arg0, VObj_802235A0 **, 0x28) != NULL) {
        close__17TMedicalCenterMesFPv(M2C_FIELD(arg0, VObj_802235A0 **, 0x28));
        temp_r3 = M2C_FIELD(arg0, VObj_802235A0 **, 0x28);
        if (temp_r3 != NULL) {
            temp_r3->m0(1);
        }
        M2C_FIELD(arg0, VObj_802235A0 **, 0x28) = NULL;
    }
}

}
