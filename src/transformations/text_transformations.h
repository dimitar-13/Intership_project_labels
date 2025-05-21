#pragma once
#include <string>

class TextTransformation
{
public:
    virtual ~TextTransformation() = default;
    virtual std::string Transform(const std::string& text) = 0;
};