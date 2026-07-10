#include "types.h"

extern "C" {

int fn_800FA8A4(void* p);
int fn_800FA8C4(void* p);
int fn_800FA8E4(void* p);
int update_all__8TFogCtrlFv(void*);
int TAdEnterSerialAccessGC__sub_8032182C(void*);

int fn_800FA8A4(void* p) { return TAdEnterSerialAccessGC__sub_8032182C(p); }
int fn_800FA8C4(void* p) { return TAdEnterSerialAccessGC__sub_8032182C(p); }
int fn_800FA8E4(void* p) { return update_all__8TFogCtrlFv(p); }

}
