//#include <iostream>
//#include <string>
//
//double power(double n, int p=2);
//
//int main()
//{
//    setlocale(LC_ALL, "rus");
//    int n, p,op;
//    std::cout << "Enter a number: ";
//    std::cin >> n;
//    std::cout << "Do you want to increase a number(1-yes,0-no)? ";
//    std::cin >> op;
//    switch (op)
//    {
//    case 1: {
//        while (op<2) {
//    std::cout << "Enter a power of number (>2): ";
//    std::cin >> p;
//        }
//        if (op == 0) {
//        std::cout << "Result " << power(n);
//        break;
//    }
//        break;
//    }
//          std::cout << "Result " << power(n, p);
//
//}
//}
//
//double power(double n, int p)
//{
//    if (p == 0) return 1;
//    else if (p == 1) return n;
//    else {
//        for (int i = p; i > 0; i--) {
//            n *= n;
//        }
//        return n;
//    }
//    return 0;
//}
// 
// 1
// 
//#include <iostream>
//
//// Прототип функции power
//double power(double n, int p = 2);
//
//int main() {
//    setlocale(LC_ALL, "rus");
//
//    double base;
//    int exponent;
//
//    // Ввод базового числа
//    std::cout << "Введите число: ";
//    std::cin >> base;
//
//    // Проверка на ввод степени
//    std::cout << "Будете вводить степень числа? (1 - да, 0 - нет): ";
//    int userChoice;
//    std::cin >> userChoice;
//
//    if (userChoice == 1) {
//        // Ввод степени
//        std::cout << "Введите степень (целое число больше 2): ";
//        std::cin >> exponent;
//
//        if (exponent <= 2) {
//            std::cout << "Ошибка: степень должна быть целым числом больше 2." << std::endl;
//            return 1;
//        }
//    }
//    else {
//        // Используем значение по умолчанию (степень 2)
//        exponent = 2;
//    }
//
//    // Вызов функции power и вывод результата
//    double result = power(base, exponent);
//    std::cout << "Результат: " << result << std::endl;
//
//    return 0;
//}
//
//// Определение функции power
//double power(double n, int p) {
//    double result = 1.0;
//
//    for (int i = 0; i < p; ++i) {
//        result *= n;
//    }
//
//    return result;
//}
 
// 2
// 
//#include <iostream>
//
//// Перегруженные функции power
//double power(double n, int p = 2);
//double power(char n, int p = 2);
//double power(short int n, int p = 2);
//double power(long int n, int p = 2);
//double power(float n, int p = 2);
//
//int main() {
//    setlocale(LC_ALL, "rus");
//
//    // Тестирование функции power с разными типами аргументов
//    std::cout << "double: " << power(2.0) << std::endl;
//    std::cout << "char: " << power('A') << std::endl;
//    std::cout << "short int: " << power(static_cast <short>(5)) << std::endl;
//    std::cout << "long int: " << power(1000000L) << std::endl;
//    std::cout << "float: " << power(3.14f) << std::endl;
//
//    return 0;
//}
//
//// Определение функций power
//double power(double n, int p) {
//    double result = 1.0;
//
//    for (int i = 0; i < p; ++i) {
//        result *= n;
//    }
//
//    return result;
//}
//
//double power(char n, int p) {
//    // Просто вызываем функцию power для типа double
//    return power(static_cast<double>(n), p);
//}
//
//double power(short int n, int p) {
//    // Просто вызываем функцию power для типа double
//    return power(static_cast<double>(n), p);
//}
//
//double power(long int n, int p) {
//    // Просто вызываем функцию power для типа double
//    return power(static_cast<double>(n), p);
//}
//
//double power(float n, int p) {
//    // Просто вызываем функцию power для типа double
//    return power(static_cast<double>(n), p);
//}
// 
// 3
// 
#include <iostream>
#include <vector>
#include <windows.h>

struct Worker {
    std::string surname;
    int age;
    std::string specialization;
    double averageSalary;
};

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int numFactories;
    std::cout << "Введите количество заводов: ";
    std::cin >> numFactories;

    // Создаем вектор для хранения информации по работникам на всех заводах
    std::vector<Worker> workers;

    // Ввод информации по заводам
    for (int i = 0; i < numFactories; ++i) {
        int numWorkers;
        std::cout << "Введите количество работников на заводе " << i + 1 << ": ";
        std::cin >> numWorkers;

        // Ввод информации по работникам на текущем заводе
        for (int j = 0; j < numWorkers; ++j) {
            Worker worker;
            std::cout << "Введите фамилию работника: ";
            std::cin >> worker.surname;
            std::cout << "Введите возраст работника: ";
            std::cin >> worker.age;
            std::cout << "Введите специальность работника: ";
            std::cin >> worker.specialization;
            std::cout << "Введите средний оклад работника: ";
            std::cin >> worker.averageSalary;

            // Добавляем работника в вектор
            workers.push_back(worker);
        }
    }

    // Подсчет количества слесарей и токарей
    int numLocksmiths = 0;
    int numTurners = 0;

    for (const auto& worker : workers) {
        if (worker.specialization == "слесарь") {
            numLocksmiths++;
        }
        else if (worker.specialization == "токарь") {
            numTurners++;
        }
    }

    // Вывод результатов
    std::cout << "Количество слесарей: " << numLocksmiths << std::endl;
    std::cout << "Количество токарей: " << numTurners << std::endl;

    return 0;
}
 
