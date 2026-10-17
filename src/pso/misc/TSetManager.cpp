#include "types.h"
#include "pso/misc/TSetManager.h"
#include "pso/TSetManager.h"

extern "C" {

void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__11TSetManager[];
extern void *lbl_805D3638;

void *TSetManager__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TSetManager;
    *(void * *)&((TSetManager *)arg0)->m_name = lbl_805D3638;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

}
