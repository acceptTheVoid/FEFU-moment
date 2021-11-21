# FEFU-moment
Задачи на dvfu cats и Информатиксе и примеры алгоритмов и структур данных для направления сцт 2021.

Настоятельно рекомендую читать комменты/разбирать самим решения, а не копировать втупую. 

Если вы хотите закоммитить свое решение, то, пожалуйста, создайте папку со своим Ф. И.
Также для любых нетривиальных/сложных для понимания моментов нужны достаточно подробные комменты. 

(А еще вы добровольно подписываетесь на вопросы в лс)

Пример: 
```C++
#include <iostream>
#include <string>

using namespace std;

int main() {
    //Тривиальная часть кода
    //Пояснения для создания переменных, ввода вывода и подобных базовых вещей не нужны
    //И если кто-то не сможет разобраться, то пускай обращаются с вопросами по синтаксису в гугл
    string hello = "Hello", world = " world!";
    cout << hello << world;
    
    //А это что за покемон?
    //А, дак это же указатель f на функцию, 
    //принимающую указатель на функцию, принимающую и возвращающую действительное число, 
    //возвращающую указатель на функцию, принимающую и возвращающую действительное число
    double (*(*f)(double(*)(double)))(double);
    
    //Я надеюсь всем понятно что я подразумеваю под нетривиальным куском кода?
    //Сюда относится не только говнокод в котором вы сами не можете разобраться
    //Но и неочевидные математические формулы
    //Если код благополучно "адаптирован" с сети, то укажите что сами не знаете как работает
    //Та или иная часть кода, чтобы потом вас самих не уничтожили вопросами
}
```
