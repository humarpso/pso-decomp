#include "types.h"
#include "pso/misc/TWindowSubShortMail.h"

extern "C" {

extern const f32 lbl_805DB078;
extern const f32 lbl_805DB07C;

void TWindowSubShortMail::set_position(void *arg1) {
    *(f32 *)((s8 *)(*(void * *)&this->m_20) + 0x30) = (f32) (*(f32 *)((s8 *)arg1 + 0) - lbl_805DB078);
    *(f32 *)((s8 *)(*(void * *)&this->m_20) + 0x34) = (f32) (*(f32 *)((s8 *)arg1 + 4) - lbl_805DB07C);
    *(s32 *)((s8 *)(*(void * *)&this->m_20) + 0x50) = 3;
}

}
