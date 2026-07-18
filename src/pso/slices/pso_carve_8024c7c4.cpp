#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TRaderMapCore__sub_801F9110();
s32 TRaderMapCore__sub_801F9144();
void TWindowCtrl__sub_8024C6CC(void* p);
void TWindowCtrl__sub_8024C6DC(void* p);
void TWindowCtrl__sub_8024C6EC(void* p);
void TWindowCtrl__sub_8024C6FC(void* p);
void TWindowCtrl__sub_8024C70C(void* p);
void TWindowCtrl__sub_8024C71C(void* p);
void TWindowCtrl__sub_8024C72C(void* p);
void TWindowCtrl__sub_8024C73C(void* p);
void TWindowCtrl__sub_8024C74C(void* p);
void TWindowCtrl__sub_8024C75C(void* p);
int TWindowCtrl__sub_8024C7D4(void* p);
int TWindowCtrl__sub_8024C7E0(void* p);
int is_enabled__11TWindowCtrlFPv(void* p);
int TWindowCtrl__sub_8024C7F8(void* p);
int is_visible__11TWindowCtrlFPv(void* p);
s16 get_field_20__11TWindowCtrlFPv(void* p);
s16 get_width__11TWindowCtrlFPv(void* p);

int TWindowCtrl__sub_8024C7C4(void) { return 0; }

}
