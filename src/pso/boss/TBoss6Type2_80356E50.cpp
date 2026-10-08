#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type2__sub_80356E50(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK send_subordinate_actions__11TBoss6Type2Fiiiii(M2C_UNK, s32, s32, s32, s32);

void TBoss6Type2__sub_80356E50(s32 arg0, s32 arg1, s32 arg2) {
    send_subordinate_actions__11TBoss6Type2Fiiiii(0, arg0, arg1, arg2, arg0);
}

struct Pkt_80356F28 { u8 b[0x40]; };

void send_6xAD_olga_flow_subordinate_boss_actions(void *);
void TBoss6Type2__sub_803570C8(void *);
s32 rand(void);
extern const u8 lbl_805E0018;
extern const u8 lbl_805E0019;
extern const f32 lbl_805E001C;
extern const f32 lbl_805E0020;
extern const f32 lbl_805E0024;

s32 send_subordinate_actions__11TBoss6Type2Fiiiii(s32 kind, s32 ids, s32 n, s32 force, s32 unused) {
    Pkt_80356F28 pkt;
    s32 i;

    TBoss6Type2__sub_803570C8(&pkt);
    for (i = 0; i < n; i++) {
        s32 off = ((s32 *)ids)[i] + 7;
        u8 flags = 0;
        if (lbl_805E001C * (f32)rand() > lbl_805E0020) {
            flags = lbl_805E0018;
        }
        if (force != 0 || lbl_805E001C * (f32)rand() < lbl_805E0024) {
            flags |= lbl_805E0019;
        }
        pkt.b[off] = flags | (s8)kind;
    }
    send_6xAD_olga_flow_subordinate_boss_actions(&pkt);
}

}
