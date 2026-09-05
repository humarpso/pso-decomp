#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TAdSinglePlyChrSelectGC__sub_8033B9E0(void *);
u8 * create_check_memory_card__23TAdSinglePlyChrSelectGCFPvPvPv(void *, void *, void *);
void TAdSinglePlyChrSelectGC__sub_8033B190(u8 *arg0);
}

extern "C" {

int queue_destruction__23TAdSinglePlyChrSelectGCFPv(void* p);
void update_select_state__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void update_setup__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FDA4C();
int TAdSinglePlyChrSelectGC__sub_8033B244(void* p);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8033B5F0(void *);
int TKeyBoardControl__sub_8000F9B0(void*);
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
int queue_destruction__7TObjectFv(void*);
s32 send_and_handle__6TLobbyFPvii(s32, s32, s32);
M2C_UNK set_char_slots__23TAdSinglePlyChrSelectGCFPvii(void *, M2C_UNK, M2C_UNK);
M2C_UNK set_player_index__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
s32 setup__23TAdSinglePlyChrSelectGCFi(s32);

int queue_destruction__23TAdSinglePlyChrSelectGCFPv(void* p) { return queue_destruction__7TObjectFv(p); }

void update_setup__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (setup__23TAdSinglePlyChrSelectGCFi(M2C_FIELD(arg0, s32 *, 0x24)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 8;
        set_player_index__23TAdSinglePlyChrSelectGCFi(0xC);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    TAdSinglePlyChrSelectGC__sub_8033B5F0(arg0);
}

void update_select_state__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (TAdSinglePlyChrSelectGC__sub_801FDA4C() == 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 5;
        set_player_index__23TAdSinglePlyChrSelectGCFi(6);
        set_char_slots__23TAdSinglePlyChrSelectGCFPvii(arg0, 0xC, -1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    TAdSinglePlyChrSelectGC__sub_8033B5F0(arg0);
}
void TAdSinglePlyChrSelectGC__sub_8033B190(u8 *arg0) {
    u8 *temp_r3;
    M2C_FIELD(arg0, u8 **, 0x40) = create_check_memory_card__23TAdSinglePlyChrSelectGCFPvPvPv(arg0, NULL, NULL);
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x40));
    if (temp_r3 != NULL) {
        TAdSinglePlyChrSelectGC__sub_8033B9E0(temp_r3);
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 1;
}

}
