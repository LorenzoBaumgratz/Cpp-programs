#include <iostream>
#include <string>
#include <vector>
#include <fstream>

bool LoadDatabase(string filename,vector<string>&vet);
bool SaveDatabase(string filename,const vector<string>&vet);
using namespace std;
int main(){

	vector<string> vet;
	

	//como a lista sera manipulada precisa usar ponteiro
	/*void InsertWord(vector<string> &vet)
            cin>>name;
			vet.push_back(name);
			cout<<endl;*/

    //passagem por referencia para consulta; sem copia
    //void PrintWord(const vector<string> &vet)
    //bool SearchWord(const vector<string> &vet, string query)
    /*if(....)
    {
    return true
    }*/


	int c,i,k;
	int x=0;
	string name;

	LoadDatabase(database,vet);
	while(x==0){

	cout<<"\n"
		<<"1.Insert String \n"
		<<"2.Print Index and String\n"
		<<"3.Search string (literal)\n"
		<<"4.Search substrings\n"
		<<"5.Remove string (by index)\n"
		<<"6.Remove by substrings (all occurrences)\n"
		<<"\n"
		<<"0.Quit\n"
		<<"\n";

	cin>>c;
	cout<<endl;

	switch(c){

		case 1:
			cin>>name;
			vet.push_back(name);
			cout<<endl;
			break;

		case 2:
			for(size_t i=0;i<vet.size();i++){
			cout<<vet.at(i)<<" ["<<i<<"] "<<endl;
		}
			break;

		case 3:
			cin>>name;
			cout<<endl;
			for(i=0;i<vet.size();i++){
				if(vet[i]==name)
					cout<<"Found at ["<<i<<"]"<<endl;
		}
			break;

		case 4:
		cin>>name;
			cout<<endl;
			for(i=0;i<vet.size();i++){
				if(vet[i].find(name)==std::string::npos)
					cout<<" ";
				else
					cout<<"Found at ["<<i<<"]"<<endl;
					/*
					for(size_t i=0;i<vec.size();i++)


					size_t pos=vec.find(name)
					if(pos<vec.size())
					substring has found*/

				}
		case 5:
			cin>>i;
			if(i>=0 && i<vet.size()){
                cout<<endl;
				vet.erase(vet.begin()+i);
			}
			else
			cout<<"Invalid index"<<endl;

			break;

		case 6:
			cin>>name;
			k=vet.size();
				for(int j=0;j<k;j++){
					for(i=0;i<vet.size();i++){
					if(vet.at(i).find(name)!=std::string::npos)
					vet.erase(vet.begin()+i);
					}
				}
			break;

		case 0:
		SaveDatabase(database,vet);
			x=1;
			break;
	}
}

	return 0;
}
bool LoadDatabase(string filename,vector<string>&vet){
 ifstream filereader(filename);
    if(filewritter.is_open())
    {
        string tmp;
        while(getline(filereader,tmp)){
        vec.push_back(tmp);

        filereader.close();
        return true;
    }
    else{
    return false;
    }

}
}

bool SaveDatabase(string filename,const vector<string>&vet)
{
    ofstream filewriter(filename);
    if(filewritter.is_open())
    {
        for(size_t i=0; i<vet.size();i++)
        {
            filewritter<<vet.at(i)<<endl;
        }
        filewriter.close();
        return true;
    }
    else{
    return false;
    }

}
