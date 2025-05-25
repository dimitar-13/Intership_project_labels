#pragma once
#include "text_transformations.h"

class ReplaceTransformation : public TextTransformation
{
public:
    ReplaceTransformation(const std::string& replace_string,const std::string& replace_with_string);
    std::string Transform(const std::string& text) override;

private:
    std::string m_replace_string, m_replace_with_string;
};