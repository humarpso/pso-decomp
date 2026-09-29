#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pair_801F6E08 { s32 a; s32 b; };

extern "C" {
void display_message__22TQuestVmDownLoadServerFPvii(void*, s32, s32);
s32 create_window__17TMedicalCenterMesFPvii(void*, s32, void*);
s32 TWindowSubComCard__sub_8026CBB8(s32, s32, void*);
extern s32 lbl_8044A668[];
void TQuestVmDownLoadServer__sub_801F6E08(u8* arg0, s32 arg1, s32 arg2);
}

extern "C" {

void check_client_connections__22TQuestVmDownLoadServerFPv(void *arg0);
void close__22TQuestVmDownLoadServerFPv(void *arg0);
void close_download__22TQuestVmDownLoadServerFPv(void *arg0);
void close_message__22TQuestVmDownLoadServerFPv(void* p);
void destroy__22TQuestVmDownLoadServerFPv(void *arg0);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 TAdPlayerLoadGC__sub_801E1E38(s32);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
void TQuestVmDownLoadServer__sub_801F8D30(void);
void allow_rendering__7TObjectFv(void *);
M2C_UNK clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
int close__17TMedicalCenterMesFPv(void*);
void queue_destruction__7TObjectFv(void *);
M2C_UNK reset_quest_id__23TAdSinglePlyChrSelectGCFv();
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
M2C_UNK set_flag_4__9TObjLukerFPv(void *);
void set_ready__6TSceneFv(void *);
M2C_UNK update_state__13TAdMcSelectGCFv();

void close_message__22TQuestVmDownLoadServerFPv(void* p) { if (*(unsigned int*)((char*)p + 0x294) != 0) { close__17TMedicalCenterMesFPv((char*)p + 0x1c); *(int*)((char*)p + 0x294) = 0; } }

extern s32 lbl_805D55C0;
extern s32 TQuestVmDownLoadServer__data_805D5F18;

void TQuestVmDownLoadServer__sub_801F6E08(u8* arg0, s32 arg1, s32 arg2) {
    Pair_801F6E08 sp;
    if (*(u32*)(arg0 + 0x294) == 0) {
        sp.a = lbl_8044A668[0];
        sp.b = lbl_8044A668[1];
        *(s32*)(arg0 + 0x294) = create_window__17TMedicalCenterMesFPvii(arg0 + 0x1C, TWindowSubComCard__sub_8026CBB8(0x2F, lbl_8044A668[0], lbl_8044A668), &sp);
    }
    display_message__22TQuestVmDownLoadServerFPvii(arg0 + 0x1C, arg1, arg2 | 0x80);
}

void check_client_connections__22TQuestVmDownLoadServerFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 var_r30;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x2A0);
    if ((temp_r0 == 0) || (temp_r0 == 0x15) || (temp_r0 == 0x16)) {
        return;
    }
    {
        if ((s32) lbl_805D55C0 != 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x29C) != 0U) {
                set_flag_4__9TObjLukerFPv(M2C_FIELD(arg0, void **, 0x29C));
            }
        } else {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x29C) != 0U) {
                clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, void **, 0x29C));
            }
            var_r30 = 0;
            M2C_FIELD(arg0, s32 *, 0x234) = 0;
            do {
                if (TAdPlayerLoadGC__sub_801E1E38(var_r30) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x234) = (s32) (M2C_FIELD(arg0, s32 *, 0x234) | (1 << var_r30));
                }
                var_r30 += 1;
            } while (var_r30 < 8);
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x234);
            if (temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x238)) {
                M2C_FIELD(arg0, s32 *, 0x238) = temp_r3;
                if ((s32) TQuestVmDownLoadServer__data_805D5F18 != 0) {
                    TQuestVmDownLoadServer__data_805D5F18 = 0;
                    TQuestVmDownLoadServer__sub_801F6E08((u8*)(arg0), (s32)(TQuestVmDownLoadServer__sub_8006EF6C(0xB)), (s32)(1));
                    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x12;
                } else {
                    M2C_FIELD(arg0, s32 *, 0x2A0) = 1;
                }
            }
        }
    }
}

extern s32 TQuestVmDownLoadServer__data_805D5F18;

void close__22TQuestVmDownLoadServerFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x260) != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x260));
        M2C_FIELD(arg0, u32 *, 0x260) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
        clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x28C));
    }
    update_state__13TAdMcSelectGCFv();
    TQuestVmDownLoadServer__sub_801F6E08((u8*)(arg0), (s32)(TAdSinglePlyChrSelectGC__sub_80132F2C(0x29, 1)), (s32)(1));
    M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
    TQuestVmDownLoadServer__data_805D5F18 = 0;
}

extern void *lbl_805D55D4;

void destroy__22TQuestVmDownLoadServerFPv(void *arg0) {
    set_ready__6TSceneFv(arg0);
    if (lbl_805D55D4 != NULL) {
        allow_rendering__7TObjectFv(lbl_805D55D4);
    }
    TQuestVmDownLoadServer__sub_801F8D30();
    queue_destruction__7TObjectFv(arg0);
}

extern s32 lbl_805D49B4;

void close_download__22TQuestVmDownLoadServerFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1B50(M2C_FIELD(arg0, s32 *, 0x25C)) == 0) {
        reset_quest_id__23TAdSinglePlyChrSelectGCFv();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x260) != 0U) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x260));
            M2C_FIELD(arg0, u32 *, 0x260) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
            clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x28C));
        }
        TQuestVmDownLoadServer__sub_801F6E08((u8*)(arg0), (s32)(TQuestVmDownLoadServer__sub_8006EF6C(0x41)), (s32)(1));
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0x13;
        lbl_805D49B4 = 0;
    }
}

}
