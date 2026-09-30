#include "types.h"
struct Obj_803D0F90 { u8 pad[0x14]; s32 val; };

struct Obj_803D13C0 { u8 pad[0x24]; s32 val; };

struct S_803D0FD0 { u8 pad[0x14]; s32 a; s32 b; };

struct S_803D1400 { u8 pad; s8 f; };

extern "C" {
void TLobby__sub_803D0DEC(const char *fmt, ...);
extern char lbl_8047DCF0[];
s32 TLobby__sub_803D0F90(Obj_803D0F90 *p);
void TLobby__sub_803D0DEC(const char *fmt, ...);
extern char lbl_8047DCF0[];
s32 TLobby__sub_803D13C0(Obj_803D13C0 *p);
s32 OSRestoreInterrupts(s32 level);
extern volatile s32 lbl_805D7638;
extern s32 lbl_805D763C;
void TLobby__sub_803D1FD4(void);
void TLobby__sub_803D0DEC(const char *fmt, ...);
extern char lbl_8047DCF0[];
extern char lbl_8047DD14[];
void TLobby__sub_803D0FD0(S_803D0FD0 *arg0, s32 arg1);
void TLobby__sub_803D0DEC(const char *fmt, ...);
extern char lbl_8047DCF0[];
s32 TLobby__sub_803D1400(S_803D1400 *arg0);
}

extern "C" {

s32 TLobby__sub_803D0F90(Obj_803D0F90 *p) {
    if (p == 0) {
        TLobby__sub_803D0DEC(lbl_8047DCF0);
        return -1;
    }
    return p->val;
}

void TLobby__sub_803D0FD0(S_803D0FD0 *arg0, s32 arg1) {
    if (arg0 == 0) {
        TLobby__sub_803D0DEC(lbl_8047DCF0);
        return;
    }
    if (arg1 < 0 || arg1 > arg0->b) {
        TLobby__sub_803D0DEC(lbl_8047DD14);
        return;
    }
    arg0->a = arg1;
}

s32 TLobby__sub_803D13C0(Obj_803D13C0 *p) {
    if (p == 0) {
        TLobby__sub_803D0DEC(lbl_8047DCF0);
        return -1;
    }
    return p->val;
}

s32 TLobby__sub_803D1400(S_803D1400 *arg0) {
    if (arg0 == 0) {
        TLobby__sub_803D0DEC(lbl_8047DCF0);
        return -1;
    }
    return arg0->f;
}

void TLobby__sub_803D1FD4(void) {
    lbl_805D7638--;
    if (lbl_805D7638 == 0) {
        OSRestoreInterrupts(lbl_805D763C);
    }
}

}
