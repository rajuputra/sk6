using namespace std;

class Input {
	public :
		void cetak (){
			cout << " Menghitung nilai per mata kuliah" <<endl;
			cout << " Masukan nama dosen : ";cin>>nama;
			cout << " Mata kuliah yg nilainya ingin dihitung : ";cin>>matkul;
      		cout << " Banyak nilai yg ingin dihitung : ";cin>>nilai;
			for (int i = 0; i < nilai; i++)
			{
				cout << " Nilai mahasiswa ke "<< i+1 << " = ";
				cin >>mhs[i];
			}
		}
		void toFile(){
			tulis_data.open("apidata.txt");
			tulis_data << nama <<endl;
			tulis_data << matkul <<endl;
      tulis_data << nilai <<endl;
			for (int i = 0; i < nilai; i++)
			{
				tulis_data << mhs[i]<<endl;
			}
			tulis_data.close();
		}
		
	private :
		ofstream tulis_data;
    	string nama,matkul;
		int nilai,mhs[30];
};
