#include "normalize_space_transformations.h"

std::string NormalizeSpaceTransformation::Transform(const std::string& text)
{
    if (text.size() == 0)
        return text;

    std::string result;

    result.reserve(text.size());

    for (size_t i = 0; i < text.size(); i++)
    {
        if (text[i] == ' ')
        {
            size_t space_seq_begin = 0, space_seq_end = 0;

            space_seq_begin = i;
            space_seq_end = i;

            while (text[space_seq_end] == ' ')
            {
                space_seq_end++;
            }

            size_t space_count = space_seq_end - space_seq_begin;

            i += space_count -1;
        }

        result+= text[i];
    }

    return result;
}
