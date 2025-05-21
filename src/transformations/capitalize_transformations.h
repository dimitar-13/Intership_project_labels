#pragma once

#include "text_transformations.h"

class CapitalizeTransformation : public TextTransformation
{
public:
    std::string Transform(std::string text) override;
};