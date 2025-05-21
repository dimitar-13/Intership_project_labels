#pragma once

#include "text_transformations.h"

class LeftTrimTransformation : public TextTransformation
{
public:
    std::string Transform(std::string text) override;
};
