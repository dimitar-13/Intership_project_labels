#include "capitalize_transformations.h"

std::string CapitalizeTransformation::Transform(const std::string& text)
{
    if (text.size() == 0)
        return text;

    std::string result = text;

    bool is_first_char_letter = ! static_cast<bool>(ispunct(result[0]));

    if (is_first_char_letter)
    {
        result[0] = toupper(result[0]);
    }

    return result;
}
