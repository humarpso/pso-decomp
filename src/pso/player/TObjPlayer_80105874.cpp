#include "types.h"

extern "C" {

void free_item_globals__10TObjPlayerFv(void);
int TItemDrop__sub_8010F168(void*, void*);
int free_all__9TItemLoadFv(void);
int free_all_and_init__9TItemBuffFv(void);

    extern int lbl_805D5444;
void free_item_globals__10TObjPlayerFv(void) { TItemDrop__sub_8010F168((void*)(lbl_805D5444), (void*)1); lbl_805D5444 = 0; free_all__9TItemLoadFv(); free_all_and_init__9TItemBuffFv(); }

}
