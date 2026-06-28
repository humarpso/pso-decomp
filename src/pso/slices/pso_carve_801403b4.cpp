#include "types.h"

extern "C" {

s32 TBoss3VoloptCtrl__ct();
s32 fn_8007B858();
s32 fn_8007BB2C();
s32 fn_80133D78();
s32 TOKeyMachine01__sub_802034A8();
s32 fn_80227FB4();
u32 __nw__7TObjectFUl(s32);
s32 fn_800867E4(s32);
s32 fn_8034A8FC();
void fn_801403B4(void);
void fn_801403B8(void);
void fn_80140444(void);
int fn_8007BA20(void);
int fn_800867AC(void);
int fn_800F7B84(void);
int fn_80207FFC(void);
int fn_80227248(void);
int fn_8022743C(void);
int fn_80227F7C(void);

void fn_801403B4(void) {  }
void fn_801403B8(void) { fn_80227F7C(); fn_8022743C(); fn_80227248(); fn_800F7B84(); fn_80207FFC(); fn_8007BA20(); }
s32 fn_801403EC(void) {
    TOKeyMachine01__sub_802034A8();
    fn_80227FB4();
    if (fn_8007BB2C() != 0) {
        return 0;
    }
    fn_80133D78();
    fn_8007B858();
    if (__nw__7TObjectFUl(0x24) != 0U) {
        TBoss3VoloptCtrl__ct();
    }
    return 1;
}
void fn_80140444(void) { fn_800867AC(); fn_80227F7C(); fn_8022743C(); fn_80227248(); fn_800F7B84(); fn_80207FFC(); fn_8007BA20(); }
s32 fn_8014047C(void) {
    TOKeyMachine01__sub_802034A8();
    fn_80227FB4();
    if (fn_8007BB2C() != 0) {
        return 0;
    }
    fn_80133D78();
    fn_8007B858();
    fn_800867E4(0x10000);
    fn_8034A8FC();
    return 1;
}

}
