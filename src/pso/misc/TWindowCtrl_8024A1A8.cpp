#include "types.h"

#include <stddef.h>
struct Stack_8024A228 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8024A228_lbl_804CEA88 {
    s32 value;
    u8 remaining[0x8];
};

struct Stack_8024A1CC {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8024A1CC_lbl_804CEA94 {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredFields_8024A688_arg1
{
  u8 unknown_0[0x38];
  f32 field_38;
  f32 field_3C;
  f32 field_40;
};

struct RecoveredFields_8024A688_temp_r3
{
  u8 unknown_0[0x38];
  f32 field_38;
  f32 field_3C;
  f32 field_40;
};

struct Ctrl_8024A928 { u8 pad[0x84]; void *slots[4]; };

struct Ctrl_8024A714 { u8 pad[0x84]; void *arr[4]; };

struct Obj_8024A7CC { u8 pad[0x84]; void *arr[4]; };

struct Ctrl_8024A928;

struct Obj_8024AA08 { u8 pad[4]; u32 f4; };

struct Ply_8024AA08 { u8 pad[0xDB0]; u32 f; };

extern "C" {
s32 TWindowCtrl__sub_8024A314(void);
s32 TWindowCtrl__sub_8024701C(u32);
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
extern void *TWindowCtrl__active_window;
s32 TWindowCtrl__sub_8024A314(void);
void TLobby__sub_8024AAA0(s32 arg0, s32 arg1);
int spawn_nug2000_hit_explosion(void);
u32 get_window__11TWindowCtrlFi(void);
s32 update_field28__15TWindowCtrlMainFPv(u32 a0 = 0, s32 a1 = 0);
int spawn_nug2000_hit_explosion(void);
void TLobby__sub_8024AAA0(s32 arg0, s32 arg1);
s32 TWindowCtrl__sub_8024A314(void);
extern void *TWindowCtrl__active_window;
void TLobby__sub_8024AAA0(s32 arg0, s32 arg1);
s32 TWindow__close(void *);
void close_timer_window__11TWindowCtrlFv(void);
s32 set_time__12TWindowTimerFPvUi(int, void *);
extern void *TWindowCtrl__active_window;
void set_timer_window_time__11TWindowCtrlFi(s32 arg0);
s32 TWindowCtrl__sub_8024B098(void *, void *);
extern RecoveredGlobal_8024A228_lbl_804CEA88 window_ctrl_main_callback_desc;
void TWindowCtrl__sub_8024A228(s32 arg0);
s32 call_window_method__11TWindowCtrlFPvi(void *, void *);
extern RecoveredGlobal_8024A1CC_lbl_804CEA94 window_ctrl_default_call_args;
void call_window_method_with_default_vec__11TWindowCtrlFi(s32 arg0);
extern void *TWindowCtrl__active_window;
bool TWindowCtrl__sub_8024A1A8(void);
extern void *TWindowCtrl__active_window;
bool is_submit_cooldown_clear__11TWindowCtrlFv(void);
u8 *find_entity_by_id(u16);
extern const f32 lbl_805DCBE0;
f32 get_entity_distance_or_default__11TWindowCtrlFiPvUs(s32 arg0, RecoveredFields_8024A688_arg1 *arg1, u16 arg2);
void rearm_balloon__15TWindowFukidasiFv(void *, s32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
s32 check_card_match_enabled__15TWindowFukidasiFPvi(void *, void *);
u16 get_flags__11TWindowCtrlFPv(void *);
extern void *TWindowCtrl__active_window;
void *show_chat_balloon__11TWindowCtrlFPviiPvPv(Ctrl_8024A928 *self, s32 player, s32 flags, void *text, void *local);
char *skip_name_prefix__11TWindowCtrlFPvPv(void *self, char *s);
s32 count_balloon_slots__11TWindowCtrlFPv(Obj_8024A7CC *self);
void *get_player_by_client_id(s32);
extern s32 local_client_id;
s32 find_farthest_balloon_slot__11TWindowCtrlFPvUs(Ctrl_8024A714 *ctrl, u16 speaker);
void *__nw__7TObjectFUl(u32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
s32 TWindow__close(void *);
s32 find_farthest_balloon_slot__11TWindowCtrlFPvUs(Ctrl_8024A714 *ctrl, u16 speaker);
s32 count_balloon_slots__11TWindowCtrlFPv(Obj_8024A7CC *self);
u16 get_flags__11TWindowCtrlFPv(void *);
void *TWindowFukidasi__sub_80252B74(void *, s32, s32, void *, f32);
void *acquire_balloon_slot__11TWindowCtrlFPviiPv(Ctrl_8024A928 *self, s32 player, s32 flags, void *local);
s32 is_locally_controlled__10TObjPlayerFPv(u8 *);
s32 obj_isState2_324(u8 *);
s32 obj_is_hit_receivable();
void *get_quest_id__12TQuestListVMFPv(u8 *);
u8 *find_entity_by_id(u16);
extern const f32 lbl_805DCBD8;
extern const f32 lbl_805DCBDC;
void get_speaker_balloon_anchor__11TWindowCtrlFPviPvPv(Ctrl_8024A928 *arg0, s32 arg1, f32 *arg2, s32 *arg3);
void capture_message__19TOChatSensorCaptureFUsPCc(u16 arg0, const char *arg1);
void *get_player_by_client_id(s32);
char *skip_name_prefix__11TWindowCtrlFPvPv(void *self, char *s);
s32 open__11TWindowCtrlFiii(s32 arg0, s32 arg1, s32 arg2);
extern void *TWindowCtrl__active_window;
void handle_chat_message__11TWindowCtrlFPvPv(Obj_8024AA08 *arg0, char *arg1);
}

extern "C" {

void close_active_window__11TWindowCtrlFv(void);
void create_alt_timer__11TWindowCtrlFv(void);
void create_timer__11TWindowCtrlFv(void);
void ensure_initialized__11TWindowCtrlFv(void);
s32 get_active_sub__11TWindowCtrlFv(void);
void open_status_111__11TWindowCtrlFv(void);
void open_status_112__11TWindowCtrlFv(void);
void set_field22__11TWindowCtrlFv(void);
void update_focused__11TWindowCtrlFv(void);
s32 TWindowCtrl__sub_8024C5C4(u32);
s32 TWindow__close(void *);
u32 create__12TWindowTimerFv();
u32 create_alt__12TWindowTimerFv();
u32 create_area_window();
u32 create_window_area();
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s32 update__11TWindowChatFPv(u32);

extern void *TWindowCtrl__active_window;

typedef char RecoveredGlobal_8024A1CC_lbl_804CEA94_size[sizeof(RecoveredGlobal_8024A1CC_lbl_804CEA94) == 0xC ? 1 : -1];

bool TWindowCtrl__sub_8024A1A8(void) {
    if ((void *) (*(u8 * *)&TWindowCtrl__active_window) == NULL) {
        return 0;
    }
    return *(s32 *)((s8 *)(*(u8 * *)&TWindowCtrl__active_window) + 0x3C) != 0;
}

void call_window_method_with_default_vec__11TWindowCtrlFi(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_8024A1CC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8024A1CC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8024A1CC, sp10) == 0x8) ? 1 : -1];
    Stack_8024A1CC stack;
    stack.sp8 = *(s32 *)((s8 *)(&window_ctrl_default_call_args.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&window_ctrl_default_call_args.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&window_ctrl_default_call_args.value) + 8);
    call_window_method__11TWindowCtrlFPvi((void *) (arg0), (void *) (&stack.sp8));
}

void set_field22__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__active_window != NULL) {
        *(s16 *)((s8 *)TWindowCtrl__active_window + 0x22) = 0x2D;
    }
}

