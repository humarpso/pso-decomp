#include "types.h"

extern "C" {

s32 obj_isState2_324();
s32 TObjPlayer__sub_8001119C(void* p);

int TObjPlayer__sub_80011350(void) { return 0; }
int TObjPlayer__sub_80011378(void) { return 0; }
int TObjPlayer__sub_800113A8(void) { return 0; }
int TObjPlayer__sub_800113E4(void) { return 0; }
int TItemProShield__sub_8001140C(void) { return 0; }
int TObjectV8047c128_subtract_hp(void* a0 = 0, void* a1 = 0) { return 0; }
s32 fn_8001148C(s32 arg0, s32 arg1) {
    if (obj_isState2_324() != 0) {
        return 0;
    }
    return TObjectV8047c128_subtract_hp((void*)(arg0), (void*)(arg1));
}

}
