#include "pso/TAdSoniclogo.h"

TAdSoniclogo::~TAdSoniclogo() {}

#include "types.h"

extern "C" {

void request_destroy__12TAdSoniclogoFv(void);
int queue_destruction__7TObjectFv(void);

    extern int TAdSoniclogo__data_805D4A4C;
void request_destroy__12TAdSoniclogoFv(void) { queue_destruction__7TObjectFv(); TAdSoniclogo__data_805D4A4C = 1; }

}
