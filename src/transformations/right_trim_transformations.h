#pragma once
#include "text_transformations.h"

class RightTrimTransformation : public TextTransformation
{
public:
    std::string Transform(const std::string& text) override;
};
