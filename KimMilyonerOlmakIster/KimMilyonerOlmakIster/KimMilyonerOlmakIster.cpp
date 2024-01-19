/*
 @author Kadir Can Geyik
 @brief Algoritmalar ve Programlama Dersi Dönem Projesi
 @date 2024-01-10
 @copyright Copyright (c) 2024
 @contact kadircngyk@gmail.com
*/
#include <iostream>
using namespace std;

int main()
{
	const int soruSayisi = 12;
	int para = 0;
	char cevap;
	//satır ve sütün
	string sorular[soruSayisi] = {
		"Soru 1: Su an sizinle hangisi arasindaki kutle cekimi kuvvetinin buyuklugu daha fazladir?",
		"Soru 2: 100'e, 100'un yuzde 10'u eklediginde cikan sonuc 100'un yuzde kaci olur?",
		"Soru 3: Bir basketbol macinda kac adet periyot bulunmaktadir?",
		"Soru 4: Insan vucudu kac kemikten olusur?",
		"Soru 5: Hangi gezegen 'Akil Gezegeni' olarak bilinir?",
		"Soru 6: Morse alfabesi hangi iletisim sekli icin kullanilir?",
		"Soru 7: Hangi renk seker hastalarinin tuketmemesi onerilir?",
		"Soru 8: Hangi elementin kimyasal sembolu 'O'dur?",
		"Soru 9: Turkiye'nin en yuksek dagi hangisidir?",
		"Soru 10: Hangi unlü ressam 'Ay' tablosunu yapmistir?",
		"Soru 11: Hangisi Uluslararasi Uzay Istasyonu'nda bugüne kadar yapilmis sporlardan biri degildir?",
		"Soru 12: Italya Serie A'da 2022-2023 sezonunda, 33 yil aradan sonra tekrar sampiyon olan Napoli futbol takiminin stadyumunun adi nedir?"
	};
	string cevaplar[soruSayisi] = {
		"A) Ay\nB) GUnes\nC) Dunya\nD) Kendiniz",
		"A) Yuzde 10'u\nB) Yuzde 100'u\nC) Yuzde 110'u\nD) Yuzde 1000'i",
		"A) 3\nB) 2\nC) 4\nD) 5",
		"A) 206\nB) 220\nC) 180\nD) 150",
		"A) Mars\nB) Venus\nC) Jupiter\nD) Merkur",
		"A) Deniz tasimaciligi\nB) Telgraf\nC) Radyo\nD) Internet",
		"A) Yesil\nB) Kirmizi\nC) Mavi\nD) Sari",
		"A) Oksijen\nB) Karbon\nC) Hidrojen\nD) Azot",
		"A) Agri Dagi\nB) Uludag\nC) Ararat Dagi\nD) Erciyes Dagi",
		"A) Vincent van Gogh\nB) Pablo Picasso\nC) Leonardo da Vinci\nD) Claude Monet",
		"A) Jimnastik\nB) Masa tenisi\nC) Yuzme\nD) Buz hokeyi",
		"A) San Paolo Stadyumu\nB) Diego Armando Maradona\nC) Stadio San Siro\nD) Juventus Stadyumu"
	};

	string yazdiralacaklar[3] = {
		"Dogru cevap verdiniz. Suanki Toplam Kazanciniz: ",
		"Yanlis cevap verdiniz. Lutfen Tekrar Deneyiniz"
	};

	char dogru[12] = { 'c','c','c','b','a','b','a','a','c','a','c','b' };
	char DOGRU[12] = { 'C','C','C','B','A','B','A','A','C','A','C','B' };

	cout << "Kim Milyoner Olmak Ister Oyununa Hosgeldiniz !\nOyunumuz 12 sorudan olusmaktadir. Her soru 4 secenekten olusmaktadir.\nSorulari cevaplamak icin A, B, C veya D harflerini kullanabilirsiniz." << endl;
	cout << "Oyundan cekilmek isterseniz e yazip 'Enter' tusuna basiniz.\n\n" << endl;
	for (int i = 0; i < soruSayisi; i++)
	{
		cout << sorular[i] << endl;
		cout << cevaplar[i] << endl;
		cin >> cevap;

		if (cevap == dogru[i] || cevap == DOGRU[i])
		{
			para += (i < 2) ? 250 : (i < 4) ? 1000 : (i < 7) ? 10000 : (i < 12) ? 30000 : 750000;
			cout << yazdiralacaklar[0] << para << "$" << endl;
		}
		else if (cevap == 'e' || cevap == 'E')
		{
			cout << "Cekilmek istediginizden emin misiniz ? (Evet = e/E | Hayır = h/H) " << endl;
			cin >> cevap;
			if (cevap == 'e'|| cevap =='E')
			{
				cout << "Oyunu " << para << "$ ile bitirdiniz." << endl;
				break;
			}
			else
				{
					cout << "Oyunumuza devam ediyoruz." << endl;
					i--;
				}
		}	
		else
		{
			cout << yazdiralacaklar[1] << endl;
			break;
		}
	}
	return 0;
}