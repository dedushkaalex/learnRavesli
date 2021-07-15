/*
—труктура - простейший тип данных, который позвол€ет группировать переменные разных типов в единое целое.
*/
#include <iostream>
#include <iomanip>
struct Employee		// объ€вление структуры,прин€то писать с большой буквы
{
	//переменные ниже называютс€ "члены структуры" (или "пол€ структуры")
	short id;
	int age;
	double salary;
};

struct CryptoWallet
{
	std::string name_token;//название монеты
	double exchange_rates=0; // курс валюты
	double quantity=0;//количество монет
	//double amount; // стоимость монет по курсу
	std::string token;// адрес дл€ перевода
};


int main()
{
	setlocale(LC_ALL, "ru");
	// чтобы использовать структуру нужно просто объ€вить переменную типа этой структуры
	CryptoWallet alex; //создали структуру
	CryptoWallet john;
	//—ейчас переменные alex и john ссылаютс€ на всю структуру, чтобы получить доступ к отдельным еЄ членам, используетс€ 
	//точечна€ нотаци€ или оператор выбора члена (.)
	alex.name_token = "Solana"; // присваиваем значение члену name_token структуры alex
	alex.exchange_rates = 47;//долларов
	alex.quantity = 35.0002345917;
	alex.token = "0x2170ed0880ac9a755fd29b2688956bd959f933f8";

	std::cout << std::setprecision(18);
	//посчитаем стоимость портфел€ Solana
	char dlrs = 36;
	double totalMoney = alex.exchange_rates * alex.quantity;
	std::cout << "—тоимость портфел€ " << alex.name_token << " составл€ет " << totalMoney << " " << dlrs<<std::endl;


	john.name_token = "Etherium"; // присваиваем значение члену name_token структуры alex
	john.exchange_rates = 1817;//долларов
	john.quantity = 3.0;
	john.token = "0x2170ed0880ac9a755fd29b2342314bd959f933f8";
	double totalMoney_2 = john.exchange_rates * john.quantity;
	std::cout << "—тоимость портфел€ " << john.name_token << " составл€ет " << totalMoney_2 << " " << dlrs << std::endl;

	// дл€ более быстрой инициализации структур в с++ есть списки инициализаторов.

	CryptoWallet nix = { "BTC", 33000, 0.52,"0x2170ed0880ac9a755fd29b2688956bd900f933f8" };
	//nix.name_token = "BTC"
	//nix.exchange_rates = 33000;
	//nix.quantity = 0.52
	//nix.token = 0x2170ed0880ac9a755fd29b2688956bd900f933f8

	//Ћибо используйте uniform-инициализацию
	CryptoWallet lex{ "BTC", 60000, 23,"0x2170ed0880ac9a755fd29b2688956bd900f933f8" };
	std::cout << lex.name_token;

	system("pause");
	return 0;
}