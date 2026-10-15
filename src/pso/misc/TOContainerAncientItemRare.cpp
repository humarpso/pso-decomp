#include "types.h"

extern "C" {

void *__dt__26TOContainerAncientItemRareFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_ancient_container__10TObjPlayerFPvs(void *, int);

extern s32 __vt__26TOContainerAncientItemRare[];

void *__dt__26TOContainerAncientItemRareFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__26TOContainerAncientItemRare;
        destroy_ancient_container__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
