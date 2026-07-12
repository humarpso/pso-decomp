#include "types.h"

extern "C" {

int TObjPlayer__sub_800F7478(void*);
void reset_hp__9TObjEneDDFPv(void* p);
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

}
