#include "types.h"
struct Q_802C2958 { s32 a; s32 b; s32 c; s32 d; };

struct Obj_802C2958 { u8 pad[0x430]; s32 f430; };

extern "C" {
extern u8 lbl_80471838[];
extern u8 lbl_804719B8[];
extern u8 lbl_804E07C4[];
extern Obj_802C2958 *lbl_805D6798;
extern s32 lbl_805D679C;
extern const f32 lbl_805DE51C;
extern const f32 lbl_805DE520;
Obj_802C2958 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
Obj_802C2958 *TLobby__sub_80020004(Obj_802C2958 *, s32, void *, s32, s32, s32);
s32 TLanguage__sub_801E4874(void *);
s32 TObjFish__sub_8001EDC4(void *, s32, s32, s32, s32, void *);
void spawn_npc_enemy__6TLobbyFsiiiff(s32, s32, s32, void *, f32, f32);
void TObjPlayer__sub_802C2958(void);
}

extern "C" {

void TObjPlayer__sub_802C2958(void) {
    Obj_802C2958 *o = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (o != 0) {
        o = TLobby__sub_80020004(o, 5, lbl_804E07C4, 0, 0, 0);
    }
    lbl_805D6798 = o;
    lbl_805D679C = TLanguage__sub_801E4874(lbl_804719B8);
    Q_802C2958 q = *(Q_802C2958 *)lbl_80471838;
    q.a = lbl_805D6798->f430;
    spawn_npc_enemy__6TLobbyFsiiiff(0x40, TObjFish__sub_8001EDC4(lbl_805D6798, 0, ((Q_802C2958 *)lbl_80471838)->c, ((Q_802C2958 *)lbl_80471838)->b, ((Q_802C2958 *)lbl_80471838)->a, lbl_80471838), lbl_805D679C, &q, lbl_805DE51C, lbl_805DE520);
}

}
