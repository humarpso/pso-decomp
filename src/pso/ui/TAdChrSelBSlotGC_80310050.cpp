#include "types.h"
#include "pso/ui/TAdChrSelBSlotGC_80310050.h"
#include "pso/ui/TAdChrSelBSlotGC.h"

extern "C" {

void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__16TAdChrSelBSlotGC[];
extern void *TAdChrSelBSlotGC__name;

void *TAdChrSelBSlotGC__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TAdChrSelBSlotGC;
    *(void * *)&((TAdChrSelBSlotGC *)arg0)->m_name = TAdChrSelBSlotGC__name;
    ((TAdChrSelBSlotGC *)arg0)->sub_8030FE04();
    ((TAdChrSelBSlotGC *)arg0)->create_children();
    return arg0;
}

}
