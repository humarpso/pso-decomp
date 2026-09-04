#ifndef PSO_CLASS_PACKAGE
#include "pso/TAdSEGAlogo.h"

TAdSEGAlogo::~TAdSEGAlogo() {}
#else
#if PSO_CLASS_PACKAGE == 0x8001BF4C
#include "types.h"

extern "C" {

void destroy_and_mark_done__11TAdSEGAlogoFv(void);
int queue_destruction__7TObjectFv(void);

    extern int lbl_805D4A40;
void destroy_and_mark_done__11TAdSEGAlogoFv(void) { queue_destruction__7TObjectFv(); lbl_805D4A40 = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001BF74
#include "types.h"

extern "C" {

void request_destroy__11TAdSEGAlogoFv(void);
int queue_destruction__7TObjectFv(void);

    extern int TAdSEGAlogo__data_805D4A3C;
void request_destroy__11TAdSEGAlogoFv(void) { queue_destruction__7TObjectFv(); TAdSEGAlogo__data_805D4A3C = 1; }

}
#endif
#endif
