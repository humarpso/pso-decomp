#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

typedef struct {
    s32 x0;
    M2C_UNK (*fn)(M2C_UNK);
} Ent_801F2B0C;

int get_indexed_offset__6TLobbyFi(int a0);
void qst_getargs_801F2B0C(s32 arg0);
M2C_UNK read_packet_byte__6TLobbyFv(void *);

extern Ent_801F2B0C lbl_804C69D8[];

void qst_getargs_801F2B0C(s32 arg0) {
    Ent_801F2B0C *temp_r3;
    M2C_UNK (*temp_r31)(M2C_UNK);

    temp_r3 = lbl_804C69D8;
    temp_r3 += arg0;
    temp_r31 = temp_r3->fn;
    temp_r31(read_packet_byte__6TLobbyFv(temp_r3));
}

extern int TLobby__data_80512240[];
extern int TLobby__data_805D5E8C;
void push_op_arg__6TLobbyFi(int a0)
{
  int new_var;
  new_var = (TLobby__data_805D5E8C = (0, TLobby__data_805D5E8C));
  TLobby__data_805D5E8C = TLobby__data_805D5E8C + 0x1;
  TLobby__data_80512240[new_var] = a0;
}

    extern int* TLobby__data_805D5E74;
    extern int TLobby__data_805D5E70;
int get_indexed_offset__6TLobbyFi(int a0) {  return (TLobby__data_805D5E70 + TLobby__data_805D5E74[(unsigned short)(a0)]); }

}
