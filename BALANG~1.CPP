#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"Turkish");
	int bas,bit,bol,top,say=0;
		cout<<"Ba�lang�� de�erini giriniz :";cin>>bas;
		cout<<"Biti� de�erini giriniz :";cin>>bit;
		cout<<"Hangi say�ya b�lmek istersiniz :";cin>>bol;
		for(int i=bas;i<bit;i++){
			if(i%bol==0){
			say++;
			top+=i;
			}
		
		}
		cout<<bol<<" b�l�nebilen say�lar�n adedi :"<<say;
		cout<<"\n"<<bol<<"'e b�l�nen say�lar�n toplam� :"<<top;
		return 0;
		
	
}
