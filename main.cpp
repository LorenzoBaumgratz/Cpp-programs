#include <iostream>
#include <vector>


using namespace std;
//.push_back(elem) (add elem no vet)
//.pop_back (tira o ultimo elem)

int main()
{
    vector<int> vet1;
    vector<int> vet2(10);
    vector<int> vet3(10,8); //tds 10 elem tem valor 8
    //vector<int> vet4{10,20,30,40};

    vet2[0]=5;
    vet2[1]=-3;
    vet2[2]=7;

    for(int i=0;i<vet2.size();i++){
    cout<<vet2[i]<<endl;
    }


    return 0;
}
