#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void render__19TWindowMessageYesNoFv(void);
void *__nw__7TObjectFUl(int);
void *TWindowMessageYesNo__ct(void *, void *, void *, void *, void *);
}

extern "C" {

void *TWindowMessageYesNo__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void *__dt__19TWindowMessageYesNoFv(void *arg0, s16 arg1);
void run_task__19TWindowMessageYesNoFv(void* p);
s32 create_window_menu(s32, s32, s32);
int confirm_selection__11TWindowMenuFPv(void*);
s32 TWindowSubComCard__sub_80244888(void *);
s32 TWindowSubComCard__sub_80265BF8(s32);
s32 TWindowSubComCard__sub_80265CFC(s32, f32);
int TWindowSubComCard__sub_802A57FC(void* a0 = 0);
int open_yes_no_prompt(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);
void TWindow__close(void *);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int clear_trade_flag__19TWindowSubTradeMainFPv(void*);
int close__17TWindowSubComCardFPv(void* p);
void forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(void* p, void* a1, void* a2);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
void free_member__17TWindowSubComCardFPv(void* p);
s32 get_status_flag__17TWindowSubComCardFPv(s32);
void notify_trade_main__17TWindowSubComCardFPv(void* p);
void notify_warp_flag70__19TWindowSubShortMailFPv(void* p);
int queue_destruction__7TObjectFv(void*);
int set_flag70_bit10__16TObjCityMainWarpFPv(void*);
int set_flag_40__16TAdChrSelASlotGCFPv(void*);
int set_selected_index__17TWindowSubComCardFPvs(void*);
s32 set_status_flag_80__12TQuestThreadFPv(s32);
void update_card_slot__17TWindowSubComCardFPv(void* p);

void render__19TWindowMessageYesNoFv(void) {  }

void run_task__19TWindowMessageYesNoFv(void* p) { if (TWindowSubComCard__sub_802A57FC(p) != 0) { confirm_selection__11TWindowMenuFPv(*(void**)((char*)p + 0x28)); } }

extern M2C_UNK __vt__19TWindowMessageYesNo[];

void * TWindowMessageYesNo__sub_802A59D8(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = TWindowMessageYesNo__ct(o, arg0, arg1, arg2, arg3);
    }
    return o;
}

void *__dt__19TWindowMessageYesNoFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowMessageYesNo;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__19TWindowMessageYesNo[];
extern void *lbl_805D3DF8;

void *TWindowMessageYesNo__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowMessageYesNo;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3DF8;
    M2C_FIELD(arg0, void **, 0x24) = arg2;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, void **, 0x20) = arg3;
    M2C_FIELD(arg0, void **, 0x1C) = arg4;
    return arg0;
}

}
