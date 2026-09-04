#include "types.h"

extern "C" {

void TObjGyaranzoMissile__sub_801311D8(void* p);
void* init_missile__19TObjGyaranzoMissileFPv(void* a0);
int TOHangerMachine01__sub_803D9C00(void*);
int TObjPlayer__sub_80120D50(void);
int get_player_list__10TObjPlayerFv(void*);

    extern unsigned char TObjPlayer__sub_80109440[];
    extern unsigned char lbl_804A6CC8[];
    extern const float lbl_805DB038;
    extern const float lbl_805DB044;
    extern const float lbl_805DB04C;
void* init_missile__19TObjGyaranzoMissileFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A6CC8; *(int*)((char*)a0 + 0x1f0) = 0; *(int*)((char*)a0 + 0x1ec) = (int)TObjPlayer__sub_80109440; *(float*)((char*)a0 + 0x1e4) = lbl_805DB04C; *(int*)((char*)a0 + 0x1f8) = 0; *(float*)((char*)a0 + 0x204) = lbl_805DB038; *(float*)((char*)a0 + 0x200) = lbl_805DB038; *(float*)((char*)a0 + 0x1fc) = lbl_805DB038; *(int*)((char*)a0 + 0x208) = 0; *(float*)((char*)a0 + 0x214) = lbl_805DB044; *(float*)((char*)a0 + 0x210) = lbl_805DB044; *(float*)((char*)a0 + 0x20c) = lbl_805DB044; return a0; }

void TObjGyaranzoMissile__sub_801311D8(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { TOHangerMachine01__sub_803D9C00((char*)p + 0x1fc); } }

}
