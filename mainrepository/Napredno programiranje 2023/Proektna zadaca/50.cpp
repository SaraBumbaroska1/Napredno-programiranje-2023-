#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;
//definiranje na sturktura
struct Pesna
{
	string brIndex="INKI967";
	string ime;
	string izverduvac="James Hype";
	string text={"I still want your hands up on my body You still make my heart beat fast Ferrari With me in the wave but in the morning"};
};
//funkcija za sortiranje
bool funkcija(int i, int j){return i>j;}
int main()
{
	struct Pesna p;
	vector<int> v(100);
	vector<int>::iterator iterator;
	int n,index,br,ce,maxCifra=0,b[100],k=0;
	//vnesuvanej napdoatoci
	cout<<"\n Vnesete ime student : ";
	cin>>p.ime;
	//odreduvane na maksimalna cifra
	char max=p.brIndex[3];
	for(int i=0;i<p.brIndex.length();i++)
		if(isdigit(p.brIndex[i]))
		if(p.brIndex[i]>max)
			max=p.brIndex[i];
		
		
		
	//odreduvanje na ascii kodivte od bukvite
	for(int j=0;j<p.text.length();j++)
		if(isalpha(p.text[j]))
			{
				b[k]=(int)(p.text[j]+maxCifra);
				k++;
			}
			cout<<endl;
		
		cout<<endl;
		//zapi[uvawe na elementie vo vektor
		for(int i=0;i<k;i++)
		v.push_back(b[i]);	
		//prika zn apodatocite preku iterator
	cout<<"\n Vrednsoti od vektor za studentot "<<p.ime<<endl;
	cout<<" ";
	for(iterator=v.begin();iterator<v.end();++iterator)
	{
		if((*iterator)!=0)
		cout<<(*iterator)<<" ";			
	}
	cout<<endl<<endl;
	sort(v.begin(),v.end(),funkcija);
	cout<<"\n Sortirani vrednosti od vektor za studentot "<<p.ime;
	cout<<endl;
	cout<<" ";
	for(iterator=v.begin();iterator<v.end();++iterator)
	{
		if((*iterator)!=0)
		cout<<(*iterator)<<" ";			
	}
	//upis na podatocite vo dtaoteka preku iterator
	ofstream datoteka("967.Proect03.txt");
	datoteka<<"\n Vnesen tekst od pesna "<<endl;
	for(int i=0;i<p.text.length();i++)
		datoteka<<p.text[i];
	datoteka<<endl<<endl;
	datoteka<<"\n Vektor sortiran : "<<endl;
	for(iterator=v.begin();iterator<v.end();++iterator)
	{
		if((*iterator)!=0)
		datoteka<<(*iterator)<<" ";			
	}
}
