#include "types.h"
#include "pso/unk/text_802432F0.h"
extern "C" {
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, void *);
extern s32 lbl_804CDC88[];
s32 fn_802432F0(void *name) {
    s32 *p = lbl_804CDC88;
    s32 i;
    for (i = 0; i < 2; i++, p++) {
        switch (find_card_file__15TAdPlayerLoadGCFiPv(*p, name)) {
        case 0:
            return *p;
        case -1:
            return -2;
        }
    }
    return -1;
}

}
