#include "types.h"
#include "pso/object/TObjBgmColCtrl.h"

extern "C" {

void *TObjBgmColCtrl__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__14TObjBgmColCtrl[];
extern void *TObjBgmColCtrl__name;
extern u32 TObjBgmColCtrl__current_theme_id;

void *TObjBgmColCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TObjBgmColCtrl;
    *(void * *)&((TObjBgmColCtrl *)arg0)->m_name = TObjBgmColCtrl__name;
    ((TObjBgmColCtrl *)arg0)->m_1c = 3;
    TObjBgmColCtrl__current_theme_id = 0;
    return arg0;
}

}
