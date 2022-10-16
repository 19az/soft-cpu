
include "text/text.h"

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

    Text* text = construct_text_file(file_asm, );

    return 0;
}

