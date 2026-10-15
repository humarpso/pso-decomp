#include "types.h"

extern "C" {

void *__ct__19TObjBoss5FloorGrassFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__19TObjBoss5FloorGrass[];
extern void *lbl_805D3B20;

void *__ct__19TObjBoss5FloorGrassFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TObjBoss5FloorGrass;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D3B20;
    return arg0;
}

}
