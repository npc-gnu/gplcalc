# include <iostream>
# include <cmath>
using namespace std;

int main(){

	int A;
		cout << "Bir seçenek girin. 1. 4 Temel işlem, 2. Karmaşık işlemler." << endl;
	cin >> A;

		switch (A) {
			case 1: {
				int B;
				cout << "Seçenek girin. 1. Toplama, 2. Çıkarma, 3. Çarpma, 4. Bölme" << endl;
				cin >> B;
				switch (B) {
			case 1: {
			cout << "2 sayı girin." << endl;
			int L;
			int I;
			cin >> L;
	                cin >> I;
			cout << L + I << endl; 
				}
				break;
			case 2:{
				       cout << "1. Çıkarılan, 2. çıkan sayı girin." << endl;
				       int N;
				       int U;
				       cin >> N;
				       cin >> U;
				       cout << N - U << endl;
			       }
			       break;
			case 3:{
				       cout << "2 sayı girin." << endl;
				       int X;
				       int G;
				       cin >> X;
				       cin >> G;
				       cout << X * G << endl;
			       }
			       break;
			case 4:{
				       cout << "1. Bölünen, 2. bölen sayı girin." << endl;
				       int P;
				       int L;
				       cin >> P;
				       cin >> L;
				       cout << P / L << endl;
			       }
			default:{
					cout << "Belirli bir seçenek gir!" << endl;
				}
				break;
				}
			       break;
			case 2:{
				       int C;
				       cout << "Bir seçenek girin: 1. Kök, 2. Üssü ifade işlemi." << endl;
				       cin >> C;
				       switch (C){
				       case 1:{
				       cout << "1 Sayı girin." << endl;   
			               int Q;
				       cin >> Q;
				       if (Q < 0){
					       cout << "0 dan küçük sayılar reel değildir!" << endl;
				       }
				       else{	       
					       cout << sqrt(Q) << endl;
			       }
				       break;

			       }
				       case 2:{
					       int X;
					       int Y;
				       cout << "Taban sayıyı girin." << endl;
				       cin >> X;
				       cout << "Üs sayıyı girin." << endl;
				       cin >> Y;
					       cout << pow(X, Y) << endl;
				       }
			       break;
		default: {
				 cout << "Belirli bir seçenek gir!" << endl;
			 }
		}
		return 0;
}
}
}
}
