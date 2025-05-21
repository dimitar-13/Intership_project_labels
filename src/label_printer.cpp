#include "label_printer.h"

#include <iostream>

void LabelPrinter::Print(Label& label)
{
    std::cout << "Here is the label:" << label.GetText() << '\n';
}
