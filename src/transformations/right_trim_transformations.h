#pragma once
#include "text_transformations.h"

class RightTrimTransformation : public TextTransformation
{
public:
    std::string Transform(std::string text) override;
};
