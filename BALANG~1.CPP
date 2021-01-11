#include <iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"Turkish");
	int bas,bit,bol,top,say=0;
		cout<<"Baþlangýç deðerini giriniz :";cin>>bas;
		cout<<"Bitiþ deðerini giriniz :";cin>>bit;
		cout<<"Hangi sayýya bölmek istersiniz :";cin>>bol;
		for(int i=bas;i<bit;i++){
			if(i%bol==0){
			say++;
			top+=i;
			}
		
		}
		cout<<bol<<" bölünebilen sayýlarýn adedi :"<<say;
		cout<<"\n"<<bol<<"'e bölünen sayýlarýn toplamý :"<<top;
		return 0;
		
	
}
