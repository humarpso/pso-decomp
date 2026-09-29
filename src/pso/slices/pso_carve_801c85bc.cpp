#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pkt_801C85BC { u16 hdr; s16 id; s16 c; };

extern "C" {
s32 obj_isState2_324();
s16 obj_getField1c(void *);
s32 TKeyBoardControl__sub_801A58D8();
void TObjPlayer__sub_801D13EC(void *);
void handle_recv_packet__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801D1440(void *);
void TObjPlayer__sub_801C85BC(u8 *arg0);
}

extern "C" {

s32 update_position_from_target__10TObjPlayerFPv(void *);
s32 get_flag__10TObjPlayerFPv();
void TObjPlayer__sub_801C862C(void);
void TObjPlayer__sub_801C8678(void);
int try_change_action_wrapper__10TObjPlayerFPv(void* p);
int try_change_action__10TObjPlayerFi(void*);

void TObjPlayer__sub_801C85BC(u8 *arg0) {
    struct Pkt_801C85BC pkt;
    if (arg0 == NULL || obj_isState2_324() == 0) {
        TObjPlayer__sub_801D13EC(&pkt);
        pkt.id = obj_getField1c(arg0);
        pkt.c = *(s16 *)(arg0 + 0x3C0);
        if (TKeyBoardControl__sub_801A58D8() != 0) {
            TObjPlayer__sub_801D1440(&pkt);
        }
        handle_recv_packet__10TObjPlayerFPv(&pkt);
    }
}

}
