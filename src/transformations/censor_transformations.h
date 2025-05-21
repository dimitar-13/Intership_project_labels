#pragma once
#include "text_transformations.h"

class CensorTransformation : public TextTransformation
{
public:
    std::string Transform(std::string text) override;
};
