#include "types.h"

extern "C" {

void cleanup__10TAdEndTextFv(void);
int TLobby__sub_800FC3CC(void);
int delete_all_task_children__9TMainTaskFv(void*);
int free_keyboard_soft_resources__6TLobbyFv(void);
int free_resources__10TAdEndTextFv(void);
int render_tick__Fv(void);

    extern unsigned char main_task[];
    extern int lbl_805D6A58;
void cleanup__10TAdEndTextFv(void) { lbl_805D6A58 = 0; delete_all_task_children__9TMainTaskFv(main_task); TLobby__sub_800FC3CC(); free_keyboard_soft_resources__6TLobbyFv(); free_resources__10TAdEndTextFv(); render_tick__Fv(); }

}
