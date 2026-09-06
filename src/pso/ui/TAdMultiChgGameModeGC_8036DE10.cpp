#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TWindow__close(void *);
void close_window_30__21TAdMultiChgGameModeGCFPv(void *arg0);
M2C_UNK TWindow__close(void *);
void close_window__21TAdMultiChgGameModeGCFPv(void* p);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E858(void *, M2C_UNK);
s32 is_visible__17TWindowSubComCardFPv(void *);
void close_window_30__21TAdMultiChgGameModeGCFPv(void *arg0);
void close_window__21TAdMultiChgGameModeGCFPv(void* p);
s32 TWindowSubComCard__sub_80265BF8(void *);
void TAdMultiChgGameModeGC__sub_8036E3D4(u8 *arg0);
void *__nw__7TObjectFUl(int);
void *__ct__9TAdBackGCFv(void *, void *);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void TAdMultiChgGameModeGC__sub_8036E49C(void *arg0);
void TAdMultiChgGameModeGC__sub_8036E49C(void *arg0);
M2C_UNK TWindow__close(void *);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, s32, M2C_UNK);
s32 TAdMultiChgGameModeGC__sub_8036DE10(void *, M2C_UNK, s32);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E19C(void *, M2C_UNK);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E2AC(void *, M2C_UNK);
void TAdMultiChgGameModeGC__sub_8036E51C(u8 *arg0);
s32 get_instance__15TAdPlayerLoadGCFv();
M2C_UNK TAdMultiChgGameModeGC__sub_8036E858(void *, M2C_UNK);
s32 get_instance__15TAdPlayerLoadGCFv();
void TAdMultiChgGameModeGC__sub_8036E5A8(s32 arg0);
int load_system_file(void* a0 = 0);
void load_system_on_mode_default__21TAdMultiChgGameModeGCFPv(void* p);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E858(void *, M2C_UNK);
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
s32 get_instance__15TAdPlayerLoadGCFv();
M2C_UNK TAdMultiChgGameModeGC__sub_8036E858(void *, M2C_UNK);
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
void TAdMultiChgGameModeGC__sub_8036E6A0(s32 arg0);
void TAdMultiChgGameModeGC__sub_8036E6EC(void);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FD6B4();
s32 TAdSinglePlyChrSelectGC__sub_801FF200();
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E858(void *, M2C_UNK);
void TAdMultiChgGameModeGC__sub_8036E6F0(s32 arg0);
void TAdMultiChgGameModeGC__sub_8036E750(void);
int TAdMultiChgGameModeGC__sub_8036E754(void);
int TAdMultiChgGameModeGC__sub_8036E7DC(void);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);
int request_scene_change_vt__21TAdMultiChgGameModeGCFPv(void* p);
void TAdMultiChgGameModeGC__sub_8036E830(void);
int init_change_mode__21TAdMultiChgGameModeGCFv(void*);
int init_change_mode__21TAdMultiChgGameModeGCFPv(void* p);
void TAdMultiChgGameModeGC__sub_8036E854(void);
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E858(void *, M2C_UNK);
void confirm_mode_selection__21TAdMultiChgGameModeGCFPv(void* p);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E19C(void *, M2C_UNK);
void close_window_30__21TAdMultiChgGameModeGCFPv(void *arg0);
void TAdMultiChgGameModeGC__sub_8036E9EC(void* p);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);
extern M2C_UNK lbl_804F3A20[];
void *__dt__21TAdMultiChgGameModeGCFPvs(void *arg0, s16 arg1);
}

extern "C" {

void close_windows_and_cleanup(void *arg0);
void close_windows_and_reopen__21TAdMultiChgGameModeGCFPv(void *arg0);
void close_windows_on_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
void update_card_confirm_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
void update_confirm_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
s32 TAdMultiChgGameModeGC__sub_8036DE10(void *, M2C_UNK, s32);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E19C(void *, M2C_UNK);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E2AC(void *, M2C_UNK);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E858(void *, M2C_UNK);
s32 TWindowSubComCard__sub_80265BF8(void *);
M2C_UNK TWindow__close(void *);
s32 is_visible__17TWindowSubComCardFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, s32, M2C_UNK);

void close_windows_on_selection__21TAdMultiChgGameModeGCFPv(void *arg0) {
    void *temp_r3;
    if (handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)((void *)((void *)((void *)(arg0))))) == 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0x30);
        if ((u32) temp_r3 != 0U) {
            queue_destruction__7TObjectFv(temp_r3);
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        temp_r3 = M2C_FIELD(arg0, void **, 0x34);
        if ((u32) temp_r3 != 0U) {
            queue_destruction__7TObjectFv(temp_r3);
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        TAdMultiChgGameModeGC__sub_8036E858(arg0, 3);
    }
}

