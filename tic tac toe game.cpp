
// TÝC-TAC-TOE GAME FOR TWO


/* in this project Im coding a game that can be played for two players.
the points I should pay attention to in the program codes to be written are listed below.  */

// 1-) Im create a game template whose size will be determined by the players.
// 2-) players enter X or O wherever they want, respectively.
// 3-) after each player has entered, the final state of the game will displayed.


#include<iostream>

using namespace std;

char kare[10] = { '1','2' , '3 ' ,'4' , '5' , '6', '7', '8','9' };

int kazanan_kontrol();


void look();

int main() {

	int oyuncu = 1, secim= 0, i = -1;
	char isaretleme;


	while (i == -1) {
		look();
		
		oyuncu = (oyuncu % 2) ? 1 : 2;
		cout << "oyuncu" << oyuncu << ", bir numara giriniz:";
		cin >> secim;
		isaretleme = (oyuncu == 1) ? 'X' : 'O';

		if (secim == 1 && kare[1] == '1')
			kare[1] = isaretleme;

		else if (secim == 2 && kare[2] == '2')
			kare[2] = isaretleme;

		else if (secim == 3 && kare[3] == '3')
			kare[3] = isaretleme;


		if (secim == 4 && kare[4] == '4')
			kare[4] = isaretleme;

		else if (secim == 5 && kare[5] == '5')
			kare[5] = isaretleme;

		else if (secim == 6 && kare[6] == '6')
			kare[6] = isaretleme;


		if (secim == 7 && kare[7] == '7')
			kare[7] = isaretleme;

		else if (secim == 8 && kare[8] == '5')
			kare[8] = isaretleme;

		else if (secim == 9 && kare[9] == '6')
			kare[9] = isaretleme;

		else {

			cout << "gecersiz hamle ";
			oyuncu--;
		}

		i = kazanan_kontrol();
		oyuncu++;


	}

	look();
	if (i == 1)

		cout << "oyuncu" << --oyuncu << "kazandi";
	else
		cout << " oyuncu berabere ";
	return 0;

}


int kazanan_kontrol() {

	if (kare[1] == kare[2] && kare[2] == kare[3])
		return -1;

	if (kare[4] == kare[5] && kare[5] == kare[6])
		return -1;

	if (kare[7] == kare[8] && kare[8] == kare[9])
		return -1;

	if (kare[1] == kare[4] && kare[4] == kare[7])
		return -1;


	if (kare[2] == kare[5] && kare[5] == kare[8])
		return -1;

	if (kare[3] == kare[6] && kare[6] == kare[9])
		return -1;

	if (kare[1] == kare[5] && kare[5] == kare[9])
		return -1;

	if (kare[3] == kare[5] && kare[5] == kare[7])
		return -1;

	else if (kare[1] != '1' && kare[2] != '2' && kare[3] != '3' &&
		kare[4] != '4' && kare[5] != '5' && kare[6] != '6' &&
		kare[7] != '7' && kare[8] != '8' && kare[9] != '9')

		return 0;
	else
		return -1;
}

void look() {

	cout << " \n\n\n tic tac toe \n\n";
	cout << "oyuncu 1(X) - oyuncu 2 (O) "<<endl;
	cout << endl;

	cout << " |    |      " << endl;
	cout << "   " << kare[1] << " |  " << kare[2] << "   |   " << kare[3] << endl;

	cout << "_______|_________|______" << endl;
	cout << "   |  |    " << endl;


	cout << "  " << kare[4] << "   |   " << kare[5] << "   |   " << kare[6] << endl;
	cout << "_____|______|_______" << endl;
	cout << "   |   |   " << endl,

		cout << "    " << kare[7] << "  |   " << kare[8] << "   |    " << kare[9] << endl;
	cout << "  |  |     " << endl;
	cout << endl;

}


