#include "right_trim_transformations.h"
#include "helpers/string_helper.h"

std::string RightTrimTransformation::Transform(const std::string& text)
{
    if (text.size() == 0)
        return text;

    int last_char_index = -1,last_whitespace_index = -1;

    for (size_t i = 0; i < text.size(); i++)
    {
        if (StringHelper::IsCharWhiteSpace(text[i]))
            last_whitespace_index = i;
        else
            last_char_index = i;
    }

    if(last_char_index == -1)
        return "";

    if (last_char_index > last_whitespace_index)
    {
        return text;
    }
    else if (last_char_index < last_whitespace_index)
    {
        std::string result = text;

        result.resize(last_char_index + 1);

        return result;
    }
}
