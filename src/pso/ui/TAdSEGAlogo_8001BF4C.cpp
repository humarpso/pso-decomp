#include "types.h"

extern "C" {

void destroy_and_mark_done__11TAdSEGAlogoFv(void);
void request_destroy__11TAdSEGAlogoFv(void);
int queue_destruction__7TObjectFv(void);

    extern int lbl_805D4A40;
void destroy_and_mark_done__11TAdSEGAlogoFv(void) { queue_destruction__7TObjectFv(); lbl_805D4A40 = 1; }

    extern int TAdSEGAlogo__data_805D4A3C;
void request_destroy__11TAdSEGAlogoFv(void) { queue_destruction__7TObjectFv(); TAdSEGAlogo__data_805D4A3C = 1; }

}
