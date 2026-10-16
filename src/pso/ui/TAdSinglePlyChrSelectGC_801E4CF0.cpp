#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"
#include "pso/misc/TQuestVmDownLoadServer.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 pso_load_texture__6TLobbyFv(void *);
s32 TLobby__sub_803DA16C(s32);
s32 set_texture_name(void *, void *, int, int);
s32 __dl__FPv(void *);

void TAdSinglePlyChrSelectGC::advance_wrapped_cursor() {
    s32 temp_r0;
    s32 temp_r4;

    this->m_4c = (s32) (this->m_4c + 1);
    temp_r0 = this->m_4c;
    temp_r4 = *(s32 *)&this->m_flags;
    if (temp_r0 >= temp_r4) {
        this->m_4c = (s32) (temp_r0 - temp_r4);
    }
}

extern s32 lbl_804C57E0[];

void *TAdSinglePlyChrSelectGC::destroy_and_free(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x50) = lbl_804C57E0;
        TLobby__sub_803DA16C(this->m_3c);
        TAdSinglePlyChrSelectGC::safe_free(this->m_44);
        if (arg1 > 0) {
            __dl__FPv(this);
        }
    }
    return this;
}

void TAdSinglePlyChrSelectGC::init_image_buffer(u8 *arg1, s32 arg2) {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;

    *(void **)((s8 *)arg0 + 0x40) = arg1;
    *(s32 *)((s8 *)arg0 + 0x48) = arg2;
    *(s32 *)&this->m_flags = (s32) *(u16 *)((s8 *)(*(void **)((s8 *)arg0 + 0x40)) + 0x1C);
    *(s32 *)&this->m_name = (s32) *(u16 *)((s8 *)(*(void **)((s8 *)arg0 + 0x40)) + 0x1E);
    temp_r3 = (unsigned char *) (*(void **)((s8 *)arg0 + 0x40));
    *(s32 *)&this->m_prev = (s32) *(u16 *)((s8 *)temp_r3 + 8);
    *(s32 *)&this->m_prev = (s32) (*(s32 *)&this->m_prev | (*(u16 *)((s8 *)temp_r3 + 0xA) << 0x10));
    this->m_44 = ((TQuestVmDownLoadServer *)((*(s32 *)&this->m_name * (*(s32 *)&this->m_flags * 2)) + 0x20))->alloc();
    *(void **)((s8 *)(*(void * *)&this->m_3c) + 0) = (void *) (arg0 + 0xC);
    *(s32 *)((s8 *)(*(void * *)&this->m_3c) + 4) = 1;
    ((TObjPlayer *)(arg0 + 0x18))->set_render_rect((int) (this->m_44 + 0x20), (int) (5), (int) (*(s32 *)&this->m_flags), (int) (*(s32 *)&this->m_name));
    set_texture_name((void *) (arg0 + 0xC), (void *) (arg0 + 0x18), (int) (*(s32 *)&this->m_prev), (int) (0x40800000));
    pso_load_texture__6TLobbyFv((void *) (*(void * *)&this->m_3c));
}

}
