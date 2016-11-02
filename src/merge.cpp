#include "Merge.h"

fstream fichero;

Merge::Merge()
{
    MergeSort(Dato);
}


array<int,100> Merge::Leer_i()
{
	int i=0; 
    
	//int Dato[100];
	fichero.open("test_merge.txt",ios::in);
 	fichero >> Dato[0];  
 	i++;          
    while (!fichero.eof())
    {  
    	fichero >> Dato[i];
    	i++;            
    }
    fichero.close();
    cout << Dato[0]<< endl;
    cout << Dato[1]<< endl;
    cout << Dato[2]<< endl;
    cout << Dato[3]<< endl;
    cout << Dato[4]<< endl;
    cout << Dato[5]<< endl;
    cout << Dato[6]<< endl;
    cout << Dato[7]<< endl;
    cout << Dato[8]<< endl;
    cout << Dato[9]<< endl;
    cout << Dato[10]<< endl;
	cout << Dato[11]<< endl;
    cout << Dato[12]<< endl;
    cout << Dato[13]<< endl;
    cout << Dato[14]<< endl;
    cout << Dato[15]<< endl;
    cout << Dato[16]<< endl;
    cout << Dato[17]<< endl;
    cout << Dato[18]<< endl;
    cout << Dato[19]<< endl;
    cout << Dato[20]<< endl;
    cout << Dato[21]<< endl;
    cout << Dato[22]<< endl;
    cout << Dato[23]<< endl;
    cout << Dato[24]<< endl;
    cout << Dato[25]<< endl;
    cout << Dato[26]<< endl;
    cout << Dato[27]<< endl;
    cout << Dato[28]<< endl;
}
array<int,100> Merge::MergeSort(array<int,100> Dato)
{
    j = 0;
    for (i = 0; i < Dato.size() ; ++i){
        if (i<Dato.size()/2){
            izq[i]=Dato[i];
        }
        else{
            der[j]=Dato[i];
            ++j;
        }       
    }
    if (izq.size()>1){
        izq = MergeSort(izq);      
    }
    if (der.size()>1){
        der = MergeSort(der);      
    }

    std::array<int,100> Res;
    i=0,j=0,k = 0;
    while(i<izq.size()&&j<der.size()){
        if (izq[i]<der[j]){
            Res[k]=izq[i];
            ++i;
        }
        else{
            if (der[j]<izq[i]){
                Res[k]=der[j];
                ++j;
            }
            else{
                Res[k]=izq[i];
                ++k;
                Res[k]=der[j];
                ++i;
                ++j;
            }
        }
        ++k;
    }
    if (i<izq.size()){
        while(i<izq.size()){
            Res[k]=izq[i];
            ++i;
            ++k;
        }
    }
    if (j<der.size()){
        while(j<der.size()){
            Res[k]=der[j];
            ++j;
            ++k;
        }
    }
    return Res;
}