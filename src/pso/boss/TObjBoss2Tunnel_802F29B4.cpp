#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjBoss2Tunnel__sub_802F29B4(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void dt__15TObjBoss2TunnelFis(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804E4B3C[];

void *TObjBoss2Tunnel__sub_802F29B4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E4B3C;
        if (M2C_FIELD(arg0, void **, 0x88) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x88)); }
        dt__15TObjBoss2TunnelFis((s8 *)arg0 + 0x20, -1);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
