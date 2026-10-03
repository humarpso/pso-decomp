#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
typedef struct Ctx_801CB748 { s16 f0; s16 f2; s32 f4; } Ctx_801CB748;

extern "C" {
s32 obj_isState2_324();
s16 obj_getField1c(void *);
M2C_UNK TObjPlayer__sub_801D1C70(Ctx_801CB748 *);
M2C_UNK sync_players__10TObjPlayerFPv(Ctx_801CB748 *);
void send_6x50_switch_interaction__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

s32 update_position_from_target__10TObjPlayerFPv();
void TObjPlayer__sub_801CB7A4(void);
void TObjPlayer__sub_801CB7D4(void);
int TObjPlayer__sub_801CB7D8(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

void send_6x50_switch_interaction__10TObjPlayerFPv(u8 *arg0) {
    Ctx_801CB748 ctx;
    if ((arg0 == NULL) || (obj_isState2_324() == 0)) {
        TObjPlayer__sub_801D1C70(&ctx);
        ctx.f2 = obj_getField1c(arg0);
        ctx.f4 = M2C_FIELD(arg0, s32 *, 0x60);
        sync_players__10TObjPlayerFPv(&ctx);
    }
}

}
