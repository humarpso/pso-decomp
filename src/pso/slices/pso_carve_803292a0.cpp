#include "types.h"

extern "C" {

u32 fn_80329278();
s32 TPlyPhotonChair__sub_8035B2DC();
void fn_803292A0(void);
int fn_802A7888(int);
int fn_80329244(void);
int fn_803296A0(void);
int TPlyPhotonChair__sub_8035B2A4(void);

void fn_803292A0(void) { TPlyPhotonChair__sub_8035B2A4(); fn_80329244(); fn_802A7888(0); fn_803296A0(); }
void fn_803292D0(void) {
    fn_802A7888(0);
    if (fn_80329278() == 0U) {
        fn_802A7888(1);
        return;
    }
    TPlyPhotonChair__sub_8035B2DC();
}

}
