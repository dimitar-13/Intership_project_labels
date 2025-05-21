#pragma once
#include <string>

class Label
{
public:
    virtual std::string GetText() = 0;
    virtual ~Label() = default;
};