#include "types.h"

extern "C" {

void free_resources__12TBoss8DragonFv(void);
int TBoss8Dragon__sub_8002DB10(void*, void*);
int free__11TOBoss4RockFUi(void*);

    extern int lbl_805D4B60;
    extern int lbl_805D4B64;
    extern int lbl_805D4B68;
    extern int lbl_805D4B6C;
    extern int lbl_805D4B78;
void free_resources__12TBoss8DragonFv(void) { free__11TOBoss4RockFUi((void*)(lbl_805D4B78)); lbl_805D4B78 = 0; free__11TOBoss4RockFUi((void*)(lbl_805D4B6C)); lbl_805D4B6C = 0; TBoss8Dragon__sub_8002DB10((void*)(lbl_805D4B64), (void*)1); lbl_805D4B64 = 0; TBoss8Dragon__sub_8002DB10((void*)(lbl_805D4B68), (void*)1); lbl_805D4B68 = 0; TBoss8Dragon__sub_8002DB10((void*)(lbl_805D4B60), (void*)1); lbl_805D4B60 = 0; }

}
