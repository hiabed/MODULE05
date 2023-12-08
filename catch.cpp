#include <iostream>
#include <stdexcept>

int main()
{
    int a,b,result;
    std::cout << "value1" << " / " << "value2" << std::endl;
    std::cin >> a;
    std::cout << "/\n";
    std::cin >> b;
    try 
    {
        if (b == 0)
            throw 0;
        result = a / b;
    }
    catch (int e)
    {
        std::cout << "cant make a division by 0\n";
        return 0;
    }
    std::cout << "result is: " << result << std::endl;
}
