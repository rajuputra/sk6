using namespace std;

class Proses
{
public:
	void getData(){
		ambil_data.open("../dummy/out_input.txt");
		bool name = true;
		bool pelajaran = true;
		bool bnyk = true;
		while(!ambil_data.eof()){
			if(name){
				ambil_data>> dosen;
				name = false;
			}
			else if(pelajaran){
				ambil_data>>matkul;
				pelajaran = false;
			}
			else if(bnyk){
				ambil_data >> jumlah_nilai;
				bnyk = false;
			}
			else{
				for (int i = 0; i < jumlah_nilai; ++i)
				{
					ambil_data>> nilai[i];
				}
			}

		}
		ambil_data.close();

	}
	void cetak(){
		minimum = nilai[0];
  		for(i = 0; i < jumlah_nilai; i++) {
    		if (nilai[i] < minimum)  {
      			minimum = nilai[i];
    		}
  		}
  		maksimum = nilai[0];
  		for(i = 0; i < jumlah_nilai; i++) {
    		if (nilai[i] > maksimum)  {
      			maksimum = nilai[i];
    		}
  		}
  		total = 0;
  		for(i = 0; i < jumlah_nilai; i++){
    		total = total+nilai[i];
  		}
  		cout << "Nilai minimum : " << minimum << endl;
  		cout << "Nilai maksimum: " << maksimum << endl;
		cout << "Nilai rata2 : " << total/jumlah_nilai;	
	}
	void toFile(){
		tulis_data.open("apidata.txt");
		tulis_data << dosen << endl;
		tulis_data << matkul << endl;
		tulis_data << maksimum << endl;
		tulis_data << minimum << endl;
		tulis_data << total/jumlah_nilai << endl;
		tulis_data.close();
	}

private:
	ifstream ambil_data;
	ofstream tulis_data;
	string dosen, matkul;
	int nilai[10],jumlah_nilai,minimum,maksimum,total;
	int i = 1;
};
