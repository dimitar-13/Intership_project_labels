#ifndef TEST

#include <iostream>

#include "transformations/normalize_space_transformations.h"

int main()
{
    std::cout << "Hello world" << '\n';

    NormalizeSpaceTransformation capitalize_text_obj;

    std::cout << capitalize_text_obj.Transform("    ") << '\n';


}

#endif // TEST