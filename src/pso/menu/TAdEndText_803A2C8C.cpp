#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cancel_dvd_async(void);
void start__10TAdEndTextFv(void);
void stop__10TAdEndTextFv(void);
M2C_UNK DVDCancelAsync();
M2C_UNK TAdEndText__sub_8039FD70();
M2C_UNK TAdEndText__sub_803A027C();

void start__10TAdEndTextFv(void) {
    TAdEndText__sub_8039FD70();
}

void cancel_dvd_async(void) {
    DVDCancelAsync();
}

void stop__10TAdEndTextFv(void) {
    TAdEndText__sub_803A027C();
}

}
