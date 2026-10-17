#include "types.h"

struct RecoveredGlobal_8013ADE4_TAdEnterPasswordGC__data_804EDA20 {
    s32 value;
    u8 remaining[0x80];
};

extern "C" {
extern RecoveredGlobal_8013ADE4_TAdEnterPasswordGC__data_804EDA20 TAdEnterPasswordGC__input_buffer;
s32 *TAdEnterPasswordGC__sub_8013ADE4(void);
typedef char RecoveredGlobal_8013ADE4_TAdEnterPasswordGC__data_804EDA20_size[sizeof(RecoveredGlobal_8013ADE4_TAdEnterPasswordGC__data_804EDA20) == 0x84 ? 1 : -1];
s32 *TAdEnterPasswordGC__sub_8013ADE4(void) {
    return &TAdEnterPasswordGC__input_buffer.value;
}

}
