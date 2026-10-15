#include "types.h"
#include "pso/TChCrCharSelect.h"

extern "C" {

int update_creation_direction_repeat(void);
int poll_pad_buttons__16TObjCMProportionFv(void);

void TChCrCharSelect::reset_proportions() { poll_pad_buttons__16TObjCMProportionFv(); update_creation_direction_repeat(); }

}
