// U.E. vector.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <locale.h>

class Vector
{
private:
    float x, y, z, x0, y0, z0, lengthVector;
public:
    void setVectorBegin(float absBegin, float ordBegin, float appBegin)
    {
        x0 = absBegin, y0 = ordBegin, z0 = appBegin;
    }
    void setVectorEnd(float absEnd, float ordEnd, float appEnd)
    {
        x = absEnd, y = ordEnd, z = appEnd;
    }
    float getXBegin()
    {
        return x0;
    }
    float getYBegin()
    {
        return y0;
    }
    float getZBegin()
    {
        return z0;
    }
    float getXEnd()
    {
        return x;
    }
    float getYEnd()
    {
        return y;
    }
    float getZEnd()
    {
        return z;
    }
    float getLength()
    {
        return lengthVector;
    }
    void showLength()
    {
        std::cout<<"\nДлина вектора: "<< lengthVector;
    }
    Vector(float _x0, float _y0, float _z0, float _x, float _y, float _z): x0(_x0), y0(_y0), z0(_z0), x(_x), y(_y), z(_z)
    {
        setVectorBegin( _x0, _y0, _z0);
        setVectorEnd(_x, _y, _z);
        x0 = getXBegin(); y0 = getYBegin(); z0 = getZBegin();
        x = getXEnd(); y = getYEnd(); z = getZEnd();
        lengthVector = sqrt((x - x0)*(x-x0) +(y-y0)*(y-y0)+(z-z0)*(z-z0));
    }
};

int main()
{
    setlocale(LC_ALL, "rus");

    float xBegin, yBegin, zBegin, xEnd, yEnd, zEnd;
   std:: cout << "\n Введите координаты начала вектора (абсциса ордината апликата) \n";
   std::cin >> xBegin >> yBegin >> zBegin;
   std::cout << "\n Введите координаты конца вектора (абсциса ордината апликата) \n";
   std::cin >> xEnd>> yEnd>> zEnd;
   Vector vector(xBegin, yBegin, zBegin, xEnd, yEnd, zEnd);
  vector.showLength();

  return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
