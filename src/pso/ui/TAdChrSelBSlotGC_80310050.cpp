#include "types.h"

extern "C" {

void *TAdChrSelBSlotGC__ct(void *arg0);
void create_children__16TAdChrSelBSlotGCFPv(void *);
void reset__16TAdChrSelBSlotGCFPv(void *);
void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__16TAdChrSelBSlotGC[];
extern void *TAdChrSelBSlotGC__name;

void *TAdChrSelBSlotGC__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TAdChrSelBSlotGC;
    *(void **)((s8 *)arg0 + 0x0) = TAdChrSelBSlotGC__name;
    reset__16TAdChrSelBSlotGCFPv(arg0);
    create_children__16TAdChrSelBSlotGCFPv(arg0);
    return arg0;
}

}
