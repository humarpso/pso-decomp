#include "types.h"
#include "pso/TObjItemNameSelect.h"

void *TObjItemNameSelect::create(void *parent) {
    return new TObjItemNameSelect((TObject *)parent);
}
