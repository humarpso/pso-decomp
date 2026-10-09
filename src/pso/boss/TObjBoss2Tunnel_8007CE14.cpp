#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void xfree__FPv(void *);
M2C_UNK TObjPlayer__sub_80084694();
extern u8 *boss2_tunnel_snapshot_buffer;
extern u8 *TObjBoss2Tunnel__snapshot_buffer;
extern s32 TObjBoss2Tunnel__snapshot_saved_flag;
void free_buffers__15TObjBoss2TunnelFv(void);
}

extern "C" {

s32 save_snapshot__15TObjBoss2TunnelFv(void);
s32 probe_card_slot__15TAdPlayerLoadGCFi(M2C_UNK);
s32 verify_snapshot_checksum__15TObjBoss2TunnelFv();
s32 load_snapshot__15TObjBoss2TunnelFv();

M2C_UNK save_screen_snapshot();
M2C_UNK memcard_check_snapshot(M2C_UNK, s32 *);
extern s32 TObjBoss2Tunnel__snapshot_saved_flag;

s32 save_snapshot__15TObjBoss2TunnelFv(void) {
    s32 sp8;

    memcard_check_snapshot(1, &sp8);
    if (sp8 == 1) {
        if ((s32) TObjBoss2Tunnel__snapshot_saved_flag != 0) {
            return -9;
        }
        save_screen_snapshot();
loop_4:
        if (probe_card_slot__15TAdPlayerLoadGCFi(1) == 0) {
            TObjBoss2Tunnel__snapshot_saved_flag = 0;
            return -5;
        }
        if (load_snapshot__15TObjBoss2TunnelFv() != 0) {
            if (verify_snapshot_checksum__15TObjBoss2TunnelFv() == 0) {
                TObjBoss2Tunnel__snapshot_saved_flag = 1;
                return -9;
            }
            goto block_9;
        }
        goto loop_4;
    }
block_9:
    TObjBoss2Tunnel__snapshot_saved_flag = 0;
    return sp8;
}
void free_buffers__15TObjBoss2TunnelFv(void) {
    TObjBoss2Tunnel__snapshot_saved_flag = 0;
    if ((void *) boss2_tunnel_snapshot_buffer != NULL) {
        xfree__FPv(boss2_tunnel_snapshot_buffer);
        boss2_tunnel_snapshot_buffer = NULL;
    }
    TObjPlayer__sub_80084694();
    if ((void *) TObjBoss2Tunnel__snapshot_buffer != NULL) {
        xfree__FPv(TObjBoss2Tunnel__snapshot_buffer);
        TObjBoss2Tunnel__snapshot_buffer = NULL;
    }
}

}
