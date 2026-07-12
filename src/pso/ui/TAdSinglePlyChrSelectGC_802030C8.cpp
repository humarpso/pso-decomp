#include "types.h"

extern "C" {

int TLobby__sub_80102E68(void*);
void* TAdSinglePlyChrSelectGC__sub_802030C8(void* p, void* a1);
int __ct__12TPlyCharDataFv(void*);
int TAdSinglePlyChrSelectGC__sub_80203190(void* a0 = 0);
void* TAdSinglePlyChrSelectGC__sub_80203158(void* p);
int TWindowSubComCard__sub_8007AB54(void*);
void TAdSinglePlyChrSelectGC__sub_80203210(void* p);

void* TAdSinglePlyChrSelectGC__sub_802030C8(void* p, void* a1) { TLobby__sub_80102E68(p); *(short*)((char*)p + 0x14) = *(short*)((char*)a1 + 0x14); *(short*)((char*)p + 0x16) = *(short*)((char*)a1 + 0x16); return p; }

}
