#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8026B118_lbl_8044F464 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Win_8026B148 {
    u8 pad0[0x24];
    u8 entries[0x5C - 0x24];
    s32 opening;
    u8 pad1[0x90 - 0x60];
    s32 mode;
};

struct Ctx_8026B148 {
    u8 pad0[0x28];
    f32 scaleX;
    f32 scaleY;
    s32 reveal;
};

extern "C" {
s32 create_quest_message_window_at(int, void *);
s32 get_window_layout_position(int);
extern RecoveredGlobal_8026B118_lbl_8044F464 lbl_8044F464;
void create_quest_message_window(void);
Ctx_8026B148 *TWindowSubStatusDisp__sub_80244364(void *);
void draw_quest_message_frame(void *, void *);
void draw_window_frame(void *, void *);
void TWindowSubStatusDisp__sub_80257BC0(void *, void *, void *);
extern const f32 lbl_805DD260;
void TWindowMessageQuest__sub_8026B148(Win_8026B148 *w);
}

extern "C" {

typedef char RecoveredGlobal_8026B118_lbl_8044F464_size[sizeof(RecoveredGlobal_8026B118_lbl_8044F464) == 0xC ? 1 : -1];
void create_quest_message_window(void) {
    create_quest_message_window_at((int) (get_window_layout_position((int) (0xAD))), (void *) (&lbl_8044F464.value));
}
void TWindowMessageQuest__sub_8026B148(Win_8026B148 *w) {
    Ctx_8026B148 *c;
    c = TWindowSubStatusDisp__sub_80244364(w);
    switch (w->mode) {
    case 0:
        if (c->reveal < 0) {
            c->scaleX = (f32)w->opening / lbl_805DD260;
            c->scaleY = c->scaleX;
        }
        draw_quest_message_frame(w, c);
        break;
    case 1:
        draw_window_frame(w, c);
        break;
    case 2:
        break;
    }
    TWindowSubStatusDisp__sub_80257BC0(w, w->entries, c);
}

}
