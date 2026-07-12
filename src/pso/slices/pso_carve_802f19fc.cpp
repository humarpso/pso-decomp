extern "C" {
    int TParticleCtrl__sub_801E2EFC(void);
    int TParticleCtrl__sub_801E2F20(void);
    int TObjFish__sub_803DA798(void*);
    int fn_803DC894(void*, void*, float);
    int TObjPlayer__sub_803E4BC4(void);
    int TObjPlayer__sub_803E4BD0(void);
    int func_80141618__Fv(void);
    int set_depth_buffer_settings_id__FUl(void*);
    extern int lbl_805D6954;
void fn_802F19FC(void* a0) { set_depth_buffer_settings_id__FUl((void*)3); TParticleCtrl__sub_801E2EFC(); TObjFish__sub_803DA798((void*)(lbl_805D6954)); TObjPlayer__sub_803E4BC4(); fn_803DC894((void*)(*(int*)((char*)a0 + 0x1c)), (void*)(*(int*)((char*)a0 + 0x20)), *(float*)((char*)a0 + 0x28)); TObjPlayer__sub_803E4BD0(); TParticleCtrl__sub_801E2F20(); func_80141618__Fv(); }
}