void update_confirm_selection__21TAdMultiChgGameModeGCFPv(void *arg0) {
    s32 temp_r3;
    u32 temp_r3_2;

    if (handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)((void *)((void *)((void *)(arg0))))) == 0) {
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x34);
        if (temp_r3_2 != 0U) {
            if (is_visible__17TWindowSubComCardFPv((void *)(temp_r3_2)) != 0) {
                temp_r3 = TWindowSubComCard__sub_80265BF8((void *)(M2C_FIELD(arg0, u32 *, 0x34)));
                switch (temp_r3) {
                case 0:
                    TAdMultiChgGameModeGC__sub_8036E858(arg0, 6);
                    close_window_30__21TAdMultiChgGameModeGCFPv((void *)(arg0));
                    TAdMultiChgGameModeGC__sub_8036E19C(arg0, 8);
                    return;
                case 1:
                    close_window__21TAdMultiChgGameModeGCFPv((void*)(arg0));
                    TAdMultiChgGameModeGC__sub_8036E858(arg0, 3);
                    return;
                }
            }
        } else {
            TAdMultiChgGameModeGC__sub_8036E858(arg0, 8);
        }
    }
}

void close_windows_and_cleanup(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x34));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    TAdMultiChgGameModeGC__sub_8036E2AC(arg0, 0);
    TAdMultiChgGameModeGC__sub_8036E19C(arg0, 4);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x30), TAdMultiChgGameModeGC__sub_8036DE10(arg0, 3, M2C_FIELD(arg0, s32 *, 0x24)), 3);
    }
}

void update_card_confirm_selection__21TAdMultiChgGameModeGCFPv(void *arg0) {
    s32 temp_r3;

    if (handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)((void *)((void *)((void *)(arg0))))) == 0) {
        if (M2C_FIELD(arg0, void **, 0x34) != 0) {
            if (is_visible__17TWindowSubComCardFPv((void *)(M2C_FIELD(arg0, void **, 0x34))) != 0) {
                temp_r3 = TWindowSubComCard__sub_80265BF8((void *)(M2C_FIELD(arg0, void **, 0x34)));
                switch (temp_r3) {
                case 0:
                    close_window_30__21TAdMultiChgGameModeGCFPv((void *)(arg0));
                    close_window__21TAdMultiChgGameModeGCFPv((void*)(arg0));
                    TAdMultiChgGameModeGC__sub_8036E858(arg0, 5);
                    return;
                case 1:
                    close_window__21TAdMultiChgGameModeGCFPv((void*)(arg0));
                    TAdMultiChgGameModeGC__sub_8036E858(arg0, 3);
                    return;
                }
            }
        } else {
            TAdMultiChgGameModeGC__sub_8036E858(arg0, 8);
        }
    }
}

