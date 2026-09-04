#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 TLobby__sub_801A2078(s32);
u16 TLobby__sub_801A20C8(s32);
u16 fn_801A210C(s32);
s32 TContainerAncient01__sub_8020335C(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
int TObjRoomId__sub_801A1E2C(void);
void TLobby__sub_801A1FD8(void);

int fn_801A1F48(void) { return 0; }

}
