#pragma once
#include "text_transformations.h"

class ReplaceTransformation : public TextTransformation
{
public:
    std::string Transform(std::string text) override;
};