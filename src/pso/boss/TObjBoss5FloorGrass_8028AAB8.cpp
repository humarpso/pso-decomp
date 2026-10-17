#include "types.h"
#include "pso/boss/TObjBoss5FloorGrass_8028AAB8.h"
#include "pso/TObjBoss5FloorGrass.h"

extern "C" {

void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__19TObjBoss5FloorGrass[];
extern void *lbl_805D3B20;

void *__ct__19TObjBoss5FloorGrassFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TObjBoss5FloorGrass;
    *(void * *)&((TObjBoss5FloorGrass *)arg0)->m_name = lbl_805D3B20;
    return arg0;
}

}
