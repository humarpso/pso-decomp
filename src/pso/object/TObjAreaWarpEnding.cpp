#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8019C828___vt__18TObjAreaWarpForest { M2C_UNK value; u8 remaining[0x50]; };
typedef char RecoveredGlobal_8019C828___vt__18TObjAreaWarpForest_size[sizeof(RecoveredGlobal_8019C828___vt__18TObjAreaWarpForest) == 0x54 ? 1 : -1];

struct RecoveredGlobal_8019BF88___vt__18TObjAreaWarpEnding { M2C_UNK value; u8 remaining[0x50]; };
typedef char RecoveredGlobal_8019BF88___vt__18TObjAreaWarpEnding_size[sizeof(RecoveredGlobal_8019BF88___vt__18TObjAreaWarpEnding) == 0x54 ? 1 : -1];

struct RecoveredGlobal_8019C454___vt__17TObjAreaWarpQuest { M2C_UNK value; u8 remaining[0x50]; };
typedef char RecoveredGlobal_8019C454___vt__17TObjAreaWarpQuest_size[sizeof(RecoveredGlobal_8019C454___vt__17TObjAreaWarpQuest) == 0x54 ? 1 : -1];

extern "C" {
void TObjAreaWarp__sub_8019CAB0(void *);
extern const f32 lbl_805DBFDC;
extern const f32 lbl_805DBFE4;
void run_task__18TObjAreaWarpEndingFv(u8 *arg0);
void TObjAreaWarp__sub_8019CAB0(void *);
extern const f32 lbl_805DBFDC;
extern const f32 lbl_805DBFE4;
void run_task__18TObjAreaWarpForestFv(u8 *arg0);
void TObjAreaWarp__sub_8019CAB0(void *);
extern const f32 lbl_805DBFDC;
extern const f32 lbl_805DBFE4;
void run_task__17TObjAreaWarpQuestFv(u8 *arg0);
s32 queue_destruction__7TObjectFv(void *);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TObjAreaWarp__ct(void *, void *, void *);
s32 get_story_select__16TAdStorySelectGCFv();
s32 register_area_warp_object__16TAdStorySelectGCFPv(int);
s32 register_warp__16TObjMapForceWarpFPv(int);
s32 init__13TAdVIConfigGCFPvf(int, void *, f32);
s32 TLobby__sub_8030A7B0(int);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern M2C_UNK __vt__18TObjAreaWarpForest[];
extern s32 lbl_805D346C;
extern const f32 lbl_805DBFD8;
extern const f32 lbl_805DBFE4;
u8 *TObjAreaWarpForest__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TObjAreaWarp__ct(void *, void *, void *);
s32 get_story_select__16TAdStorySelectGCFv();
s32 register_area_warp_object__16TAdStorySelectGCFPv(int);
s32 register_warp__16TObjMapForceWarpFPv(int);
s32 init__13TAdVIConfigGCFPvf(int, void *, f32);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern M2C_UNK __vt__18TObjAreaWarpEnding[];
extern s32 lbl_805D3474;
extern const f32 lbl_805DBFD8;
extern const f32 lbl_805DBFE4;
u8 *TObjAreaWarpEnding__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TObjAreaWarp__ct(void *, void *, void *);
s32 get_story_select__16TAdStorySelectGCFv();
s32 register_area_warp_object__16TAdStorySelectGCFPv(int);
s32 register_warp__16TObjMapForceWarpFPv(int);
s32 init__13TAdVIConfigGCFPvf(int, void *, f32);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern M2C_UNK __vt__17TObjAreaWarpQuest[];
extern s32 lbl_805D3470;
extern const f32 lbl_805DBFD8;
extern const f32 lbl_805DBFE4;
u8 *TObjAreaWarpQuest__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *__dt__18TObjAreaWarpEndingFv(void *arg0, s16 arg1);
void create_and_init__18TObjAreaWarpEndingFv(void);
void open_confirm_window__18TObjAreaWarpEndingFPvs(void *arg0, s16 arg1);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
u32 TCheckRoomSequence__sub_802664A8(M2C_UNK, s32, s16);
M2C_UNK TWindowSubComCard__sub_80265C30(u32);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindowSubTradeMain__sub_80266200(u32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
u32 __nw__7TObjectFUl(M2C_UNK);
s32 get_main_phase();
M2C_UNK init__22THunterGuildSeqOfflineFPvPvPv(u32, s32, M2C_UNK *);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(u32);
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(u32);

extern M2C_UNK dispatch_select_phase__16TKeyBoardControlFv[];
extern s32 tl_00;

void create_and_init__18TObjAreaWarpEndingFv(void) {
    TBoss3Volopt__sub_8022675C(0x40003205, 0, 0, 0);
    u32 obj = __nw__7TObjectFUl(0x28);
    if (obj != 0U) {
        init__22THunterGuildSeqOfflineFPvPvPv(obj, tl_00, dispatch_select_phase__16TKeyBoardControlFv);
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
        set_flag_40__16TAdChrSelASlotGCFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        M2C_FIELD(arg0, s16 *, 0xB8) = arg1;
    }
}

extern M2C_UNK __vt__18TObjAreaWarpEnding[];

void run_task__18TObjAreaWarpEndingFv(u8 *arg0) {
  unsigned int new_var;
  *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xC4))) + lbl_805DBFDC);
  new_var = *((s32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0xD4)))) + 4));
  if (((f32) (new_var - 1)) < (*((f32 *) (((s8 *) arg0) + 0xC4))))
  {
    *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) lbl_805DBFE4;
  }
  *((s32 *) (((s8 *) arg0) + 0xC8)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0xC8))) + 0x150);
  TObjAreaWarp__sub_8019CAB0(arg0);
}

void *__dt__18TObjAreaWarpEndingFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjAreaWarpEnding;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#pragma pop

#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__17TObjAreaWarpQuestFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);

extern M2C_UNK __vt__17TObjAreaWarpQuest[];

u8 *TObjAreaWarpEnding__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r0;
    u32 temp_r0;
    u32 temp_r4;
    TObjAreaWarp__ct((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8019BF88___vt__18TObjAreaWarpEnding *)&__vt__18TObjAreaWarpEnding).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3474;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DBFE4;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x8C);
    temp_r4 = temp_r0 >> 0x1FU;
    M2C_FIELD(arg0, u32 *, 0x8C) = (u32) (((temp_r0 & 1) ^ temp_r4) - temp_r4);
    M2C_FIELD(arg0, s32 *, 0xCC) = register_warp__16TObjMapForceWarpFPv((int) (0));
    M2C_FIELD(arg0, s32 *, 0xD0) = register_warp__16TObjMapForceWarpFPv((int) (1));
    M2C_FIELD(arg0, s32 *, 0xD4) = register_area_warp_object__16TAdStorySelectGCFPv((int) (0));
    M2C_FIELD(arg0, s32 *, 0xD8) = get_story_select__16TAdStorySelectGCFv();
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x88));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = init__13TAdVIConfigGCFPvf((int) (temp_r3), (void *) (arg0 + 0x38), (f32) (lbl_805DBFD8));
        }
        M2C_FIELD(arg0, s32 *, 0xC0) = var_r0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    }
    return arg0;
}

void run_task__17TObjAreaWarpQuestFv(u8 *arg0) {
  *((f32 *) (((s8 *) arg0) + 0xC8)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xC8))) + lbl_805DBFDC);
  if (((f32) ((unsigned long) ((*((s32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0xD8)))) + 4))) - 1))) < (*((f32 *) (((s8 *) arg0) + 0xC8))))
  {
    *((f32 *) (((s8 *) arg0) + 0xC8)) = (f32) lbl_805DBFE4;
  }
  *((s32 *) (((s8 *) arg0) + 0xCC)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0xCC))) + 0x150);
  TObjAreaWarp__sub_8019CAB0(arg0);
}

void *__dt__17TObjAreaWarpQuestFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjAreaWarpQuest;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#pragma pop

