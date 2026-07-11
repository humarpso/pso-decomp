extern "C" {
    int OSResetSystem(void*, void*, void*);
    int fn_80082A6C(void);
    int TParticleCtrl__sub_80088588(void);
    int fn_800F0AE4(void);
    int fn_800FA73C(void);
    int fn_800FFE0C(void);
    int fn_80141604(void);
    int fn_801457A4(void);
    int fn_80147978(void);
    int fn_801D92A4(void);
    int TAdPlayerLoadGC__sub_801E1350(void);
    int fn_801E5330(void);
    int fn_80201970(void);
    int fn_8020E3BC(void);
    int fn_80227794(void);
    int fn_8022809C(void);
    int fn_802433A8(void);
    int fn_802A7DA0(void);
    int fn_8032D188(void);
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
void shutdown_and_reset_system(void) { fn_802433A8(); fn_800FFE0C(); fn_80141604(); fn_800F0AE4(); TAdPlayerLoadGC__sub_801E1350(); TParticleCtrl__sub_80088588(); fn_801E5330(); fn_80082A6C(); fn_801457A4(); fn_801D92A4(); fn_8020E3BC(); fn_802A7DA0(); fn_8032D188(); fn_800FA73C(); fn_8022809C(); fn_80227794(); fn_80201970(); fn_803386F0(); fn_8036EF4C(); fn_80147978(); xfree__FPv((void*)(lbl_805D49A0)); xfree__FPv((void*)(lbl_805D49A4)); xfree__FPv((void*)(lbl_805D49B0)); xfree__FPv((void*)(lbl_805D5680)); xfree__FPv((void*)(lbl_805D5678)); xfree__FPv((void*)(lbl_805D49A8)); fn_8037CA40((void*)1); fn_8037C8B8(); fn_8037BC54(); OSResetSystem((void*)1, (void*)0, (void*)1); }
}
