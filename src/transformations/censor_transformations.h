#pragma once
#include "text_transformations.h"

class CensorTransformation : public TextTransformation
{
public:
    CensorTransformation(const std::string& censored_word);
    std::string Transform(const std::string& text) override;
private:
    std::string m_censored_word;
};