// 2.1
// 
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//class Aeroflot {
//public:
//    int flightNumber;
//    std::string departureCity;
//    std::string destinationCity;
//    std::string arrivalTime;
//    std::string departureTime;
//    int registrationSection;
//
//    // Конструктор класса
//    Aeroflot(int flightNumber, const std::string& departureCity, const std::string& destinationCity,
//        const std::string& arrivalTime, const std::string& departureTime, int registrationSection)
//        : flightNumber(flightNumber), departureCity(departureCity), destinationCity(destinationCity),
//        arrivalTime(arrivalTime), departureTime(departureTime), registrationSection(registrationSection) {}
//
//    // Функция вывода информации о рейсе
//    void displayFlightInfo() const {
//        std::cout << flightNumber << "\t" << departureCity << "\t" << destinationCity << "\t"
//            << arrivalTime << "\t" << departureTime << "\t" << registrationSection << std::endl;
//    }
//};
//
//// Функция сравнения для сортировки в алфавитном порядке по пункту назначения
//bool compareByDestination(const Aeroflot& a, const Aeroflot& b) {
//    return a.destinationCity < b.destinationCity;
//}
//
//int main() {
//    setlocale(LC_ALL, "rus");
//
//    std::vector<Aeroflot> flights;  // Вектор для хранения рейсов
//
//    // Ввод данных о рейсах с клавиатуры
//    int numFlights;
//    std::cout << "Введите количество рейсов: ";
//    std::cin >> numFlights;
//
//    for (int i = 0; i < numFlights; ++i) {
//        int flightNumber;
//        std::string departureCity, destinationCity, arrivalTime, departureTime;
//        int registrationSection;
//
//        std::cout << "Введите данные для рейса " << i + 1 << ":" << std::endl;
//        std::cout << "Номер рейса: ";
//        std::cin >> flightNumber;
//        std::cout << "Пункт отправления: ";
//        std::cin >> departureCity;
//        std::cout << "Пункт назначения: ";
//        std::cin >> destinationCity;
//        std::cout << "Время прибытия: ";
//        std::cin >> arrivalTime;
//        std::cout << "Время отправления: ";
//        std::cin >> departureTime;
//        std::cout << "Место регистрации: ";
//        std::cin >> registrationSection;
//
//        flights.emplace_back(flightNumber, departureCity, destinationCity, arrivalTime, departureTime, registrationSection);
//    }
//
//    // Сортировка рейсов по пункту назначения
//    std::sort(flights.begin(), flights.end(), compareByDestination);
//
//    // Вывод таблицы рейсов
//    std::cout << "Номер\tОтправление\tНазначение\tПрибытие\tОтправление\tРегистрация" << std::endl;
//    for (const auto& flight : flights) {
//        flight.displayFlightInfo();
//    }
//
//    // Проверка наличия рейсов
//    if (flights.empty()) {
//        std::cout << "Нет доступных рейсов." << std::endl;
//    }
//
//    return 0;
//}
// 
// 2.2
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iomanip>
//
//class Student {
//public:
//    std::string name;
//    std::string surname;
//    std::string dateOfBirth;
//    std::string phoneNumber;
//
//    // Конструктор класса
//    Student(const std::string& name, const std::string& surname,
//        const std::string& dateOfBirth, const std::string& phoneNumber)
//        : name(name), surname(surname), dateOfBirth(dateOfBirth), phoneNumber(phoneNumber) {}
//};
//
//class StudentDatabase {
//private:
//    std::vector<Student> students;
//
//public:
//    // Добавление студента в базу данных
//    void addStudent(const Student& student) {
//        students.push_back(student);
//    }
//
//    // Удаление студента из базы данных по фамилии
//    void removeStudent(const std::string& surname) {
//        students.erase(std::remove_if(students.begin(), students.end(),
//            [surname](const Student& student) {
//                return student.surname == surname;
//            }),
//            students.end());
//    }
//
//    // Поиск студента по фамилии
//    Student* findStudentBySurname(const std::string& surname) {
//        auto it = std::find_if(students.begin(), students.end(),
//            [surname](const Student& student) {
//                return student.surname == surname;
//            });
//
//        return (it != students.end()) ? &(*it) : nullptr;
//    }
//
//    // Сортировка студентов по фамилии
//    void sortStudentsBySurname() {
//        std::sort(students.begin(), students.end(),
//            [](const Student& a, const Student& b) {
//                return a.surname < b.surname;
//            });
//    }
//
//    // Вывод всех студентов
//    void displayAllStudents() const {
//        if (students.empty()) {
//            std::cout << "База данных студентов пуста." << std::endl;
//            return;
//        }
//
//        std::cout << std::setw(15) << "Фамилия" << std::setw(15) << "Имя"
//            << std::setw(15) << "Дата рождения" << std::setw(15) << "Телефон" << std::endl;
//
//        for (const auto& student : students) {
//            std::cout << std::setw(15) << student.surname << std::setw(15) << student.name
//                << std::setw(15) << student.dateOfBirth << std::setw(15) << student.phoneNumber << std::endl;
//        }
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "rus");
//
//    StudentDatabase database;
//
//    int choice;
//    std::string surname;
//
//    do {
//        std::cout << "\nМеню:\n";
//        std::cout << "1. Добавить студента\n";
//        std::cout << "2. Удалить студента\n";
//        std::cout << "3. Найти студента по фамилии\n";
//        std::cout << "4. Отсортировать студентов по фамилии\n";
//        std::cout << "5. Вывести всех студентов\n";
//        std::cout << "0. Выход\n";
//        std::cout << "Выберите действие: ";
//        std::cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            std::string name, dateOfBirth, phoneNumber;
//            std::cout << "Введите имя: ";
//            std::cin >> name;
//            std::cout << "Введите фамилию: ";
//            std::cin >> surname;
//            std::cout << "Введите дату рождения: ";
//            std::cin >> dateOfBirth;
//            std::cout << "Введите номер телефона: ";
//            std::cin >> phoneNumber;
//
//            database.addStudent(Student(name, surname, dateOfBirth, phoneNumber));
//            break;
//        }
//        case 2: {
//            std::cout << "Введите фамилию студента для удаления: ";
//            std::cin >> surname;
//            database.removeStudent(surname);
//            break;
//        }
//        case 3: {
//            std::cout << "Введите фамилию студента для поиска: ";
//            std::cin >> surname;
//            Student* foundStudent = database.findStudentBySurname(surname);
//            if (foundStudent) {
//                std::cout << "Студент найден:\n";
//                std::cout << "Имя: " << foundStudent->name << "\n";
//                std::cout << "Дата рождения: " << foundStudent->dateOfBirth << "\n";
//                std::cout << "Телефон: " << foundStudent->phoneNumber << "\n";
//            }
//            else {
//                std::cout << "Студент не найден.\n";
//            }
//            break;
//        }
//        case 4: {
//            database.sortStudentsBySurname();
//            std::cout << "Студенты отсортированы по фамилии.\n";
//            break;
//        }
//        case 5: {
//            database.displayAllStudents();
//            break;
//        }
//        case 0:
//            std::cout << "Выход.\n";
//            break;
//        default:
//            std::cout << "Некорректный ввод. Попробуйте снова.\n";
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}
//
//#include <iostream>
//#include <fstream>
//#include <stack>
//#include <vector>
//
//class TrainSorter {
//private:
//    std::stack<int> leftDirection;  // Стек для вагонов первого типа
//    std::stack<int> rightDirection; // Стек для вагонов второго типа
//
//public:
//    // Добавление вагона в узел
//    void addWagon(int wagonType) {
//        if (wagonType == 1) {
//            leftDirection.push(wagonType);
//        }
//        else if (wagonType == 2) {
//            rightDirection.push(wagonType);
//        }
//    }
//
//    // Вывод вагонов в обоих направлениях
//    void displayTrains() const {
//        std::cout << "Вагоны в левом направлении: ";
//        displayStack(leftDirection);
//
//        std::cout << "Вагоны в правом направлении: ";
//        displayStack(rightDirection);
//    }
//
//private:
//    // Вспомогательная функция для вывода стека
//    void displayStack(const std::stack<int>& s) const {
//        std::stack<int> temp = s;
//        while (!temp.empty()) {
//            std::cout << temp.top() << " ";
//            temp.pop();
//        }
//        std::cout << std::endl;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "rus");
//    TrainSorter sorter;
//
//    // Пример ввода из файла
//    /*std::ifstream inputFile("train_input.txt");
//    if (inputFile.is_open()) {
//        int wagonType;
//        while (inputFile >> wagonType) {
//            sorter.addWagon(wagonType);
//        }
//        inputFile.close();
//    }
//    else {
//        std::cerr << "Не удалось открыть файл для чтения." << std::endl;
//        return 1;
//    }*/
//
//     //Пример ввода с клавиатуры
//     std::cout << "Введите типы вагонов (1 или 2), завершите ввод 0: ";
//     int wagonType;
//     while (std::cin >> wagonType && wagonType != 0) {
//         sorter.addWagon(wagonType);
//     }
//
//    // Вывод состава по направлениям
//    sorter.displayTrains();
//
//    return 0;
//}
