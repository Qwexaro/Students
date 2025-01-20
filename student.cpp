#include <iostream>
#include <vector>
#include <string>
class Student
{
	std::string name, class_lesson;
	int age, identifier;
public:

	Student()
	{
		name = "Dima", class_lesson = "18A", age = 18;
		identifier = 0;
	}

	Student(int identifier)
	{
		this->identifier = identifier;
	}

	Student(std::string name, std::string class_lesson, int age, int identifer)
	{
		this->name = name;
		this->class_lesson = class_lesson;
		this->age = age;
		this->identifier = identifer;
	}
	~Student() { std::cout << name << " Покинул(-а) чат" << std::endl; }


	void edit(int indentifier)
	{
		std::cout << "Введи имя студента: "; std::cin >> name;
		std::cout << "Введи класс обучения: "; std::cin >> class_lesson;
		std::cout << "Введи возраст: "; std::cin >> age;
		this->identifier = indentifier;
	}

	void getStudent()
	{
		std::cout << "\nИмя: " << name << "\nВозраст: " << age << "\nКласс обучения: " << class_lesson << "\nПорядковый номер: " << identifier << std::endl;
	}
	std::string getName()
	{
		return name;
	}
};

int main()
{
	system("chcp 1251");
	int count_student = 0, choice = 0;

	std::cout << "Введи количество студентов:"; std::cin >> count_student;
	std::vector<Student>vect(count_student);

	std::cout << "Отлично! А теперь заполни их:" << std::endl;
	Student();
	for (int i = 0; i < vect.size(); i++)
	{
		vect.at(i).edit(i);
		std::cout << "\nОбьект - " << vect.at(i).getName() << ", успешно создан!" << std::endl;
		for (int i = 0; i < 100; i++) std::cout << "-"; std::cout << "\n";
	}
	while (choice != 2)
	{
		std::cout << "Вы хотите изменить кого-то из студентов?\n1 - Да\n2 - Нет\n~# ";
		std::cin >> choice;
		if (choice == 1) 
		{ 
			int identifire = 0; 
			std::cout << "Укажи идентификатор студента: "; 
			std::cin >> identifire;
			for (int i = 0; i < vect.size(); i++)
			{
				if (identifire == i)
				{
					vect.at(i).edit(i);
					std::cout << "\nОбьект - " << vect.at(i).getName() << ", подвергнулся изменениям!" << std::endl;
					for (int i = 0; i < 100; i++) std::cout << "-"; std::cout << "\n";
				}
			}
		}
	}

	system("pause");
	system("cls");

	for (int i = 0; i < vect.size(); i++)
	{
		vect.at(i).getStudent();
		for (int i = 0; i < 100; i++) std::cout << "-"; std::cout << std::endl;
	}


	return 0;
}
