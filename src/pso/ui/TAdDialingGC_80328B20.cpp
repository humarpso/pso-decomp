#include "types.h"

struct T_80328C10 { u8 pad[0xA4]; u32 flags; };

extern "C" {
void TAdDialingGC__sub_80328B24(void *, void *);
extern char lbl_804767B8[];
extern char lbl_804767C0[];
void draw_if_flag_set__12TAdDialingGCFPv(T_80328C10 *self);
void TAdDialingGC__sub_80328B24(void *, void *);
extern s32 lbl_804767A8[];
extern s32 lbl_804767B0[];
void render_if_flag_set__12TAdDialingGCFPv(u8 *arg0);
}

extern "C" {

void TAdDialingGC__sub_80328B20(void);

void TAdDialingGC__sub_80328B20(void) {  }
void draw_if_flag_set__12TAdDialingGCFPv(T_80328C10 *self) {
    if (self->flags & 1) {
        TAdDialingGC__sub_80328B24(lbl_804767B8, lbl_804767C0);
    }
}
void render_if_flag_set__12TAdDialingGCFPv(u8 *arg0) {
    if ((*(s32 *)((s8 *)arg0 + 0xA4) & 1) && ((s32) *(s32 *)((s8 *)arg0 + 0x1C) == 0)) {
        TAdDialingGC__sub_80328B24((void *) (lbl_804767A8), (void *) (lbl_804767B0));
    }
}

}
