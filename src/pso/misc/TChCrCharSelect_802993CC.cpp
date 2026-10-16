#include "types.h"
#include "pso/TChCrCharSelect.h"
#include "pso/object/TObjCMProportion.h"

extern "C" {

int update_creation_direction_repeat(void);

void TChCrCharSelect::reset_proportions() { TObjCMProportion::poll_pad_buttons(); update_creation_direction_repeat(); }

}
