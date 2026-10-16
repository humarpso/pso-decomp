#include "types.h"
#include "pso/player/TUnk_804A4C78.h"

extern "C" {

void sub_8012B1F0__13TUnk_804A4C78Fs(void* p, s16 v);
s16 sub_8012B1F8__13TUnk_804A4C78Fv(void* p);

void TUnk_804A4C78::sub_8012B1F0(s16 v) { *(s16*)((char*)this + 0x1e8) = v; }
s16 TUnk_804A4C78::sub_8012B1F8() { return *(s16*)((char*)this + 0x1e8); }

}
