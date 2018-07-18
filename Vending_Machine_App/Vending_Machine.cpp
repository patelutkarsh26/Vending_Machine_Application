#include <iostream>
#include <string.h>

unsigned int num_quarters = 0;
float inserted_amount = 0, total_cost = 0, change = 0;

void main_menu(void);

using namespace std;

void drinks_menu(void)
{
	unsigned char drink_name[10] = { 0 };
	unsigned char option = 0;

	chk_agn:

		cout << "-----------------------------------------\n";
		
		cout << "Water <$1>\n" << "Juice <$3>\n" << "Soda <$1.5>\n";
		
		cout << "Enter your drink selection <x to exit>:";
		
		cin >> drink_name;
		
		cout << endl;

	

		while ((((drink_name[0] == 'W') || (drink_name[0] == 'w')) && ((drink_name[1] == 'A') || (drink_name[1] == 'a')) && ((drink_name[2] == 'T') || (drink_name[2] == 't')) && ((drink_name[3] == 'E') || (drink_name[3] == 'e')) && ((drink_name[4] == 'R') || (drink_name[4] == 'r'))) ||

			(((drink_name[0] == 'J') || (drink_name[0] == 'j')) && ((drink_name[1] == 'U') || (drink_name[1] == 'u')) && ((drink_name[2] == 'I') || (drink_name[2] == 'i')) && ((drink_name[3] == 'C') || (drink_name[3] == 'c')) && ((drink_name[4] == 'E') || (drink_name[4] == 'e'))) ||

			(((drink_name[0] == 'S') || (drink_name[0] == 's')) && ((drink_name[1] == 'O') || (drink_name[1] == 'o')) && ((drink_name[2] == 'D') || (drink_name[2] == 'd')) && ((drink_name[3] == 'A') || (drink_name[3] == 'a'))) || (((drink_name[0] == 'x') || (drink_name[0] == 'X')) && (drink_name[1] == 0)))

		{

			if (((drink_name[0] == 'W') || (drink_name[0] == 'w')))

			{

				option = 1;

			}

			else if (((drink_name[0] == 'J') || (drink_name[0] == 'j')))

			{

				option = 2;

			}

			else if (((drink_name[0] == 'S') || (drink_name[0] == 's')))

			{

				option = 3;

			}

			else if (((drink_name[0] == 'X') || (drink_name[0] == 'x')))

			{

				option = 4;

			}

			else

			{

				cout << "Invalid selection\n";

				goto chk_agn;

			}

			goto chk_price;

		

		}

		cout << "Invalid selection\n";

	

		goto chk_agn;



	chk_price:



		switch (option)

		{

		case 1:

			if ((inserted_amount-total_cost) < 1)

			{

				cout << "You don't have enough money to buy Water\n";

			}

			else

			{

				cout << "Vending: Water, you have " << (inserted_amount - total_cost - 1) << " left.\n";

				total_cost = total_cost + 1;

			}

			goto chk_agn;

			

			break;

		case 2:

			if ((inserted_amount-total_cost) < 3)

			{

				cout << "You don't have enough money to buy Juice\n";

			}

			else

			{

				cout << "Vending: Juice, you have " << (inserted_amount - total_cost - 3) << " left.\n";

				total_cost = total_cost + 3;

			}

			goto chk_agn;

			

			break;

		case 3:

			if ((inserted_amount-total_cost) < 1.5)

			{

				cout << "You don't have enough money to buy Soda\n";

			}

			else

			{

				cout << "Vending: Soda, you have " << (inserted_amount - total_cost - 1.5) << " left.\n";

				total_cost = total_cost + 1.5;

			}

			goto chk_agn;

			

			break;

		case 4:

			main_menu();

			break;



		}





}

void snacks_menu(void)

