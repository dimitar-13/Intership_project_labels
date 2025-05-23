#include "censor_transformations.h"

CensorTransformation::CensorTransformation(const std::string& censored_word):
    m_censored_word(censored_word)
{
}

std::string CensorTransformation::Transform(const std::string& text)
{
    if (text.size() == 0)
        return text;

    if (m_censored_word.empty())
        return text;

    std::string result;
    result.reserve(text.size());

    for (size_t i = 0; i < text.size(); i++)
    {
        if (tolower(text[i]) == tolower(m_censored_word[0]))
        {
            size_t j = 1;   // `j` starts from 1 so we do 1 less comparison, since we did the first one already.

            while (true)
            {
                if (i + j >= text.size())
                    break;
                if (j >= m_censored_word.size())
                    break;
                if (tolower(text[i + j]) != tolower(m_censored_word[j]))
                    break;
                j++;
            }

            // To avoid using boolean we can use that if `j` (which for now accounts for number of successful comparison) is
            // the same as the censored word size,then they must be the same.
            if (m_censored_word.size() == j)   
            {    
                // Offset `i` to start from the next letter after censored word.
                // Note! If we offset with `j` instead of `j -1` then we skip 1 word because of the for loop incrementing.
                i += j - 1;
                while (j != 0)
                {
                    result += '*';
                    j--;
                }
                continue;
            }
        }

        result += text[i];
    }


    return result;
}
