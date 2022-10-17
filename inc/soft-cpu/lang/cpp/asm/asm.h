
/// @file asm.h
///
/// @brief Перевод раздела ассемблирования команд процессора с DSL на C

#ifndef SOFT_CPU_LANG_ASM_H
#define SOFT_CPU_LANG_ASM_H

#include <stdint.h>

//#include "asm_errors.h"
typedef uint8_t ERR_TYPE_ASM;

enum errors_asm : ERR_TYPE_ASM
{
        ERR_NO_INSTR_ASM = 1
#define ERR_NO_INSTR_ASM_MSSG "Instruction does not exist"
};

#define ERR_TYPE ERR_TYPE_ASM
#include "error_handling/error_handling.h"

const size_t MAX_N_ARGS =
    #include "pre/instruction/max_n_args"
;

struct Instruction_Arg
{
    void* value_immed = NULL;
    void* value_reg   = NULL;
    
    unsigned int is_immed : 1;
    unsigned int is_reg   : 1;
    unsigned int is_mem   : 1;
};

struct Instruction
{
    const char* name = NULL;
    size_t      code = 0;
    
    size_t n_args = 0;

    Instruction_Arg args[MAX_N_ARGS] = {};
};

/// @brief находит инструкцию по имени
///
/// @param instr_name имя инстукции
///
/// @return структуру Instruction с инструкцией
Instruction GetInstruction(const char* instr_name ERR_SUPPORT_DECL);

#ifndef ASM_CPP
    #undef ERR_TYPE
#endif

#include "error_handling/undef_error_handling.h"

#endif /* SOFT_CPU_LANG_ASM_H */

