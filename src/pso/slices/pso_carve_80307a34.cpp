extern "C" {
    int TAdEndText__sub_8001B324(void);
    int TLobby__sub_800FC3CC(void);
    int fn_80132F44(void);
    int TMainTask__sub_802296A0(void*);
    int render_tick__Fv(void);
    extern unsigned char main_task[];
    extern int lbl_805D6A58;
void fn_80307A34(void) { lbl_805D6A58 = 0; TMainTask__sub_802296A0(main_task); TLobby__sub_800FC3CC(); fn_80132F44(); TAdEndText__sub_8001B324(); render_tick__Fv(); }
}
