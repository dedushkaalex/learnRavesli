#include <iostream>
#include <string>
#include<iomanip>
//цикл do while нужен, чтобы всегда первый раз был проход цикла,даже если условие = false. Это пригодится
//например, для отображения меню.

struct WalletCrypto {
	std::string nameCoin;
	std::string walletOwner;
	std::string cryptoAddress;
	double numberOfCoins;
	double PriceCoin;

};

void getInformation(WalletCrypto enyvare, int choice)
{
	std::cout << std::setprecision(16);
	switch (choice)
	{
	case 1:
		std::cout << "Balance wallet: " << enyvare.numberOfCoins << " coins. The total cost " << enyvare.PriceCoin * enyvare.numberOfCoins << " $" << std::endl;
		break;
	case 2:
		std::cout << "Your " << enyvare.nameCoin << " address: " << enyvare.cryptoAddress << std::endl;
		break;
	case 3:
		std::cout << "The owner of the wallet is " << enyvare.walletOwner << std::endl;
		break;
	default:
		std::cout << "1 - Balance wallet\n" << "2 - Address cryptocurrency\n" << "3 - Wallet owner" << std::endl;
		break;
	}
	
}


int main()
{
	WalletCrypto LedgerNanoS{"BTC","Erchenko Aleksei","0x3502E48259B0820DB0F6F005De46205b5A207316",12.4,41345.3};
	WalletCrypto Binance{"Solana","Mikhail Belov","0x1f3660972D406c21E3b313E002300C6c42ee02F6",35,32};
	int choice;

	do
	{
		std::cout << "Please make a selection: \n";
		std::cout << "1. Get balance wallet\n";
		std::cout << "2. Get cryptocurrency address\n";
		std::cout << "3. Get wallet owner\n";
		std::cout << ">>> ";
		std::cin >> choice;

	} while (choice != 1 && choice != 2 &&
		choice != 3);
	switch (choice)
	{
	case 1:
		getInformation(LedgerNanoS, 1);
		break;
	case 2:
		getInformation(LedgerNanoS, 2);
		break;
	case 3:
		getInformation(LedgerNanoS, 3);
		break;
	default:
		std::cout << "1 - Balance wallet\n" << "2 - Address cryptocurrency\n" << "3 - Wallet owner" << std::endl;
	
	}


	system("pause");
	return 0;
}