
#include "dsl_to_cpp.h"

const size_t MAX_N_ARGS =
    #include "../pre/instruction/max_n_args"
;

struct Instruction_Arg
{
    ELEM_T value_immed = {};
    ELEM_T value_reg   = {};
    
    unsigned int is_immed : 1;
    unsigned int is_reg   : 1;
    unsigned int is_mem   : 1;
};

struct Instruction
{
    const char* name = NULL;
    size_t      code = 0;
    
    size_t n_args = 0;

    Instruction_Ars args[MAX_N_ARGS] = {};
};

