extern "C" {
    int begin_effect_render__13TParticleCtrlFv(void);
    int end_effect_render__13TParticleCtrlFv(void);
    int TObjFish__sub_803DA798(void*);
    int TObjDoor__sub_803DC894(void*, void*, float);
    int TObjPlayer__sub_803E4BC4(void);
    int TObjPlayer__sub_803E4BD0(void);
    int func_80141618__Fv(void);
    int set_depth_buffer_settings_id__FUl(void*);
    extern int lbl_805D6954;
void draw_particle_effect(void* a0) { set_depth_buffer_settings_id__FUl((void*)3); begin_effect_render__13TParticleCtrlFv(); TObjFish__sub_803DA798((void*)(lbl_805D6954)); TObjPlayer__sub_803E4BC4(); TObjDoor__sub_803DC894((void*)(*(int*)((char*)a0 + 0x1c)), (void*)(*(int*)((char*)a0 + 0x20)), *(float*)((char*)a0 + 0x28)); TObjPlayer__sub_803E4BD0(); end_effect_render__13TParticleCtrlFv(); func_80141618__Fv(); }
}
