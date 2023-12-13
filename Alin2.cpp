#include<iostream>
using namespace std;



int main(){

int baris;
int kolom;
int col = 0;

cout<<"masukkan jumlah variable : "<<endl;
cin>>kolom;

col = col + kolom + 1;
baris = kolom;
double matriks[baris][col];
float S;
    //input matriks
    for(int b = 0; b < baris; b++){
        cout<<"Masukkan persamaan ke : "<<b+1<<endl;
        for(int k = 0; k < col; k++){
            
            cin>>matriks[b][k];
        }
    }
    //menampilkan matriks
    cout<<"bentuk matriks : ";
    cout<<endl;
            for(int b = 0; b < baris; b++){
        for(int k = 0; k < col; k++){
            cout<<matriks[b][k] <<"\t";
        }
        cout<<endl;
    }
    //gauss segitiga bawah
    for(int row = 0; row < baris; row++ ){
            S = matriks[row][row];
        for(int k = 0; k < col; k++){
            matriks[row][k] /= S;
        }
        //menampilkan matriks
            cout<<endl;
            cout<<"baris ke: "<< row+1 <<" dibagi dengan "<<S<<endl;
                for(int b = 0; b < baris; b++){
                    for(int k = 0; k < col; k++){
                        cout<<matriks[b][k] <<"\t";
                  }
            cout<<endl;
                 }

        for(int i = row + 1; i < baris; i++){
            S = matriks[i][row];
            for(int k = 0; k < col; k++){
                matriks[i][k] = matriks[i][k] - matriks[row][k] * S;
            }
            //menampilkan matriks
            cout<<endl;
            cout<<"baris ke: "<< i+1 <<" dikurangi baris ke "<< i <<" dikali dengan "<<S<<endl ;
                for(int b = 0; b < baris; b++){
                    for(int k = 0; k < col; k++){
                        cout<<matriks[b][k] <<"\t";
                  }
            cout<<endl;
                 }

        }
    }
    //gauss jordan segitiga atas
    for(int brs= 1; brs < baris; brs++){
        for(int br = 0; br < baris - brs; br++){
        S = matriks[br][baris-brs];
        for(int k = 0; k < col; k++){
            matriks[br][k] -= matriks[baris-brs][k] * S;
        }

         cout<<endl;
            cout<<"baris ke: "<< br+1 <<" dikurangi baris ke "<< baris-brs+1 <<" dikali dengan "<<S<<endl ;
                for(int b = 0; b < baris; b++){
                    for(int k = 0; k < col; k++){
                        cout<<matriks[b][k] <<"\t";
                  }
            cout<<endl;
                 }
    }
    

    }
    
     //menampilkan matriks
            cout<<"matriks hasil : "<<endl;
                for(int b = 0; b < baris; b++){
                    for(int k = 0; k < col; k++){
                        cout<<matriks[b][k] <<"\t";
                  }
            cout<<endl;
                 }



//menampilkan hasil
cout<<endl;
cout<<"Hasiil : "<<endl;
for(int b = 0; b < baris; b++){

            cout<< "X" << b+1 <<"\t = "<<matriks[b][baris] <<"\t";
            cout<<endl;
    }


}