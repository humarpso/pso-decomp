extern "C" {
    int OSResetSystem(void*, void*, void*);
    int fn_80082A6C(void);
    int free_system__13TParticleCtrlFv(void);
    int fn_800F0AE4(void);
    int destroy_game_heap__6TLobbyFv(void);
    int TObjTailsTailsMove__sub_800FFE0C(void);
    int TObjPlayer__sub_80141604(void);
    int fn_801457A4(void);
    int TLobby__sub_80147978(void);
    int TObjPlayer__sub_801D92A4(void);
    int TAdPlayerLoadGC__sub_801E1350(void);
    int TParticleCtrl__sub_801E5330(void);
    int TAdSinglePlyChrSelectGC__sub_80201970(void);
    int TLobby__sub_8020E3BC(void);
    int TLobby__sub_80227794(void);
    int TLobby__sub_8022809C(void);
    int fn_802433A8(void);
    int TWindowSnapShot__sub_802A7DA0(void);
    int TAdWarningBaseGC__sub_8032D188(void);
    int fn_803386F0(void);
    int fn_8036EF4C(void);
    int fn_8037BC54(void);
    int fn_8037C8B8(void);
    int fn_8037CA40(void*);
    int xfree__FPv(void*);
    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int lbl_805D49A8;
    extern int lbl_805D49B0;
    extern int lbl_805D5678;
    extern int lbl_805D5680;
void shutdown_and_reset_system(void) { fn_802433A8(); TObjTailsTailsMove__sub_800FFE0C(); TObjPlayer__sub_80141604(); fn_800F0AE4(); TAdPlayerLoadGC__sub_801E1350(); free_system__13TParticleCtrlFv(); TParticleCtrl__sub_801E5330(); fn_80082A6C(); fn_801457A4(); TObjPlayer__sub_801D92A4(); TLobby__sub_8020E3BC(); TWindowSnapShot__sub_802A7DA0(); TAdWarningBaseGC__sub_8032D188(); destroy_game_heap__6TLobbyFv(); TLobby__sub_8022809C(); TLobby__sub_80227794(); TAdSinglePlyChrSelectGC__sub_80201970(); fn_803386F0(); fn_8036EF4C(); TLobby__sub_80147978(); xfree__FPv((void*)(lbl_805D49A0)); xfree__FPv((void*)(lbl_805D49A4)); xfree__FPv((void*)(lbl_805D49B0)); xfree__FPv((void*)(lbl_805D5680)); xfree__FPv((void*)(lbl_805D5678)); xfree__FPv((void*)(lbl_805D49A8)); fn_8037CA40((void*)1); fn_8037C8B8(); fn_8037BC54(); OSResetSystem((void*)1, (void*)0, (void*)1); }
}
