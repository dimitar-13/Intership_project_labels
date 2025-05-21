#include "left_trim_transformations.h"

std::string LeftTrimTransformation::Transform(const std::string& text)
{
    if (text.size() == 0)
        return text;

    bool is_first_element_white_space = false;

    is_first_element_white_space |= text[0] == '\n';

    is_first_element_white_space |= text[0] == '\t';

    is_first_element_white_space |= text[0] == ' ';

    if (!is_first_element_white_space)
    {
        return text;
    }

    std::string result;
    result.resize(text.size() - 1);

    for (size_t i = 1; i < text.size(); i++)
    {
        result[i - 1] = text[i];
    }
    return result;
   
}
