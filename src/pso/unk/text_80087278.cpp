#include "types.h"
struct Data_8008741C { u8 pad[0x98]; };

struct Ent_80087278 { u8 data[0x98]; };

extern "C" {
extern s32 lbl_805D2948;
extern Data_8008741C *lbl_805D4EF8;
extern Data_8008741C *lbl_805D4EFC;
void *__nw__7TObjectFUl(u32);
void *initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(void *, void *, void *, s32, s32, s32, s32, s32);
void *TBoss8Dragon__sub_8008741C(void *parent, s32 idx, s32 flags);
extern s32 lbl_805D2948;
extern Data_8008741C *lbl_805D4EF8;
extern Data_8008741C *lbl_805D4EFC;
void *__nw__7TObjectFUl(u32);
void *initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(void *, void *, void *, s32, s32, s32, s32, s32);
void *TOSwitchAttack__sub_80087278(void *pos, s32 id, s32 flags);
}

extern "C" {

#pragma push
#pragma opt_propagation off
void *TOSwitchAttack__sub_80087278(void *pos, s32 id, s32 flags) {
    void *p;
    s32 idx = id;
    if (lbl_805D2948 > idx) {
        p = __nw__7TObjectFUl((u32)(0x78));
        if (p != 0) {
            p = initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(p, pos, &lbl_805D4EF8[idx], 1, 0, 0, 0, flags);
        }
        return p;
    }
    if (lbl_805D2948 + 0x40 > idx) {
        idx -= 0x200;
        p = __nw__7TObjectFUl((u32)(0x78));
        if (p != 0) {
            p = initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(p, pos, &lbl_805D4EFC[idx], 1, 0, 0, 0, flags);
        }
        return p;
    }
    return 0;
}
#pragma pop

void *TBoss8Dragon__sub_8008741C(void *parent, s32 idx, s32 flags) {
    void *p;
    if (lbl_805D2948 > idx) {
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(p, parent, &lbl_805D4EF8[idx], 0, 0, 0, 0, flags);
        }
        return p;
    } else if (lbl_805D2948 + 0x40 > idx) {
        s32 j = idx - 0x200;
        p = __nw__7TObjectFUl(0x78);
        if (p != 0) {
            p = initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(p, parent, &lbl_805D4EFC[j], 0, 0, 0, 0, flags);
        }
        return p;
    } else {
        return 0;
    }
}

}
