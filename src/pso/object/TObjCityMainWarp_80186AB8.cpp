#include "types.h"

extern "C" {

void TObjCityMainWarp__sub_80186AB8(void);
void TObjCityMainWarp__sub_80186ABC(void);
void TObjCityMainWarp__sub_80186AE4(void* p);
int TObjCityMainWarp__sub_80186634(void);
int TObjCityMainWarp__sub_801868A8(int);

void TObjCityMainWarp__sub_80186AB8(void) {  }
void TObjCityMainWarp__sub_80186ABC(void) { TObjCityMainWarp__sub_80186634(); TObjCityMainWarp__sub_801868A8(0); }
void TObjCityMainWarp__sub_80186AE4(void* p) { *(u16*)((char*)p + 0x70) |= 0x10; }

}
