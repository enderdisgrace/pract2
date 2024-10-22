#ifndef DyV
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

template<typename val>

int BusquedaBinaria(val X, std::vector<val> V, int ini, int fin){

        if(ini>fin){
		
		cout << "No está en el array"<<endl;
		return -1;

	}	
         
        int medio = (ini + fin) / 2; 
        if (V[medio] == X){ 
                 return V[medio];
	} 
	else if(V[medio] > X){ 
                 return BusquedaBinaria(X, V, ini, medio- 1);}
        else{	
                 return BusquedaBinaria(X, V, medio + 1, fin);	
  	}


}	

template<typename val>
void  QuickSort(val V[], int ini, int fin){
        if( ini < fin){ 
                 int pivot = Partition(V, ini, fin);
                 QuickSort(V, ini, pivot - 1);
                 QuickSort(V, pivot + 1, fin);
	}
}

template<typename val>
int Partition(val V[], int ini, int fin){
         val x = V[fin];
         int i = ini;
         for (int j=ini; j<fin-1; j++){
               if (V[j] <= x){
                     swap(V[i],V[j]);
                     i = i + 1;}
         swap( V[i],V[fin]);
         return i;}
}





#endif




