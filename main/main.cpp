﻿#include <iostream>
/*
Оператор #include. Это оператор препроцессора (всё происходит перед компиляцией программы). 
Первое, что происходит, когда компилятор получается source - файл это обработка всех операторов препроцессора.
В нашем случае include будет искать файл iostream, возьмет всё содержимое этого файла,  и просто вставит в наш код.
*/

void Log(const char* message);

int main()  // точка входа в программу. Выполнение начинается с неё
{
    //std::cout << "Hello World!\n";
    Log("Hello Worlds!");
    // воспринимаем <<, как операторы, а не как операции побитового сдвига, ведь можно было написать так:
    // std::cout.print("HelloWorld");
    std::cin.get();
}
// да, main имеет int тип данных, но она не обязана ничего возвращать, так как это особый случай.
// Если вы ничего не возвращаете, система воспринимает это, как будто мы возвращаем 0.

/*
        Как же из cpp получить exe - файл? Это происходит в несколько этапов:
        1. У нас есть препроцессор #include <iostream>, который выполняется перед самой компиляцией. Он просто возьмёт всё содержимое iostream и вставит в наш
            main файл. Как только препроцессинг закончился, наш main.cpp будет скомпилирован.
            На этом этапе компилятор превращает весь с++ - код в собственно машинный код.
            Есть несколько важных параметров, которые определяют, как это происходит:
                1) Если есть несколько cpp файлов, они компилируются по отдельности.
        2. Каждый cpp файл скомпилирован в некий объектный файл (object). Компилятор Visual Studio использует для них расширение .obj.
           Как только мы получили .obj файлы, как результат компиляции .cpp файлов, нам нужно объединить их в один .exe файл. И тут на помощь приходит линкер (Linker).
           Linker(компоновщик) - берет .obj файлы и склеивает их в файл. Собрать все .obj в один .exe файл.
            Пример: Мы объявили функцию Log, а её определение в другом файле:
                "Как компилятор знает, что функция Log() существует в другом файле если мы скомпилировали только один файл?".
                Ответ: Он не знает, он просто нам верит.
                "Тогда как компилятор запускает правильный код?"
                Ответ: В дело вступает компоновщик (Linker). Когда мы компилируем весь проект, не только конкретный файл, компоновщик найдет определение функции Log(),
                        и свяжет с вызовом функции который находится в main.cpp. Если он не найдет определение, то мы получим ошибку компоновщика
        
        */