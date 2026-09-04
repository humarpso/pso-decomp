#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_memcard_load_result__17TMCFormatSequenceFPv(void *arg0);
void close_window__17TMCFormatSequenceFPv(void* p);
void process_format_result__17TMCFormatSequenceFPv(void *arg0);
void show_message__17TMCFormatSequenceFPvii(void *arg0, s32 arg1, s32 arg2);
s32 TAdPlayerLoadGC__sub_801E0D8C(s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 TAdPlayerLoadGC__sub_801E1E38(s32);
s32 TAdPlayerLoadGC__sub_801E24F8(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
s32 TWindowSubComCard__sub_80265BF8(u32);
int TWindow__close(void*);
s32 check_memcard_status__15TAdPlayerLoadGCFi(s32);
s32 get_status_flag__17TWindowSubComCardFPv(u32);
s32 is_visible__17TWindowSubComCardFPv(u32);
M2C_UNK send_and_handle__6TLobbyFPvii(s32, s32, s32);

void close_window__17TMCFormatSequenceFPv(void* p) { if (*(unsigned int*)((char*)p + 0x34) != 0) { TWindow__close((void*)(*(void**)((char*)p + 0x34))); *(int*)((char*)p + 0x34) = 0; } }

void show_message__17TMCFormatSequenceFPvii(void *arg0, s32 arg1, s32 arg2) {
    u32 v = M2C_FIELD(arg0, u32 *, 0x34);
    if (v != 0U) {
        send_and_handle__6TLobbyFPvii(v, arg1, arg2 | 0x81);
    }
}

void check_memcard_load_result__17TMCFormatSequenceFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1E38(M2C_FIELD(arg0, s32 *, 0x28)) == 0) {
        show_message__17TMCFormatSequenceFPvii((void *)(arg0), (s32)(TAdSinglePlyChrSelectGC__sub_80132F2C(0xB, 0x6C)), (s32)(0));
        M2C_FIELD(arg0, s32 *, 0x24) = 3;
        return;
    }
    if (TAdPlayerLoadGC__sub_801E1B50(M2C_FIELD(arg0, s32 *, 0x28)) == 0) {
        show_message__17TMCFormatSequenceFPvii((void *)(arg0), (s32)(TAdSinglePlyChrSelectGC__sub_80132F2C(0xB, 0x6B)), (s32)(0));
        M2C_FIELD(arg0, s32 *, 0x24) = 4;
    }
}

void process_format_result__17TMCFormatSequenceFPv(void *arg0) {
    s32 temp_r3;

    if (TAdPlayerLoadGC__sub_801E1E38(M2C_FIELD(arg0, s32 *, 0x28)) == 0) {
        show_message__17TMCFormatSequenceFPvii((void *)(arg0), (s32)(TAdSinglePlyChrSelectGC__sub_80132F2C(0xB, 0x6C)), (s32)(0));
        M2C_FIELD(arg0, s32 *, 0x24) = 3;
        return;
    }
    if (TAdPlayerLoadGC__sub_801E0D8C(M2C_FIELD(arg0, s32 *, 0x28)) == 0) {
        show_message__17TMCFormatSequenceFPvii((void *)(arg0), (s32)(TAdSinglePlyChrSelectGC__sub_80132F2C(0xB, 0x6C)), (s32)(0));
        M2C_FIELD(arg0, s32 *, 0x24) = 3;
        return;
    }
    if ((u32) (check_memcard_status__15TAdPlayerLoadGCFi(M2C_FIELD(arg0, s32 *, 0x28)) + 0x10000) != 0xFF03U) {
        show_message__17TMCFormatSequenceFPvii((void *)(arg0), (s32)(TAdSinglePlyChrSelectGC__sub_80132F2C(0xB, 0x6C)), (s32)(0));
        M2C_FIELD(arg0, s32 *, 0x24) = 3;
        return;
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) && (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x38)) != 0)) {
        temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x38));
        if (temp_r3 == 0) {
            if (TAdPlayerLoadGC__sub_801E24F8(M2C_FIELD(arg0, s32 *, 0x28), 0, 0, 0, 0) == 0) {
                M2C_FIELD(arg0, s32 *, 0x24) = 2;
            } else {
                show_message__17TMCFormatSequenceFPvii((void *)(arg0), (s32)(TAdSinglePlyChrSelectGC__sub_80132F2C(0xB, 0x6C)), (s32)(0));
                M2C_FIELD(arg0, s32 *, 0x24) = 3;
            }
        }
        if (temp_r3 == 1) {
            close_window__17TMCFormatSequenceFPv((void*)(arg0));
            M2C_FIELD(arg0, s32 *, 0x24) = 4;
        }
        TWindow__close((void*)(M2C_FIELD(arg0, u32 *, 0x38)));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) && (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x38)) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x24) = 4;
        TWindow__close((void*)(M2C_FIELD(arg0, u32 *, 0x38)));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        close_window__17TMCFormatSequenceFPv((void*)(arg0));
    }
}

}
