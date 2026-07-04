extern "C" {
    int fn_80227B48(float);
    int fn_802405B0(void*, void*);
    int render_tick__Fv(void);
    extern unsigned char lbl_80514F64[];
    extern float lbl_805DC76C;
void fn_80227F7C(void) { fn_802405B0(lbl_80514F64, (void*)0); fn_80227B48(lbl_805DC76C); render_tick__Fv(); }
}
