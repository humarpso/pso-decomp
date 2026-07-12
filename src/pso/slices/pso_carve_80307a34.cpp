extern "C" {
    int TAdEndText__sub_8001B324(void);
    int TLobby__sub_800FC3CC(void);
    int free_keyboard_soft_resources__6TLobbyFv(void);
    int delete_all_task_children__9TMainTaskFv(void*);
    int render_tick__Fv(void);
    extern unsigned char main_task[];
    extern int lbl_805D6A58;
void fn_80307A34(void) { lbl_805D6A58 = 0; delete_all_task_children__9TMainTaskFv(main_task); TLobby__sub_800FC3CC(); free_keyboard_soft_resources__6TLobbyFv(); TAdEndText__sub_8001B324(); render_tick__Fv(); }
}
