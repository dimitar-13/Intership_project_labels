#include "rich_label.h"

RichLabel::RichLabel(const std::string& label,
                     const std::string& color,
                     float font_size, 
                     const std::string font_name):
    m_value(label),
    m_label_color(color),
    m_label_font_name(font_name),
    m_label_font_size(font_size)
{
}

std::string RichLabel::GetText()
{
    return m_value;
}
