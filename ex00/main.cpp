#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("Thomas", 151);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "continue1\n"; // this message will displayed in both cases;
    Bureaucrat b("Thomas", 150);
    try
    {
        b.decrementGrade();
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "continue2\n";
    Bureaucrat c("Thomas", 1);
    try
    {
        c.incrementGrade();
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "continue3\n";
    try
    {
        c.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    Bureaucrat me;
    std::cout << me;
    ///////////////
    std::cout << b;
    //////////////
    Bureaucrat k("Jack", 20);
    Bureaucrat l = k;
    std::cout << l;
    //////////////
    std::cout << "end\n";
}