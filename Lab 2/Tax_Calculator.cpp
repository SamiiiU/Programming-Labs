#include<iostream>

int main(){
    char status;
    double income;

    std::cout << "Welcome to income tax calculator \n";
    std::cout << "Please enter your martial status \n";
    std::cout << "1: If you are single than enter 'S' \n";
    std::cout << "2:If you are married or qualified widow than enter 'M' or 'W' \n";
    std::cout << "3: If you are married and filling separately than enter 'F' \n";
    std::cout << "4: If you are head of house hold than enter 'H' \n";
    std::cin >> status;

    std::cout << "Enter Your income as well : ";
    std::cin >> income;

    if (status == 'S')
    {
        std::cout << "Your status is sngle \n";

        if (income > 0 && income <= 8350)
        {
            float tax = 0.10;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 10% tax is " << salaryafttax;
        }

        else if (income > 8350 && income <= 33950)
        {
            float tax = 0.15;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 15% tax is " << salaryafttax;
        }

        else if (income > 33951 && income <= 82250)
        {
            float tax = 0.25;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 25% tax is " << salaryafttax;
        }

        else if (income > 82250 && income <= 171550)
        {
            float tax = 0.28;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 28% tax is " << salaryafttax;
        }

        else if (income > 171550 && income <= 372950)
        {
            float tax = 0.33;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 33% tax is " << salaryafttax;
        }

        else if (income > 372950)
        {
            float tax = 0.35;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 35% tax is " << salaryafttax;
        }
    }

    else if (status == 'M' || status == 'W')
    {
        if (status == 'M')
            std::cout << "Your Status is Married \n";

        else if (status == 'W')
        {
            std::cout << "Your Status is Widow \n";
        }

        if (income > 0 && income <= 16700)
        {
            float tax = 0.10;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 10% tax is " << salaryafttax;
        }

        else if (income > 16700 && income <= 67900)
        {
            float tax = 0.15;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 15% tax is " << salaryafttax;
        }

        else if (income > 67900 && income <= 137050)
        {
            float tax = 0.25;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 25% tax is " << salaryafttax;
        }

        else if (income > 137050 && income <= 208850)
        {
            float tax = 0.28;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 28% tax is " << salaryafttax;
        }

        else if (income > 208850 && income <= 372950)
        {
            float tax = 0.33;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 33% tax is " << salaryafttax;
        }

        else if (income > 372950)
        {
            float tax = 0.35;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 35% tax is " << salaryafttax;
        }
    }

    else if (status == 'F')
    {
        std::cout << "Your status is 'Married but filling separately' \nNow please enter your income: ";

        if (income > 0 && income <= 8350)
        {
            float tax = 0.10;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 10% tax is " << salaryafttax;
        }

        else if (income > 8350 && income <= 33950)
        {
            float tax = 0.15;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 15% tax is " << salaryafttax;
        }

        else if (income > 33951 && income <= 68525)
        {
            float tax = 0.25;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 25% tax is " << salaryafttax;
        }

        else if (income > 68525 && income <= 104425)
        {
            float tax = 0.28;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 28% tax is " << salaryafttax;
        }

        else if (income > 104425 && income <= 186475)
        {
            float tax = 0.33;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 33% tax is " << salaryafttax;
        }

        else if (income > 186475)
        {
            float tax = 0.35;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 35% tax is " << salaryafttax;
        }
    }

    else if (status == 'H')
    {
        std::cout << "Your status is 'Head of Household' \n";

        if (income > 0 && income <= 11950)
        {
            float tax = 0.10;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 10% tax is " << salaryafttax;
        }

        else if (income > 11950 && income <= 45500)
        {
            float tax = 0.15;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 15% tax is " << salaryafttax;
        }

        else if (income > 45500 && income <= 117450)
        {
            float tax = 0.25;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 25% tax is " << salaryafttax;
        }

        else if (income > 117450 && income <= 190200)
        {
            float tax = 0.28;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 28% tax is " << salaryafttax;
        }

        else if (income > 190200 && income <= 372950)
        {
            float tax = 0.33;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 33% tax is " << salaryafttax;
        }

        else if (income > 372950)
        {
            float tax = 0.35;
            double taxcalc = income * tax;
            float salaryafttax = income - taxcalc;
            std::cout << "Your salary after excluding 35% tax is " << salaryafttax;
        }
    }
} 
