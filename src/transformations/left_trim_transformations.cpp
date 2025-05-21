#include "left_trim_transformations.h"
#include "helpers/string_helper.h"

std::string LeftTrimTransformation::Transform(const std::string& text)
{
    if (text.size() == 0)
        return text;

    int first_char_appearance = -1;

    for (size_t i = 0; i < text.size(); i++)
    {
        if (!StringHelper::IsCharWhiteSpace(text[i]))
        {
            first_char_appearance = i;
            break;
        }    
    }

    if (first_char_appearance == -1)
        return "";

    std::string result;

    result.resize(text.size() - first_char_appearance);
   
    for (size_t i = 0; i < result.size(); i++)
    {
        result[i] = text[i + first_char_appearance];
    }

    return result;
}
