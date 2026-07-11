#include "types.h"

extern "C" {

void TObjQuestColA__vt14(void* p);
int TQuestThreadBoard__sub_80197094(void*);
int TQuestThread__sub_801F5BD4(void*);

void TObjQuestColA__vt14(void* p) { TQuestThreadBoard__sub_80197094(p); TQuestThread__sub_801F5BD4(*(void**)((char*)p + 0xb0)); }

}
