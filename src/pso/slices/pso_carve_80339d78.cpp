#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TKeyBoardControl__sub_8000F9CC(s32);
s32 poll_memcard_status();
s32 TSaveChCr__sub_8033A138(void *);
s32 save_character__9TSaveChCrFPv(void *);
int TKeyBoardControl__sub_8000F9B0(void);
int fn_80339F30(void*);
int TSaveChCr__sub_8033A184(void*, void*);
int queue_destruction__7TObjectFv(void*);
void destroy_if_keyboard_idle__9TSaveChCrFPv(void* p);
void save_if_dirty__9TSaveChCrFPv(void* p);
int TSaveChCr__sub_80339B94(void* p);
int TSaveChCr__sub_80339BF4(void* p);
int TSaveChCr__sub_80339CC0(void* p);
void TSaveChCr__sub_80339CE4(void);
int TSaveChCr__sub_80339CE8(void* p);
int TSaveChCr__sub_80339F5C(void*, int);
int close_window__9TSaveChCrFPv(void*);

int fn_80339D78(void) { return 0; }

}
