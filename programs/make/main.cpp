    
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#include "rwfile/rwfile.h"

const int MAXLEN_CMD = 100;

int main(int argc, const char* const* argv)
{
    const char* file_asm  = NULL;
    const char* file_code = "a.code";

    if (argc <= 1 || argc >= 4) // TO DO: add unvirsal parser
    {
        fprintf(stderr,
                "Wrong number of argumnets.\n"
                "Given:    %d\n", 
                argc - 1);

        exit(EXIT_FAILURE);
    }
    if (argc >= 2)
    {
        file_asm = argv[1];

        struct stat st = {};
        if (stat(file_asm, &st) == -1)
        {
            fprintf(stderr,
                    "cannot find %s\n", file_asm);

            exit(EXIT_FAILURE);
        }

    }
    if (argc == 3)
    {
        file_code = argv[2];
    }


    time_t asm_time  = get_file_time_last_modification(file_asm).tv_sec; // TO DO: add error handling
    time_t code_time = get_file_time_last_modification(file_code).tv_sec;

    if (asm_time > code_time)
    {
        char cmd[MAXLEN_CMD] = "./programs/asm/asm ";
        strcat(cmd, file_asm);

        system(cmd);
    }

    char cmd[MAXLEN_CMD] = "./programs/cpu/cpu ";
    strcat(cmd, file_code);

    system(cmd);

    return 0;
}
