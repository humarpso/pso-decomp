#include "types.h"

extern "C" {
void TKeyBoardControl__sub_8025CBC0(void* p);
void TKeyBoardControl__sub_8025CC3C(void* p);
}

extern "C" {

int get_flag__11TWindowChatFPv(void* a0 = 0);
int TWindowChat__sub_8025CB70(void* a0 = 0);
void flush_if_flagged__11TWindowChatFPv(void* p);
int is_key_state_2__19TWindowKeyBoardSoftFPv(void* p);

int TWindowChat__sub_8025CB70(void*) { return 0; }

void TKeyBoardControl__sub_8025CBC0(void* p) { *(s32*)((char*)p + 0xb4) = 530; }

void TKeyBoardControl__sub_8025CC3C(void* p) { *(s32*)((char*)p + 0xb4) = 18; }

}
