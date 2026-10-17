#include "types.h"
#include "pso/player/TObjPlayer_801AA664.h"
#include "pso/misc/TPhotonEstlla.h"
#include "pso/player/TObjPlayer.h"

u16 TObjPlayer::get_entity_type() { return *(u16*)((char*)this + 0x0); }
void* TObjPlayer__sub_801AA66C(void* p, void* a1) { *(short*)(p) = *(unsigned short*)(a1); *(short*)((char*)p + 0x2) = *(short*)((char*)a1 + 0x2); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); TObjPlayer__sub_801AA6E4((u8 *)((char*)p + 0x8), (u8 *)((char*)a1 + 0x8)); TObjPlayer__sub_801AA6E4((u8 *)((char*)p + 0xc), (u8 *)((char*)a1 + 0xc)); TObjPlayer__sub_801AA6E4((u8 *)((char*)p + 0x10), (u8 *)((char*)a1 + 0x10)); TObjPlayer__sub_801AA6E4((u8 *)((char*)p + 0x14), (u8 *)((char*)a1 + 0x14)); return p; }

void TObjPlayer__sub_801AA6E4(u8 *arg0, u8 *arg1) {
    *(u16 *)((s8 *)arg0 + 0) = (u16) *(u16 *)((s8 *)arg1 + 0);
    *(s16 *)((s8 *)arg0 + 2) = (s16) *(s16 *)((s8 *)arg1 + 2);
}

    extern const float lbl_805DC138;
void TPhotonEstlla::sub_801AA6F8() { *(float *)&this->m_180 = lbl_805DC138; *(float*)((char*)this + 0x184) = lbl_805DC138; this->m_188 = lbl_805DC138; *(float *)&this->unk_18C = lbl_805DC138; }
