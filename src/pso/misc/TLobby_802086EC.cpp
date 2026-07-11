#include "types.h"
typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TLobby__sub_802086EC(u8 arg0);

M2C_UNK read_stream_u16(void *);
typedef struct Ent_ {
    s32 a;
    M2C_UNK (*fn)(M2C_UNK);
} Ent;
extern Ent lbl_804C93A8[];
void TLobby__sub_802086EC(u8 arg0) {
    M2C_UNK (*temp_r31)(M2C_UNK);
    Ent *temp_r3;
    temp_r3 = lbl_804C93A8;
    temp_r3 += arg0;
    temp_r31 = temp_r3->fn;
    temp_r31(read_stream_u16(temp_r3));
}

}
