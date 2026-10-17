#include "types.h"
#include "pso/misc/TUnk_804D0658.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowChoiceSetting.h"

s16 TWindowChoiceSetting::get_field_74() { return this->m_74; }

int TUnk_804D0658::is_open() { return (this->m_70 >> 1) & 0x1; }
