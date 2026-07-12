#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjAreaWarpEnding__sub_8019BB9C(void);
void open_confirm_window__18TObjAreaWarpEndingFPvs(void *arg0, s16 arg1);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
u32 TCheckRoomSequence__sub_802664A8(M2C_UNK, s32, s16);
M2C_UNK TWindowSubComCard__sub_80265C30(u32);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindowSubTradeMain__sub_80266200(u32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK TAdChrSelASlotGC__sub_800740FC(u32);
s32 get_main_phase();
M2C_UNK init__22THunterGuildSeqOfflineFPvPvPv(u32, s32, M2C_UNK *);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(u32);

extern M2C_UNK fn_8019BB2C[];
extern s32 tl_00;

void TObjAreaWarpEnding__sub_8019BB9C(void) {
    TBoss3Volopt__sub_8022675C(0x40003205, 0, 0, 0);
    u32 obj = __nw__7TObjectFUl(0x28);
    if (obj != 0U) {
        init__22THunterGuildSeqOfflineFPvPvPv(obj, tl_00, fn_8019BB2C);
    }
}

void open_confirm_window__18TObjAreaWarpEndingFPvs(void *arg0, s16 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) == 0U) {
        M2C_FIELD(arg0, u32 *, 0xB0) = TCheckRoomSequence__sub_802664A8(TWindowSubComCard__sub_8026CBB8(0x33), 1, arg1);
        if (get_main_phase() == 0xE) {
            TWindowSubTradeMain__sub_80266200(M2C_FIELD(arg0, u32 *, 0xB0), TAdSinglePlyChrSelectGC__sub_80132F2C(9, 0x26), 3, 0, -1);
        } else {
            TWindowSubTradeMain__sub_80266200(M2C_FIELD(arg0, u32 *, 0xB0), TAdSinglePlyChrSelectGC__sub_80132F2C(9, 0x23), 2, 0, -1);
        }
        TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0xB0));
        TWindowSubComCard__sub_80265C30(M2C_FIELD(arg0, u32 *, 0xB0));
        set_flag70_bit10__16TObjCityMainWarpFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        TAdChrSelASlotGC__sub_800740FC(M2C_FIELD(arg0, u32 *, 0xB0));
        M2C_FIELD(arg0, s16 *, 0xB8) = arg1;
    }
}

}