{

	unsigned char snack_name[10] = { 0 };

	unsigned char option = 0;



chk_snack_agn:

	cout << "-----------------------------------------\n";

	cout << "Chips <$1.25>\n" << "Peanuts <$0.75>\n" << "Cookie <$1>\n";

	cout << "Enter your Snack selection <x to exit>:";

	cin >> snack_name;

	cout << endl;



	while ((((snack_name[0] == 'C') || (snack_name[0] == 'c')) && ((snack_name[1] == 'H') || (snack_name[1] == 'h')) && ((snack_name[2] == 'I') || (snack_name[2] == 'i')) && ((snack_name[3] == 'P') || (snack_name[3] == 'p')) && ((snack_name[4] == 'S') || (snack_name[4] == 's'))) ||

		(((snack_name[0] == 'P') || (snack_name[0] == 'p')) && ((snack_name[1] == 'E') || (snack_name[1] == 'e')) && ((snack_name[2] == 'A') || (snack_name[2] == 'a')) && ((snack_name[3] == 'N') || (snack_name[3] == 'n')) && ((snack_name[4] == 'U') || (snack_name[4] == 'u')) && ((snack_name[5] == 'T') || (snack_name[5] == 't')) && ((snack_name[6] == 'S') || (snack_name[6] == 's'))) ||

		(((snack_name[0] == 'C') || (snack_name[0] == 'c')) && ((snack_name[1] == 'O') || (snack_name[1] == 'o')) && ((snack_name[2] == 'O') || (snack_name[2] == 'o')) && ((snack_name[3] == 'K') || (snack_name[3] == 'k')) && ((snack_name[4] == 'I') || (snack_name[4] == 'i')) && ((snack_name[5] == 'E') || (snack_name[5] == 'e'))) || (((snack_name[0] == 'x') || (snack_name[0] == 'X')) && (snack_name[1] == 0)))

	{

		if (((snack_name[1] == 'H') || (snack_name[1] == 'h')))

		{

			option = 1;

		}

		else if (((snack_name[1] == 'E') || (snack_name[1] == 'e')))

		{

			option = 2;

		}

		else if (((snack_name[1] == 'O') || (snack_name[1] == 'o')))

		{

			option = 3;

		}

		else if (((snack_name[0] == 'X') || (snack_name[0] == 'x')))

		{

			option = 4;

		}

		else

		{

			cout << "Invalid selection\n";

			goto chk_snack_agn;

		}

		goto chk_price;



	}

	cout << "Invalid selection\n";



	goto chk_snack_agn;



chk_price:



	switch (option)

	{

	case 1:

		if ((inserted_amount-total_cost) < 1.25)

		{

			cout << "You don't have enough money to buy Chips\n";

		}

		else

		{

			cout << "Vending: Chips, you have " << (inserted_amount - total_cost - 1.25) << " left.\n";

			total_cost = total_cost + 1.25;

		}

		goto chk_snack_agn;

		

		break;

	case 2:

		if ((inserted_amount-total_cost) < 0.75)

		{

			cout << "You don't have enough money to buy Peanuts\n";

		}

		else

		{

			cout << "Vending: Peanuts, you have " << (inserted_amount - total_cost - 0.75) << " left.\n";

			total_cost = total_cost + 0.75;

		}

		goto chk_snack_agn;

		

		break;

	case 3:

		if ((inserted_amount-total_cost) < 1)

		{

			cout << "You don't have enough money to buy Cookie\n";

		}

		else

		{

			cout << "Vending: Cookie, you have " << (inserted_amount - total_cost - 1) << " left.\n";

			total_cost = total_cost + 1;

		}

		goto chk_snack_agn;

		

		break;

	case 4:

		main_menu();

		break;



	}







}

void main_menu(void)

{

	unsigned int option = 0;

	cout << "Select category:\n";

	cout << "1. Drinks\n" << "2. Snacks\n" << "3. Exit\n";

	cout << "Select an option:";

	cin >> option;

	cout << endl;

	while ((option < 1) || (option > 3))

	{

		cout << "Invalid selection\n";

		cout << "-----------------------------------------\n";

		cout << "Select category:\n";

		cout << "1. Drinks\n" << "2.Snacks\n" << "3. Exit\n";

		cout << "Select an option:";

		cin >> option;

		cout << endl;

	}

	switch (option)

	{

	case 1:

		drinks_menu();

		break;

	case 2:

		snacks_menu();

		break;

	case 3:

		change = inserted_amount - total_cost;

		cout << "Paid amount: " << inserted_amount << ". total purchase: " << total_cost << ". change: " << change << endl;

	}

}

int main()

{

	unsigned char a = 0;

	cout << "Welcome to the UB vending machine.\n";

	cout << "Enter the number of quarters you wish to insert:";

	cin >> num_quarters;

	inserted_amount = num_quarters * 0.25;

	cout << "You entered " << inserted_amount << " dollars.\n";

	cout << "-----------------------------------------\n";

	main_menu();

	cout << "Press any key to continue...\n";

	cin >> a;

}