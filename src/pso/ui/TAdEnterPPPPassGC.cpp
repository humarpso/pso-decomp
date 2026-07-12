#include "types.h"

extern "C" {

int TAdEnterPPPPassGC__sub_80339070(void* p);
int TAdEnterPPPPassGC__sub_80339090(void* p);
int TAdMultiChgGameModeGC__sub_8023EA64(void*);
int fn_8023EAC4(void*);

int TAdEnterPPPPassGC__sub_80339070(void* p) { return fn_8023EAC4(p); }
int TAdEnterPPPPassGC__sub_80339090(void* p) { return TAdMultiChgGameModeGC__sub_8023EA64(p); }

}
