extern "C" {
    int begin_effect_render__13TParticleCtrlFv(void);
    int end_effect_render__13TParticleCtrlFv(void);
    int set_global_param__8TObjFishFi(void*);
    int TObjDoor__sub_803DC894(void*, void*, float);
    int set_global_flag__10TObjPlayerFv(void);
    int clear_global_state__10TObjPlayerFv(void);
    int func_80141618__Fv(void);
    int set_depth_buffer_settings_id__FUl(void*);
    extern int lbl_805D6954;
void draw_particle_effect(void* a0) { set_depth_buffer_settings_id__FUl((void*)3); begin_effect_render__13TParticleCtrlFv(); set_global_param__8TObjFishFi((void*)(lbl_805D6954)); set_global_flag__10TObjPlayerFv(); TObjDoor__sub_803DC894((void*)(*(int*)((char*)a0 + 0x1c)), (void*)(*(int*)((char*)a0 + 0x20)), *(float*)((char*)a0 + 0x28)); clear_global_state__10TObjPlayerFv(); end_effect_render__13TParticleCtrlFv(); func_80141618__Fv(); }
}
