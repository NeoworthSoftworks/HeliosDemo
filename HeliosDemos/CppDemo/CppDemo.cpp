#include <Windows.h>
#include <iostream>

int main()
{
    HMODULE HeliosModule = LoadLibraryA("HeliosModule.dll");

    std::cout << "Hello World!" << std::endl;
    std::cin.get();
}
