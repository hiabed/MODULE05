#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    // default constructor;
}

ShrubberyCreationForm::ShrubberyCreationForm(AForm &target)
{
    (void)target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
    *this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        // assignements;
    }
    return *this;
}

void printSpaces(std::ofstream& file, int n)
{
    for (int i = 0; i < n; ++i) 
        file << " ";
}

void printTree(std::ofstream& file)
{
    const int treeHeight = 5;

    for (int i = 0; i < treeHeight; ++i)
    {
        printSpaces(file, treeHeight - i - 1);
        for (int j = 0; j < 2 * i + 1; ++j)
            file << "*";
        file << std::endl;
    }
}

void ShrubberyCreationForm::execute(Bureaucrat const &executer) const
{
    if (!isSigned() && executer.getGrade() > 137)
    {
        GradeTooLowException low;
        throw (low);
    }
    else
    {
        std::ofstream file(_target + "_shrubbery");
        if (file.is_open()) 
        {
            printTree(file);
            std::cout << "File created successfully: " << _target + "_shrubbery" << std::endl;
            file.close();
        } 
        else
            std::cerr << "Error creating file: " << _target + "_shrubbery" << std::endl;
    }
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    // destructor;
}