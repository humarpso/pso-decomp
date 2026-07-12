#include "types.h"

extern "C" {

s32 TObjPlayer__sub_80087638(s32, s32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 trigger_switch_attack__10TObjPlayerFPvi(s32, s32);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80019248(s32);
u16 obj_getField1c(void* a0 = 0);
int TObjPlayer__sub_8000FEAC(void* p);
int TObjPlayer__sub_8000FED0(void* p);
int TObjPlayer__sub_8000FEF4(void* p);
int TObjPlayer__sub_8000FF18(void* p);
void TObjPlayer__sub_8000FF4C(void* p, s16 v);
u16 TObjPlayer__sub_8000FF54(void* p);
int obj_testFlags30(void*, int);

int TObjPlayer__sub_8000FEAC(void* p) { return obj_testFlags30(p, 4096); }
int TObjPlayer__sub_8000FED0(void* p) { return obj_testFlags30(p, 2048); }
int TObjPlayer__sub_8000FEF4(void* p) { return obj_testFlags30(p, 512); }
int TObjPlayer__sub_8000FF18(void* p) { return obj_testFlags30(p, 256); }

}
