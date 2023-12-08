#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(AForm &target);
    ShrubberyCreationForm(const ShrubberyCreationForm& to_copy);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &original);
    ~ShrubberyCreationForm(void);
};

#endif