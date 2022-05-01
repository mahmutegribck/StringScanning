#include <iostream>  
#include <locale.h>
#include <string>
#include <stdlib.h>


using namespace std;


int main()
{
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));					//rastgele say� �retmek i�in kullan�ld�.

	//�lleri i�eren string olu�turuldu.
	string iller = "ADANA ADIYAMAN AFYONKARAH�SAR A�RI AKSARAY AMASYA ANKARA ANTALYA ARDAHAN ARTV�N AYDIN BALIKES�R BARTIN BATMAN BAYBURT B�LEC�K B�NG�L B�TL�S BOLU BURDUR BURSA �ANAKKALE �ANKIRI �ORUM DEN�ZL� D�YARBAKIR D�ZCE ED�RNE ELAZI� ERZ�NCAN ERZURUM ESK��EH�R GAZ�ANTEP G�RESUN G�M��HANE HAKK�R� HATAY I�DIR ISPARTA �STANBUL �ZM�R KAHRAMANMARA� KARAB�K KARAMAN KARS KASTAMONU KAYSER� K�L�S KIRIKKALE KIRKLAREL� KIR�EH�R KOCAEL� KONYA K�TAHYA MALATYA MAN�SA MARD�N MERS�N MU�LA MU� NEV�EH�R N��DE ORDU OSMAN�YE R�ZE SAKARYA SAMSUN �ANLIURFA S��RT S�NOP S�VAS �IRNAK TEK�RDA� TOKAT TRABZON TUNCEL� U�AK VAN YALOVA YOZGAT ZONGULDAK";

	string illerDizisi[81];				//�lleri dizi haline getirmek i�in 81 elemanl� bir diziye atamak i�in illerDizisi tan�mland�.
	string enK�saIlDizisi[100];			//En k�sa harfli illeri olu�turacak dizi tan�mland�.
	string enUzunIlDizisi[100];			//En uzun harfli illeri olu�turacak dizi tan�mland�.

	int diziIllerElemanSayisi = 0;					//�ller dizisinin eleman say�sn�n� belirlemek i�in atand�.
	int indisK�saIl = 0, indisUzunIl = 0;			//En k�sa ve en uzun harfli illeri tutacak dizilerin eleman say�lar�n� belirlemek i�in de�i�ken tan�mland� .

	while (0 < iller.length())        //
	{
		illerDizisi[diziIllerElemanSayisi] = iller.substr(0, iller.find(" "));
		string kontrolIller = iller;                                                        //�ller string i kontrolIller de�i�kenine atand�.
		iller = iller.substr(iller.find(" ") + 1, iller.length());							//Her d�ng�nde ilk bo�lu�a kadar olan kelime iller string'inden ��kar�ld�.

		if (kontrolIller == iller)            //�art sa�land���nda iller dizisinini i�i bo� olacak.
		{
			iller = "";
		}
		++diziIllerElemanSayisi;				//�ller dizisinin elaman say�s�n� belirler.
	}
	string enK�saIl = illerDizisi[0];			//En k�sa harfli ili iller dizisinin ilk eleman� kabul edildi.
	string enUzunIl = illerDizisi[0];

	for (int i = 0; i < diziIllerElemanSayisi; i++)		//�ller dizisinini eleman say�s� kullan�larak en uzun ve en k�sa il bulunur.
	{
		if (enK�saIl.length() > illerDizisi[i].length())		//�art sa�land���nda en k�sa il de�i�keninin yeni de�eri belirlenir ve en k�sa harfli ile ula��l�r.
		{
			enK�saIl = illerDizisi[i];
		}
		if (enUzunIl.length() < illerDizisi[i].length())		//�art sa�land���nda en uzun il de�i�keninin yeni de�eri belirlenir ve en uzun harfli ile ula��l�r.
		{
			enUzunIl = illerDizisi[i];
		}
	}
	//�nceki for d�ng�s�nde bulunan en uzun ve en k�sa harfli illere e�it olan varsa en k�sa il dizisine ve en uzun il dizisine atan�r ve dizi b�y�kl�kleri belirlenir.
	for (int i = 0; i < diziIllerElemanSayisi; i++)
	{
		if (enK�saIl.length() == illerDizisi[i].length())
		{
			enK�saIlDizisi[indisK�saIl] = illerDizisi[i];
			indisK�saIl++;
		}
		if (enUzunIl.length() == illerDizisi[i].length())
		{
			enUzunIlDizisi[indisUzunIl] = illerDizisi[i];
			indisUzunIl++;
		}
	}
	cout << "En K�sa Iller :";

	for (int i = 0; i < indisK�saIl; i++)
	{
		cout << enK�saIlDizisi[i] << " ";
	}
	//En k�sa ve en uzun harfli iller yazd�r�l�r.
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
	string sekizHarfliIlDizisi[100];			//Belirli harf say�s�nda olan illerin tutulaca�� diziler olu�turuldu.
	string dokuzHarfliIlDizisi[100];
	string onHarfliIlDizisi[100];
	string onBirHarfliIlDizisi[100];
	string onIkiHarfliIlDizisi[100];
	string onUcHarfliIlDizisi[100];
	string onDortHarfliIlDizisi[100];

	int dortHarfliIlDizisiElemanSayisi = 0;
	int besHarfliIlDizisiElemanSayisi = 0;
	int altiHarfliIlDizisiElemanSayisi = 0;			//Belirli harf say�s�nda illeri tutan dizilerin eleman say�lar�n� belirlemek i�in de�i�kenler atand�.
	int yediHarfliIlDizisiElemanSayisi = 0;
	int sekizHarfliIlDizisiElemanSayisi = 0;
	int dokuzHarfliIlDizisiElemanSayisi = 0;
	int onHarfliIlDizisiElemanSayisi = 0;
	int onBirHarfliIlDizisiElemanSayisi = 0;
	int onIkiHarfliIlDizisiElemanSayisi = 0;
	int onUcHarfliIlDizisiElemanSayisi = 0;
	int onDortHarfliIlDizisiElemanSayisi = 0;

	//�ller dizisinin eleman say�s� kullan�larak iller dizisindeki elemanlar harf say�lar�na g�re yeni dizilere b�l�nd� ve dizi eleman say�lar� belirlendi.
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

	int ucHarfBulunanDenemeSayisi = 0;                   //�� harfli il bulunan ve bulunamayan deneme say�lar�n� tutacak de�i�kenler tan�mland�.
	int uctHarfBulunamayanDenemeSayisi = 0;

	string secilenIller[3];					//Se�ilen illerin atanaca�� dizi tan�mland�
	string secilenEnKisaIl = "";			//Se�ilen illerin aras�nda en k�sa olan�n atanaca��� de�i�ken tan�mland�

	for (int deneme = 0; deneme < 100000; deneme++)			  //Deneme say�s� a��ld���nda il bulunursa bulundu , bulunamazsa bulunamad� yazar.
	{
		for (int i = 0; i < enK�saIlDizisi[0].length(); i++)  //�ller dizisinden en k�sa il dizisinin herhangi bir eleman�n� unzunlu�u kadar rastgele il se�ilir.
		{
			int randomSayi = 0;
			randomSayi = rand() % 81;
			secilenIller[i] = illerDizisi[randomSayi];      //Rastgele se�ilen iller yeni diziye atan�r.
			secilenEnKisaIl = secilenIller[0];              //Se�ilen illerin herhangi biri en k�sa harfli il kabul edilir.
		}
		for (int p = 0; p < enK�saIlDizisi[0].length(); p++)			//En k�sa il dizisinin herhangi bir eleman�n� b�y�kl��� kullan�larak se�ilen illerini en k�sa harfli olan� bulunur
		{
			if (secilenEnKisaIl.length() > secilenIller[p].length())    //Se�ilen illerin aras�nda en az harfli olan� belirlenir.
			{
				secilenEnKisaIl = secilenIller[p];
			}
		}
		for (int i = 0; i < secilenEnKisaIl.length(); i++)     //Se�ilen illerin aras�nda en az harfli olan kadar kelimenini indisi denenir.
		{
			string ilKondrolUc;      //Se�ilen harfleri kelime �eklinde atanmas� i�in de�i�ken tan�mland�.

			for (int z = 0; z < enK�saIlDizisi[0].length(); z++)		//Her d�ng�de se�ilen illerin belirli harfleri al�n�r ve kontrol edilmesi i�in de�i�kene atan�r.
			{
				ilKondrolUc += secilenIller[z].substr(i, 1);
			}
			for (int x = 0; x < indisK�saIl; x++)			//En k�sa il dizisinin eleman say�s�na kadar for d�ng�s� �al���r
			{
				if (ilKondrolUc == enK�saIlDizisi[x])		//Elde edilen haflerin en k�sa il dizisinin i�inde olup olmad��� kontrol edilir.
				{
					cout << endl;
					int ilNo = 1;

					for (int sayacUcHarf = 0; enK�saIlDizisi[0].length() > sayacUcHarf; sayacUcHarf++)  //En k�sa il dizisinin herhangi bir eleman�n�n b�y�kl��� kullan�larak se�ilen iller yazd�r�l�r 
					{
						cout << "Se�ilen �l " << ilNo << ":" << secilenIller[sayacUcHarf] << endl;		//�l bulundu�unda se�ili olan iller yazd�r�l�r
						ilNo++;
					}
					cout << endl;
					cout << "Bulunana �l : " << enK�saIlDizisi[x] << endl;		//En k�sa harf dizisinde bulunan il yazd�r�l�r
					cout << "--------------------------------" << endl;
					ucHarfBulunanDenemeSayisi++;		//�l bulunan deneme say�s�n� tutar
					break;
				}
				else
					uctHarfBulunamayanDenemeSayisi++;		//�l bulunamayan deneme say�s�n� tutar
			}
		}
	}
	if (ucHarfBulunanDenemeSayisi == 0)   // Deneme sonucunda gerekli iller bulunamazsa if blo�u �al���r.
	{
		cout << endl;
		cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;
		cout << endl;
		cout << "!!!!! Se�ili ���l Arasa�nda �l Bulunamad� !!!!!" << endl;		//�l bulunamad���nda yazd�r�l�r
	}
	cout << endl;
	cout << "Se�ili �� �l Arasa�nda �l Bulunan Deneme Say�s� :" << ucHarfBulunanDenemeSayisi << endl;
	cout << "Se�ili �� �l Arasa�nda �l Bulunanmayan Deneme Say�s� :" << uctHarfBulunamayanDenemeSayisi << endl;
	cout << endl;
	cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;


	//		!!!!!!!!!!		HER BLOKTA HARF SAYILARINA G�RE ��LEMLER TEKRARLANIR		!!!!!!!!!!		

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
						cout << "Se�ilen �l " << ilNo << ":" << secilenIllerDort[sayacDortHarf] << endl;
						ilNo++;
					}
					cout << endl;
					cout << "Bulunana �l : " << dortHarfliIlDizisi[x] << endl;
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
		cout << "!!!!! Se�ili D�rt �l Arasa�nda �l Bulunamad� !!!!!" << endl;
	}
	cout << endl;
	cout << "Se�ili D�rt �l Arasa�nda �l Bulunan Deneme Say�s� :" << dortHarfBulunanDenemeSayisi << endl;
	cout << "Se�ili D�rt �l Arasa�nda �l Bulunanmayan Deneme Say�s� :" << dortHarfBulunamayanDenemeSayisi << endl;
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
						cout << "Se�ilen �l " << ilNo << ":" << secilenIllerBes[sayacBesHarf] << endl;
						ilNo++;
					}
					cout << endl;
					cout << "Bulunana �l : " << besHarfliIlDizisi[x] << endl;
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
		cout << "!!!!! Se�ili Be� �l Arasa�nda �l Bulunamad� !!!!!" << endl;
	}
	cout << endl;
	cout << "Se�ili Bes �l Arasa�nda �l Bulunan Deneme Say�s�: :" << besHarfBulunanDenemeSayisi << endl;
	cout << "Se�ili Bes �l Arasa�nda �l Bulunanmayan Deneme Say�s� :" << besHarfBulunamayanDenemeSayisi << endl;
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
						cout << "Se�ilen �l " << sayac2 << ":" << secilenIllerAlti[sayacAltiHarf] << endl;
						sayac2++;
					}
					cout << endl;
					cout << "Bulunana �l : " << altiHarfliIlDizisi[x] << endl;
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
		cout << "!!!!! Se�ili Alt� �l Arasa�nda �l Bulunamad� !!!!!" << endl;
	}
	cout << endl;
	cout << "Se�ili Alti �l Arasa�nda �l Bulunan Deneme Say�s� :" << altiHarfBulunanDenemeSayisi << endl;
	cout << "Se�ili Alti �l Arasa�nda �l Bulunanmayan Deneme Say�s� :" << altiHarfBulunamayanDenemeSayisi << endl;
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
						cout << "Se�ilen �l " << ilNo << ":" << secilenIllerYedi[sayacYediHarf] << endl;
						ilNo++;
					}
					cout << endl;
					cout << "Bulunana �l : " << yediHarfliIlDizisi[x] << endl;
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
		cout << "!!!!! Se�ili Yedi �l Arasa�nda �l Bulunamad� !!!!!" << endl;
	}
	cout << endl;
	cout << "Se�ili Yedi �l Arasa�nda �l Bulunan Deneme Say�s� :" << yedizHarfBulunanDenemeSayisi << endl;
	cout << "Se�ili Yedi �l Arasa�nda �l Bulunanmayan Deneme Say�s� :" << yediHarfBulunamayanDenemeSayisi << endl;
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
						cout << "Se�ilen �l " << ilNo << ":" << secilenIllerSekiz[sayacSekizHarf] << endl;
						ilNo++;
					}
					cout << endl;
					cout << "Bulunana �l : " << sekizHarfliIlDizisi[x] << endl;
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
		cout << "!!!!! Se�ili Sekiz �l Arasa�nda �l Bulunamad� !!!!!" << endl;
	}
	cout << endl;
	cout << "Se�ili Sekiz �l Arasa�nda �l Bulunan Deneme Say�s� :" << sekizHarfBulunanDenemeSayisi << endl;
	cout << "Se�ili Sekiz �l Arasa�nda �l Bulunanmayan Deneme Say�s� :" << sekizHarfBulunamayanDenemeSayisi << endl;
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
						cout << "Se�ilen �l " << ilNo << ":" << secilenIllerDokuz[sayacDokuzHarf] << endl;
						ilNo++;
					}
					cout << endl;
					cout << "Bulunana �l : " << dokuzHarfliIlDizisi[x] << endl;
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
		cout << "!!!!! Se�ili Dokuz �l Arasa�nda �l Bulunamad� !!!!!" << endl;
	}
	cout << endl;
	cout << "Se�ili Dokuz �l Arasa�nda �l Bulunan Deneme Say�s� :" << dokuzHarfBulunanDenemeSayisi << endl;
	cout << "Se�ili Dokuz �l Arasa�nda �l Bulunanmayan Deneme Say�s� :" << dokuzHarfBulunamayanDenemeSayisi << endl;
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
						cout << "Se�ilen �l " << ilNo << ":" << secilenIllerOn[sayacOnHarf] << endl;
						ilNo++;
					}
					cout << endl;
					cout << "Bulunana �l : " << onHarfliIlDizisi[x] << endl;
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
		cout << "!!!!! Se�ili On �l Arasa�nda �l Bulunamad� !!!!!" << endl;
	}
	cout << endl;
	cout << "Se�ili On �l Arasa�nda �l Bulunan Deneme Say�s� :" << onHarfBulunanDenemeSayisi << endl;
	cout << "Se�ili On �l Arasa�nda �l Bulunanmayan Deneme Say�s� :" << onHarfBulunamayanDenemeSayisi << endl;
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
						cout << "Se�ilen �l " << ilNo << ":" << secilenIllerOnUc[sayacOnUcHarf] << endl;
						ilNo++;
					}
					cout << endl;
					cout << "Bulunana �l : " << onUcHarfliIlDizisi[x] << endl;
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
		cout << "!!!!! Se�ili On �� �l Arasa�nda �l Bulunamad� !!!!!" << endl;
	}
	cout << endl;
	cout << "Se�ili On �� �l Arasa�nda �l Bulunan Deneme Say�s� :" << onUcHarfBulunanDenemeSayisi << endl;
	cout << "Se�ili On �� �l Arasa�nda �l Bulunayamayan Deneme Say�s� :" << onUcHarfBulunamayanDenemeSayisi << endl;
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
						cout << "Se�ilen �l " << ilNo << ":" << secilenIllerOnDort[sayacOnDortHarf] << endl;
						ilNo++;
					}
					cout << endl;
					cout << "Bulunana �l : " << onDortHarfliIlDizisi[x] << endl;
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
		cout << "!!!!! Se�ili On D�rt �l Arasa�nda �l Bulunamad� !!!!!" << endl;
	}
	cout << endl;
	cout << "Se�ili On D�rt �l Arasa�nda �l Bulunan Deneme Say�s� : " << onDortHarfBulunanDenemeSayisi << endl;
	cout << "Se�ili On D�rt �l Arasa�nda �l Bulunayamayan Deneme Say�s� :" << onDortHarfBulunamayanDenemeSayisi << endl;
	cout << endl;
	cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl;

	system("pause");
	return 0;
}