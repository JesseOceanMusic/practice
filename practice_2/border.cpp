/*Напишите программу, запрашивающую имя, фамилия, отчество и номер группы студента и выводящую введённые данные в следующем виде:*/

#include "border.h"

const int spacing = 3;
int length;
std::string name;
std::string surname;

void space(int space)
{
    for (int i = 0; i < space; i++)
    {
        std::cout << " ";
    }
}

void draw_border()
{
    for (int i = 0; i < length + 2 + (spacing * 2); i++)
    {
        std::cout << "*";
    }
}

void onestar()
{
    std::cout << "*";
}

void check_length()
{
    if (name.size() > surname.size())
    {
        length = name.size();
    }
    else
    {
        length = surname.size();
    }
}

void draw()
{
    space(5);
    draw_border();
    std::cout << std::endl;

    space(5);
    onestar();
    space(spacing);
    std::cout << name;
    space(length - name.size() + spacing);
    onestar();
    std::cout << std::endl;

    space(5);
    onestar();
    space(spacing);
    std::cout << surname;
    space(length - surname.size() + spacing);
    onestar();
    std::cout << std::endl;

    space(5);
    draw_border();
    std::cout << std::endl;
}

void ini_border()
{
    std::cout << std::endl;
    std::cout << "Enter name: ";
    std::cin >> name;

    std::cout << "Enter surname: ";
    std::cin >> surname;

    check_length();
    draw();
    return;
}