#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b("Abed", 25);
        Form f("Form1", 20, 1);
        f.beSigned(b);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "continue\n";
    try
    {
        Bureaucrat b("Abed", 25);
        Form f("Form1", 20, 1);
        b.signForm(f);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "continue1\n";
    try
    {
        Bureaucrat b("Abed", 20);
        Form f("Form1", 30, 1);
        b.signForm(f);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "end\n";
}