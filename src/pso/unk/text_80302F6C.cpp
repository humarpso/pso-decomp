#include "types.h"

extern "C" {

void queue_destruction__7TObjectFv(void *);
void destroy_enemy_object__10TObjPlayerFs(void *, int);
void __dl__7TObjectFPv(void *);
extern s32 lbl_804E6AF8[];

void *fn_80302F6C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E6AF8;
        if (*(void **)((s8 *)arg0 + 0xCC) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xCC)); }
        destroy_enemy_object__10TObjPlayerFs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
