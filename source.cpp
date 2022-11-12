#include <iostream>
#include <locale.h>
int main() {
	int girdi,birler,onlar,yuzler;
	std::string birlerbasamagi[] = {"", "bir", "iki", "üç", "dört", "beş", "altı", "yedi", "sekiz", "dokuz"};
	std::string onlarbasamagi[] = {"", "on", "yirmi", "otuz", "kırk", "elli", "altmış", "yetmiş", "seksen", "doksan"};
	setlocale(LC_ALL, "Turkish");
  	std::cout<<"1 ile 999 arasında bir tam sayı giriniz.";
	std::cin>>girdi;
	birler = girdi % 10;
	onlar = (girdi/10)%10;
	yuzler = (girdi/100)%10;
	switch(yuzler){
		case 0:
			switch(onlar){
				case 0:
					switch(birler){
						case 0:
							
							break;
						default:
							std::cout<<birlerbasamagi[birler];
							break;
					}
					
					break;
				default:
					std::cout<<onlarbasamagi[onlar]<<birlerbasamagi[birler];
					break;
				}
	
			break;
		case 1:
			std::cout<<"yüz"<<onlarbasamagi[onlar]<<birlerbasamagi[birler];
			break;
		default:
			std::cout<<birlerbasamagi[yuzler]<<"yüz"<<onlarbasamagi[onlar]<<birlerbasamagi[birler];
			break;
	}
	return 0;
}
