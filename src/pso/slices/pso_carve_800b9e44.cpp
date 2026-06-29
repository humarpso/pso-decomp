#include "types.h"

extern "C" {

int fn_800F7478(void*);
void TObjEneDD__sub_800B9ED0(void* p);
int TObjEneDD__sub_800B9E44(void* p);
int TObjEneDD__sub_800B9E64(void* p);
int TObjEneDD__sub_800B9F04(void* p);
int TObjEneDD__sub_800B9F24(void* p);
int TObjEneDD__sub_800B9F44(void* p);
int TCameraCtrl__sub_80069148(void*);
int TCameraCtrl__sub_800691C8(void*);
int TObjEneLappy__sub_800F5DE0(void*);
int TObjLight__sub_80134098(void*);
int TObjLight__sub_80134194(void*);

int TObjEneDD__sub_800B9E44(void* p) { return TObjLight__sub_80134098(p); }
int TObjEneDD__sub_800B9E64(void* p) { return TObjLight__sub_80134194(p); }
int TObjEneDD__sub_800B9E84(void) { return 0; }
void TObjEneDD__sub_800B9ED0(void* p) { fn_800F7478(p); *(short*)((char*)p + 0x33e) = *(short*)((char*)p + 0x32c); }
int TObjEneDD__sub_800B9F04(void* p) { return TCameraCtrl__sub_80069148(p); }
int TObjEneDD__sub_800B9F24(void* p) { return TCameraCtrl__sub_800691C8(p); }
int TObjEneDD__sub_800B9F44(void* p) { return TObjEneLappy__sub_800F5DE0(p); }

}
