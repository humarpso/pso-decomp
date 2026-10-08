#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Ent_A { s32 a; M2C_UNK (*fn)(s32, s32); };

extern "C" {

void dispatch_command__6TLobbyFi(s32 arg0);
s32 read_packet_byte__6TLobbyFv(struct Ent_A *);

s32 read_be_u16();
extern struct Ent_A qst_opcode_table[];

void dispatch_command__6TLobbyFi(s32 arg0) {
    M2C_UNK (*temp_r31)(s32, s32);
    s32 temp_r30;
    struct Ent_A *e;

    e = (struct Ent_A *) (u8 *) qst_opcode_table;
    e = (struct Ent_A *) ((u8 *) e + (arg0 * 8));
    temp_r31 = e->fn;
    temp_r30 = read_packet_byte__6TLobbyFv(e);
    temp_r31(temp_r30, read_be_u16());
}

}
