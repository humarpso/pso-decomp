#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef M2C_UNK (*RecoveredCallback_1d0cc8904da3)(s32, M2C_UNK *);
struct RecoveredGlobal_803D6140_lbl_8058C960 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

extern "C" {
M2C_UNK strncpy(void *, void *, int);
extern RecoveredGlobal_803D6140_lbl_8058C960 network_error_text;
extern RecoveredCallback_1d0cc8904da3 net_error_callback;
extern s32 net_error_callback_arg;
void report_error_message__6TLobbyFi(s32 arg0);
void report_error_message__6TLobbyFi(s32 arg0);
extern u8 lbl_8047E220[];
extern s32 lbl_805D7684;
extern u32 lbl_805D7688;
extern u32 lbl_805D768C;
extern s32 lbl_805D7690;
void set_buffer_params_checked__6TLobbyFUiUii(u32 arg0, u32 arg1, s32 arg2);
}

extern "C" {

typedef char RecoveredGlobal_803D6140_lbl_8058C960_size[sizeof(RecoveredGlobal_803D6140_lbl_8058C960) == 0x100 ? 1 : -1];

void set_buffer_params_checked__6TLobbyFUiUii(u32 arg0, u32 arg1, s32 arg2) {
    u8 *base = lbl_8047E220;
    if (arg0 == 0) {
        report_error_message__6TLobbyFi((s32)(base + 0x138));
        return;
    }
    if (arg1 == 0) {
        report_error_message__6TLobbyFi((s32)(base + 0x160));
        return;
    }
    if (arg1 < (u32)(arg2 << 13)) {
        report_error_message__6TLobbyFi((s32)(base + 0x188));
        return;
    }
    lbl_805D7684 = arg2;
    lbl_805D7688 = arg1;
    lbl_805D768C = arg0;
    lbl_805D7690 = 1;
}

void report_error_message__6TLobbyFi(s32 arg0) {
    strncpy((void *) (&network_error_text.value), (void *) (arg0), (int) (0xFF));
    if (((M2C_UNK (*)(s32, M2C_UNK *)) net_error_callback) != NULL) {
        net_error_callback(net_error_callback_arg, &network_error_text.value);
    }
}

}
