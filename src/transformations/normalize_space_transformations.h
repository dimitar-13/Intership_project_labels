#pragma once

#include "text_transformations.h"

class NormalizeSpaceTransformation : public TextTransformation
{
public:
    std::string Transform(std::string text) override;
};