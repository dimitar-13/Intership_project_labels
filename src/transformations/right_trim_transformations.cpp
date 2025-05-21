#include "right_trim_transformations.h"

std::string RightTrimTransformation::Transform(const std::string& text)
{
    auto IsCharWhiteSpace = [](char char_to_check)
        {
            bool is_whitespace = false;

            is_whitespace |= char_to_check == '\n';

            is_whitespace |= char_to_check == '\t';

            is_whitespace |= char_to_check == ' ';

            return is_whitespace;
        };

    if (text.size() == 0)
        return text;

    int last_char_index = -1,last_whitespace_index = -1;

    for (size_t i = 0; i < text.size(); i++)
    {
        if (IsCharWhiteSpace(text[i]))
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
