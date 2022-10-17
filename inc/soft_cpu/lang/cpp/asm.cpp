
#define DEF_INSTR(name, n_args, ...) \
    const Instruction instr_##name = \
        {                            \
        name,                        \
        INSTR_##name,                \
        n_args                       \
        };

#include "../pre/instruction/s.pre"

#undef DEF_INSTR

