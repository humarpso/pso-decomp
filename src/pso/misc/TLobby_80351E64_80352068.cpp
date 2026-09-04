#include "types.h"

extern "C" {

int fn_80352094(void);
void load_obj_lobby_main(void);
int TLanguage__sub_801E4874(void*);
void TObjLobbyMain__sub_803520D8(void);

    extern unsigned char lbl_80478E20[];
    extern int lbl_805D6EC4;
void load_obj_lobby_main(void) { lbl_805D6EC4 = TLanguage__sub_801E4874(lbl_80478E20); }

int fn_80352094(void) { return 0; }

}
