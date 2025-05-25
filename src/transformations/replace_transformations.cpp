#include "replace_transformations.h"

ReplaceTransformation::ReplaceTransformation(const std::string& replace_string,
                                             const std::string& replace_with_string):
    m_replace_string(replace_string),
    m_replace_with_string(replace_with_string)
{

}

std::string ReplaceTransformation::Transform(const std::string& text)
{
    if (text.size() == 0)
        return text;

    std::string result;
    result.reserve(text.size());

    for (size_t i = 0; i < text.size(); i++)
    {
        if (text[i] == m_replace_string[0])
        {
            size_t j = 1;   // `j` starts from 1 so we do 1 less comparison, since we did the first one already.

            while (true)
            {
                if (i + j >= text.size())
                    break;
                if (j >= m_replace_string.size())
                    break;
                if (text[i + j] != m_replace_string[j])
                    break;
                j++;
            }
            

            if (j == m_replace_string.size())
            {
                i += j - 1;

                for (size_t y = 0; y < m_replace_with_string.size(); y++)
                {
                    result += m_replace_with_string[y];
                }
                continue;
            }
        }


        result += text[i];
    }

    return result;
}
