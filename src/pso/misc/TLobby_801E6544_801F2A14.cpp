#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_A { s32 a; M2C_UNK (*fn)(s32, s32); };

typedef struct {
    s32 x0;
    M2C_UNK (*fn)(M2C_UNK);
} Ent_801F2A14;

extern "C" {
s32 read_packet_byte__6TLobbyFv(struct Ent_A *);
M2C_UNK stream_read_be32(void);
extern Ent_801F2A14 lbl_804C69D8[];
void qst_getargs_801F2A5C(s32 arg0);
}

extern "C" {

extern Ent_801F2A14 lbl_804C69D8[];

void qst_getargs_801F2A14(s32 arg0) {
    Ent_801F2A14 *temp_r3;
    M2C_UNK (*temp_r31)(M2C_UNK);

    temp_r3 = lbl_804C69D8;
    temp_r3 += arg0;
    temp_r31 = temp_r3->fn;
    temp_r31(stream_read_be32());
}
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
void qst_getargs_801F2A5C(s32 arg0) {
    M2C_UNK (*temp_r31)(s32, s32);
    s32 temp_r30;
    struct Ent_A *e;
    e = (struct Ent_A *) (u8 *) ((struct Ent_A *)&lbl_804C69D8);
    e = (struct Ent_A *) ((u8 *) e + (arg0 * 8));
    temp_r31 = e->fn;
    temp_r30 = read_packet_byte__6TLobbyFv(e);
    temp_r31(temp_r30, ((s32)stream_read_be32()));
}

}