extern void *TWindowCtrl__active_window;

typedef char RecoveredGlobal_8024A228_lbl_804CEA88_size[sizeof(RecoveredGlobal_8024A228_lbl_804CEA88) == 0xC ? 1 : -1];
void TWindowCtrl__sub_8024A228(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_8024A228, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8024A228, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8024A228, sp10) == 0x8) ? 1 : -1];
    Stack_8024A228 stack;
    stack.sp8 = *(s32 *)((s8 *)(&window_ctrl_main_callback_desc.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&window_ctrl_main_callback_desc.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&window_ctrl_main_callback_desc.value) + 8);
    TWindowCtrl__sub_8024B098((void *) (arg0), (void *) (&stack.sp8));
}

bool is_submit_cooldown_clear__11TWindowCtrlFv(void) {
    if ((void *) (*(u8 * *)&TWindowCtrl__active_window) == NULL) {
        return 0;
    }
    return *(s16 *)((s8 *)(*(u8 * *)&TWindowCtrl__active_window) + 0x22) <= 0;
}

void update_focused__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__active_window != NULL) && ((u32) *(u32 *)((s8 *)TWindowCtrl__active_window + 0x38) != 0U)) {
        update__11TWindowChatFPv(*(u32 *)((s8 *)TWindowCtrl__active_window + 0x38));
    }
}

