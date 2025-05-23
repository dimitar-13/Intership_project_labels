#ifndef TEST

#include <iostream>

#include "transformations/censor_transformations.h"

int main()
{
    std::cout << "Hello world" << '\n';

    CensorTransformation capitalize_text_obj("fuck");

    std::cout << capitalize_text_obj.Transform("This is a text that uses the word fuck in it.") << '\n';

    std::cout << capitalize_text_obj.Transform("This is a text that uses the word FUCK in it.") << '\n';

    std::cout << capitalize_text_obj.Transform("This is a text that uses the word fUcK in it.") << '\n';

}

#endif // TEST