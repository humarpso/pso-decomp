#include "types.h"

extern "C" {

s32 TObjPlayer__sub_801BC404(void);
void TObjPlayer__sub_801BC504(void);
void init_from_data__10TObjPlayerFPvPv(void* p, void* a1);
int TObjPlayer__sub_801BC6C4(void*);
s32 check_camera_mode__10TObjPlayerFv();
int TObjPlayer__sub_801BEEAC(void*, void*);
int TObjPlayer__sub_801BEEE0(void*, void*);
int TObjPlayer__sub_801BEEEC(void*, void*);
int TObjPlayer__sub_801BEF30(void*, void*);
s32 fn_8001E5C8();
int fn_80020898(void*, void*);
int fn_80072048(void*, void*);
int fn_801BEAFC(void*, void*);
int fn_801BEB04(void*, void*);
int fn_801BEB54(void*, void*);
s32 fn_801F441C(s32, s32);

s32 TObjPlayer__sub_801BC404(void) {
    if (fn_8001E5C8() == 0) {
        if ((check_camera_mode__10TObjPlayerFv() == 0) && (fn_801F441C(0, 0xB) == 0) && (fn_801F441C(1, 0xB) == 0) && (fn_801F441C(2, 0xB) == 0) && (fn_801F441C(3, 0xB) == 0)) {
            return 0;
        }
        goto block_14;
    }
    if ((fn_8001E5C8() == 1) && (check_camera_mode__10TObjPlayerFv() == 0) && (fn_801F441C(0, 0x5B) == 0) && (fn_801F441C(1, 0x5B) == 0) && (fn_801F441C(2, 0x5B) == 0) && (fn_801F441C(3, 0x5B) == 0)) {
        return 0;
    }
block_14:
    return 1;
}
void TObjPlayer__sub_801BC504(void) {  }
void init_from_data__10TObjPlayerFPvPv(void* p, void* a1) { TObjPlayer__sub_801BC6C4(p); *(short*)((char*)p + 0x1c) = *(unsigned short*)(a1); *(short*)((char*)p + 0x2e) = *(short*)((char*)a1 + 0x2); *(void**)((char*)p + 0x30) = *(void**)((char*)a1 + 0x4); fn_80020898((char*)p + 0x5c, (char*)a1 + 0x14); *(short*)((char*)p + 0x326) = *(short*)((char*)a1 + 0x20); *(short*)((char*)p + 0x32c) = *(short*)((char*)a1 + 0x22); fn_80072048((char*)p + 0xdac, (char*)a1 + 0x68); TObjPlayer__sub_801BEF30((char*)p + 0x828, (char*)a1 + 0x70); TObjPlayer__sub_801BEEEC((char*)p + 0x830, (char*)a1 + 0x78); TObjPlayer__sub_801BEEE0((char*)p + 0x858, (char*)a1 + 0x94); TObjPlayer__sub_801BEEAC((char*)p + 0x730, (char*)a1 + 0x98); fn_801BEB04(p, *(void**)((char*)a1 + 0xac)); fn_801BEAFC(p, *(void**)((char*)a1 + 0x488)); *(void**)((char*)p + 0x334) = *(void**)((char*)a1 + 0xb0); fn_801BEB54(p, *(void**)((char*)a1 + 0x64)); }

}
