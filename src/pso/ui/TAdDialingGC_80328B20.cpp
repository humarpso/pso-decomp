#include "types.h"

struct T_80328C10 { u8 pad[0xA4]; u32 flags; };

extern "C" {
void TAdDialingGC__sub_80328B24(void *, void *);
extern char lbl_804767B8[];
extern char lbl_804767C0[];
void TAdDialingGC__sub_80328C10(T_80328C10 *self);
}

extern "C" {

void TAdDialingGC__sub_80328B20(void);

void TAdDialingGC__sub_80328B20(void) {  }
void TAdDialingGC__sub_80328C10(T_80328C10 *self) {
    if (self->flags & 1) {
        TAdDialingGC__sub_80328B24(lbl_804767B8, lbl_804767C0);
    }
}

}
