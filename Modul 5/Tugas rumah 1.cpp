#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	char kata[100];
	int vokal, konsonan, spasi, angka, char_lain, ng;
	vokal = konsonan = spasi = angka = char_lain = ng = 0;
	cout<<"Masukkan Kalimat : ";
	gets (kata);
for(int i =0; kata[i] != '\0'; ++i){
		if(kata[i]=='a' || kata[i]=='i' || kata[i]=='u'||
	kata[i]=='e'|| kata[i] =='o'
	|| kata[i] =='A'|| kata[i] =='I'|| kata[i] =='U'||
	kata[i]=='E'|| kata[i] =='O')
	++vokal;
else if(kata[i]=='n' || kata[i] =='N'){
	if(kata[i] =='g'  || kata[i] =='G'){
}
	++ng;
}
else if((kata[i]>='a' && kata[i]<='z') || (kata[i]>='A'&&
	kata[i]<='Z'))
	++konsonan;
else if(kata[i] >= '0' && kata[i] <= '9')
	++angka;
else if(kata[i] == ' ')
	++spasi;
else
	++char_lain;
}
	cout << "\nJumlah karakter vokal : " << vokal << endl;
	cout << "Jumlah karakter konsonan : " <<konsonan << endl;
	cout << "Jumlah karakter angka : " <<angka << endl;
	cout << "Jumlah karakter spasi : " <<spasi << endl;
	cout << "Jumlah karakter lain : " <<char_lain << endl;
	cout << "Jumlah kalimat yang mengandung ng : " <<ng << endl;}