extern void *TWindowCtrl__active_window;

s32 get_active_sub__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__active_window == NULL) {
        return 0;
    }
    if ((u32) *(u32 *)((s8 *)TWindowCtrl__active_window + 0x38) == 0U) {
        return 0;
    }
    return TWindowCtrl__sub_8024C5C4(*(u32 *)((s8 *)TWindowCtrl__active_window + 0x38));
}

extern void *TWindowCtrl__active_window;

s32 TWindowCtrl__sub_8024A314(void) {
    if ((void *) TWindowCtrl__active_window == NULL) {
        return 0;
    }
    if ((u32) *(u32 *)((s8 *)TWindowCtrl__active_window + 0x38) == 0U) {
        return 0;
    }
    return TWindowCtrl__sub_8024701C(*(u32 *)((s8 *)TWindowCtrl__active_window + 0x38));
}

void open_status_111__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__active_window != NULL) && ((u32) *(u32 *)((s8 *)TWindowCtrl__active_window + 0x34) == 0U)) {
        get_message_10__20TWindowSubStatusDispFPv(0x111);
        *(u32 *)((s8 *)TWindowCtrl__active_window + 0x34) = create_area_window();
    }
}

extern void *TWindowCtrl__active_window;

void open_status_112__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__active_window != NULL) && ((u32) *(u32 *)((s8 *)TWindowCtrl__active_window + 0x34) == 0U)) {
        get_message_10__20TWindowSubStatusDispFPv(0x112);
        *(u32 *)((s8 *)TWindowCtrl__active_window + 0x34) = create_area_window();
    }
}

extern void *TWindowCtrl__active_window;

void close_active_window__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__active_window != NULL) && ((u32) *(u32 *)((s8 *)TWindowCtrl__active_window + 0x34) != 0U)) {
        TWindow__close(*(void **)((s8 *)TWindowCtrl__active_window + 0x34));
        *(u32 *)((s8 *)TWindowCtrl__active_window + 0x34) = 0U;
    }
}

extern void *TWindowCtrl__active_window;

void ensure_initialized__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__active_window != NULL) && ((u32) *(u32 *)((s8 *)TWindowCtrl__active_window + 0x34) == 0U)) {
        *(u32 *)((s8 *)TWindowCtrl__active_window + 0x34) = create_window_area();
    }
}

extern void *TWindowCtrl__active_window;

void create_timer__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__active_window != NULL) && ((u32) *(u32 *)((s8 *)TWindowCtrl__active_window + 0x30) == 0U)) {
        *(u32 *)((s8 *)TWindowCtrl__active_window + 0x30) = create__12TWindowTimerFv();
    }
}

extern void *TWindowCtrl__active_window;

void set_timer_window_time__11TWindowCtrlFi(s32 arg0) {
    u32 temp_r3;
    if ((void *) (*(u8 * *)&TWindowCtrl__active_window) != NULL) {
        temp_r3 = *(u32 *)((s8 *)(*(u8 * *)&TWindowCtrl__active_window) + 0x30);
        if (temp_r3 != 0U) {
            set_time__12TWindowTimerFPvUi((int) (temp_r3), (void *) (arg0));
        }
    }
}

