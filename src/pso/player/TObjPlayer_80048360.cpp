#include "types.h"
#include "pso/player/TObjPlayer_80048360.h"
#include "pso/player/TUnk_80484840.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 queue_destruction__7TObjectFv();

void TUnk_80484840::run_task() {
    s32 temp_r0;

    this->m_2c = (s32) (this->m_2c + this->m_38);
    temp_r0 = this->m_24 - 1;
    this->m_24 = temp_r0;
    if (temp_r0 <= 0) {
        queue_destruction__7TObjectFv();
    }
}

extern s32 direction_line_object_dispatch_table[];

void *__dt__13TUnk_80484840Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = direction_line_object_dispatch_table;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
