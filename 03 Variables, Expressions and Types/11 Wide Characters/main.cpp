#include <iostream>

int main() {
    // set wcout locale to system locale
    std::wcout.imbue(std::locale("")); 

    // Doesn't work.
    // char c1 = 'ù';

    wchar_t c2  = L'ù';
    char16_t c3 = u'ù';

    // Doesn't work.
    // char16_t c4 = u'𐍈';
    char32_t c5 = U'𐍈';

    std::wcout << static_cast<wchar_t>(c2) << std::endl;
    std::wcout << static_cast<wchar_t>(c3) << std::endl;
    std::wcout << static_cast<wchar_t>(c5) << std::endl;
}