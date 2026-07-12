#include "types.h"

extern "C" {

s32 TObjPlayer__sub_80087638(s32, s32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 trigger_switch_attack__10TObjPlayerFPvi(s32, s32);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80019248(s32);
u16 obj_getField1c(void* a0 = 0);
int fn_8000FEAC(void* p);
int fn_8000FED0(void* p);
int fn_8000FEF4(void* p);
int fn_8000FF18(void* p);
void fn_8000FF4C(void* p, s16 v);
u16 fn_8000FF54(void* p);
int obj_testFlags30(void*, int);

void activate_switch_attacks__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (obj_testFlags30((void*)(arg0), 0x02000000) == 0) {
        TOSwitchAttack__sub_80087278(arg1, 0xB9, 0x40);
        TOSwitchAttack__sub_80087278(arg1, 0xBA, 0x40);
        trigger_switch_attack__10TObjPlayerFPvi(arg0, arg1);
    }
}

}
