/*????????? ?? ????? ?????????? ? ??????????, ?? ??????????? ??????????? ?????? ???????????????? ????? ?????????? ??? ?????? string.
? ????? C++ ???? ????? ???? ???, ?? ?? ??? ????? ????????? ?????, ? ??? ????? ??????????? ?????????? ?++.
*/
#include <iostream>
#include <string>
#include <Windows.h>
using std::string;



void infoUser();

int main()
{
	SetConsoleCP(1251); // ???? ? ??????? ? ????????? 1251
	SetConsoleOutputCP(1251); // ????? ?? ??????? ? ????????? 1251. ????? ?????? ????? ???????? ????? ??????? ?? Lucida Console ??? Consolas
	//string name{ "???? ????? ???? ????? ?????" };
	//std::cout << name<<std::endl;
	//string text;
	//std::cout << "????? ????? ?????: " << std::endl;
	//std::cin >> text;
	//std::cout << text<<std::endl;	//???????? ?????????? (>>) 
									//?????????? ??????? ?? ???????? ?????? ?????? ?????? ?? ??????? ???????. 
									//??? ????????? ??????? ???????? ?????? cin, ?????? ?????????? ??????????.

	/*
	????? ??????? ?????? ?????? ?? ???????? ?????? ?????? (?????? ? ?????????), ??????????? ??????? std::getline(). 
	??? ????????? ??? ?????????: ?????? ? std::cin, ?????? ? ?????????? ???? string.
	*/

	/*string descr;
	std::cout << "??????, ???, ???????? ? ????, ??????? ?? ?????? ? ???, ? ??? ??, ?????????????"<<std::endl;
	std::getline(std::cin, descr);
	std::cout << descr << std::endl;*/


	//std::cout << "Pick 1 or 2: ";
	//int choice;
	//std::cin >> choice;
	////??????? ????????? ???????? ??????? ?? ???????? ?????? ?????? ?????? ????? ??????.??? ????? ??????? ????????? ??????? :
	//std::cin.ignore(32767, '\n'); //??????? ?????? ????? ?????? ?? ???????? ?????? ??????
	//std::cout << "Now enter your name: ";
	//string myName;
	//std::getline(std::cin, myName);
	///*????? ?? ??????? ???????? ????????, ????? cin ??????????? ?????? ? ????? ?????? ? ?????? ????? ??????. 
	//???????, ????? ?? ????? 2, cin ?????????? ??????? 2\n. ????? ?? ?????? ???????? 2 ? ??????????, ???????? 
	//\n (?????? ????? ??????) ?? ??????? ??????. ?????, ????? std::getline() 
	//????????? ?????? ??? myName, ?? ????? ? ?????? \n ? ??????, ??? ??, ?????? ????, ????? ?????? ?????? ??????! 
	//? ??? ??????????? ?? ??, ??? ?? ?????.*/
	//std::cout << "Hello, " << myName << ", you picked " << choice << '\n';
	//std::cout << myName.length()<<std::endl; //?????? ????? ??????, ??????? '\n'




	//????
	/*
	???????? ?????????, ??????? ?????? ? ???????????? ?????? ??? ???, ??????? ? ???????.
	? ??????????, ??????? ????????????, ??????? ??? ?? ?????? ?? ?????? ????? ?? ??? ????? ? ??????? 
	(????? ???? ?????, ?????????? ????? ???????).
	*/
	//infoUser();
	system("pause");
	return 0;
}

void infoUser()
{
	std::cout << "??????? ?????? ??? ? ???????: ";
	string fullName;
	std::getline(std::cin, fullName);
	std::cout << "\n";
	std::cout << "??????? ??? ???????: ";
	int age;
	std::cin >> age;
	std::cout << "?? ?????? ????? ????? ?? ??????? " << static_cast<double>(age) / fullName.length() << " ???";

}