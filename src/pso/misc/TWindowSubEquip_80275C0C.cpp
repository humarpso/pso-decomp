#include "types.h"
#include "pso/misc/TWindowSubEquip.h"

struct Equip_80275CB0 {
    u8 pad0[0x18];
    s32 *vt;
    s8 x1c;
    u8 pad1d[3];
    s32 x20;
    void *parent;
    void *custom;
    s32 x2c;
    void *list;
    s16 x34;
    s16 x36;
};

extern "C" {
void *__nw__7TObjectFUl(u32);
void __ct__7TObjectFP7TObject(void *, void *);
void set_field_1c__6TLobbyFf(void *);
void call_if_split_screen(void *, s32);
void TWindowSubEquip__sub_80263AF8(void *, s32);
void *create_message_window__6TLobbyFllUls(void *, void *, s32, s32);
void *get_window_layout_position(s32);
void *TWindowSubCustomEquip__ct(void *, s32);
extern u8 lbl_8044F718[];
extern s32 lbl_804D1160[];
void *TWindowSubEquip__sub_80275CB0(void *arg0, void *arg1, s32 arg2);
}

extern "C" {

void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern s32 lbl_804D1160[];

void *TWindowSubEquip::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804D1160;
        if (*(void **)((s8 *)this + 0x2C) != NULL) { TWindow__close(*(void **)((s8 *)this + 0x2C)); *(s32 *)((s8 *)this + 0x2C) = 0; }
        if (*(void **)((s8 *)this + 0x30) != NULL) { TWindow__close(*(void **)((s8 *)this + 0x30)); *(s32 *)((s8 *)this + 0x30) = 0; }
        if (*(void **)((s8 *)this + 0x28) != NULL) { TWindow__close(*(void **)((s8 *)this + 0x28)); *(s32 *)((s8 *)this + 0x28) = 0; }
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}
#define self ((Equip_80275CB0 *)arg0)
void *TWindowSubEquip__sub_80275CB0(void *arg0, void *arg1, s32 arg2) {
    void *p;
    __ct__7TObjectFP7TObject(arg0, arg1);
    self->vt = lbl_804D1160;
    self->parent = arg1;
    self->x20 = arg2;
    p = __nw__7TObjectFUl(0x70);
    if (p != NULL) {
        p = TWindowSubCustomEquip__ct(p, self->x20);
    }
    self->custom = p;
    TWindowSubEquip__sub_80263AF8(self->parent, 0);
    set_field_1c__6TLobbyFf(self->custom);
    self->list = create_message_window__6TLobbyFllUls(get_window_layout_position(0x11), lbl_8044F718, 1, self->x20);
    TWindowSubEquip__sub_80263AF8(self->parent, 2);
    set_field_1c__6TLobbyFf(self->list);
    call_if_split_screen(self->list, self->x20);
    self->x2c = 0;
    self->x34 = 0;
    self->x36 = 0;
    self->x1c = 0;
    return arg0;
}
#undef self

}
