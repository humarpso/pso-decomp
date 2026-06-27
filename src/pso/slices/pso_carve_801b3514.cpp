#include "types.h"

extern "C" {

int fn_801B3514(void* p);
int fn_801B3540(void* p);
int fn_801B3564(void* p);
int fn_801B3588(void* p);
int TObjPlayer__sub_800495E0(void*, int);
int fn_8011E204(void*, int);
int fn_8011E238(void*, int);

int fn_801B3514(void* p) { return (TObjPlayer__sub_800495E0(p, 4096)) == 0; }
int fn_801B3540(void* p) { return fn_8011E204(p, 4096); }
int fn_801B3564(void* p) { return fn_8011E238(p, 4096); }
int fn_801B3588(void* p) { return TObjPlayer__sub_800495E0(p, 1024); }
int fn_801B35AC(void) { return 0; }
int fn_801B35E4(void) { return 0; }
int fn_801B3620(void) { return 0; }
int fn_801B3674(void) { return 0; }
int fn_801B3748(void) { return 0; }

}
