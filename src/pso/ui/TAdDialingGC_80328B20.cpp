#include "types.h"
#include "pso/ui/TAdDialingGC_80328B20.h"
#include "pso/ui/TAdDialingGC.h"

struct T_80328C10 { u8 pad[0xA4]; u32 flags; };

extern "C" {
void TAdDialingGC__sub_80328B24(void *, void *);
extern char lbl_804767B8[];
extern char lbl_804767C0[];
extern s32 lbl_804767A8[];
extern s32 lbl_804767B0[];

void TAdDialingGC__sub_80328B20(void) {  }
void TAdDialingGC::draw_if_flag_set() {
    T_80328C10 *self = (T_80328C10 *)this;
    if (self->flags & 1) {
        TAdDialingGC__sub_80328B24(lbl_804767B8, lbl_804767C0);
    }
}
void TAdDialingGC::render_if_flag_set() {
    if ((*(s32 *)&this->m_a4 & 1) && ((s32) *(s32 *)&this->m_1c == 0)) {
        TAdDialingGC__sub_80328B24(lbl_804767A8, lbl_804767B0);
    }
}

}
