#include "types.h"

extern "C" {

void TOMine__sub_80171074(void* p);
void free_parts__6TOMineFPv(void* p);
int TObjBoss2Tunnel__sub_803DB470(void*);
int TObjFish__sub_803DA798(void*);

void TOMine__sub_80171074(void* p) { TObjFish__sub_803DA798(*(void**)((char*)p + 0x378)); TObjBoss2Tunnel__sub_803DB470(*(void**)((char*)p + 0x374)); }

void free_parts__6TOMineFPv(void* p) { TObjFish__sub_803DA798(*(void**)((char*)p + 0x24)); TObjBoss2Tunnel__sub_803DB470(*(void**)((char*)p + 0x34)); }

}