void close_timer_window__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__active_window != NULL) && ((u32) *(u32 *)((s8 *)TWindowCtrl__active_window + 0x30) != 0U)) {
        TWindow__close(*(void **)((s8 *)TWindowCtrl__active_window + 0x30));
        *(u32 *)((s8 *)TWindowCtrl__active_window + 0x30) = 0U;
    }
}

void create_alt_timer__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__active_window != NULL) && ((u32) *(u32 *)((s8 *)TWindowCtrl__active_window + 0x30) == 0U)) {
        *(u32 *)((s8 *)TWindowCtrl__active_window + 0x30) = create_alt__12TWindowTimerFv();
    }
}

typedef struct RecoveredFields_8024A688_arg1 RecoveredFields_8024A688_arg1;
typedef struct RecoveredFields_8024A688_temp_r3 RecoveredFields_8024A688_temp_r3;

char *skip_name_prefix__11TWindowCtrlFPvPv(void *self, char *s) {
    char *p;
    for (p = s; *p != '\0'; p++) {
        if (*p == '\t') break;
    }
    if (*p == '\0') return s;
    return p + 1;
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline u8 *get_obj_8024A5AC(s32 id) {
    u8 *o = ((u8 *(*)(s32))find_entity_by_id)(id);
    if (o != NULL && obj_is_hit_receivable() == 1) {
        return o;
    }
    return NULL;
}
void get_speaker_balloon_anchor__11TWindowCtrlFPviPvPv(Ctrl_8024A928 *arg0, s32 arg1, f32 *arg2, s32 *arg3) {
    u8 *obj;
    void *q;
    obj = get_obj_8024A5AC(arg1);
    if (obj == NULL) {
        *arg2 = lbl_805DCBD8;
        *arg3 = 0;
        return;
    }
    q = get_quest_id__12TQuestListVMFPv(obj);
    if (q == NULL) {
        *arg2 = lbl_805DCBD8;
    } else {
        *arg2 = lbl_805DCBDC * *(f32 *)((u8 *)q + 0x10);
    }
    if (obj_isState2_324(obj) != 0 || is_locally_controlled__10TObjPlayerFPv(obj) != 0) {
        u8 *p = obj + 0x85C;
        if (p == NULL) {
            *arg3 = 0;
            return;
        }
        *arg3 = (s32)p;
        return;
    }
    *arg3 = 0;
}
#pragma pop

f32 get_entity_distance_or_default__11TWindowCtrlFiPvUs(s32 arg0, RecoveredFields_8024A688_arg1 *arg1, u16 arg2) {
  f32 temp_f2;
  f32 temp_f3;
  f32 temp_f4;
  u8 *temp_r3;
  if (arg2 == ((-1) & 0xFFFF))
  {
    return lbl_805DCBE0;
  }
  temp_r3 = (u8 *) find_entity_by_id(arg2);
  if (temp_r3 == 0)
  {
    return lbl_805DCBE0;
  }
  temp_f4 = arg1->field_38 - ((RecoveredFields_8024A688_temp_r3 *) temp_r3)->field_38;
  temp_f3 = arg1->field_3C - ((RecoveredFields_8024A688_temp_r3 *) temp_r3)->field_3C;
  temp_f2 = arg1->field_40 - ((RecoveredFields_8024A688_temp_r3 *) temp_r3)->field_40;
  return (temp_f2 * temp_f2) + ((temp_f4 * temp_f4) + (temp_f3 * temp_f3));
}

s32 find_farthest_balloon_slot__11TWindowCtrlFPvUs(Ctrl_8024A714 *ctrl, u16 speaker) {
    s32 i;
    s32 result;
    RecoveredFields_8024A688_arg1 *local;
    f32 farthest;
    f32 d;
    void *b;
    u16 id;

    local = (RecoveredFields_8024A688_arg1 *)get_player_by_client_id(local_client_id);
    if (local == NULL) {
        return 4;
    }
    result = 4;
    farthest = ((f32 (*)(void *, RecoveredFields_8024A688_arg1 *, u16))get_entity_distance_or_default__11TWindowCtrlFiPvUs)(ctrl, local, speaker);
    for (i = 0; i < 4; i++) {
        b = ctrl->arr[i];
        if (b != NULL) {
            id = get_flags__11TWindowCtrlFPv(b);
            d = ((f32 (*)(void *, RecoveredFields_8024A688_arg1 *, u16))get_entity_distance_or_default__11TWindowCtrlFiPvUs)(ctrl, local, id);
            if (!(farthest > d)) {
                farthest = d;
                result = i;
            }
        }
    }
    return result;
}

s32 count_balloon_slots__11TWindowCtrlFPv(Obj_8024A7CC *self) {
    s32 n = 0;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->arr[i] == 0) break;
        n++;
    }
    return n;
}

