#include "string_helper.h"

bool StringHelper::IsCharWhiteSpace(char char_to_check)
{
    bool is_whitespace = false;

    is_whitespace |= char_to_check == '\n';

    is_whitespace |= char_to_check == '\t';

    is_whitespace |= char_to_check == ' ';

    return is_whitespace;
}
