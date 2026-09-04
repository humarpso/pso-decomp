#include "types.h"

extern "C" {

void TAdADXlogo__sub_80019848(void);
void destroy__10TAdADXlogoFv(void);
int queue_destruction__7TObjectFv(void);

    extern int lbl_805D49D0;
void TAdADXlogo__sub_80019848(void) { queue_destruction__7TObjectFv(); lbl_805D49D0 = 1; }

    extern int TAdADXlogo__data_805D49CC;
void destroy__10TAdADXlogoFv(void) { queue_destruction__7TObjectFv(); TAdADXlogo__data_805D49CC = 1; }

}
