#include "simple_label.h"

SimpleLabel::SimpleLabel(const std::string& label_value) : 
    m_value(label_value)
{
}

std::string SimpleLabel::GetText()
{
    return m_value;
}
