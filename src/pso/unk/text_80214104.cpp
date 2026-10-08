#include "types.h"
struct Base_80214104 { char pad[0x18]; };

struct Seq_80214104 : Base_80214104 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8();
    u8 pad1c[8];
    void *player;
    u8 pad28[0xC];
    s32 mode;
    u8 pad38[4];
    void *child;
};

extern "C" {
void *obj_getField1c(void *);
void queue_destruction__7TObjectFv(void *);
s32 is_quest_active();
void init__22THunterGuildSeqOfflineFPvPvPv(void *, s32, void (*)(void));
void send_quest_menu_closed__9TProtocolFv(s32);
void THunterGuildSeqOffline__sub_8021E180(void *);
void close_window__13TShopSequenceFPv(void *);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
void *__nw__7TObjectFUl(u32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
void reset_random_enemies_mode(void);
void set_random_enemies_mode(void);
extern s32 TLobby__data_805D5580;
extern s32 tl_00;
void handle_random_enemies_choice__6TLobbyFPv(Seq_80214104 *self);
}

extern "C" {

void handle_random_enemies_choice__6TLobbyFPv(Seq_80214104 *self) {
    void *mem;
    if (self->child != NULL) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(self->child) != 0) return;
        self->child = NULL;
    }
    if (self->m8() == 0) return;
    switch (self->mode) {
    case 0:
        if (TShopWindowBase__sub_80223A48(self) == 0 && TShopWindowBase__sub_802239EC(self) == 0) return;
        if (is_quest_active() == 0) {
            send_quest_menu_closed__9TProtocolFv(TLobby__data_805D5580);
        }
        close_window__13TShopSequenceFPv(self);
        queue_destruction__7TObjectFv(self);
        break;
    case 1:
        mem = __nw__7TObjectFUl(0x28);
        if (mem != NULL) init__22THunterGuildSeqOfflineFPvPvPv(mem, tl_00, reset_random_enemies_mode);
        THunterGuildSeqOffline__sub_8021E180(obj_getField1c(self->player));
        close_window__13TShopSequenceFPv(self);
        queue_destruction__7TObjectFv(self);
        break;
    case 2:
        mem = __nw__7TObjectFUl(0x28);
        if (mem != NULL) init__22THunterGuildSeqOfflineFPvPvPv(mem, tl_00, set_random_enemies_mode);
        THunterGuildSeqOffline__sub_8021E180(obj_getField1c(self->player));
        close_window__13TShopSequenceFPv(self);
        queue_destruction__7TObjectFv(self);
        break;
    }
}

}
