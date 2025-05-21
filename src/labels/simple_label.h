#pragma once
#include "label.h"

class SimpleLabel : public Label
{
public:
    SimpleLabel(const std::string& label_value);
    std::string GetText() override;
public:
    std::string m_value;
};
