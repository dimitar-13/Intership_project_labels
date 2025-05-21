#pragma once

#include "text_transformations.h"

class DecorateTransformation : public TextTransformation
{
public:

     std::string Transform(const std::string& text) override;
};
