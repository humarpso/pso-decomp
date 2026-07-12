#include "types.h"

extern "C" {

int TAdSinglePlyChrSelectGC__sub_80202958(void* p);
int TAdEnterSerialAccessGC__sub_80202984(void*);

int TAdSinglePlyChrSelectGC__sub_80202958(void* p) { return TAdEnterSerialAccessGC__sub_80202984(p); }

}
