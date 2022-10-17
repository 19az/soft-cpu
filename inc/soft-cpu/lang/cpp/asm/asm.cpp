
#include <string.h>

#include "../dsl_to_cpp.h"

#define ASM_CPP
#include "asm.h"

#include "error_handling/error_handling.h"

Instruction GetInstruction(const char* instr_name ERR_SUPPORT_DEFN)
{
    ASSERT( instr_name != NULL);
    ASSERT(*instr_name != '\0');

    if (strcmp(instr_name, "hlt") == 0)
    {
        return Instruction{
                           "hlt",
                           INSTR_hlt,
                           0
                          };
    }

    #define DEF_INSTR(name, n_args, ...)          \
        else if (strcmp(instr_name, #name) == 0)  \
        {                                         \
            return Instruction{                   \
                               #name,             \
                               INSTR_##name,      \
                               n_args             \
                              };                  \
        }

        #include "pre/instruction/s.pre"

    #undef DEF_INSTR 

    ERR_HANDLE_MSSG(stderr, 1, ERR_NO_INSTR_ASM);
    return {};
}

