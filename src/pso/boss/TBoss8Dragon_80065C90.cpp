#include "types.h"

extern "C" {

void TBoss8Dragon__sub_80065F1C(void);
void TBoss8Dragon__sub_80065F20(void);
void TBoss8Dragon__sub_80065F24(void);
void TBoss8Dragon__sub_80065F28(void);
void TBoss8Dragon__sub_80065F2C(void);
void TBoss8Dragon__sub_80065F30(void);
void TBoss8Dragon__sub_80065F34(void);
int TBoss8Dragon__sub_80065F4C(void);
int TBoss8Dragon__sub_80065F80(void);
int TBoss8Dragon__sub_80065FD4(void);
int TBoss8Dragon__sub_8006602C(void);
void TBoss8Dragon__sub_800660A4(void* p);
int TObjFish__sub_800660D4(void);
void bswap_boss_actions__12TBoss8DragonFi(s32 arg0);
int fn_800660B8(void);
int get_instance_count__12TBoss8DragonFv(void);
void init_color__12TBoss8DragonFPv(void* p);
s32 bswap_32__FPUl(s32);
s32 read_be16_field2__10TObjPlayerFPv();

    extern int lbl_805D4DBC;
int get_instance_count__12TBoss8DragonFv(void) {  return lbl_805D4DBC; }

void TBoss8Dragon__sub_80065F1C(void) {  }
void TBoss8Dragon__sub_80065F20(void) {  }
void TBoss8Dragon__sub_80065F24(void) {  }
void TBoss8Dragon__sub_80065F28(void) {  }
void TBoss8Dragon__sub_80065F2C(void) {  }
void TBoss8Dragon__sub_80065F30(void) {  }
void TBoss8Dragon__sub_80065F34(void) {  }
void init_color__12TBoss8DragonFPv(void* p) { *(u8*)((char*)p + 0x0) = 160; *(u8*)((char*)p + 0x1) = 10; }

int TBoss8Dragon__sub_80065F4C(void) { return 0; }
int TBoss8Dragon__sub_80065F80(void) { return 0; }
int TBoss8Dragon__sub_80065FD4(void) { return 0; }
int TBoss8Dragon__sub_8006602C(void) { return 0; }

void bswap_boss_actions__12TBoss8DragonFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
    bswap_32__FPUl(arg0 + 0xC);
}
void TBoss8Dragon__sub_800660A4(void* p) { *(u8*)((char*)p + 0x0) = 159; *(u8*)((char*)p + 0x1) = 4; }

int fn_800660B8(void) { return 0; }
int TObjFish__sub_800660D4(void) { return 0; }

}