#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TObjAreaWarpForest__vt17(void* p);
void *__dt__18TObjAreaWarpForestFv(void *arg0, s16 arg1);
int TObjAreaWarp__sub_8019CA24(void*);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);

u8 *TObjAreaWarpQuest__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r0;
    u32 temp_r0;
    u32 temp_r4;
    TObjAreaWarp__ct((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8019C454___vt__17TObjAreaWarpQuest *)&__vt__17TObjAreaWarpQuest).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3470;
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805DBFE4;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x8C);
    temp_r4 = temp_r0 >> 0x1FU;
    M2C_FIELD(arg0, u32 *, 0x8C) = (u32) (((temp_r0 & 1) ^ temp_r4) - temp_r4);
    M2C_FIELD(arg0, s32 *, 0xC4) = (s32) M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, s32 *, 0xD0) = register_warp__16TObjMapForceWarpFPv((int) (0));
    M2C_FIELD(arg0, s32 *, 0xD4) = register_warp__16TObjMapForceWarpFPv((int) (1));
    M2C_FIELD(arg0, s32 *, 0xD8) = register_area_warp_object__16TAdStorySelectGCFPv((int) (0));
    M2C_FIELD(arg0, s32 *, 0xDC) = get_story_select__16TAdStorySelectGCFv();
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x88));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = init__13TAdVIConfigGCFPvf((int) (temp_r3), (void *) (arg0 + 0x38), (f32) (lbl_805DBFD8));
        }
        M2C_FIELD(arg0, s32 *, 0xC0) = var_r0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    }
    return arg0;
}

int TObjAreaWarpForest__vt17(void* p) { return TObjAreaWarp__sub_8019CA24(p); }

extern M2C_UNK __vt__18TObjAreaWarpForest[];

void run_task__18TObjAreaWarpForestFv(u8 *arg0) {
  *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xC4))) + lbl_805DBFDC);
  if (((f32) ((*((s32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0xD4)))) + 4))) - (1 & 0xFFu))) < (*((f32 *) (((s8 *) arg0) + 0xC4))))
  {
    *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) lbl_805DBFE4;
  }
  *((s32 *) (((s8 *) arg0) + 0xC8)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0xC8))) + 0x150);
  TObjAreaWarp__sub_8019CAB0(arg0);
}

void *__dt__18TObjAreaWarpForestFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjAreaWarpForest;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TObjAreaWarpForest__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3_2;
    s32 var_r0;
    u32 temp_r0;
    u32 temp_r3;
    TObjAreaWarp__ct((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8019C828___vt__18TObjAreaWarpForest *)&__vt__18TObjAreaWarpForest).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D346C;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DBFE4;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x8C);
    temp_r3 = temp_r0 >> 0x1FU;
    M2C_FIELD(arg0, u32 *, 0x8C) = (u32) (((temp_r0 & 1) ^ temp_r3) - temp_r3);
    if ((TLobby__sub_8030A7B0((int) (temp_r3)) == 1) && ((s32) M2C_FIELD(arg0, u32 *, 0x8C) == 0)) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return arg0;
    }
    M2C_FIELD(arg0, s32 *, 0xCC) = register_warp__16TObjMapForceWarpFPv((int) (0));
    M2C_FIELD(arg0, s32 *, 0xD0) = register_warp__16TObjMapForceWarpFPv((int) (1));
    M2C_FIELD(arg0, s32 *, 0xD4) = register_area_warp_object__16TAdStorySelectGCFPv((int) (0));
    M2C_FIELD(arg0, s32 *, 0xD8) = get_story_select__16TAdStorySelectGCFv();
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        temp_r3_2 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x88));
        var_r0 = temp_r3_2;
        if (var_r0 != 0) {
            var_r0 = init__13TAdVIConfigGCFPvf((int) (temp_r3_2), (void *) (arg0 + 0x38), (f32) (lbl_805DBFD8));
        }
        M2C_FIELD(arg0, s32 *, 0xC0) = var_r0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    }
    return arg0;
}

}

#pragma pop
