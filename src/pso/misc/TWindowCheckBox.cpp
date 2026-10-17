#include "types.h"
#include "pso/misc/TUnk_804CE7E8.h"

extern s32 lbl_805D38B0;

void TUnk_804CE7E8::sub_80248B7C(s16 arg1) {
    *(s32 *)&this->m_name = (s32) lbl_805D38B0;
    this->m_20 = arg1;
}