void close_windows_and_reopen__21TAdMultiChgGameModeGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x34));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    TAdMultiChgGameModeGC__sub_8036E2AC(arg0, 0);
    TAdMultiChgGameModeGC__sub_8036E19C(arg0, 4);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x30), TAdMultiChgGameModeGC__sub_8036DE10(arg0, 1, M2C_FIELD(arg0, s32 *, 0x24)), 3);
    }
}
void close_window_30__21TAdMultiChgGameModeGCFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x30);
    if ((u32) temp_r3 != 0U) {
        TWindow__close((void *)((void*)(temp_r3)));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    close_window__21TAdMultiChgGameModeGCFPv((void*)((void *)((void*)((void*)(arg0)))));
}
void close_window__21TAdMultiChgGameModeGCFPv(void* p) { if (*(unsigned int*)((char*)p + 0x34) != 0) { TWindow__close((void *)((void*)(*(void**)((char*)p + 0x34)))); *(int*)((char*)p + 0x34) = 0; } }
void TAdMultiChgGameModeGC__sub_8036E3D4(u8 *arg0) {
    s32 temp_r3_2;
    u8 *temp_r3;
    if (handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)((void *)(arg0))) == 0) {
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34));
        if (temp_r3 != NULL) {
            if (((int)is_visible__17TWindowSubComCardFPv(temp_r3)) != 0) {
                temp_r3_2 = TWindowSubComCard__sub_80265BF8((void *) (M2C_FIELD(arg0, u8 **, 0x34)));
                switch (temp_r3_2) {
                case 0:
                    close_window_30__21TAdMultiChgGameModeGCFPv(arg0);
                    close_window__21TAdMultiChgGameModeGCFPv((void*)(arg0));
                    TAdMultiChgGameModeGC__sub_8036E858((void *)((void *)((void *) (arg0))), (M2C_UNK)((s32)((int) (4))));
                    return;
                case 1:
                    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0) {
                        M2C_FIELD(arg0, s32 *, 0x24) = 1;
                    } else {
                        M2C_FIELD(arg0, s32 *, 0x24) = 0;
                    }
                    TAdMultiChgGameModeGC__sub_8036E858((void *)((void *)((void *) (arg0))), (M2C_UNK)((s32)((int) (0xA))));
                    return;
                }
            }
        } else {
            TAdMultiChgGameModeGC__sub_8036E858((void *)((void *)((void *) (arg0))), (M2C_UNK)((s32)((int) (8))));
        }
    }
}
void TAdMultiChgGameModeGC__sub_8036E49C(void *arg0) {
    void *o;
    void *o2;
    if (M2C_FIELD(arg0, void **, 0x28) == NULL) {
        o = __nw__7TObjectFUl(0x24);
        if (o != NULL) {
            o = __ct__9TAdBackGCFv(o, arg0);
        }
        M2C_FIELD(arg0, void **, 0x28) = o;
    }
    if (M2C_FIELD(arg0, void **, 0x2C) == NULL) {
        o2 = __nw__7TObjectFUl(0x28);
        if (o2 != NULL) {
            o2 = __ct__12TAdBackTxtGCFv(o2, arg0);
        }
        M2C_FIELD(arg0, void **, 0x2C) = o2;
    }
}
void TAdMultiChgGameModeGC__sub_8036E51C(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        TWindow__close((void *)((void*)(M2C_FIELD(arg0, void **, 0x34))));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    TAdMultiChgGameModeGC__sub_8036E2AC((void *)((void *) (arg0)), (M2C_UNK)((int) (1)));
    TAdMultiChgGameModeGC__sub_8036E19C((void *)((void *) (arg0)), (M2C_UNK)((int) (4)));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        send_and_handle__6TLobbyFPvii((u32)((int) (M2C_FIELD(arg0, u32 *, 0x30))), (s32)((int) (TAdMultiChgGameModeGC__sub_8036DE10((void *)((void *) (arg0)), (M2C_UNK)((int) (0)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x24)))))), (M2C_UNK)((int) (3)));
    }
    TAdMultiChgGameModeGC__sub_8036E49C((void *) (arg0));
}
void TAdMultiChgGameModeGC__sub_8036E5A8(s32 arg0) {
    if ((handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)((void *)(arg0))) == 0) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        ((M2C_UNK)((s32)TAdMultiChgGameModeGC__sub_8036E858((void *)((void *)((void *) (arg0))), (M2C_UNK)((s32)((int) (2))))));
    }
}
void load_system_on_mode_default__21TAdMultiChgGameModeGCFPv(void* p) { if (handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)((void *)(p))) == 0) { load_system_file((void*)0); } }
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0) {
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r4 & 1) {
        TAdMultiChgGameModeGC__sub_8036E858((void *)(arg0), (M2C_UNK)(9));
        return 1;
    }
    if (temp_r4 & 2) {
        return 0;
    }
    if (temp_r4 & 4) {
        TAdMultiChgGameModeGC__sub_8036E858((void *)(arg0), (M2C_UNK)(9));
        return 1;
    }
    if (temp_r4 & 8) {
        TAdMultiChgGameModeGC__sub_8036E858((void *)(arg0), (M2C_UNK)(9));
        return 1;
    }
    return 0;
}
void TAdMultiChgGameModeGC__sub_8036E6A0(s32 arg0) {
    if ((handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)(arg0)) == 0) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        ((M2C_UNK)((s32)TAdMultiChgGameModeGC__sub_8036E858((void *)((void *)((void *) (arg0))), (M2C_UNK)((s32)((int) (8))))));
    }
}
void TAdMultiChgGameModeGC__sub_8036E6EC(void) {  }
void TAdMultiChgGameModeGC__sub_8036E6F0(s32 arg0) {
    if (((int)handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)((void*)arg0))) == 0) {
        TAdSinglePlyChrSelectGC__sub_801FD6B4();
        if (TAdSinglePlyChrSelectGC__sub_801FF200() != 0) {
            TAdMultiChgGameModeGC__sub_8036E858((void *)((void*)((void *) (arg0))), (M2C_UNK)((void*)((int) (7))));
            return;
        }
        TAdMultiChgGameModeGC__sub_8036E858((void *)((void*)((void *) (arg0))), (M2C_UNK)((void*)((int) (8))));
    }
}
void TAdMultiChgGameModeGC__sub_8036E750(void) {  }
int TAdMultiChgGameModeGC__sub_8036E754(void) { return 0; }
int TAdMultiChgGameModeGC__sub_8036E7DC(void) { return 0; }
int request_scene_change_vt__21TAdMultiChgGameModeGCFPv(void* p) { return request_scene_change__21TAdMultiChgGameModeGCFv(p); }
void TAdMultiChgGameModeGC__sub_8036E830(void) {  }
int init_change_mode__21TAdMultiChgGameModeGCFPv(void* p) { return init_change_mode__21TAdMultiChgGameModeGCFv(p); }
void TAdMultiChgGameModeGC__sub_8036E854(void) {  }
void confirm_mode_selection__21TAdMultiChgGameModeGCFPv(void* p) { if (((int)handle_mode_selection__21TAdMultiChgGameModeGCFPv((void *)((void*)(p)))) == 0) { TAdMultiChgGameModeGC__sub_8036E858((void *)((void*)(p)), (M2C_UNK)((void*)((void*)1))); } }
void TAdMultiChgGameModeGC__sub_8036E9EC(void* p) { close_window_30__21TAdMultiChgGameModeGCFPv((void *)(p)); TAdMultiChgGameModeGC__sub_8036E19C((void *)(p), (M2C_UNK)((void*)4)); }
void *__dt__21TAdMultiChgGameModeGCFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F3A20;
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
