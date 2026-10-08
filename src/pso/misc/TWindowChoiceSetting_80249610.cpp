#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Balloon_8024966C {
    u8 pad0[0xC];
    struct Balloon_8024966C *next;
    u8 pad10[0x58 - 0x10];
    f32 rise;
} Balloon_8024966C;

typedef struct Ctrl_8024966C {
    u8 pad0[0x14];
    Balloon_8024966C *head;
} Ctrl_8024966C;

extern "C" {
Balloon_8024966C *find_balloon_overlap_for__15TWindowFukidasiFii(Balloon_8024966C *, Balloon_8024966C *);
s32 get_visible_flag__15TWindowFukidasiFPv(Balloon_8024966C *);
void TWindowFukidasi__sub_80249788(void* p);
void hide__15TWindowFukidasiFPv(void* p);
void *TWindowCtrlMain__sub_8024CDD0(s32);
void resolve_chat_balloon_overlaps(void);
}

extern "C" {

void TWindowFukidasi__sub_80249788(void* p);
void draw_resolved_window__15TWindowFukidasiFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void hide__15TWindowFukidasiFPv(void* p);
int is_selected__20TWindowChoiceSettingFPv(void* p);
void *TWindowCtrlMain__sub_8024CDD0(s32);
s32 find_overlapping_balloon__15TWindowFukidasiFPvPvPvPv(s32, s32, s32, s32);
s16 get_field_74__17TWindowSubComCardFPv(void* p);
int is_open__17TWindowSubComCardFPv(void* p);

int is_selected__20TWindowChoiceSettingFPv(void* p) { return (*(u16*)((char*)p + 0x70) >> 5) & 0x1; }
void draw_resolved_window__15TWindowFukidasiFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    find_overlapping_balloon__15TWindowFukidasiFPvPvPvPv(arg0, arg1, arg2, M2C_FIELD(TWindowCtrlMain__sub_8024CDD0(arg3), s32 *, 0x14));
}

void resolve_chat_balloon_overlaps(void) {
    s32 i;
    Balloon_8024966C *p;
    Balloon_8024966C *q;
    for (i = 0; i < 6; i++) {
        p = ((Ctrl_8024966C *)TWindowCtrlMain__sub_8024CDD0(i))->head;
        if (p != NULL) {
            while (p != NULL) {
                hide__15TWindowFukidasiFPv(p);
                p = p->next;
            }
        }
    }
    for (i = 0; i < 6; i++) {
        p = ((Ctrl_8024966C *)TWindowCtrlMain__sub_8024CDD0(i))->head;
        if (p != NULL) {
            while (p->next != NULL) {
                q = find_balloon_overlap_for__15TWindowFukidasiFii(p, p->next);
                while (q != NULL) {
                    if (get_visible_flag__15TWindowFukidasiFPv(p) != 0) {
                        TWindowFukidasi__sub_80249788(q);
                    } else if (get_visible_flag__15TWindowFukidasiFPv(q) != 0) {
                        TWindowFukidasi__sub_80249788(p);
                    } else if (p->rise > q->rise) {
                        TWindowFukidasi__sub_80249788(p);
                    } else {
                        TWindowFukidasi__sub_80249788(q);
                    }
                    q = find_balloon_overlap_for__15TWindowFukidasiFii(p, q->next);
                }
                p = p->next;
            }
        }
    }
}

void TWindowFukidasi__sub_80249788(void* p) { *(u32*)((char*)p + 0x2c) |= 0x400; }
void hide__15TWindowFukidasiFPv(void* p) { *(u32*)((char*)p + 0x2c) &= 0xfffffbff; }

}
