#pragma once

#include "text_transformations.h"

class DecorateTransformation : public TextTransformation
{
public:

     std::string Transform(std::string text) override;
};
