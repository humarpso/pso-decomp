#include "types.h"
extern "C" {
extern char *lbl_805187D8[];
void fn_8026A62C(void *, char *);
void complete_reveal__14TWindowMessageFPv(void *);
void TWindowMessageLog__sub_8026A434(void *);
void fn_8026A360(void *window);
}

extern "C" {

void fn_8026A360(void *window) {
    s32 i;
    for (i = 0; i < 30; i++) {
        if (lbl_805187D8[i] != 0) {
            fn_8026A62C(window, lbl_805187D8[i]);
        }
    }
    complete_reveal__14TWindowMessageFPv(window);
    TWindowMessageLog__sub_8026A434(window);
}

}
