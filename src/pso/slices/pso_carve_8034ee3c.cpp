#include "types.h"

extern "C" {

s32 fn_8002AEB8(s32, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
s32 fn_801BA54C(u32, s16);
int bswap_16__FPUs(void*);
int fn_8001960C(void*);
int TLobby__sub_801E4570(void*);
s32 fn_8034EF30(void* p);
void fn_8034EF38(void* p, s32 v);
void fn_8034EF40(void* p, s16 v);
void build_6x69_npc_control(void* p);

int fn_8034EE3C(void) { return 0; }
void fn_8034EE70(u16 arg0, s32 arg1) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp_r3 != 0U) {
        fn_8002AEB8(temp_r3 + 0x644, arg1);
    }
}
int fn_8034EEB4(void) { return 0; }
void fn_8034EEE4(u16 arg0, s16 arg1) {
    u32 temp_r3;

    if ((arg1 < 0x10) && ((temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg0)) != 0U)) {
        fn_801BA54C(temp_r3, arg1);
    }
}
s32 fn_8034EF30(void* p) { return *(s32*)((char*)p + 0x67c); }
void fn_8034EF38(void* p, s32 v) { *(s32*)((char*)p + 0x67c) = v; }
void fn_8034EF40(void* p, s16 v) { *(s16*)((char*)p + 0x678) = v; }
void fn_8034EF48(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); }
void fn_8034EF94(void* p) { fn_8034EF48(p); TLobby__sub_801E4570(p); }
void build_6x69_npc_control(void* p) { *(u8*)((char*)p + 0x0) = 105; *(u8*)((char*)p + 0x1) = 3; }

}
