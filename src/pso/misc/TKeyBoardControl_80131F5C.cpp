#include "types.h"

extern "C" {

void TKeyBoardControl__sub_80131F5C(void);
void TKeyBoardControl__sub_80131F60(void);
void TKeyBoardControl__sub_80131F64(void* p);
void TKeyBoardControl__sub_80131F74(void* p);
int TKeyBoardControl__sub_80131F84(void* p);
void TKeyBoardControl__sub_80131F90(void* p);
int TKeyBoardControl__sub_80131FA0(void* p);
int TKeyBoardControl__sub_80131FAC(void* p);
void TKeyBoardControl__sub_80131FB8(void* p);

void TKeyBoardControl__sub_80131F5C(void) {  }
void TKeyBoardControl__sub_80131F60(void) {  }
void TKeyBoardControl__sub_80131F64(void* p) { *(u32*)((char*)p + 0x60) |= 0x200; }
void TKeyBoardControl__sub_80131F74(void* p) { *(u32*)((char*)p + 0x60) &= 0xfffffdff; }
int TKeyBoardControl__sub_80131F84(void* p) { return (*(u32*)((char*)p + 0x60) >> 8) & 0x1; }
void TKeyBoardControl__sub_80131F90(void* p) { *(u16*)((char*)p + 0x62) |= 0x2; }
int TKeyBoardControl__sub_80131FA0(void* p) { return (*(u16*)((char*)p + 0x60) >> 5) & 0x1; }
int TKeyBoardControl__sub_80131FAC(void* p) { return *(u16*)((char*)p + 0x60) & 0x1; }
void TKeyBoardControl__sub_80131FB8(void* p) { *(u16*)((char*)p + 0x62) |= 0x8; }

}
