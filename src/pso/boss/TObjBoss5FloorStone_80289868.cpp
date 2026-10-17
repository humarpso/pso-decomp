#include "types.h"
#include "pso/boss/TObjBoss5FloorStone_80289868.h"
#include "pso/TObjBoss5FloorStone.h"

extern "C" {

void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__19TObjBoss5FloorStone[];
extern void *TObjBoss5FloorStone__name;

void *__ct__19TObjBoss5FloorStoneFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TObjBoss5FloorStone;
    *(void * *)&((TObjBoss5FloorStone *)arg0)->m_name = TObjBoss5FloorStone__name;
    return arg0;
}

}
