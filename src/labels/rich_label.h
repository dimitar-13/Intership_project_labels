#pragma once
#include "label.h"

class RichLabel : public Label
{
public:
    RichLabel(const std::string& label, const std::string& color, float font_size, const std::string font_name);
    std::string GetText() override;
public:
    std::string m_value;
    std::string m_label_color;
    std::string m_label_font_name;
    float m_label_font_size;
};