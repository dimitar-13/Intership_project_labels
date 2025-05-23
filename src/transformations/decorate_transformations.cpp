#include "decorate_transformations.h"

std::string DecorateTransformation::Transform(const std::string& text)
{
    std::string bracket_string = "-={  }=-";

    if (text.size() == 0)
        return text;

    bracket_string.reserve(bracket_string.size() + text.size());

    bracket_string.insert(bracket_string.find_first_of('{') + 2, text);

    return bracket_string;
}
