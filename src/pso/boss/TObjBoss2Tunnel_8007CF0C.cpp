#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec2_8007DD28 { f32 x; f32 y; f32 z; };

extern "C" {
extern Vec2_8007DD28 TObjBoss2Tunnel__data_8048DF2C;
extern const f32 lbl_805D9280;
extern const f32 lbl_805D9284;
extern u8 lbl_805D4E88;
extern s16 TObjBoss2Tunnel__data_805D4E8A;
extern u32 TObjBoss2Tunnel__data_805D4E90;
extern s32 TObjBoss2Tunnel__data_805D4E94;
void reset__12TQuestListVMFv(void);
void reset_state__15TObjBoss2TunnelFv(void);
}

extern "C" {

void TObjBoss2Tunnel__sub_8007DD24(void);
void load_data_buffers(void);
s32 memcard_check_snapshot(s32 arg0, s32 *arg1);
s32 probe_and_check_card__15TAdPlayerLoadGCFi(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E0FA4(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1B50(M2C_UNK);
s32 probe_card_slot__15TAdPlayerLoadGCFi(M2C_UNK);
s32 find_card_file__15TAdPlayerLoadGCFiPv(M2C_UNK, M2C_UNK *);
M2C_UNK init_capture_texture(M2C_UNK);
s32 check_memcard_status__15TAdPlayerLoadGCFi(M2C_UNK);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 get_load_result__15TAdPlayerLoadGCFv(M2C_UNK);
M2C_UNK memmove(void *, void *, s32);
M2C_UNK memset(void *, s32, s32);
s32 query_memcard_capacity__15TAdPlayerLoadGCFi(M2C_UNK, M2C_UNK);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
s32 set_stream_and_load_file__6TLobbyFi(s32);
s32 update_lobby_scene__6TSceneFPv(s32);
u32 xmalloc__FUl(M2C_UNK);

extern s32 lbl_805D28C0;
extern s16 TObjBoss2Tunnel__data_805D4E8A;
extern u32 lbl_805D4E8C;
extern u32 TObjBoss2Tunnel__data_805D4E90;
extern s32 TObjBoss2Tunnel__data_805D4E94;

void load_data_buffers(void) {
    s32 temp_r31;
    s32 temp_r30;
    u32 temp_r3;

    TObjBoss2Tunnel__data_805D4E94 = 0;
    TObjBoss2Tunnel__data_805D4E90 = xmalloc__FUl(0x1E000);
    TObjBoss2Tunnel__data_805D4E8A = 0;
    init_capture_texture(0);
    temp_r3 = xmalloc__FUl(0x1818C);
    lbl_805D4E8C = temp_r3;
    if (temp_r3 != 0U) {
        memset((void *)temp_r3, 0, 0x1818C);
    }
    temp_r31 = update_lobby_scene__6TSceneFPv(lbl_805D28C0);
    if (temp_r31 <= 0x1818C) {
        temp_r30 = set_stream_and_load_file__6TLobbyFi(lbl_805D28C0);
        if (temp_r30 != 0) {
            if ((u32) lbl_805D4E8C != 0U) {
                memmove((void *)lbl_805D4E8C, (void *)temp_r30, temp_r31);
            }
            safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r30);
        }
    }
}

extern M2C_UNK TObjBoss2Tunnel__data_80438A08[];

s32 memcard_check_snapshot(s32 arg0, s32 *arg1) {
    s32 temp_r3;

    if (get_instance__15TAdPlayerLoadGCFv() != 0) {
        return 0;
    }
    if (probe_card_slot__15TAdPlayerLoadGCFi(1) == 0) {
        if (arg1 != NULL) {
            *arg1 = -4;
        }
        return 0;
    }
    if (probe_and_check_card__15TAdPlayerLoadGCFi(1) == 0) {
        if (arg1 != NULL) {
            if ((u32)(get_load_result__15TAdPlayerLoadGCFv(1) + 0x10000) == 0xff83U) {
                if (arg1 != NULL) {
                    *arg1 = -6;
                }
            } else if ((u32)(get_load_result__15TAdPlayerLoadGCFv(1) + 0x10000) == 0xff21U) {
                if (arg1 != NULL) {
                    *arg1 = -8;
                }
            } else if (arg1 != NULL) {
                *arg1 = -2;
            }
        }
        return 0;
    }
    if (check_memcard_status__15TAdPlayerLoadGCFi(1) != 0) {
        if (arg1 != NULL) {
            *arg1 = -3;
        }
        return 0;
    }
    if (TAdPlayerLoadGC__sub_801E1B50(1) != 0) {
        if (arg1 != NULL) {
            *arg1 = -2;
        }
        return 0;
    }
    temp_r3 = find_card_file__15TAdPlayerLoadGCFiPv(1, TObjBoss2Tunnel__data_80438A08);
    if (temp_r3 == 0) {
        if (arg1 != NULL) {
            *arg1 = 1;
        }
        return 1;
    }
    if ((u32) (temp_r3 + 0x10000) == 0xff41U) {
        if (arg1 != NULL) {
            *arg1 = -9;
        }
        return 0;
    }
    if (arg0 != 1) {
        return 0;
    }
    if (TAdPlayerLoadGC__sub_801E0FA4(1) < 1) {
        if (arg1 != NULL) {
            *arg1 = -7;
        }
        return 0;
    }
    if (query_memcard_capacity__15TAdPlayerLoadGCFi(1, 0) < 0xF) {
        if (arg1 != NULL) {
            *arg1 = -1;
        }
        return 0;
    }
    if (arg1 != NULL) {
        *arg1 = 0;
    }
    return 1;
}

void TObjBoss2Tunnel__sub_8007DD24(void) {  }
void reset_state__15TObjBoss2TunnelFv(void) {
    TObjBoss2Tunnel__data_8048DF2C.x = lbl_805D9280;
    lbl_805D4E88 = 0;
    TObjBoss2Tunnel__data_8048DF2C.y = lbl_805D9284;
    TObjBoss2Tunnel__data_805D4E90 = 0;
    TObjBoss2Tunnel__data_805D4E8A = 0;
    TObjBoss2Tunnel__data_805D4E94 = 0;
    reset__12TQuestListVMFv();
}

}
