#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_80217EC4 {
    s32 sp8;
    s32 spC;
};

struct RecoveredGlobal_80217EC4_lbl_8044BEDC { M2C_UNK value; u8 remaining[0x8]; };
typedef char RecoveredGlobal_80217EC4_lbl_8044BEDC_size[sizeof(RecoveredGlobal_80217EC4_lbl_8044BEDC) == 0xC ? 1 : -1];

extern "C" {
s32 obj_getField1c(int);
s32 get_camera_id__11TCameraCtrlFv();
int set_field_20__12TQuestListVMFPvi(void*, int);
s32 set_position_xy(int, f32, f32);
s32 set_field_1c__6TLobbyFPvf(int, f32);
s32 send_and_handle__6TLobbyFPvii(int, void *, int);
u32 TLobby__sub_80269CC0(int, void *, int, int);
s32 TWindowSubComCard__sub_8026CBB8(int);
extern RecoveredGlobal_80217EC4_lbl_8044BEDC lbl_8044BEDC;
extern u32 TQuestListOnline__data_805D6194;
extern const f32 lbl_805DC6A4;
extern const f32 lbl_805DC6A8;
void TQuestListOnline__sub_80217EC4(u8 *arg0);
}

extern "C" {

void invoke_callback_30_and_queue_destruction__16TQuestListOnlineFPv(void *arg0);
void request_quest_list__16TQuestListOnlineFi(s32 arg0);
int run_task__16TQuestListOnlineFPv(void* p);
s32 TLobby__sub_8001EEF4();
s32 TLobby__sub_8001EEFC(M2C_UNK *);
M2C_UNK queue_destruction__7TObjectFv(void *);
int set_field_20__12TQuestListVMFPvi(void*, int);

void invoke_callback_30_and_queue_destruction__16TQuestListOnlineFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x30);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(arg0);
}

extern M2C_UNK lbl_8044BEB0[];
extern s32 TQuestListOnline__data_805D61E4;

void request_quest_list__16TQuestListOnlineFi(s32 arg0) {
    if (TLobby__sub_8001EEF4() != 0) {
        TQuestListOnline__data_805D61E4 = TLobby__sub_8001EEFC(lbl_8044BEB0);
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (int)(6));
    }
}

int run_task__16TQuestListOnlineFPv(void* p) { return set_field_20__12TQuestListVMFPvi((void*)(p), (int)(5)); }
void TQuestListOnline__sub_80217EC4(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80217EC4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80217EC4, spC) == 0x4) ? 1 : -1];
    Stack_80217EC4 stack;
    u16 temp_r31;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) == 0U) {
        stack.sp8 = M2C_FIELD(&lbl_8044BEDC.value, s32 *, 0);
        stack.spC = M2C_FIELD(&lbl_8044BEDC.value, s32 *, 4);
        temp_r31 = obj_getField1c((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        M2C_FIELD(arg0, u32 *, 0x40) = TLobby__sub_80269CC0((int) (TWindowSubComCard__sub_8026CBB8((int) (0x2E))), (void *) (&stack.sp8), (int) (1), (int) ((s32) temp_r31));
        set_field_1c__6TLobbyFPvf((int) (M2C_FIELD(arg0, u32 *, 0x40)), (f32) (lbl_805DC6A4));
        if (get_camera_id__11TCameraCtrlFv() >= 2) {
            set_position_xy((int) (M2C_FIELD(arg0, u32 *, 0x40)), (f32) (lbl_805DC6A8), (f32) (lbl_805DC6A8));
        }
    }
    if ((u32) TQuestListOnline__data_805D6194 != 0U) {
        send_and_handle__6TLobbyFPvii((int) (M2C_FIELD(arg0, u32 *, 0x40)), (void *) (TQuestListOnline__data_805D6194 + 4), (int) (0x80));
    }
    set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (int)((int) (3)));
}

}
