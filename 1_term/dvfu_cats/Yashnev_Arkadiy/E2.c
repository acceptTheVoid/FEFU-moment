#include <stdio.h>

//Люблю преколистику в си

int main() {
    FILE *fin  = fopen("input.txt", "r"),
         *fout = fopen("output.txt", "w");

    size_t N;
    //Я короче не стал особо заебываться и просто выделил один статический массив под все возможные элементы
    //По условию задачи у нас может быть только 2000 чисел (-1000 <= ai <= 1000)
    //Поэтому мы просто можем сохранить весь счет в одном массиве
    int count[2001] = {}, input;

    fscanf(fin, "%llu", &N);
    for(size_t i = 0; i != N; ++i) {
        fscanf(fin, "%d", &input);
        //Мы не можем залезать в отрицательные элементы массива поэтому прибавим тысячу и получим диапазон чисел (0 <= ai <= 2000)
        //Каждое число что мы встречаем мы тупо берем за индекс
        //А каждый элемент что в нем хранится у нас будет счетчиком данного числа
        ++count[input + 1000];
    }

    for(short i = 0; i != 2001; ++i) {
        if(count[i]) fprintf(fout, "%d %d\n", i - 1000, count[i]);
    }
}
