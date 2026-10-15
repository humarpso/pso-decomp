#include "types.h"

extern "C" {

void *__dt__13TItemEffArmorFv(void *arg0, s16 arg1);
void request_destroy__11TBoss4Type2FUi(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern s32 __vt__13TItemEffArmor[];

void *__dt__13TItemEffArmorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TItemEffArmor;
        request_destroy__11TBoss4Type2FUi(*(void **)((s8 *)arg0 + 0x1C));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
