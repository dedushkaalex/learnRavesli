﻿#include <iostream>
/*
Суть проблемы.
    Например, мы пишем программу, которая имеет две функции: А и В. Если функция А вызывает функцию B, 
    а функция B вызывает функцию А, то нет никакого способа упорядочить эти функции таким образом, чтобы 
    они обе одновременно знали о существовании друг друга. 
    Если вы объявите сначала А, то компилятор будет жаловаться, что не знает, что такое B. 
    Если вы объявите сначала В, то компилятор будет жаловаться, что не знает, что такое А.
*/

// Предварительное объявление сообщает компилятору о существовании идентификатора ДО его фактического определения.

int ojn(int a, int c);  // прототип функции состоит из типа возврата функции, её имени, параметров и точки с запятой

int main()
{
    std::cout << ojn(2,3) << std::endl;


    std::cin.get();
    return 0;
}

int ojn(int a, int c)   // хотя определение функции add() находится ниже её вызова
{
    return a * c;
}