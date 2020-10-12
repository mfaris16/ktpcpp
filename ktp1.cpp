#include<cstdlib>
#include<iostream>
using namespace std;

	char nik[50];
	char nama[50];
	char ttl[50];
	char jenis_kelamin[50];
	char darah[50];
	char alamat[50];
	char rtrw[50];
	char keldesa[50];
	char kecamatan[50];
	char agama[50];
	char status[50];
	char pekerjaan[50];
	char kewarganegaraan[50];
	char masa[50];

int main()
{

	//menginput dari kb
	cout<<"Masukann NIK :";
	cin.getline(nik,50);
	cout<<"Masukan Nama :";
	cin.getline(nama,50);
	cout<<"Masukan Tempat Tgl Lahir:";
	cin.getline(ttl,50);
	cout<<"Masukann Jenis Kelamin :";
	cin.getline(jenis_kelamin,50);
	cout<<"Masukann Gol. Darah :";
	cin.getline(darah,50);
	cout<<"Masukan Alamat :";
	cin.getline(alamat,50);
	cout<<"Masukan RT/RW:";
	cin.getline(rtrw,50);
	cout<<"Masukann Kelurahan Desa :";
	cin.getline(keldesa,50);
	cout<<"Masukan Kecamatan :";
	cin.getline(kecamatan,50);
	cout<<"Masukan Agama:";
	cin.getline(agama,50);
	cout<<"Masukann Status Perkawinan :";
	cin.getline(status,50);
	cout<<"Masukan Pekerjaan :";
	cin.getline(pekerjaan,50);
	cout<<"Masukan Kewarganegaraan:";
	cin.getline(kewarganegaraan,50);
	cout<<"Masukan Masa Berlaku:";
	cin.getline(masa,50);
  
	//output data
	cout << "+==================================================================================================+" << endl;
	cout << "||                              PROVINSI KEPULUAN RIAU                                            ||" << endl;
	cout << "||                                KABUPATEN BINTAN                                                ||" << endl;
	cout << "|| NIK                    " << nik << "                                                           ||" << endl;
	cout << "|| Nama                   " << nama << "                                                          ||" << endl;
	cout << "|| Tempat/ tgl Lahir      " << ttl << "                                                           ||" << endl;
	cout << "|| Jenis Kelamin          " << jenis_kelamin << "      Gol. Darah :"<< darah <<"                  ||" << endl;
	cout << "|| Alamat                 " << alamat << "                                                        ||" << endl;
	cout << "||       RT/RW            " << rtrw << "                                                          ||" << endl;
	cout << "||       Kel/Desa         " << keldesa << "                                                       ||" << endl;
	cout << "||       Kecamatan        " << kecamatan << "                                                     ||" << endl;
	cout << "|| Agama                  " << agama << "                                                         ||" << endl;
	cout << "|| Status Perkawinan      " << status << "                                                        ||" << endl;
	cout << "|| Pekerjaan              " << pekerjaan << "                                                     ||" << endl;
	cout << "|| Kewarganegaraan        " << kewarganegaraan << "                                               ||" << endl;
	cout << "|| Berlaku Hingga         " << masa << "                                                          ||" << endl;
	cout << "+==================================================================================================+" << endl;
	
	return 0;
	}
