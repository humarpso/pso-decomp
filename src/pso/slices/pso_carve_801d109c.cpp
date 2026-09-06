#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 TObjPlayer__sub_801D10BC(u8 *arg0);
void TObjPlayer__sub_801D109C(u8 *arg0);
}

extern "C" {

int query_field_340__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D1018(void* p);
void TObjPlayer__sub_801D1024(void* p, s32 v);
void TObjPlayer__sub_801D102C(void* p, s32 v);
s32 TObjPlayer__sub_801D1034(void* p);
s16 TObjPlayer__sub_801D103C(void* p);
void TObjPlayer__sub_801D1044(void* p, s16 v);
void TObjPlayer__sub_801D104C(void* p);
void TObjPlayer__sub_801D1090(void* p);
int TObjPlayer__sub_801D11EC(void* p);
int TObjPlayer__sub_801D11F8(void* p);
void TObjPlayer__sub_801D12D8(void* p);
void TObjPlayer__sub_801D12E8(void* p);
int TObjPlayer__sub_801D1360(void* p);
void TObjPlayer__sub_801D1440(void* p);
void set_cmd_87__10TObjPlayerFPv(void* p);
int update_action_palette__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);

void TObjPlayer__sub_801D109C(u8 *arg0) {
  s16 temp_r4;
  s8 *new_var;
  temp_r4 = (*((s16 *) (new_var + 8)) = (*((s16 *) (((s8 *) arg0) + 8))) - 1);
  new_var = (s8 *) arg0;
  if (temp_r4 < 0)
  {
    *((s16 *) (((s8 *) arg0) + 8)) = 0;
  }
}

u8 TObjPlayer__sub_801D10BC(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s16 *, 8) <= 0);
}

}
