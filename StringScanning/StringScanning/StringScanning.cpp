#include <iostream>  
#include <locale.h>
#include <string>
#include <stdlib.h>


using namespace std;


int main()
{
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));					//rastgele sayý üretmek için kullanýldý.

	//Ýlleri içeren string oluþturuldu.
	string iller = "ADANA ADIYAMAN AFYONKARAHÝSAR AÐRI AKSARAY AMASYA ANKARA ANTALYA ARDAHAN ARTVÝN AYDIN BALIKESÝR BARTIN BATMAN BAYBURT BÝLECÝK BÝNGÖL BÝTLÝS BOLU BURDUR BURSA ÇANAKKALE ÇANKIRI ÇORUM DENÝZLÝ DÝYARBAKIR DÜZCE EDÝRNE ELAZIÐ ERZÝNCAN ERZURUM ESKÝÞEHÝR GAZÝANTEP GÝRESUN GÜMÜÞHANE HAKKÂRÝ HATAY IÐDIR ISPARTA ÝSTANBUL ÝZMÝR KAHRAMANMARAÞ KARABÜK KARAMAN KARS KASTAMONU KAYSERÝ KÝLÝS KIRIKKALE KIRKLARELÝ KIRÞEHÝR KOCAELÝ KONYA KÜTAHYA MALATYA MANÝSA MARDÝN MERSÝN MUÐLA MUÞ NEVÞEHÝR NÝÐDE ORDU OSMANÝYE RÝZE SAKARYA SAMSUN ÞANLIURFA SÝÝRT SÝNOP SÝVAS ÞIRNAK TEKÝRDAÐ TOKAT TRABZON TUNCELÝ UÞAK VAN YALOVA YOZGAT ZONGULDAK";

	string illerDizisi[81];				//Ýlleri dizi haline getirmek için 81 elemanlý bir diziye atamak için illerDizisi tanýmlandý.
	string enKýsaIlDizisi[100];			//En kýsa harfli illeri oluþturacak dizi tanýmlandý.
	string enUzunIlDizisi[100];			//En uzun harfli illeri oluþturacak dizi tanýmlandý.

	int diziIllerElemanSayisi = 0;					//Ýller dizisinin eleman sayýsnýný belirlemek için atandý.
	int indisKýsaIl = 0, indisUzunIl = 0;			//En kýsa ve en uzun harfli illeri tutacak dizilerin eleman sayýlarýný belirlemek için deðiþken tanýmlandý .

	while (0 < iller.length())        //
	{
		illerDizisi[diziIllerElemanSayisi] = iller.substr(0, iller.find(" "));
		string kontrolIller = iller;                                                        //Ýller string i kontrolIller deðiþkenine atandý.
		iller = iller.substr(iller.find(" ") + 1, iller.length());							//Her döngünde ilk boþluða kadar olan kelime iller string'inden çýkarýldý.

		if (kontrolIller == iller)            //Þart saðlandýðýnda iller dizisinini içi boþ olacak.
		{
			iller = "";
		}
		++diziIllerElemanSayisi;				//Ýller dizisinin elaman sayýsýný belirler.
	}
	string enKýsaIl = illerDizisi[0];			//En kýsa harfli ili iller dizisinin ilk elemaný kabul edildi.
	string enUzunIl = illerDizisi[0];

	for (int i = 0; i < diziIllerElemanSayisi; i++)		//Ýller dizisinini eleman sayýsý kullanýlarak en uzun ve en kýsa il bulunur.
	{
		if (enKýsaIl.length() > illerDizisi[i].length())		//Þart saðlandýðýnda en kýsa il deðiþkeninin yeni deðeri belirlenir ve en kýsa harfli ile ulaþýlýr.
		{
			enKýsaIl = illerDizisi[i];
		}
		if (enUzunIl.length() < illerDizisi[i].length())		//Þart saðlandýðýnda en uzun il deðiþkeninin yeni deðeri belirlenir ve en uzun harfli ile ulaþýlýr.
		{
			enUzunIl = illerDizisi[i];
		}
	}
	//Önceki for döngüsünde bulunan en uzun ve en kýsa harfli illere eþit olan varsa en kýsa il dizisine ve en uzun il dizisine atanýr ve dizi büyüklükleri belirlenir.
	for (int i = 0; i < diziIllerElemanSayisi; i++)
	{
		if (enKýsaIl.length() == illerDizisi[i].length())
		{
			enKýsaIlDizisi[indisKýsaIl] = illerDizisi[i];
			indisKýsaIl++;
		}
		if (enUzunIl.length() == illerDizisi[i].length())
		{
			enUzunIlDizisi[indisUzunIl] = illerDizisi[i];
			indisUzunIl++;
		}
	}
	cout << "En Kýsa Iller :";

	for (int i = 0; i < indisKýsaIl; i++)
	{
		cout << enKýsaIlDizisi[i] << " ";
	}
	//En kýsa ve en uzun harfli iller yazdýrýlýr.
	cout << endl;
	cout << "En Uzun Iller :";

	for (int i = 0; i < indisUzunIl; i++)
	{
		cout << enUzunIlDizisi[i] << " ";
	}

	string dortHarfliIlDizisi[100];
	string besHarfliIlDizisi[100];
	string altiHarfliIlDizisi[100];
	string yediHarfliIlDizisi[100];
	string sekizHarfliIlDizisi[100];			//Belirli harf sayýsýnda olan illerin tutulacaðý diziler oluþturuldu.
	string dokuzHarfliIlDizisi[100];
	string onHarfliIlDizisi[100];
	string onBirHarfliIlDizisi[100];
	string onIkiHarfliIlDizisi[100];
	string onUcHarfliIlDizisi[100];
	string onDortHarfliIlDizisi[100];

	int dortHarfliIlDizisiElemanSayisi = 0;
	int besHarfliIlDizisiElemanSayisi = 0;
	int altiHarfliIlDizisiElemanSayisi = 0;			//Belirli harf sayýsýnda illeri tutan dizilerin eleman sayýlarýný belirlemek için deðiþkenler atandý.
	int yediHarfliIlDizisiElemanSayisi = 0;
	int sekizHarfliIlDizisiElemanSayisi = 0;
	int dokuzHarfliIlDizisiElemanSayisi = 0;
	int onHarfliIlDizisiElemanSayisi = 0;
	int onBirHarfliIlDizisiElemanSayisi = 0;
	int onIkiHarfliIlDizisiElemanSayisi = 0;
	int onUcHarfliIlDizisiElemanSayisi = 0;
	int onDortHarfliIlDizisiElemanSayisi = 0;

	//Ýller dizisinin eleman sayýsý kullanýlarak iller dizisindeki elemanlar harf sayýlarýna göre yeni dizilere bölündü ve dizi eleman sayýlarý belirlendi.
	for (int i = 0; i < diziIllerElemanSayisi; i++)
	{
		if (4 == illerDizisi[i].length())
		{
			dortHarfliIlDizisi[dortHarfliIlDizisiElemanSayisi] = illerDizisi[i];
			dortHarfliIlDizisiElemanSayisi++;
			continue;
		}
		if (5 == illerDizisi[i].length())
		{
			besHarfliIlDizisi[besHarfliIlDizisiElemanSayisi] = illerDizisi[i];
			besHarfliIlDizisiElemanSayisi++;
			continue;
		}
		if (6 == illerDizisi[i].length())
		{
			altiHarfliIlDizisi[altiHarfliIlDizisiElemanSayisi] = illerDizisi[i];
			altiHarfliIlDizisiElemanSayisi++;
			continue;
		}
		if (7 == illerDizisi[i].length())
		{
			yediHarfliIlDizisi[yediHarfliIlDizisiElemanSayisi] = illerDizisi[i];
			yediHarfliIlDizisiElemanSayisi++;
			continue;
		}
		if (8 == illerDizisi[i].length())
		{
			sekizHarfliIlDizisi[sekizHarfliIlDizisiElemanSayisi] = illerDizisi[i];
			sekizHarfliIlDizisiElemanSayisi++;
			continue;
		}
		if (9 == illerDizisi[i].length())
		{
			dokuzHarfliIlDizisi[dokuzHarfliIlDizisiElemanSayisi] = illerDizisi[i];
			dokuzHarfliIlDizisiElemanSayisi++;
			continue;
		}
		if (10 == illerDizisi[i].length())
		{
			onHarfliIlDizisi[onHarfliIlDizisiElemanSayisi] = illerDizisi[i];
			onHarfliIlDizisiElemanSayisi++;
			continue;
		}
		if (13 == illerDizisi[i].length())
		{
			onUcHarfliIlDizisi[onUcHarfliIlDizisiElemanSayisi] = illerDizisi[i];
			onUcHarfliIlDizisiElemanSayisi++;
			continue;
		}
		if (14 == illerDizisi[i].length())
		{
			onDortHarfliIlDizisi[onDortHarfliIlDizisiElemanSayisi] = illerDizisi[i];
			onDortHarfliIlDizisiElemanSayisi++;
			continue;
		}
	}

	cout << endl;

	int ucHarfBulunanDenemeSayisi = 0;                   //Üç harfli il bulunan ve bulunamayan deneme sayýlarýný tutacak deðiþkenler tanýmlandý.
	int uctHarfBulunamayanDenemeSayisi = 0;

	string secilenIller[3];					//Seçilen illerin atanacaðý dizi tanýmlandý
	string secilenEnKisaIl = "";			//Seçilen illerin arasýnda en kýsa olanýn atanacaýðý deðiþken tanýmlandý

	for (int deneme = 0; deneme < 100000; deneme++)			  //Deneme sayýsý aþýldýðýnda il bulunursa bulundu , bulunamazsa bulunamadý yazar.
	{
		for (int i = 0; i < enKýsaIlDizisi[0].length(); i++)  //Ýller dizisinden en kýsa il dizisinin herhangi bir elemanýný unzunluðu kadar rastgele il seçilir.
		{
			int randomSayi = 0;
			randomSayi = rand() % 81;
			secilenIller[i] = illerDizisi[randomSayi];      //Rastgele seçilen iller yeni diziye atanýr.
			secilenEnKisaIl = secilenIller[0];              //Seçilen illerin herhangi biri en kýsa harfli il kabul edilir.
		}
		for (int p = 0; p < enKýsaIlDizisi[0].length(); p++)			//En kýsa il dizisinin herhangi bir elemanýný büyüklüðü kullanýlarak seçilen illerini en kýsa harfli olaný bulunur
		{
			if (secilenEnKisaIl.length() > secilenIller[p].length())    //Seçilen illerin arasýnda en az harfli olaný belirlenir.
			{
				secilenEnKisaIl = secilenIller[p];
			}
		}
		for (int i = 0; i < secilenEnKisaIl.length(); i++)     //Seçilen illerin arasýnda en az harfli olan kadar kelimenini indisi denenir.
		{
			string ilKondrolUc;      //Seçilen harfleri kelime þeklinde atanmasý için deðiþken tanýmlandý.

			for (int z = 0; z < enKýsaIlDizisi[0].length(); z++)		//Her döngüde seçilen illerin belirli harfleri alýnýr ve kontrol edilmesi için deðiþkene atanýr.
			{
				ilKondrolUc += secilenIller[z].substr(i, 1);
			}
			for (int x = 0; x < indisKýsaIl; x++)			//En kýsa il dizisinin eleman sayýsýna kadar for döngüsü çalýþýr
			{
				if (ilKondrolUc == enKýsaIlDizisi[x])		//Elde edilen haflerin en kýsa il dizisinin içinde olup olmadýðý kontrol edilir.
				{
					cout << endl;
					int ilNo = 1;

					for (int sayacUcHarf = 0; enKýsaIlDizisi[0].length() > sayacUcHarf; sayacUcHarf++)  //En kýsa il dizisinin herhangi bir elemanýnýn büyüklüðü kullanýlarak seçilen iller yazdýrýlýr 
					{
						cout << "Seçilen Ýl " << ilNo << ":" << secilenIller[sayacUcHarf] << endl;		//Ýl bulunduðunda seçili olan iller yazdýrýlýr
						ilNo++;
					}
					cout << endl;
					cout << "Bulunana Ýl : " << enKýsaIlDizisi[x] << endl;		//En kýsa harf dizisinde bulunan il yazdýrýlýr
					cout << "--------------------------------" << endl;
					ucHarfBulunanDenemeSayisi++;		//Ýl bulunan deneme sayýsýný tutar
					break;
				}
				else
					uctHarfBulunamayanDenemeSayisi++;		//Ýl bulunamayan deneme sayýsýný tutar
			}
		}
	}
	if (ucHarfBulunanDenemeSayisi == 0)   // Deneme sonucunda gerekli iller bulunamazsa if bloðu çalýþýr.
	{
		cout << endl;
		cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;
		cout << endl;
		cout << "!!!!! Seçili ÜçÝl Arasaýnda Ýl Bulunamadý !!!!!" << endl;		//Ýl bulunamadýðýnda yazdýrýlýr
	}
	cout << endl;
	cout << "Seçili Üç Ýl Arasaýnda Ýl Bulunan Deneme Sayýsý :" << ucHarfBulunanDenemeSayisi << endl;
	cout << "Seçili Üç Ýl Arasaýnda Ýl Bulunanmayan Deneme Sayýsý :" << uctHarfBulunamayanDenemeSayisi << endl;
	cout << endl;
	cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;


	//		!!!!!!!!!!		HER BLOKTA HARF SAYILARINA GÖRE ÝÞLEMLER TEKRARLANIR		!!!!!!!!!!		

	int dortHarfBulunanDenemeSayisi = 0;
	int dortHarfBulunamayanDenemeSayisi = 0;

	string secilenIllerDort[4];
	string secilenEnKisaIlDort;

	for (int deneme = 0; deneme < 100000; deneme++)
	{
		for (int i = 0; i < dortHarfliIlDizisi[0].length(); i++)
		{
			int randomSayi = 0;
			randomSayi = rand() % 81;
			secilenIllerDort[i] = illerDizisi[randomSayi];
			secilenEnKisaIlDort = secilenIllerDort[0];
		}
		for (int p = 0; p < dortHarfliIlDizisi[0].length(); p++)
		{
			if (secilenEnKisaIlDort.length() > secilenIllerDort[p].length())
			{
				secilenEnKisaIlDort = secilenIllerDort[p];
			}
		}
		for (int i = 0; i < secilenEnKisaIlDort.length(); i++)
		{
			string ilKondrolDort;

			for (int z = 0; z < dortHarfliIlDizisi[0].length(); z++)
			{
				ilKondrolDort += secilenIllerDort[z].substr(i, 1);
			}
			for (int x = 0; x < dortHarfliIlDizisiElemanSayisi; x++)
			{
				if (ilKondrolDort == dortHarfliIlDizisi[x])
				{
					cout << endl;
					int ilNo = 1;

					for (int sayacDortHarf = 0; dortHarfliIlDizisi[0].length() > sayacDortHarf; sayacDortHarf++)
					{
						cout << "Seçilen Ýl " << ilNo << ":" << secilenIllerDort[sayacDortHarf] << endl;
						ilNo++;
					}
					cout << endl;
					cout << "Bulunana Ýl : " << dortHarfliIlDizisi[x] << endl;
					cout << "--------------------------------" << endl;
					dortHarfBulunanDenemeSayisi++;
					break;
				}
				else
					dortHarfBulunamayanDenemeSayisi++;
			}
		}
	}
	if (dortHarfBulunanDenemeSayisi == 0)
	{
		cout << endl;
		cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;
		cout << endl;
		cout << "!!!!! Seçili Dört Ýl Arasaýnda Ýl Bulunamadý !!!!!" << endl;
	}
	cout << endl;
	cout << "Seçili Dört Ýl Arasaýnda Ýl Bulunan Deneme Sayýsý :" << dortHarfBulunanDenemeSayisi << endl;
	cout << "Seçili Dört Ýl Arasaýnda Ýl Bulunanmayan Deneme Sayýsý :" << dortHarfBulunamayanDenemeSayisi << endl;
	cout << endl;
	cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;




	int besHarfBulunanDenemeSayisi = 0;
	int besHarfBulunamayanDenemeSayisi = 0;

	string secilenIllerBes[5];
	string secilenEnKisaIlBes;
	for (int deneme = 0; deneme < 100000; deneme++)
	{
		for (int i = 0; i < besHarfliIlDizisi[0].length(); i++)
		{
			int randomSayi = 0;
			randomSayi = rand() % 81;
			secilenIllerBes[i] = illerDizisi[randomSayi];
			secilenEnKisaIlBes = secilenIllerBes[0];
		}
		for (int p = 0; p < besHarfliIlDizisi[0].length(); p++)
		{
			if (secilenEnKisaIlBes.length() > secilenIllerBes[p].length())
			{
				secilenEnKisaIlBes = secilenIllerBes[p];
			}
		}
		for (int i = 0; i < secilenEnKisaIlBes.length(); i++)
		{
			string ilKondrolBes;

			for (int z = 0; z < besHarfliIlDizisi[0].length(); z++)
			{
				ilKondrolBes += secilenIllerBes[z].substr(i, 1);
			}
			for (int x = 0; x < besHarfliIlDizisiElemanSayisi; x++)
			{
				if (ilKondrolBes == besHarfliIlDizisi[x])
				{
					cout << endl;
					int ilNo = 1;

					for (int sayacBesHarf = 0; besHarfliIlDizisi[0].length() > sayacBesHarf; sayacBesHarf++)
					{
						cout << "Seçilen Ýl " << ilNo << ":" << secilenIllerBes[sayacBesHarf] << endl;
						ilNo++;
					}
					cout << endl;
					cout << "Bulunana Ýl : " << besHarfliIlDizisi[x] << endl;
					cout << "--------------------------------" << endl;
					besHarfBulunanDenemeSayisi++;
					break;
				}
				else
					besHarfBulunamayanDenemeSayisi++;
			}
		}
	}
	if (besHarfBulunanDenemeSayisi == 0)
	{
		cout << endl;
		cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;
		cout << endl;
		cout << "!!!!! Seçili Beþ Ýl Arasaýnda Ýl Bulunamadý !!!!!" << endl;
	}
	cout << endl;
	cout << "Seçili Bes Ýl Arasaýnda Ýl Bulunan Deneme Sayýsý: :" << besHarfBulunanDenemeSayisi << endl;
	cout << "Seçili Bes Ýl Arasaýnda Ýl Bulunanmayan Deneme Sayýsý :" << besHarfBulunamayanDenemeSayisi << endl;
	cout << endl;
	cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;




	int altiHarfBulunanDenemeSayisi = 0;
	int altiHarfBulunamayanDenemeSayisi = 0;

	string secilenIllerAlti[6];
	string secilenEnKisaIlAlti;

	for (int deneme = 0; deneme < 100000; deneme++)
	{
		for (int i = 0; i < altiHarfliIlDizisi[0].length(); i++)
		{
			int randomSayi = 0;
			randomSayi = rand() % 81;
			secilenIllerAlti[i] = illerDizisi[randomSayi];
			secilenEnKisaIlAlti = secilenIllerAlti[0];
		}
		for (int p = 0; p < altiHarfliIlDizisi[0].length(); p++)
		{
			if (secilenEnKisaIlAlti.length() > secilenIllerAlti[p].length())
			{
				secilenEnKisaIlAlti = secilenIllerAlti[p];
			}
		}
		for (int i = 0; i < secilenEnKisaIlAlti.length(); i++)
		{
			string ilKondrolAlti;

			for (int z = 0; z < altiHarfliIlDizisi[0].length(); z++)
			{
				ilKondrolAlti += secilenIllerAlti[z].substr(i, 1);
			}
			for (int x = 0; x < altiHarfliIlDizisiElemanSayisi; x++)
			{
				if (ilKondrolAlti == altiHarfliIlDizisi[x])
				{
					cout << endl;
					int sayac2 = 1;

					for (int sayacAltiHarf = 0; altiHarfliIlDizisi[0].length() > sayacAltiHarf; sayacAltiHarf++)
					{
						cout << "Seçilen Ýl " << sayac2 << ":" << secilenIllerAlti[sayacAltiHarf] << endl;
						sayac2++;
					}
					cout << endl;
					cout << "Bulunana Ýl : " << altiHarfliIlDizisi[x] << endl;
					cout << "--------------------------------" << endl;
					altiHarfBulunanDenemeSayisi++;
					break;
				}
				else
					altiHarfBulunamayanDenemeSayisi++;
			}
		}
	}
	if (altiHarfBulunanDenemeSayisi == 0)
	{
		cout << endl;
		cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;
		cout << endl;
		cout << "!!!!! Seçili Altý Ýl Arasaýnda Ýl Bulunamadý !!!!!" << endl;
	}
	cout << endl;
	cout << "Seçili Alti Ýl Arasaýnda Ýl Bulunan Deneme Sayýsý :" << altiHarfBulunanDenemeSayisi << endl;
	cout << "Seçili Alti Ýl Arasaýnda Ýl Bulunanmayan Deneme Sayýsý :" << altiHarfBulunamayanDenemeSayisi << endl;
	cout << endl;
	cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;




	int yedizHarfBulunanDenemeSayisi = 0;
	int yediHarfBulunamayanDenemeSayisi = 0;

	string secilenIllerYedi[7];
	string secilenEnKisaIlYedi;

	for (int deneme = 0; deneme < 100000; deneme++)
	{
		for (int i = 0; i < yediHarfliIlDizisi[0].length(); i++)
		{
			int randomSayi = 0;
			randomSayi = rand() % 81;
			secilenIllerYedi[i] = illerDizisi[randomSayi];
			secilenEnKisaIlYedi = secilenIllerYedi[0];
		}
		for (int p = 0; p < yediHarfliIlDizisi[0].length(); p++)
		{
			if (secilenEnKisaIlYedi.length() > secilenIllerYedi[p].length())
			{
				secilenEnKisaIlYedi = secilenIllerYedi[p];
			}
		}
		for (int i = 0; i < secilenEnKisaIlYedi.length(); i++)
		{
			string ilKondrolYedi;

			for (int z = 0; z < yediHarfliIlDizisi[0].length(); z++)
			{
				ilKondrolYedi += secilenIllerYedi[z].substr(i, 1);
			}
			for (int x = 0; x < yediHarfliIlDizisiElemanSayisi; x++)
			{
				if (ilKondrolYedi == yediHarfliIlDizisi[x])
				{
					cout << endl;
					int ilNo = 1;

					for (int sayacYediHarf = 0; yediHarfliIlDizisi[0].length() > sayacYediHarf; sayacYediHarf++)
					{
						cout << "Seçilen Ýl " << ilNo << ":" << secilenIllerYedi[sayacYediHarf] << endl;
						ilNo++;
					}
					cout << endl;
					cout << "Bulunana Ýl : " << yediHarfliIlDizisi[x] << endl;
					cout << "--------------------------------" << endl;
					yedizHarfBulunanDenemeSayisi++;
					break;
				}
				else
					yediHarfBulunamayanDenemeSayisi++;
			}
		}
	}
	if (yedizHarfBulunanDenemeSayisi == 0)
	{
		cout << endl;
		cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;
		cout << endl;
		cout << "!!!!! Seçili Yedi Ýl Arasaýnda Ýl Bulunamadý !!!!!" << endl;
	}
	cout << endl;
	cout << "Seçili Yedi Ýl Arasaýnda Ýl Bulunan Deneme Sayýsý :" << yedizHarfBulunanDenemeSayisi << endl;
	cout << "Seçili Yedi Ýl Arasaýnda Ýl Bulunanmayan Deneme Sayýsý :" << yediHarfBulunamayanDenemeSayisi << endl;
	cout << endl;
	cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;




	int sekizHarfBulunanDenemeSayisi = 0;
	int sekizHarfBulunamayanDenemeSayisi = 0;

	string secilenIllerSekiz[8];
	string secilenEnKisaIlSekiz;

	for (int deneme = 0; deneme < 100000; deneme++)
	{
		for (int i = 0; i < sekizHarfliIlDizisi[0].length(); i++)
		{
			int randomSayi = 0;
			randomSayi = rand() % 81;
			secilenIllerSekiz[i] = illerDizisi[randomSayi];
			secilenEnKisaIlSekiz = secilenIllerSekiz[0];
		}
		for (int p = 0; p < sekizHarfliIlDizisi[0].length(); p++)
		{
			if (secilenEnKisaIlSekiz.length() > secilenIllerSekiz[p].length())
			{
				secilenEnKisaIlSekiz = secilenIllerSekiz[p];
			}
		}
		for (int i = 0; i < secilenEnKisaIlSekiz.length(); i++)
		{
			string ilKondrolSekiz;

			for (int z = 0; z < sekizHarfliIlDizisi[0].length(); z++)
			{
				ilKondrolSekiz += secilenIllerSekiz[z].substr(i, 1);
			}

			for (int x = 0; x < sekizHarfliIlDizisiElemanSayisi; x++)
			{
				if (ilKondrolSekiz == sekizHarfliIlDizisi[x])
				{
					cout << endl;
					int ilNo = 1;

					for (int sayacSekizHarf = 0; sekizHarfliIlDizisi[0].length() > sayacSekizHarf; sayacSekizHarf++)
					{
						cout << "Seçilen Ýl " << ilNo << ":" << secilenIllerSekiz[sayacSekizHarf] << endl;
						ilNo++;
					}
					cout << endl;
					cout << "Bulunana Ýl : " << sekizHarfliIlDizisi[x] << endl;
					cout << "--------------------------------" << endl;
					sekizHarfBulunanDenemeSayisi++;
					break;
				}
				else
					sekizHarfBulunamayanDenemeSayisi++;
			}
		}
	}
	if (sekizHarfBulunanDenemeSayisi == 0)
	{
		cout << endl;
		cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;
		cout << endl;
		cout << "!!!!! Seçili Sekiz Ýl Arasaýnda Ýl Bulunamadý !!!!!" << endl;
	}
	cout << endl;
	cout << "Seçili Sekiz Ýl Arasaýnda Ýl Bulunan Deneme Sayýsý :" << sekizHarfBulunanDenemeSayisi << endl;
	cout << "Seçili Sekiz Ýl Arasaýnda Ýl Bulunanmayan Deneme Sayýsý :" << sekizHarfBulunamayanDenemeSayisi << endl;
	cout << endl;
	cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;




	int dokuzHarfBulunanDenemeSayisi = 0;
	int dokuzHarfBulunamayanDenemeSayisi = 0;

	string secilenIllerDokuz[9];
	string secilenEnKisaIlDokuz;

	for (int deneme = 0; deneme < 100000; deneme++)
	{
		for (int i = 0; i < dokuzHarfliIlDizisi[0].length(); i++)
		{
			int randomSayi = 0;
			randomSayi = rand() % 81;
			secilenIllerDokuz[i] = illerDizisi[randomSayi];
			secilenEnKisaIlDokuz = secilenIllerDokuz[0];
		}
		for (int p = 0; p < dokuzHarfliIlDizisi[0].length(); p++)
		{
			if (secilenEnKisaIlDokuz.length() > secilenIllerDokuz[p].length())
			{
				secilenEnKisaIlDokuz = secilenIllerDokuz[p];
			}
		}
		for (int i = 0; i < secilenEnKisaIlDokuz.length(); i++)
		{
			string ilKondrolDokuz;

			for (int z = 0; z < dokuzHarfliIlDizisi[0].length(); z++)
			{
				ilKondrolDokuz += secilenIllerDokuz[z].substr(i, 1);
			}
			for (int x = 0; x < dokuzHarfliIlDizisiElemanSayisi; x++)
			{
				if (ilKondrolDokuz == dokuzHarfliIlDizisi[x])
				{
					cout << endl;
					int ilNo = 1;

					for (int sayacDokuzHarf = 0; dokuzHarfliIlDizisi[0].length() > sayacDokuzHarf; sayacDokuzHarf++)
					{
						cout << "Seçilen Ýl " << ilNo << ":" << secilenIllerDokuz[sayacDokuzHarf] << endl;
						ilNo++;
					}
					cout << endl;
					cout << "Bulunana Ýl : " << dokuzHarfliIlDizisi[x] << endl;
					cout << "--------------------------------" << endl;
					dokuzHarfBulunanDenemeSayisi++;
					break;
				}
				else
					dokuzHarfBulunamayanDenemeSayisi++;
			}
		}
	}
	if (dokuzHarfBulunanDenemeSayisi == 0)
	{
		cout << endl;
		cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;
		cout << endl;
		cout << "!!!!! Seçili Dokuz Ýl Arasaýnda Ýl Bulunamadý !!!!!" << endl;
	}
	cout << endl;
	cout << "Seçili Dokuz Ýl Arasaýnda Ýl Bulunan Deneme Sayýsý :" << dokuzHarfBulunanDenemeSayisi << endl;
	cout << "Seçili Dokuz Ýl Arasaýnda Ýl Bulunanmayan Deneme Sayýsý :" << dokuzHarfBulunamayanDenemeSayisi << endl;
	cout << endl;
	cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;




	int onHarfBulunanDenemeSayisi = 0;
	int onHarfBulunamayanDenemeSayisi = 0;

	string secilenIllerOn[10];
	string secilenEnKisaIlOn;
	for (int deneme = 0; deneme < 100000; deneme++)
	{
		for (int i = 0; i < onHarfliIlDizisi[0].length(); i++)
		{
			int randomSayi = 0;
			randomSayi = rand() % 81;
			secilenIllerOn[i] = illerDizisi[randomSayi];
			secilenEnKisaIlOn = secilenIllerOn[0];
		}
		for (int p = 0; p < onHarfliIlDizisi[0].length(); p++)
		{
			if (secilenEnKisaIlOn.length() > secilenIllerOn[p].length())
			{
				secilenEnKisaIlOn = secilenIllerOn[p];
			}

		}
		for (int i = 0; i < secilenEnKisaIlOn.length(); i++)
		{
			string ilKondrolOn;

			for (int z = 0; z < onHarfliIlDizisi[0].length(); z++)
			{
				ilKondrolOn += secilenIllerOn[z].substr(i, 1);
			}
			for (int x = 0; x < onHarfliIlDizisiElemanSayisi; x++)
			{
				if (ilKondrolOn == onHarfliIlDizisi[x])
				{
					cout << endl;
					int ilNo = 1;

					for (int sayacOnHarf = 0; onHarfliIlDizisi[0].length() > sayacOnHarf; sayacOnHarf++)
					{
						cout << "Seçilen Ýl " << ilNo << ":" << secilenIllerOn[sayacOnHarf] << endl;
						ilNo++;
					}
					cout << endl;
					cout << "Bulunana Ýl : " << onHarfliIlDizisi[x] << endl;
					cout << "--------------------------------" << endl;
					onHarfBulunanDenemeSayisi++;
					break;
				}
				else
					onHarfBulunamayanDenemeSayisi++;
			}
		}
	}
	if (onHarfBulunanDenemeSayisi == 0)
	{
		cout << endl;
		cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;
		cout << endl;
		cout << "!!!!! Seçili On Ýl Arasaýnda Ýl Bulunamadý !!!!!" << endl;
	}
	cout << endl;
	cout << "Seçili On Ýl Arasaýnda Ýl Bulunan Deneme Sayýsý :" << onHarfBulunanDenemeSayisi << endl;
	cout << "Seçili On Ýl Arasaýnda Ýl Bulunanmayan Deneme Sayýsý :" << onHarfBulunamayanDenemeSayisi << endl;
	cout << endl;
	cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;




	int onUcHarfBulunanDenemeSayisi = 0;
	int onUcHarfBulunamayanDenemeSayisi = 0;

	string secilenIllerOnUc[13];
	string secilenEnKisaIlOnUc;
	for (int deneme = 0; deneme < 100000; deneme++)
	{
		for (int i = 0; i < onUcHarfliIlDizisi[0].length(); i++)
		{
			int randomSayi = 0;
			randomSayi = rand() % 81;
			secilenIllerOnUc[i] = illerDizisi[randomSayi];
			secilenEnKisaIlOnUc = secilenIllerOnUc[0];
		}
		for (int p = 0; p < onUcHarfliIlDizisi[0].length(); p++)
		{
			if (secilenEnKisaIlOnUc.length() > secilenIllerOnUc[p].length())
			{
				secilenEnKisaIlOnUc = secilenIllerOnUc[p];
			}
		}
		for (int i = 0; i < secilenEnKisaIlOnUc.length(); i++)
		{
			string ilKondrolOnUc;

			for (int z = 0; z < onUcHarfliIlDizisi[0].length(); z++)
			{
				ilKondrolOnUc += secilenIllerOnUc[z].substr(i, 1);
			}
			for (int x = 0; x < onUcHarfliIlDizisiElemanSayisi; x++)
			{
				if (ilKondrolOnUc == onUcHarfliIlDizisi[x])
				{
					cout << endl;
					int ilNo = 1;

					for (int sayacOnUcHarf = 0; onUcHarfliIlDizisi[0].length() > sayacOnUcHarf; sayacOnUcHarf++)
					{
						cout << "Seçilen Ýl " << ilNo << ":" << secilenIllerOnUc[sayacOnUcHarf] << endl;
						ilNo++;
					}
					cout << endl;
					cout << "Bulunana Ýl : " << onUcHarfliIlDizisi[x] << endl;
					cout << "--------------------------------" << endl;
					onUcHarfBulunanDenemeSayisi++;
					break;
				}
				else
					onUcHarfBulunamayanDenemeSayisi++;
			}
		}
	}
	if (onUcHarfBulunanDenemeSayisi == 0)
	{
		cout << endl;
		cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;
		cout << endl;
		cout << "!!!!! Seçili On Üç Ýl Arasaýnda Ýl Bulunamadý !!!!!" << endl;
	}
	cout << endl;
	cout << "Seçili On Üç Ýl Arasaýnda Ýl Bulunan Deneme Sayýsý :" << onUcHarfBulunanDenemeSayisi << endl;
	cout << "Seçili On Üç Ýl Arasaýnda Ýl Bulunayamayan Deneme Sayýsý :" << onUcHarfBulunamayanDenemeSayisi << endl;
	cout << endl;
	cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;




	int onDortHarfBulunanDenemeSayisi = 0;
	int onDortHarfBulunamayanDenemeSayisi = 0;

	string secilenIllerOnDort[14];
	string secilenEnKisaIlOnDort;
	for (int deneme = 0; deneme < 100000; deneme++)
	{
		for (int i = 0; i < onDortHarfliIlDizisi[0].length(); i++)
		{
			int randomSayi = 0;
			randomSayi = rand() % 81;
			secilenIllerOnDort[i] = illerDizisi[randomSayi];
			secilenEnKisaIlOnDort = secilenIllerOnDort[0];
		}
		for (int p = 0; p < onDortHarfliIlDizisi[0].length(); p++)
		{
			if (secilenEnKisaIlOnDort.length() > secilenIllerOnDort[p].length())
			{
				secilenEnKisaIlOnDort = secilenIllerOnDort[p];
			}
		}
		for (int i = 0; i < secilenEnKisaIlOnDort.length(); i++)
		{
			string ilKondrolOnDort;

			for (int z = 0; z < onDortHarfliIlDizisi[0].length(); z++)
			{
				ilKondrolOnDort += secilenIllerOnDort[z].substr(i, 1);
			}
			for (int x = 0; x < onDortHarfliIlDizisiElemanSayisi; x++)
			{
				if (ilKondrolOnDort == onDortHarfliIlDizisi[x])
				{
					cout << endl;
					int ilNo = 1;

					for (int sayacOnDortHarf = 0; onDortHarfliIlDizisi[0].length() > sayacOnDortHarf; sayacOnDortHarf++)
					{
						cout << "Seçilen Ýl " << ilNo << ":" << secilenIllerOnDort[sayacOnDortHarf] << endl;
						ilNo++;
					}
					cout << endl;
					cout << "Bulunana Ýl : " << onDortHarfliIlDizisi[x] << endl;
					cout << "--------------------------------" << endl;
					onDortHarfBulunanDenemeSayisi++;
					break;
				}
				else
					onDortHarfBulunamayanDenemeSayisi++;
			}
		}
	}
	if (onDortHarfBulunanDenemeSayisi == 0)
	{
		cout << endl;
		cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;
		cout << endl;
		cout << "!!!!! Seçili On Dört Ýl Arasaýnda Ýl Bulunamadý !!!!!" << endl;
	}
	cout << endl;
	cout << "Seçili On Dört Ýl Arasaýnda Ýl Bulunan Deneme Sayýsý : " << onDortHarfBulunanDenemeSayisi << endl;
	cout << "Seçili On Dört Ýl Arasaýnda Ýl Bulunayamayan Deneme Sayýsý :" << onDortHarfBulunamayanDenemeSayisi << endl;
	cout << endl;
	cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;

	system("pause");
	return 0;
}