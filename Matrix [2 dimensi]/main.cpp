#include <iostream>
#include <conio.h>

using namespace std;

typedef int matrix [10][10];
int bara=0,kola=0,barb=0,kolb=0; 
matrix C;

void isi_matrix (matrix &x,int &m,int &n)
	/*fungsi untuk input matrix*/
{
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			cout<<"Masukan Elemen Matrix Ke-["<<i<<","<<j<<"]  =  ";cin>>x[i][j];
		}
	}
}

void cetak_matrix (matrix &x, int &m, int &n)
	/*fungsi untuk menampilkan matrix yang telah di inputkan*/
{
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			cout<<x[i][j]<<" ";}
		cout<<endl;
	}
}
void cetak_transpose (matrix &x, int &m, int &n)
	/*fungsi untuk mentranspose matrix dan mencetaknya*/
{
	cout<<" Matrix Transpose "<<endl;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
	C[i][j]=x[j][i];}
	}
	cout<<"Matrix Asal ="<<endl;
	cetak_matrix (x,m,n);
	cout<<"Matrik Transpose = "<<endl;
	cetak_matrix(C,n,m);
}

void matrix_AplusB (matrix &x, matrix &y,int &m, int &n,int &a, int &b)
	/*fungsi untuk menghitung Matrix A + Matrix B*/
{
	if((m==a)&&(n==b)){
	cout<<"Hasil Matrix A + B"<<endl;
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			C[i][j]= x[i][j] + y[i][j];
			cout<<C[i][j]<<" ";}
     cout<<endl;      }
	}
	else{cout<<"Matrix tidak bisa dihitung, sebab memiliki ordo yg berbeda"<<endl;}
}

void matrix_AminB (matrix &x, matrix &y,int &m, int &n,int &a, int &b)
	/*fungsi untuk menghitung Matrix A - Matrix B*/	
{
	if((m==a)&&(n==b)){
	cout<<"Hasil Matrix A - B"<<endl;
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			C[i][j]= x[i][j] - y[i][j];
			cout<<C[i][j]<<" ";}
     cout<<endl;       }
	}
	else{cout<<"Matrix tidak bisa dihitung, sebab memiliki ordo yg berbeda"<<endl;}
}

void matrix_BminA (matrix &x, matrix &y,int &m, int &n,int &a, int &b)
	/*fungsi untuk menghitung Matrix A - Matrix B*/
{
	if((m==a)&&(n==b)){
	cout<<"Hasil Matrix B - A"<<endl;
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			C[i][j]=y[i][j]-x[i][j];
			cout<<C[i][j]<<" ";}
     cout<<endl;       }
	}
	else{cout<<"Matrix tidak bisa dihitung, sebab memiliki ordo yg berbeda"<<endl;}
}

int main (){
	
	matrix A,B;
	int pil=0;
	lagi:
		system ("cls");
		cout<<"Membuat dan Memanipulasi Matrix "<<endl;
		cout<<"1. Isi Matrix A  "<<endl;
		cout<<"2. Isi Matrix B  "<<endl;
		cout<<"3. Cetak Matrik A "<<endl;
		cout<<"4. Cetak Matrik B "<<endl;
		cout<<"5. A + B  "<<endl;
		cout<<"6. A - B  "<<endl;
		cout<<"7. B - A  "<<endl;
		cout<<"8. Transpose A "<<endl;
		cout<<"9. Transpose B"<<endl;
		cout<<"0. Keluar "<<endl;
		
		cout<<"Masukan Pilihan = ";cin>>pil;
		switch (pil)
		{
			case 1:
				{
					cout<<"Mengisi Matrix A "<<endl;
					cout<<"Masukan Baris Matrix A ";cin>>bara;
					cout<<"Masukan Kolom Matrix A ";cin>>kola;
					isi_matrix (A,bara,kola);
					break; }
			case 2 :
					{
					cout<<"Mengisi Matrix B "<<endl;
					cout<<"Masukan Baris Matrix B ";cin>>barb;
					cout<<"Masukan Kolom Matrix B ";cin>>kolb;
					isi_matrix (B,barb,kolb);
					break; }
				
			case 3 : 
				{if ((bara==0)&&(kola==0)) cout<<"Matrix A belum ada "; 
				 else 
					 cout<<"Hasil Matrix "<<endl;
					 cetak_matrix (A,bara,kola);
				 break;} 
			case 4 :
				{if ((barb==0)&&(kolb==0)) cout<<"Matrix B belum ada "; 
				 else 
					 cout<<"Hasil Matrix "<<endl;
					 cetak_matrix (B,barb,kolb);
				 break;}
			case 5 :
				{matrix_AplusB(A,B,bara,kola,barb,kolb);
				break;}
			case 6 :
				{matrix_AminB(A,B,bara,kola,barb,kolb);
				break;}
			case 7 :
				{matrix_BminA(A,B,bara,kola,barb,kolb);
				break;}
			case 8 :
				{if ((bara==0)&&(kola==0)) cout<<"Matrix A belum ada "; 
				 else cetak_transpose(A,bara,kola);
				 break;}
			case 9 :
				{if ((barb==0)&&(kolb==0)) cout<<"Matrix B belum ada "; 
				 else cetak_transpose(B,barb,kolb);
				 break;}
			
			default:
			cout<<"Terimakasih"<<endl;;	
										
			}
			system ("pause");
			if(pil!=0) goto lagi;
					
getch();
}

