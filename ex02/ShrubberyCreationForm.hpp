#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    std::string _target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(AForm &target);
    ShrubberyCreationForm(const ShrubberyCreationForm& to_copy);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &original);
    void execute(Bureaucrat const & executor) const;
    ~ShrubberyCreationForm(void);
};

#endif