#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8033F1C4___vt__12TAdMcCheckGC {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
M2C_UNK __dt__7TObjectFv(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_804EFAA0[];
extern M2C_UNK __vt__12TAdMcCheckGC[];
u8 *__dt__12TAdMcCheckGCFv(u8 *arg0, s16 arg1);
}

extern "C" {

void *TAdMcCheckGC__ct(void *arg0, void *arg1, void *arg2);
void TLobby__sub_8033EE38(void* p);
s32 create__12TAdMcCheckGCFPvi(void *arg0, s32 arg1);
void render__12TAdMcCheckGCFv(void);
void run_task__12TAdMcCheckGCFv(u8 *arg0);
void set_tex_coord_gen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 GXSetTexCoordGen2(s32, s32, s32, s32, s32, s32);
s32 probe_and_check_card__15TAdPlayerLoadGCFi(int);
s32 probe_card_slot__15TAdPlayerLoadGCFi(int);
s32 get_localized_text_entry(M2C_UNK, s32);
M2C_UNK calc_layout_height__17TWindowSubComCardFPvf(s32, f32);
void __ct__7TObjectFP7TObject(void *);
s32 check_memcard_status__15TAdPlayerLoadGCFi(int);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(void *, M2C_UNK, s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_load_result__15TAdPlayerLoadGCFv(int);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(s32);
M2C_UNK set_status_flag_80__12TQuestThreadFPv(s32);

void set_tex_coord_gen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2(arg0, arg1, arg2, arg3, 0, 0x7D);
}
void TLobby__sub_8033EE38(void* p) { *(s32*)((char*)p + 0x18) = 0; *(s32*)((char*)p + 0x1c) = 0; }
void render__12TAdMcCheckGCFv(void) {  }

extern u8 lbl_804783B8[];
extern f32 lbl_805DFAD8;

s32 create__12TAdMcCheckGCFPvi(void *arg0, s32 arg1) {
    s32 temp_r31;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x28) * 8;
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii(lbl_804783B8 + temp_r5, 1, temp_r5);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_localized_text_entry(0x16, arg1), 0x20, 0);
    set_flag_40__16TAdChrSelASlotGCFPv(temp_r31);
    set_status_flag_80__12TQuestThreadFPv(temp_r31);
    calc_layout_height__17TWindowSubComCardFPvf(temp_r31, lbl_805DFAD8);
    return temp_r31;
}

void run_task__12TAdMcCheckGCFv(u8 *arg0) {
    s32 temp_r0;

    if (probe_card_slot__15TAdPlayerLoadGCFi((int) (M2C_FIELD(arg0, s32 *, 0x28))) == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x38));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        if (probe_card_slot__15TAdPlayerLoadGCFi((int) (M2C_FIELD(arg0, s32 *, 0x28))) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        }
        break;
    case 1:
        if ((probe_and_check_card__15TAdPlayerLoadGCFi((int) (M2C_FIELD(arg0, s32 *, 0x28))) == 0) && ((u32) (get_load_result__15TAdPlayerLoadGCFv((int) (M2C_FIELD(arg0, s32 *, 0x28))) + 0x10000) == 0xFF83U)) {
            if (((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U)) {
                M2C_FIELD(arg0, u32 *, 0x2C) = create__12TAdMcCheckGCFPvi((void *)((void *) (arg0)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x28) + 2)));
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
            if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C));
                M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
            }
        }
        break;
    case 2:
        if ((probe_and_check_card__15TAdPlayerLoadGCFi((int) (M2C_FIELD(arg0, s32 *, 0x28))) == 0) && ((u32) (get_load_result__15TAdPlayerLoadGCFv((int) (M2C_FIELD(arg0, s32 *, 0x28))) + 0x10000) == 0xFF21U)) {
            if (((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x30) == 0U)) {
                M2C_FIELD(arg0, u32 *, 0x30) = create__12TAdMcCheckGCFPvi((void *)((void *) (arg0)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x28) + 4)));
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C) = 3;
            if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30));
                M2C_FIELD(arg0, u32 *, 0x30) = 0U;
            }
        }
        break;
    case 3:
        if (probe_and_check_card__15TAdPlayerLoadGCFi((int) (M2C_FIELD(arg0, s32 *, 0x28))) != 0) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x28) == 1) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 5;
            } else {
                M2C_FIELD(arg0, s32 *, 0x1C) = 4;
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34));
                M2C_FIELD(arg0, u32 *, 0x34) = 0U;
            }
        } else if (((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x34) == 0U)) {
            M2C_FIELD(arg0, u32 *, 0x34) = create__12TAdMcCheckGCFPvi((void *)((void *) (arg0)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x28) + 6)));
        }
        break;
    case 4:
        if (check_memcard_status__15TAdPlayerLoadGCFi((int) (M2C_FIELD(arg0, s32 *, 0x28))) == 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 5;
            if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x38));
                M2C_FIELD(arg0, u32 *, 0x38) = 0U;
            }
        } else if (((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x38) == 0U)) {
            M2C_FIELD(arg0, u32 *, 0x38) = create__12TAdMcCheckGCFPvi((void *)((void *) (arg0)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x28) + 8)));
        }
        break;
    case 5:
        break;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != (s32) M2C_FIELD(arg0, s32 *, 0x1C)) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
}

extern M2C_UNK __vt__12TAdMcCheckGC[];
extern void *TAdMcCheckGC__name;

typedef char RecoveredGlobal_8033F1C4___vt__12TAdMcCheckGC_size[sizeof(RecoveredGlobal_8033F1C4___vt__12TAdMcCheckGC) == 0x18 ? 1 : -1];
u8 *__dt__12TAdMcCheckGCFv(u8 *arg0, s16 arg1) {
    s32 temp_r4;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8033F1C4___vt__12TAdMcCheckGC *)&__vt__12TAdMcCheckGC).value;
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x28) * 4;
        if ((u32) M2C_FIELD(((u8 *)(lbl_804EFAA0) + temp_r4), u32 *, 0) != 0U) {
            M2C_FIELD(((u8 *)(lbl_804EFAA0) + temp_r4), s32 *, 0) = 0;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x38));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
        __dt__7TObjectFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

void *TAdMcCheckGC__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TAdMcCheckGC;
    M2C_FIELD(arg0, void **, 0x0) = TAdMcCheckGC__name;
    M2C_FIELD(arg0, void **, 0x28) = arg2;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, void **, 0x20) = M2C_FIELD(arg0, void **, 0x1C);
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    return arg0;
}

}
