using namespace std;
class Output{
  public:
    void cetak(){
      cout << endl<<endl;
      cout << " Nama Dosen = " << dosen <<endl;
      cout << " Nama Mata Kuliah yang diambil = "<<matkul<<endl;
      cout << " Nilai Maximum yang diproleh = " <<max<<endl;
      cout << " Nilai Minimum yang diproleh = " <<min<<endl;
      cout << " Nilai rata-rata yang ditetapkan = " <<rata_rata << endl;
    }
    void getData(){
      ambil_data.open("apidata.txt");
      bool dsn = true;
      bool mtklh = true;
      bool minim = true;
      bool maxim = true;
      while(!ambil_data.eof()){
        if (dsn){
          ambil_data>>dosen;
          dsn=false;
        }
        else if(mtklh){
          ambil_data>>matkul;
          mtklh=false;
        } 
        else if(maxim){
          ambil_data>>max;
          maxim=false;
        }
        else if(minim){
          ambil_data>>min;
          minim=false;
        }
        else{
          ambil_data>>rata_rata;
        }
      }
      ambil_data.close();
    }
    
  private:
    ifstream ambil_data;
    string dosen, matkul;
    int  min, max;
    int rata_rata;
    int index = 0;
};
