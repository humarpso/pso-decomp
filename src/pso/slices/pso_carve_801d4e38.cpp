extern "C" {
    int fn_801D4E94(void*);
    int queue_destruction__7TObjectFv(void*);
    int run_tasks__7TObjectFv(void*);
    extern int lbl_805D5DE0;
    extern int lbl_805D5DF0;
void fn_801D4E38(void* a0, int a1) { lbl_805D5DE0 = a1; lbl_805D5DF0 = 0; fn_801D4E94((void*)(*(int*)((char*)a0 + 0x1c4))); queue_destruction__7TObjectFv((void*)(*(int*)((char*)a0 + 0x1c4))); run_tasks__7TObjectFv((void*)(*(int*)((char*)a0 + 0x1c8))); run_tasks__7TObjectFv((void*)(*(int*)((char*)a0 + 0x1c8))); queue_destruction__7TObjectFv((void*)(*(int*)((char*)a0 + 0x1c8))); }
}
