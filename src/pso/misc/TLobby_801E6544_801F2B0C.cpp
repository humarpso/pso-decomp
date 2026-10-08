#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801F2BCC_TLobby__data_80512240 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

extern "C" {
extern int TLobby__data_80512240[];
extern int TLobby__data_805D5E8C;
s32 pop_stack_value__6TLobbyFv(void);
}

extern "C" {

typedef struct {
    s32 x0;
    M2C_UNK (*fn)(M2C_UNK);
} Ent_801F2B0C;

int get_indexed_offset__6TLobbyFi(int a0);
void qst_getargs_801F2B0C(s32 arg0);
M2C_UNK read_packet_byte__6TLobbyFv(void *);

extern Ent_801F2B0C qst_opcode_table[];

void qst_getargs_801F2B0C(s32 arg0) {
    Ent_801F2B0C *temp_r3;
    M2C_UNK (*temp_r31)(M2C_UNK);

    temp_r3 = qst_opcode_table;
    temp_r3 += arg0;
    temp_r31 = temp_r3->fn;
    temp_r31(read_packet_byte__6TLobbyFv(temp_r3));
}

extern s32 TLobby__data_805D5EA4;
void qst_getargs_801F2B54(s32 arg0) {
    Ent_801F2B0C *e;

    e = qst_opcode_table;
    e += arg0;
    e->fn((M2C_UNK)e);
    TLobby__data_805D5EA4 = 0;
}

void qst_getargs_801F2B94(s32 arg0) {
    ((void (*)(void))qst_opcode_table[arg0].fn)();
}

extern int TLobby__data_80512240[];
extern int TLobby__data_805D5E8C;

    extern int* TLobby__data_805D5E74;
    extern int TLobby__data_805D5E70;

typedef char RecoveredGlobal_801F2BCC_TLobby__data_80512240_size[sizeof(RecoveredGlobal_801F2BCC_TLobby__data_80512240) == 0x100 ? 1 : -1];
s32 pop_stack_value__6TLobbyFv(void) {
    s32 temp_r4;
    if ((s32) (*(s32 *)&TLobby__data_805D5E8C) > 0) {
        temp_r4 = (*(s32 *)&TLobby__data_805D5E8C) - 1;
        (*(s32 *)&TLobby__data_805D5E8C) = temp_r4;
        return M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_801F2BCC_TLobby__data_80512240 *)&TLobby__data_80512240).value) + (temp_r4 * 4)), s32 *, 0);
    }
    return 0;
}

void push_op_arg__6TLobbyFi(int a0)
{
  int new_var;
  new_var = (TLobby__data_805D5E8C = (0, TLobby__data_805D5E8C));
  TLobby__data_805D5E8C = TLobby__data_805D5E8C + 0x1;
  TLobby__data_80512240[new_var] = a0;
}
int get_indexed_offset__6TLobbyFi(int a0) {  return (TLobby__data_805D5E70 + TLobby__data_805D5E74[(unsigned short)(a0)]); }

}
