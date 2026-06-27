#include "types.h"

extern "C" {

int TAdEnterSerialAccessGC__sub_80321F18(void* p);
int TAdEnterSerialAccessGC__sub_80321F3C(void* p);
int TAdEnterSerialAccessGC__sub_80321B28(void*, int);

int TAdEnterSerialAccessGC__sub_80321F18(void* p) { return TAdEnterSerialAccessGC__sub_80321B28(p, 1); }
int TAdEnterSerialAccessGC__sub_80321F3C(void* p) { return TAdEnterSerialAccessGC__sub_80321B28(p, 0); }

}
