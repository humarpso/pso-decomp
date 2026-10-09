#include "pso/TItemTexLoad.h"

extern "C" void unload_texture__12TItemTexLoadFPv(void*);
extern "C" void free__11TOBoss4RockFUi(void*);

struct TexLoad_8011D180 { u8 pad0[0x20]; s32 state; s32 f24; s32 handle; };
extern "C" {
s32 TLobby__sub_8001EEF4();
void load_texture_archive__12TItemTexLoadFPv(TexLoad_8011D180 *);
void load_texture__12TItemTexLoadFPvi(TexLoad_8011D180 *, s32);
s32 TLobby__sub_803CC4C0(s32);
s32 close_adxf_handle__6TLobbyFPv(s32);
}

#define SELF ((TexLoad_8011D180 *)this)
void TItemTexLoad::run_task() {
    if (SELF->state == 1) {
        switch (TLobby__sub_803CC4C0(SELF->handle)) {
        case 3:
            close_adxf_handle__6TLobbyFPv(SELF->handle);
            if (TLobby__sub_8001EEF4() != 0) {
                load_texture_archive__12TItemTexLoadFPv(SELF);
            } else {
                SELF->state = 3;
            }
            break;
        case 1:
        case 4: {
            s32 v = SELF->f24;
            unload_texture__12TItemTexLoadFPv(SELF);
            load_texture__12TItemTexLoadFPvi(SELF, v);
            break;
        }
        }
    } else if (SELF->state == 3) {
        if (TLobby__sub_8001EEF4() != 0) {
            load_texture_archive__12TItemTexLoadFPv(SELF);
        }
    }
}
#undef SELF

TItemTexLoad::~TItemTexLoad() {
    unload_texture__12TItemTexLoadFPv(this);
    free__11TOBoss4RockFUi(m_1c);
    m_1c = nullptr;
}