void *acquire_balloon_slot__11TWindowCtrlFPviiPv(Ctrl_8024A928 *self, s32 player, s32 flags, void *local) {
    f32 f;
    s32 n;
    u32 i;
    void *b;
    get_speaker_balloon_anchor__11TWindowCtrlFPviPvPv((Ctrl_8024A928 *)(self), (s32)(player), (f32 *)(&f), (s32 *)(&n));
    i = 4;
    if (!(flags & 0x10)) {
        for (i = 0; i < 4; i++) {
            b = self->slots[i];
            if (b != 0 && all_parents_unqueued_for_destruction__7TObjectFv(b) != 0 &&
                (u16)player == get_flags__11TWindowCtrlFPv(b)) {
                break;
            }
        }
    }
    if (i >= 4) {
        i = count_balloon_slots__11TWindowCtrlFPv((Obj_8024A7CC *)self);
        if (i >= 4) {
            i = ((s32 (*)(Ctrl_8024A714 *, s32))find_farthest_balloon_slot__11TWindowCtrlFPvUs)((Ctrl_8024A714 *)self, player);
        }
        if (i >= 4) {
            return 0;
        }
        if (self->slots[i] != 0) {
            TWindow__close(self->slots[i]);
        }
        b = __nw__7TObjectFUl(0x98);
        if (b != 0) {
            b = TWindowFukidasi__sub_80252B74(b, player, n, local, f);
        }
        self->slots[i] = b;
    }
    return self->slots[i];
}

void *show_chat_balloon__11TWindowCtrlFPviiPvPv(Ctrl_8024A928 *self, s32 player, s32 flags, void *text, void *local) {
    u32 i;
    if ((*(Ctrl_8024A928 * *)&TWindowCtrl__active_window) == 0) {
        return 0;
    }
    if (flags & 8) {
        for (i = 0; i < 4; i++) {
            void *b = self->slots[i];
            if (b != 0 && all_parents_unqueued_for_destruction__7TObjectFv(b) != 0 &&
                (u16)player == get_flags__11TWindowCtrlFPv(b) &&
                check_card_match_enabled__15TWindowFukidasiFPvi(b, text) != 0) {
                rearm_balloon__15TWindowFukidasiFv(b, flags);
                return 0;
            }
        }
    }
    return acquire_balloon_slot__11TWindowCtrlFPviiPv((Ctrl_8024A928 *)((*(Ctrl_8024A928 * *)&TWindowCtrl__active_window)), (s32)(player), (s32)(flags), (void *)(local));
}

void handle_chat_message__11TWindowCtrlFPvPv(Obj_8024AA08 *arg0, char *arg1) {
    s32 i;
    u32 key;
    char *v;
    Ply_8024AA08 *p;
    if (TWindowCtrl__active_window != NULL) {
        v = skip_name_prefix__11TWindowCtrlFPvPv(TWindowCtrl__active_window, arg1);
        key = arg0->f4;
        for (i = 0; i < 12; i++) {
            p = (Ply_8024AA08 *)get_player_by_client_id(i);
            if (p != NULL && p->f == key) {
                break;
            }
        }
        if (i < 12) {
            u16 slot = i;
            capture_message__19TOChatSensorCaptureFUsPCc(slot, v);
            open__11TWindowCtrlFiii(slot, (s32)v, 0xCB);
        }
    }
}

void TLobby__sub_8024AAA0(s32 arg0, s32 arg1) {
    u32 temp_r3 = get_window__11TWindowCtrlFi();
    if (temp_r3 != 0U) {
        update_field28__15TWindowCtrlMainFPv(temp_r3, arg1);
    }
}

}
